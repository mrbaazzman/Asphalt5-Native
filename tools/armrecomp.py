#!/usr/bin/env python3
"""
Static ARM/Thumb -> C recompiler for libasphalt5.so (ARMv7-A, VFPv2).

The generated code is ordinary C compiled by MinGW into a native x86-64
executable.  Guest registers, flags, VFP state and the 32-bit address space are
modelled by src/core/guest.c; there is no interpreter loop in the final
binary.

Usage:
  python armrecomp.py --so <libasphalt5.so> --out generated [--only crc32]
"""
import argparse, json, os, re, struct, sys, collections
from dataclasses import dataclass, field
from elftools.elf.elffile import ELFFile
from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM, CS_MODE_THUMB, CS_MODE_LITTLE_ENDIAN
from capstone.arm import (ARM_OP_REG, ARM_OP_IMM, ARM_OP_MEM, ARM_OP_FP, ARM_REG_PC,
                          ARM_REG_R0, ARM_REG_R1, ARM_REG_R2, ARM_REG_R3, ARM_REG_R4,
                          ARM_REG_R5, ARM_REG_R6, ARM_REG_R7, ARM_REG_R8, ARM_REG_R9,
                          ARM_REG_R10, ARM_REG_R11, ARM_REG_R12, ARM_REG_SP, ARM_REG_LR,
                          ARM_SFT_ASR, ARM_SFT_LSL, ARM_SFT_LSR, ARM_SFT_ROR, ARM_SFT_RRX)

# Capstone's ARM register identifiers are not architectural register numbers:
# R0..R12 are 66..78, while SP/LR/PC are 12/10/11.  Normalise everything to 0..15.
CAPNUM = {
    ARM_REG_R0: 0, ARM_REG_R1: 1, ARM_REG_R2: 2, ARM_REG_R3: 3,
    ARM_REG_R4: 4, ARM_REG_R5: 5, ARM_REG_R6: 6, ARM_REG_R7: 7,
    ARM_REG_R8: 8, ARM_REG_R9: 9, ARM_REG_R10: 10, ARM_REG_R11: 11,
    ARM_REG_R12: 12, ARM_REG_SP: 13, ARM_REG_LR: 14, ARM_REG_PC: 15,
}

REG = {
    'r0':0,'r1':1,'r2':2,'r3':3,'r4':4,'r5':5,'r6':6,'r7':7,
    'r8':8,'sb':9,'r9':9,'sl':10,'r10':10,'fp':11,'r11':11,'ip':12,'r12':12,
    'sp':13,'lr':14,'pc':15,
}
REGNAME = ['r0','r1','r2','r3','r4','r5','r6','r7','r8','sb','sl','fp','ip','sp','lr','pc']
COND_SUFFIX = ('eq','ne','cs','hs','cc','lo','mi','pl','vs','vc','hi','ls','ge','lt','gt','le','al')

@dataclass
class Symbol:
    name: str
    addr: int
    size: int
    thumb: bool

@dataclass
class Func:
    entry: int
    thumb: bool
    name: str
    end: int
    insns: dict = field(default_factory=dict)
    errors: list = field(default_factory=list)

# Callbacks that are only reachable through registers/stack at runtime and
# therefore never appear as a direct BL target or data pointer.  The Ogg
# decoder sorts its codebooks with qsort() and passes this static comparator;
# without a translation the first decoded .ogg dies in guest_call().
DEFAULT_EXTRA = (
    0x001f78e8,     # stb_vorbis codebook sort comparator
)

class Recompiler:
    def __init__(self, so_path, out_dir, only=None, extra=None, chunk_bytes=500_000):
        self.so_path = so_path
        self.out_dir = out_dir
        self.only = only
        self.extra = list(DEFAULT_EXTRA) + list(extra or [])
        self.chunk_bytes = max(0, int(chunk_bytes or 0))
        self.blob = open(so_path, 'rb').read()
        with open(so_path, 'rb') as f:
            self.elf = ELFFile(f)
            self.sections = []
            for s in self.elf.iter_sections():
                self.sections.append({'name':s.name,'addr':s['sh_addr'],'off':s['sh_offset'],
                                      'size':s['sh_size'],'type':s['sh_type'],'link':s['sh_link'],
                                      'entsize':s['sh_entsize']})
            # Prefer the full symbol table when the library is not stripped;
            # dynsym alone misses static helpers and functions reached only
            # through data/vtable pointers.
            self.syms = []
            by_addr = {}
            for secname in ('.dynsym', '.symtab'):
                sec = self.elf.get_section_by_name(secname)
                if not sec: continue
                for s in sec.iter_symbols():
                    if s['st_info']['type'] != 'STT_FUNC' or s['st_shndx'] == 'SHN_UNDEF':
                        continue
                    a = s['st_value'] & ~1
                    old = by_addr.get(a)
                    if old is None or (not old.name and s.name):
                        sym = Symbol(s.name, s['st_value'], s['st_size'],
                                     bool(s['st_value'] & 1))
                        by_addr[a] = sym
                        self.syms.append(sym)
                    elif s['st_size'] and not old.size:
                        old.size = s['st_size']
        self.text = next(s for s in self.sections if s['name'] == '.text')
        self.plt_sec = next((s for s in self.sections if s['name'] == '.plt'), None)
        # PLT stubs are callable code too; include them in the translated range.
        code_lo = self.plt_sec['addr'] if self.plt_sec else self.text['addr']
        code_off = self.plt_sec['off'] if self.plt_sec else self.text['off']
        self.text_lo = code_lo
        self.text_hi = self.text['addr'] + self.text['size']
        self.tb = self.blob[code_off:self.text['off']+self.text['size']]
        self.syms = [s for s in self.syms if self.text_lo <= (s.addr & ~1) < self.text_hi]
        self.syms.sort(key=lambda s: s.addr & ~1)
        self.by_addr = {}
        for s in self.syms:
            self.by_addr.setdefault(s.addr & ~1, s)
        self.funcs = {}
        self.entries = {}       # addr -> (thumb, name)
        self.global_targets = set()
        self.plt = self._map_plt()
        self.md_arm = Cs(CS_ARCH_ARM, CS_MODE_ARM|CS_MODE_LITTLE_ENDIAN); self.md_arm.detail = True
        self.md_thumb = Cs(CS_ARCH_ARM, CS_MODE_THUMB|CS_MODE_LITTLE_ENDIAN); self.md_thumb.detail = True
        self.stats = collections.Counter()
        self.unsupported = collections.Counter()
        self.exceptions = []
        self.undef = []
        with open(so_path, 'rb') as f:
            el = ELFFile(f)
            dynsym = el.get_section_by_name('.dynsym')
            if dynsym:
                for s in dynsym.iter_symbols():
                    if s['st_shndx'] == 'SHN_UNDEF' and s.name:
                        self.undef.append(s.name)
        self.undef = sorted(set(self.undef))
        self.data_imports = {'__stack_chk_guard', '__sF', '_ctype_', '__dso_handle'}

    @staticmethod
    def cname(name):
        return re.sub(r'[^A-Za-z0-9_]', '_', name)

    def _map_plt(self):
        """Map PLT entry addresses to imported symbol names via .rel.plt + disassembly."""
        relplt = next((s for s in self.sections if s['name'] == '.rel.plt'), None)
        if not relplt: return {}
        rels = []
        off = relplt['off']; n = relplt['size']//8
        for i in range(n):
            r_off, r_info = struct.unpack_from('<II', self.blob, off+i*8)
            rels.append((r_off, r_info>>8))
        dynsym = next(s for s in self.sections if s['name'] == '.dynsym')
        dynstr = next(s for s in self.sections if s['name'] == '.dynstr')
        def symname(i):
            st_name = struct.unpack_from('<I', self.blob, dynsym['off']+i*16)[0]
            end = self.blob.find(b'\0', dynstr['off']+st_name)
            return self.blob[dynstr['off']+st_name:end].decode('latin1')
        plt = next((s for s in self.sections if s['name'] == '.plt'), None)
        out = {}
        if not plt: return out
        # Determine entry stride from the PLT header size: ARM PLT0 is 20 bytes.
        stride = 12 if plt['size'] >= 20 and (plt['size']-20) % len(rels) == 0 else 16
        base = plt['addr'] + 20
        for i, (got, sym) in enumerate(rels):
            out[base + i*stride] = symname(sym)
        return out

    def func_end(self, addr):
        s = self.containing_symbol(addr)
        if s: return (s.addr & ~1) + s.size
        for nxt in self.syms:
            if (nxt.addr & ~1) > addr: return nxt.addr & ~1
        return self.text_hi

    def containing_symbol(self, addr):
        addr &= ~1
        best = None
        for s in self.syms:
            a = s.addr & ~1
            if a <= addr < a + max(s.size, 4): best = s
            if a > addr: break
        return best

    def add_entry(self, addr, thumb=None, name=None):
        a = addr & ~1
        if not (self.text_lo <= a < self.text_hi): return
        if thumb is None:
            thumb = bool(addr & 1)
            if a in self.by_addr: thumb = self.by_addr[a].thumb
        if name is None:
            s = self.by_addr.get(a)
            name = s.name if s else f'sub_{a:08x}'
        if a in self.entries:
            # Symbol entries define their own mode.  For discovered internal
            # targets, keep the mode implied by the newest direct branch.
            if a not in self.by_addr and self.entries[a][0] != thumb:
                self.entries[a] = (thumb, self.entries[a][1])
            return
        self.entries[a] = (thumb, name)

    def disasm_one(self, addr, thumb):
        off = addr - self.text_lo
        if not (0 <= off < len(self.tb)): return None
        md = self.md_thumb if thumb else self.md_arm
        return next(md.disasm(self.tb[off:off+4], addr, count=1), None)

    def is_pc_write(self, ins):
        base = self.base_mnem(ins)
        if base in ('bx','blx','b','bl'): return True
        if base in ('pop','ldm','ldmib','ldmdb','ldmda'):
            return any(o.type == ARM_OP_REG and o.reg == ARM_REG_PC for o in ins.operands)
        if base in ('ldr','ldrb','ldrh','ldrsh','ldrsb','ldrd'):
            return bool(ins.operands) and ins.operands[0].type == ARM_OP_REG and ins.operands[0].reg == ARM_REG_PC
        if base in ('mov','add','sub','rsb'):
            return bool(ins.operands) and ins.operands[0].type == ARM_OP_REG and ins.operands[0].reg == ARM_REG_PC
        return False

    def decode(self, entry, thumb, name):
        end = self.func_end(entry)
        f = Func(entry, thumb, name, end)
        work = [entry]
        seen = set()
        while work:
            a = work.pop()
            if a in seen or a in f.insns: continue
            if not (entry <= a < end) or not (self.text_lo <= a < self.text_hi):
                continue
            ins = self.disasm_one(a, thumb)
            if ins is None:
                f.errors.append((a, 'decode'))
                continue
            seen.add(a)
            f.insns[a] = ins
            self.stats['insns'] += 1
            base = self.base_mnem(ins)
            nxt = a + ins.size
            cond = ins.cc not in (0, 15)
            # direct branch targets
            direct = False
            if base in ('b','bl','blx','cbz','cbnz'):
                imm_ops = [o for o in ins.operands if o.type == ARM_OP_IMM]
                if imm_ops:
                    # b/bl/blx put the target in operand 0; cbz/cbnz in operand 1.
                    tgt = imm_ops[0].imm if base not in ('cbz','cbnz') else imm_ops[-1].imm
                    direct = True
                else:
                    tgt = None
            else:
                tgt = None
            if base == 'bl' and tgt is not None:
                self.add_entry(tgt, thumb)
                work.append(nxt)
                continue
            if base == 'blx' and tgt is not None:
                self.add_entry(tgt, bool(ins.operands[0].imm & 1))
                work.append(nxt)
                continue
            if base in ('b','cbz','cbnz') and tgt is not None:
                if entry <= (tgt & ~1) < end:
                    work.append(tgt & ~1)
                else:
                    self.add_entry(tgt, thumb)
                # cbz/cbnz are conditional but Capstone reports cc=AL.
                if base in ('cbz','cbnz') or cond:
                    work.append(nxt)
                continue
            if base in ('bx',):
                # bxeq/bxne etc. fall through when the condition is false.
                if cond:
                    work.append(nxt)
                continue
            if base == 'blx':
                work.append(nxt)
                continue
            # jump table: add pc, pc, rX, lsl #2
            if base == 'add' and self.is_pc_target(ins):
                ts = self.jump_targets(a)
                for t in ts:
                    if entry <= t < end: work.append(t)
                    else: self.add_entry(t, thumb)
                if cond:
                    work.append(nxt)
                continue
            if self.is_pc_write(ins):
                # Indirect PC writes are frequently LR-linked calls
                # (mov lr,pc; ldr pc,[got]); the next instruction is reachable
                # when the callee returns.  Plain returns via bx lr/pop pc are
                # left non-fallthrough to avoid decoding literal pools.
                if base in ('ldr','ldrb','ldrh','ldrsh','ldrsb'):
                    work.append(nxt)
                elif base in ('mov','add','sub','rsb') and len(ins.operands) >= 2:
                    src = ins.operands[1]
                    if not (src.type == ARM_OP_REG and CAPNUM.get(src.reg, src.reg) == 14):
                        work.append(nxt)
                elif base in ('bx','blx'):
                    if not (ins.operands and ins.operands[0].type == ARM_OP_REG
                            and CAPNUM.get(ins.operands[0].reg, ins.operands[0].reg) == 14):
                        work.append(nxt)
                if cond:
                    work.append(nxt)
                continue
            if nxt < end:
                work.append(nxt)
        self.funcs[entry] = f
        return f

    # Mnemonics that take an optional flag-setting 's' suffix.  Only these may
    # lose a trailing 's' so real names such as 'bls' or 'ldrsb' stay intact.
    S_BASES = {
        'add','sub','rsb','adc','sbc','rsc','and','eor','orr','bic','mvn',
        'mov','lsl','lsr','asr','ror','mul','mla','mls','smlal','umlal',
        'smull','umull',
    }

    def base_mnem(self, ins):
        # Use the rendered mnemonic: Capstone's insn_name() drops the
        # condition suffix, which makes 'svclo' look like 'svc' and would
        # strip its trailing 'vc' as if it were a condition code.
        n = ins.mnemonic
        n = n.split('.')[0]
        # Capstone appends the condition code to conditional instructions,
        # e.g. 'addls', 'strbtvs', 'stmdavs'.  The emitter wraps the body with
        # cond_test() from ins.cc, so strip the suffix to recover the real
        # mnemonic.  Never strip 'al' (unconditional) or turn a real mnemonic
        # like 'teq' into 't'.
        if ins.cc != 15:
            for c in COND_SUFFIX:
                if c == 'al':
                    continue
                if n.endswith(c) and len(n) > len(c):
                    n = n[:-len(c)]
                    break
        if ins.update_flags and n.endswith('s') and n[:-1] in self.S_BASES:
            n = n[:-1]
        return n

    def is_pc_target(self, ins):
        return (len(ins.operands) >= 1 and ins.operands[0].type == ARM_OP_REG
                and ins.operands[0].reg == ARM_REG_PC)

    def jump_targets(self, addr):
        # ARM: table base = addr + 8.  Entries are either absolute code
        # addresses or short ARM B instructions (compiler-generated switch
        # tables use both forms).
        out = []
        base = addr + 8
        off = base - self.text_lo
        for i in range(1024):
            if off + i*4 + 4 > len(self.tb): break
            v = struct.unpack_from('<I', self.tb, off+i*4)[0]
            if self.text_lo <= v < self.text_hi:
                out.append(v & ~1)
                continue
            entry_addr = base + i*4
            ins = next(self.md_arm.disasm(self.tb[off+i*4:off+i*4+4], entry_addr, count=1), None)
            if ins is not None and self.base_mnem(ins) == 'b' and ins.operands \
                    and ins.operands[0].type == ARM_OP_IMM \
                    and self.text_lo <= (ins.operands[0].imm & ~1) < self.text_hi:
                out.append(ins.operands[0].imm & ~1)
                continue
            break
        return out

    def ops(self, ins):
        return ins.operands

    def r(self, n, addr, thumb):
        n = CAPNUM.get(n, n)
        if n == 15:
            # Data-processing reads see PC+4 (Thumb) / PC+8 (ARM).  Literal
            # loads additionally align Thumb PC down to 4 bytes; mem_ea does
            # that explicitly.
            return f'0x{addr + (4 if thumb else 8):08x}u'
        return f'cpu->r[{n}]'

    def op_expr(self, op, addr, thumb):
        if op.type == ARM_OP_REG:
            return self.r(op.reg, addr, thumb)
        if op.type == ARM_OP_IMM:
            return f'0x{op.imm & 0xFFFFFFFF:08x}u'
        return '0'

    def shift_expr(self, op, addr, thumb):
        v = self.op_expr(op, addr, thumb)
        try: st = op.shift.type
        except Exception: st = 0
        if not st: return v
        # Capstone reports register-controlled shifts as ARM_SFT_*_REG (6..10)
        # and stores the shift register's enum in shift.value.  Map back to the
        # base shift kind and read the register; the low 8 bits are the amount.
        REG_SHIFT = {6: 1, 7: 2, 8: 3, 9: 4, 10: 5}  # ASR, LSL, LSR, ROR, RRX
        if st in REG_SHIFT:
            amt = f'({self.r(op.shift.value, addr, thumb)} & 0xffu)'
            return f'shifter({v}, {REG_SHIFT[st]}, {amt}, &shc)'
        amt = op.shift.value
        if st == ARM_SFT_RRX:
            return f'shifter({v}, 5, 0, &shc)'
        return f'shifter({v}, {st}, {amt}u, &shc)'

    def mem_ea(self, ins, addr, thumb):
        """Return (ea_expr, writeback_assignment_or_None)."""
        mi = next(i for i, o in enumerate(ins.operands) if o.type == ARM_OP_MEM)
        memop = ins.operands[mi]
        m = memop.mem
        if CAPNUM.get(m.base, m.base) == 15:
            base = f'0x{((addr + 4) & ~3) if thumb else (addr + 8):08x}u'
        else:
            base = self.r(m.base, addr, thumb)
        idx = m.index
        disp = m.disp
        # Post-indexed addressing shows up either as ins.post_index or (with
        # several Capstone versions) as an extra operand after the memory
        # operand, e.g. `strh r2, [sl], #2` -> [r2, mem(sl), imm 2].  Detect both
        # so the base register is actually advanced; without this the writeback
        # degenerates to `rN = rN` and repeated stores overwrite one slot.
        po = None
        if ins.post_index and mi + 1 < len(ins.operands):
            po = ins.operands[mi + 1]
        elif (ins.writeback and not idx and disp == 0 and mi + 1 < len(ins.operands)
              and CAPNUM.get(m.base, m.base) != 15):
            cand = ins.operands[mi + 1]
            if cand.type in (ARM_OP_IMM, ARM_OP_REG):
                po = cand
        if po is not None:
            ea = base
            off = self.shift_expr(po, addr, thumb)
            try:
                if po.subtracted: off = f'(-{off})'
            except Exception: pass
            return ea, f'{base} = {base} + {off}'
        index_expr = ''
        if idx:
            index_expr = self.r(idx, addr, thumb)
            try:
                sh = memop.shift
                if sh.type:
                    # LSL #0 is a no-op; other shift kinds are rare in addressing
                    if sh.type == ARM_SFT_LSL and sh.value == 0:
                        pass
                    else:
                        index_expr = f'shifter({index_expr}, {sh.type}, {sh.value}u, &shc)'
                elif m.lshift:
                    index_expr = f'({index_expr} << {m.lshift}u)'
                elif m.scale and m.scale != 1:
                    index_expr = f'({index_expr} * {m.scale})'
            except Exception:
                pass
        parts = [base]
        if index_expr: parts.append(index_expr)
        if disp: parts.append(f'{"-" if disp < 0 else "+"} 0x{abs(disp):x}u')
        ea = ' + '.join(parts)
        # A PC-based address has no writeback destination.
        wb = f'{base} = {ea}' if (ins.writeback and CAPNUM.get(m.base, m.base) != 15) else None
        return ea, wb

    def wr0(self, ops, expr, addr, thumb):
        rd = ops[0].reg
        if CAPNUM.get(rd, rd) == 15:
            return f'uint32_t t = {expr}; if (guest_pc_write(cpu, t, entry_lr, 0x{addr+4:08x}u)) return;'
        return f'{self.r(rd, addr, thumb)} = {expr};'

    def cond_wrap(self, ins, body):
        cc = ins.cc
        if cc in (0, 15):
            return body
        return f'if (cond_test(cpu, {cc})) {{\n{body}\n}}'

    def load_expr(self, base, ea, signed=False):
        return {
            'ldr': f'rd32({ea})', 'ldrb': f'rd8({ea})', 'ldrh': f'rd16({ea})',
            'ldrsb': f'(uint32_t)(int32_t)s8({ea})', 'ldrsh': f'(uint32_t)(int32_t)s16({ea})',
            'ldrbt': f'rd8({ea})', 'ldrht': f'rd16({ea})',
        }.get(base, f'rd32({ea})')

    def emit_ldst(self, ins, base, addr, thumb):
        lines = []
        dest_pc = (base.startswith('ldr') and ins.operands[0].type == ARM_OP_REG
                   and ins.operands[0].reg == ARM_REG_PC)
        if base in ('ldrd','strd'):
            d0 = ins.operands[0].reg; d1 = ins.operands[1].reg
            if CAPNUM.get(d0, d0) == 15 or CAPNUM.get(d1, d1) == 15:
                return None  # UNPREDICTABLE encoding (normally literal-pool data)
            ea, wb = self.mem_ea(ins, addr, thumb)
            wb_lhs = wb_rhs = None
            if wb:
                wb_lhs, wb_rhs = wb.split(' = ', 1)
                lines.append(f'uint32_t wb_tmp = {wb_rhs};')
            if base == 'ldrd':
                lines.append(f'uint64_t v = rd64({ea});')
                lines.append(f'{self.r(d0,addr,thumb)} = (uint32_t)v;')
                lines.append(f'{self.r(d1,addr,thumb)} = (uint32_t)(v >> 32);')
            else:
                lines.append(f'wr64({ea}, ((uint64_t){self.r(d1,addr,thumb)} << 32) | {self.r(d0,addr,thumb)});')
            if wb: lines.append(f'{wb_lhs} = wb_tmp;')
        else:
            ea, wb = self.mem_ea(ins, addr, thumb)
            # Writeback uses the pre-instruction register values.  A load may
            # overwrite the base or index register, so snapshot the writeback
            # address before emitting the load (otherwise e.g.
            # `ldr r3, [r2, r3]!` adds the loaded value to r2).
            if wb:
                wb_lhs, wb_rhs = wb.split(' = ', 1)
                lines.append(f'uint32_t wb_tmp = {wb_rhs};')
            if base.startswith('str'):
                src = self.r(ins.operands[0].reg, addr, thumb)
                store = {'str':'wr32','strb':'wr8','strbt':'wr8',
                         'strh':'wr16'}.get(base,'wr32')
                lines.append(f'{store}({ea}, {src});')
            else:
                val = self.load_expr(base, ea)
                if dest_pc:
                    lines.append(f'uint32_t t = {val};')
                else:
                    lines.append(f'{self.r(ins.operands[0].reg, addr, thumb)} = {val};')
            if wb: lines.append(f'{wb_lhs} = wb_tmp;')
        if dest_pc:
            lines.append(f'if (guest_pc_write(cpu, t, entry_lr, 0x{addr+ins.size:08x}u)) return;')
        return '\n'.join(lines)

    def emit_ldm(self, ins, base, addr, thumb):
        regs = [o.reg for o in ins.operands[1:]]
        b = ins.operands[0].reg
        rbase = self.r(b, addr, thumb)
        n = len(regs)
        lines = [f'uint32_t base = {rbase};', f'uint32_t ea = base + {0 if base in ("ldm","stm","ldmib","stmib") else 0}u;']
        if base in ('ldm','ldmib','ldmda','ldmdb'):
            if base == 'ldm': ea = 'base'
            elif base == 'ldmib': ea = 'base + 4'
            elif base == 'ldmda': ea = f'base - {4*(n-1)}'
            else: ea = f'base - {4*n}'
            lines = [f'uint32_t base = {rbase};', f'uint32_t ea = {ea};']
            for i, rg in enumerate(regs):
                lines.append(f'uint32_t v{i} = rd32(ea + {4*i}u);')
            for i, rg in enumerate(regs):
                if rg == ARM_REG_PC:
                    lines.append(f'uint32_t t = v{i};')
                else:
                    lines.append(f'{self.r(rg,addr,thumb)} = v{i};')
            if ins.writeback or (ins.operands[0].access & 2):
                if base == 'ldmib': lines.append(f'{rbase} = base + {4*n}u;')
                elif base == 'ldm': lines.append(f'{rbase} = base + {4*n}u;')
                elif base == 'ldmda': lines.append(f'{rbase} = base - {4*n}u;')
                else: lines.append(f'{rbase} = base - {4*n}u;')
            if ARM_REG_PC in regs:
                lines.append(f'if (guest_pc_write(cpu, t, entry_lr, 0x{addr+ins.size:08x}u)) return;')
        else:
            # store
            if base == 'stm': ea = 'base'
            elif base == 'stmib': ea = 'base + 4'
            elif base == 'stmda': ea = f'base - {4*(n-1)}'
            else: ea = f'base - {4*n}'
            lines = [f'uint32_t base = {rbase};', f'uint32_t ea = {ea};']
            for i, rg in enumerate(regs):
                lines.append(f'wr32(ea + {4*i}u, {self.r(rg,addr,thumb)});')
            if ins.writeback or (ins.operands[0].access & 2):
                if base == 'stmib': lines.append(f'{rbase} = base + {4*n}u;')
                elif base == 'stm': lines.append(f'{rbase} = base + {4*n}u;')
                else: lines.append(f'{rbase} = base - {4*n}u;')
        return '\n'.join(lines)

    def emit_pushpop(self, ins, base, addr, thumb):
        regs = [o.reg for o in ins.operands]
        n = len(regs)
        lines = []
        if base == 'push':
            lines.append(f'cpu->r[13] -= {4*n}u;')
            for i, rg in enumerate(regs):
                lines.append(f'wr32(cpu->r[13] + {4*i}u, {self.r(rg,addr,thumb)});')
        else:
            for i, rg in enumerate(regs):
                lines.append(f'uint32_t v{i} = rd32(cpu->r[13] + {4*i}u);')
            for i, rg in enumerate(regs):
                if rg == ARM_REG_PC:
                    lines.append(f'uint32_t t = v{i};')
                else:
                    lines.append(f'{self.r(rg,addr,thumb)} = v{i};')
            lines.append(f'cpu->r[13] += {4*n}u;')
            if ARM_REG_PC in regs:
                lines.append(f'if (guest_pc_write(cpu, t, entry_lr, 0x{addr+ins.size:08x}u)) return;')
        return '\n'.join(lines)

    def emit_vfp_ldst(self, ins, base, addr, thumb):
        # vldr/vstr sN/dN, [base, #imm]
        if len(ins.operands) < 2 or ins.operands[1].type != ARM_OP_MEM:
            return None
        reg = ins.operands[0].reg
        rn = ins.reg_name(reg)
        ea, wb = self.mem_ea(ins, addr, thumb)
        pre = post = ''
        if wb:
            wb_lhs, wb_rhs = wb.split(' = ', 1)
            pre = f'uint32_t wb_tmp = {wb_rhs};\n'
            post = f'\n{wb_lhs} = wb_tmp;'
        if rn.startswith('s'):
            idx = int(rn[1:])
            if base == 'vldr': body = f'*vfp_s(cpu, {idx}) = *(float*)G({ea});'
            else: body = f'*(uint32_t*)G({ea}) = *(uint32_t*)vfp_s(cpu, {idx});'
        else:
            idx = int(rn[1:])
            if base == 'vldr': body = f'*vfp_d(cpu, {idx}) = *(double*)G({ea});'
            else: body = f'*(uint64_t*)G({ea}) = *(uint64_t*)vfp_d(cpu, {idx});'
        return pre + body + post

    def emit_vfp_multi(self, ins, base, addr, thumb):
        # vldmia/vstmia/vpush/vpop with s/d register list
        if base in ('vpush','vpop'):
            regs = [ins.reg_name(o.reg) for o in ins.operands]
            total = sum(8 if r.startswith('d') else 4 for r in regs)
            lines = []
            if base == 'vpush':
                lines.append(f'cpu->r[13] -= {total}u;')
                off = 0
                for r in regs:
                    if r.startswith('d'):
                        lines.append(f'wr64(cpu->r[13] + {off}u, *(uint64_t*)vfp_d(cpu, {int(r[1:])}));'); off += 8
                    else:
                        lines.append(f'wr32(cpu->r[13] + {off}u, *(uint32_t*)vfp_s(cpu, {int(r[1:])}));'); off += 4
            else:
                off = 0
                for r in regs:
                    if r.startswith('d'):
                        lines.append(f'*(uint64_t*)vfp_d(cpu, {int(r[1:])}) = rd64(cpu->r[13] + {off}u);'); off += 8
                    else:
                        lines.append(f'*(uint32_t*)vfp_s(cpu, {int(r[1:])}) = rd32(cpu->r[13] + {off}u);'); off += 4
                lines.append(f'cpu->r[13] += {total}u;')
            return '\n'.join(lines)
        if len(ins.operands) < 2: return None
        b = ins.operands[0].reg
        regs = [ins.reg_name(o.reg) for o in ins.operands[1:]]
        rbase = self.r(b, addr, thumb)
        total = sum(8 if r.startswith('d') else 4 for r in regs)
        db = base in ('vldmdb', 'vstmdb')
        lines = [f'uint32_t base = {rbase};']
        if db:
            lines.append(f'uint32_t ea = base - {total}u;')
        else:
            lines.append('uint32_t ea = base;')
        off = 0
        if base in ('vldmia', 'vldmdb'):
            for r in regs:
                if r.startswith('d'):
                    lines.append(f'*(uint64_t*)vfp_d(cpu, {int(r[1:])}) = rd64(ea + {off}u);'); off += 8
                else:
                    lines.append(f'*(uint32_t*)vfp_s(cpu, {int(r[1:])}) = rd32(ea + {off}u);'); off += 4
        else:
            for r in regs:
                if r.startswith('d'):
                    lines.append(f'wr64(ea + {off}u, *(uint64_t*)vfp_d(cpu, {int(r[1:])}));'); off += 8
                else:
                    lines.append(f'wr32(ea + {off}u, *(uint32_t*)vfp_s(cpu, {int(r[1:])}));'); off += 4
        if ins.writeback:
            lines.append(f'{rbase} = ea + {off}u;' if not db else f'{rbase} = ea;')
        return '\n'.join(lines)

    def emit_vfp_multi_x(self, ins, base, addr, thumb):
        """FLDMIAX/FSTMDBX with the extended 4-byte stack adjustment.

        These encodings (used by the 3.3.7 RVCT build) transfer the listed
        double registers but adjust the base register by 8*n+4 bytes, leaving
        a 4-byte pad above the saved block.  Treating them as VLDMIA/VSTMDB
        leaves the guest stack four bytes out of phase and corrupts every
        caller that passes stack arguments afterwards.
        """
        if len(ins.operands) < 2: return None
        b = ins.operands[0].reg
        regs = [ins.reg_name(o.reg) for o in ins.operands[1:]]
        total = sum(8 if r.startswith('d') else 4 for r in regs)
        rbase = self.r(b, addr, thumb)
        lines = [f'uint32_t base = {rbase};']
        if base == 'fstmdbx':
            lines.append(f'uint32_t ea = base - {total + 4}u;')
            off = 0
            for r in regs:
                if r.startswith('d'):
                    lines.append(f'wr64(ea + {off}u, *(uint64_t*)vfp_d(cpu, {int(r[1:])}));')
                    off += 8
                else:
                    lines.append(f'wr32(ea + {off}u, *(uint32_t*)vfp_s(cpu, {int(r[1:])}));')
                    off += 4
            if ins.writeback:
                lines.append(f'{rbase} = ea;')
        else:
            lines.append('uint32_t ea = base;')
            off = 0
            for r in regs:
                if r.startswith('d'):
                    lines.append(f'*(uint64_t*)vfp_d(cpu, {int(r[1:])}) = rd64(ea + {off}u);')
                    off += 8
                else:
                    lines.append(f'*(uint32_t*)vfp_s(cpu, {int(r[1:])}) = rd32(ea + {off}u);')
                    off += 4
            if ins.writeback:
                lines.append(f'{rbase} = ea + {total + 4}u;')
        return '\n'.join(lines)

    def emit_vfp_alu(self, ins, base, addr, thumb):
        names = [ins.reg_name(o.reg) for o in ins.operands if o.type == ARM_OP_REG]
        def idx(n):
            return int(n[1:]), n[0]
        if base in ('vadd','vsub','vmul','vdiv','vmla','vmls','vnmla','vnmls','vnmul'):
            if len(names) < 3: return None
            dt, dn, dm = names[0], names[1], names[2]
            typ = 'f64' if dt.startswith('d') else 'f32'
            di, _ = idx(dt); ni, _ = idx(dn); mi, _ = idx(dm)
            if typ == 'f32' and dn.startswith('s') and dm.startswith('s'):
                # Single-precision ops may be in VFP vector mode (FPSCR.LEN).
                return f'vfp_v{base[1:]}(cpu, {di}, {ni}, {mi});'
            if typ == 'f32':
                a = f'*vfp_s(cpu, {ni})'; b = f'*vfp_s(cpu, {mi})'; d = f'*vfp_s(cpu, {di})'
            else:
                a = f'*vfp_d(cpu, {ni})'; b = f'*vfp_d(cpu, {mi})'; d = f'*vfp_d(cpu, {di})'
            op = {'vadd':'+','vsub':'-','vmul':'*','vdiv':'/'}.get(base)
            if op:
                return f'{d} = {a} {op} {b};'
            if base == 'vmla': return f'{d} = {d} + {a} * {b};'
            if base == 'vmls': return f'{d} = {d} - {a} * {b};'
            if base == 'vnmla': return f'{d} = -({d} + {a} * {b});'
            if base == 'vnmls': return f'{d} = -({d} - {a} * {b});'
            if base == 'vnmul': return f'{d} = -({a} * {b});'
        return None

    def emit_op(self, ins, base, addr, thumb):
        ops = ins.operands
        S = 1 if ins.update_flags else 0
        def rn(i): return self.r(ops[i].reg, addr, thumb)
        def ex(i): return self.shift_expr(ops[i], addr, thumb)
        def imm(i): return f'0x{ops[i].imm & 0xFFFFFFFF:08x}u'
        def val(i):
            return ex(i) if ops[i].type == ARM_OP_REG else imm(i)
        # control flow
        if base in ('b','bl','bx','blx','cbz','cbnz'):
            return self.emit_branch(ins, base, addr, thumb)
        if base in ('nop','hint'): return ''
        if base in ('push','pop'): return self.emit_pushpop(ins, base, addr, thumb)
        if base in ('ldm','stm','ldmib','stmib','ldmdb','stmdb','ldmda','stmda'):
            return self.emit_ldm(ins, base, addr, thumb)
        if base in ('ldr','str','ldrb','strb','strbt','ldrh','strh','ldrsb','ldrsh',
                    'ldrd','strd','ldrbt','ldrht'):
            return self.emit_ldst(ins, base, addr, thumb)
        if base in ('mov','mvn'):
            v = val(1)
            if CAPNUM.get(ops[0].reg, ops[0].reg) == 15:
                return f'uint32_t t = {v}; if (guest_pc_write(cpu, t, entry_lr, 0x{addr+ins.size:08x}u)) return;'
            out = f'{rn(0)} = {v if base=="mov" else f"(~{v})"};'
            if S:
                out += f'\nset_nz(cpu, {rn(0)});'
                if ops[1].type == ARM_OP_REG and ops[1].shift.type:
                    out += '\nif (shc) cpu->cpsr = (cpu->cpsr & ~0x20000000u) | 0x20000000u;'
            return out
        if base in ('add','sub','rsb','adc','sbc','rsc'):
            if len(ops) == 2:
                # Thumb two-operand form: Rd = Rd op Rm/#imm
                a = val(0)
                b = val(1)
            else:
                a = val(1) if len(ops) > 1 else '0'
                b = val(2) if len(ops) > 2 else '0'
            if CAPNUM.get(ops[0].reg, ops[0].reg) == 15 and base == 'add':
                # jump table (add pc, pc, rX, lsl #2)
                return self.emit_jump_table(ins, addr, thumb)
            if base == 'add': expr = f'add_flags(cpu, {a}, {b}, 0, {S})'
            elif base == 'sub': expr = f'sub_flags(cpu, {a}, {b}, 1, {S})'
            elif base == 'rsb': expr = f'sub_flags(cpu, {b}, {a}, 1, {S})'
            elif base == 'adc': expr = f'add_flags(cpu, {a}, {b}, (cpu->cpsr >> 29) & 1, {S})'
            elif base == 'sbc': expr = f'sub_flags(cpu, {a}, {b}, (cpu->cpsr >> 29) & 1, {S})'
            else: expr = f'sub_flags(cpu, {b}, {a}, (cpu->cpsr >> 29) & 1, {S})'
            return self.wr0(ops, expr, addr, thumb)
        if base in ('lsl','lsr','asr','ror','rrx'):
            # Capstone aliases standalone shifts to two-operand form and puts the
            # shift metadata on operand 1 (e.g. "lsr r0, r2, #24" -> ops r0, r2
            # with shift=(LSR,24)).  Some encodings expose a third operand.
            st = {'lsl':2,'lsr':3,'asr':1,'ror':4,'rrx':5}[base]
            src = self.r(ops[1].reg, addr, thumb) if ops[1].type == ARM_OP_REG else imm(1)
            amt_expr = '0'
            reg_amount = False
            REG_SHIFT = {6: 1, 7: 2, 8: 3, 9: 4, 10: 5}  # ASR, LSL, LSR, ROR, RRX
            if base != 'rrx':
                try: sh = ops[1].shift
                except Exception: sh = None
                if sh is not None and sh.type:
                    if sh.type in REG_SHIFT:
                        st = REG_SHIFT[sh.type]
                        amt_expr = f'({self.r(sh.value, addr, thumb)} & 0xffu)'
                    else:
                        st = sh.type
                        if sh.value:
                            amt_expr = f'{sh.value}u'
                        elif len(ops) > 2:
                            amt_expr = val(2)
                            reg_amount = ops[2].type == ARM_OP_REG
                        else:
                            amt_expr = '0'
                elif len(ops) > 2:
                    amt_expr = val(2)
                    reg_amount = ops[2].type == ARM_OP_REG
                if reg_amount:
                    amt_expr = f'({amt_expr} & 0xffu)'
            out = f'uint32_t v = shifter({src}, {st}, {amt_expr}, &shc); ' + self.wr0(ops, 'v', addr, thumb)
            if S:
                out += '\nset_nz(cpu, v);'
            return out
        if base in ('cmp','cmn','tst','teq'):
            a = val(0); b = val(1) if len(ops) > 1 else '0'
            if base == 'cmp': return f'sub_flags(cpu, {a}, {b}, 1, 1);'
            if base == 'cmn': return f'add_flags(cpu, {a}, {b}, 0, 1);'
            if base == 'tst': return f'\n{{ uint32_t v = {a} & {b}; set_nz(cpu, v); }}'
            return f'\n{{ uint32_t v = {a} ^ {b}; set_nz(cpu, v); }}'
        if base in ('and','eor','orr','bic'):
            if len(ops) == 2:
                a = val(0); b = val(1)
            else:
                a = val(1); b = val(2)
            op = {'and':'&','eor':'^','orr':'|','bic':'& ~'}[base]
            out = f'uint32_t v = {a} {op} {b}; ' + self.wr0(ops, 'v', addr, thumb)
            if S: out += '\nset_nz(cpu, v);'
            return out
        if base in ('mul','muls'):
            if len(ops) == 2:
                a = val(0); b = val(1)
            else:
                a = val(1); b = val(2)
            out = f'uint32_t v = {a} * {b}; ' + self.wr0(ops, 'v', addr, thumb)
            if S or base == 'muls': out += '\nset_nz(cpu, v);'
            return out
        if base in ('mla','mlas'):
            a=val(1); b=val(2); c=val(3)
            out=f'uint32_t v = {a} * {b} + {c}; ' + self.wr0(ops, 'v', addr, thumb)
            if S or base == 'mlas': out += '\nset_nz(cpu, v);'
            return out
        if base in ('mls',):
            a=val(1); b=val(2); c=val(3)
            return f'uint32_t v = {c} - {a} * {b}; ' + self.wr0(ops, 'v', addr, thumb)
        if base in ('smull','umull'):
            lo, hi = ops[0].reg, ops[1].reg
            a, b = val(2), val(3)
            fn = 'int64_t' if base == 'smull' else 'uint64_t'
            return (f'{{ {fn} v = ({fn})(int32_t){a} * ({fn})(int32_t){b};' if base=='smull' else
                    f'{{ {fn} v = ({fn}){a} * ({fn}){b};') + \
                   f' {self.r(lo,addr,thumb)} = (uint32_t)v; {self.r(hi,addr,thumb)} = (uint32_t)(v >> 32);' + \
                   (f' set_nz64(cpu, v);' if S else '') + ' }'
        if base == 'movw':
            return self.wr0(ops, imm(1), addr, thumb)
        if base == 'movt':
            return self.wr0(ops, f'({rn(0)} & 0xffffu) | (0x{ops[1].imm & 0xffff:04x}u << 16)', addr, thumb)
        if base == 'ubfx':
            lsb = ops[2].imm; width = ops[3].imm
            mask = (1 << width) - 1 if width < 32 else 0xffffffff
            return self.wr0(ops, f'({val(1)} >> {lsb}) & 0x{mask:x}u', addr, thumb)
        if base == 'sbfx':
            lsb = ops[2].imm; width = ops[3].imm
            return f'{{ int32_t v = (int32_t)({val(1)} << {32-lsb-width}); ' + self.wr0(ops, f'(uint32_t)(v >> {32-width})', addr, thumb) + ' }'
        if base == 'bfi':
            lsb=ops[2].imm; width=ops[3].imm
            mask=((1<<width)-1)<<lsb
            return self.wr0(ops, f'({rn(0)} & ~0x{mask:x}u) | (({val(1)} & 0x{(1<<width)-1:x}u) << {lsb})', addr, thumb)
        if base == 'bfc':
            lsb=ops[1].imm; width=ops[2].imm
            mask=((1<<width)-1)<<lsb
            return self.wr0(ops, f'{rn(0)} & ~0x{mask:x}u', addr, thumb)
        if base in ('uxtb','uxth','sxtb','sxth'):
            cast = {'uxtb':'(uint8_t)','uxth':'(uint16_t)','sxtb':'(int8_t)','sxth':'(int16_t)'}[base]
            return self.wr0(ops, f'(uint32_t)({cast}{val(1)})', addr, thumb)
        if base in ('uxtah','sxtah'):
            cast = '(uint16_t)' if base=='uxtah' else '(int16_t)'
            rn_expr = self.r(ops[1].reg, addr, thumb)
            return self.wr0(ops, f'{rn_expr} + (uint32_t)({cast}{val(2)})', addr, thumb)
        # VFP
        if base in ('vldr','vstr'): return self.emit_vfp_ldst(ins, base, addr, thumb)
        if base in ('vldmia','vstmia','vldmdb','vstmdb','vpush','vpop'):
            return self.emit_vfp_multi(ins, base, addr, thumb)
        if base in ('fldmiax','fstmdbx'):
            return self.emit_vfp_multi_x(ins, base, addr, thumb)
        if base in ('vadd','vsub','vmul','vdiv','vmla','vmls','vnmla','vnmls','vnmul'):
            return self.emit_vfp_alu(ins, base, addr, thumb)
        if base in ('vmov','fmstat'):
            if base == 'fmstat':
                return 'vfp_sync_flags(cpu);'
            names=[ins.reg_name(o.reg) for o in ops if o.type==ARM_OP_REG]
            def is_core(n): return n in REG
            def is_s(n): return n.startswith('s') and n[1:].isdigit()
            def is_d(n): return n.startswith('d') and n[1:].isdigit()
            if len(names)==2:
                a,b=names
                if is_s(a) and is_core(b):
                    return f'*(uint32_t*)vfp_s(cpu,{int(a[1:])}) = cpu->r[{REG[b]}];'
                if is_core(a) and is_s(b):
                    return f'cpu->r[{REG[a]}] = *(uint32_t*)vfp_s(cpu,{int(b[1:])});'
                if is_s(a) and is_s(b):
                    return f'*vfp_s(cpu,{int(a[1:])}) = *vfp_s(cpu,{int(b[1:])});'
                if is_d(a) and is_d(b):
                    return f'*vfp_d(cpu,{int(a[1:])}) = *vfp_d(cpu,{int(b[1:])});'
                # VMOV immediate forms
                if (is_s(a) or is_d(a)) and ops[1].type == ARM_OP_FP:
                    v = ops[1].fp
                    if is_s(a): return f'*vfp_s(cpu,{int(a[1:])}) = {v!r}f;'
                    return f'*vfp_d(cpu,{int(a[1:])}) = {v!r};'
            if len(names)==3:
                # vmov rLo,rHi,d or vmov d,rLo,rHi
                a,b,c=names
                if is_core(a) and is_core(b) and is_d(c):
                    return f'uint64_t v = *(uint64_t*)vfp_d(cpu,{int(c[1:])}); cpu->r[{REG[a]}]= (uint32_t)v; cpu->r[{REG[b]}]=(uint32_t)(v>>32);'
                if is_d(a) and is_core(b) and is_core(c):
                    return f'*(uint64_t*)vfp_d(cpu,{int(a[1:])}) = ((uint64_t)cpu->r[{REG[c]}]<<32)|cpu->r[{REG[b]}];'
            return None
        if base in ('smulbb','smulbt','smultb','smultt','smlabb','smlabt','smlatb','smlatt'):
            # halfword multiply variants used by the MPC/Vorbis decoders
            a = val(1); b = val(2)
            lo_a = 'a' if base[4] in 'bB' else 'b'
            lo_b = 'b' if base[5] in 'bB' else 'b'
            # operand suffix: smul<xy> where x selects low/high of Rn, y of Rm
            x = base[4]; y = base[5]
            ea = f'(int16_t)({a} & 0xffff)' if x in 'bB' else f'(int16_t)({a} >> 16)'
            eb = f'(int16_t)({b} & 0xffff)' if y in 'bB' else f'(int16_t)({b} >> 16)'
            if base.startswith('smla') and len(ops) >= 4:
                return self.wr0(ops, f'(uint32_t)((int32_t){ea} * (int32_t){eb} + (int32_t){val(3)})', addr, thumb)
            return self.wr0(ops, f'(uint32_t)((int32_t){ea} * (int32_t){eb})', addr, thumb)
        if base in ('uxtab','sxtab'):
            cast = {'uxtab':'(uint8_t)','sxtab':'(int8_t)'}[base]
            rn_expr = self.r(ops[1].reg, addr, thumb)
            return self.wr0(ops, f'{rn_expr} + (uint32_t)({cast}{val(2)})', addr, thumb)
        if base == 'usat':
            # USAT{cond} Rd, #sat, Rn {, shift}: signed input saturated to
            # the unsigned range [0, 2^sat-1].  Q is set on saturation.
            sat = ops[1].imm
            src = val(2)
            expr = (f'{{ int64_t v = (int64_t)(int32_t)({src}); '
                    f'int64_t hi = (int64_t)((1ull << {sat}) - 1ull); '
                    f'if (v < 0) {{ v = 0; cpu->cpsr |= 0x08000000u; }} '
                    f'else if (v > hi) {{ v = hi; cpu->cpsr |= 0x08000000u; }} '
                    + self.wr0(ops, '(uint32_t)v', addr, thumb) + ' }')
            return expr
        if base == 'svc':
            return '/* svc */'
        if base == 'it':
            return ''
        if base in ('vstmdb','vldmdb'):
            return self.emit_vfp_multi(ins, 'vstmia' if base=='vstmdb' else 'vldmia', addr, thumb)
        if base in ('vabs','vneg','vsqrt'):
            names=[ins.reg_name(o.reg) for o in ops if o.type==ARM_OP_REG]
            if len(names)>=2:
                dt,dn=names[0],names[1]
                if dt.startswith('s') and dn.startswith('s'):
                    return f'vfp_v{base[1:]}(cpu, {int(dt[1:])}, {int(dn[1:])});'
                if dt.startswith('s'):
                    d=f'*vfp_s(cpu,{int(dt[1:])})'; n=f'*vfp_s(cpu,{int(dn[1:])})'
                else:
                    d=f'*vfp_d(cpu,{int(dt[1:])})'; n=f'*vfp_d(cpu,{int(dn[1:])})'
                if base=='vsqrt': return f'{d} = sqrt({n});'
                if base=='vabs': return f'{d} = fabs({n});'
                return f'{d} = -{n};'
        if base in ('vcmp','vcmpe'):
            names=[ins.reg_name(o.reg) for o in ops if o.type==ARM_OP_REG]
            if len(names)>=2:
                a,b=names[0],names[1]
                if a.startswith('s'):
                    return f'vfp_set_cmp32(cpu, *vfp_s(cpu,{int(a[1:])}), *vfp_s(cpu,{int(b[1:])}));'
                return f'vfp_set_cmp(cpu, *vfp_d(cpu,{int(a[1:])}), *vfp_d(cpu,{int(b[1:])}));'
            if names and len(ops) >= 2 and ops[1].type == ARM_OP_IMM:
                a=names[0]
                if a.startswith('s'):
                    return f'vfp_set_cmp32(cpu, *vfp_s(cpu,{int(a[1:])}), 0.0f);'
                return f'vfp_set_cmp(cpu, *vfp_d(cpu,{int(a[1:])}), 0.0);'
        if base == 'vmrs':
            dst = ins.reg_name(ops[0].reg) if ops else 'apsr_nzcv'
            if dst in ('apsr_nzcv','r15'):
                return 'vfp_sync_flags(cpu);'
            return f'cpu->r[{REG[dst]}] = cpu->fpscr;'
        if base == 'vmsr':
            # vmsr fpscr, rX
            src = ins.reg_name(ops[1].reg) if len(ops) > 1 else (ins.reg_name(ops[0].reg) if ops else 'r0')
            if src in REG:
                return f'cpu->fpscr = cpu->r[{REG[src]}];'
            return None
        if base in ('vcvt','vcvtr'):
            names=[ins.reg_name(o.reg) for o in ops if o.type==ARM_OP_REG]
            suf='.'.join(ins.mnemonic.split('.')[1:]) if '.' in ins.mnemonic else ''
            parts=suf.split('.')
            if len(parts) < 2 or len(names) < 2:
                return None
            dst_t, src_t = parts[0], parts[1]
            dt, dn = names[0], names[1]
            if not (dt.startswith(('s','d')) and dn.startswith(('s','d'))):
                return None
            d = (f'*vfp_s(cpu,{int(dt[1:])})' if dt.startswith('s')
                 else f'*vfp_d(cpu,{int(dt[1:])})')
            s = (f'*vfp_s(cpu,{int(dn[1:])})' if dn.startswith('s')
                 else f'*vfp_d(cpu,{int(dn[1:])})')
            d_ptr = (f'vfp_s(cpu,{int(dt[1:])})' if dt.startswith('s')
                     else f'vfp_d(cpu,{int(dt[1:])})')
            s_ptr = (f'vfp_s(cpu,{int(dn[1:])})' if dn.startswith('s')
                     else f'vfp_d(cpu,{int(dn[1:])})')
            ft = "float" if dst_t == "f32" else "double"
            # Integer destinations keep raw integer bits in the VFP register;
            # the source is a floating-point value.
            if dst_t in ('s32','u32'):
                cast = 'int32_t' if dst_t == 's32' else 'uint32_t'
                return f'*({cast}*){d_ptr} = ({cast}){s};'
            # Floating-point destinations.  Integer sources are raw bits in
            # the register, not numeric float values, so reinterpret them.
            if dst_t in ('f32','f64'):
                if src_t == 's32':
                    return f'{d} = ({ft})*(int32_t*){s_ptr};'
                if src_t == 'u32':
                    return f'{d} = ({ft})*(uint32_t*){s_ptr};'
                return f'{d} = ({ft}){s};'
            return None

    def emit_branch(self, ins, base, addr, thumb):
        ops=ins.operands
        if base in ('b','bl','blx') and ops and ops[0].type == ARM_OP_IMM:
            tgt = (ops[0].imm & 0xFFFFFFFF) & ~1
            if base == 'bl':
                ret = addr + ins.size
                if tgt in self.plt:
                    return f'cpu->r[14] = 0x{ret:08x}u; imp_{self.cname(self.plt[tgt])}(cpu); /* {self.plt[tgt]} */'
                self.add_entry(tgt, thumb)
                if (tgt & ~1) in self.entries:
                    return f'cpu->r[14] = 0x{ret:08x}u; fn_{tgt:08x}(cpu);'
                return f'cpu->r[14] = 0x{ret:08x}u; guest_call(cpu, 0x{tgt:08x}u);'
            if base == 'blx':
                ret = addr + ins.size
                return f'cpu->r[14] = 0x{ret:08x}u; guest_call(cpu, 0x{tgt:08x}u);'
            # b
            if tgt in self.plt:
                return f'imp_{self.cname(self.plt[tgt])}(cpu); /* tail {self.plt[tgt]} */ return;'
            f = self.funcs.get(self.current_entry)
            if f and tgt in f.insns:
                return f'goto L_{tgt:08x};'
            self.add_entry(tgt, thumb)
            if (tgt & ~1) in self.entries:
                return f'return fn_{tgt:08x}(cpu);'
            return f'guest_jump(cpu, 0x{tgt:08x}u); return;'
        if base in ('bx','blx'):
            reg = ops[0].reg if ops and ops[0].type==ARM_OP_REG else 14
            if base == 'bx':
                return f'guest_return_or_jump(cpu, {self.r(reg,addr,thumb)}, entry_lr); return;'
            ret = addr + ins.size
            return f'cpu->r[14] = 0x{ret:08x}u; guest_call(cpu, {self.r(reg,addr,thumb)});'
        if base in ('cbz','cbnz') and ops:
            reg=self.r(ops[0].reg,addr,thumb)
            tgt=(ops[1].imm & 0xFFFFFFFF) & ~1
            f = self.funcs.get(self.current_entry)
            if f and tgt in f.insns:
                return f'if ({reg} {"==" if base=="cbz" else "!="} 0) goto L_{tgt:08x};'
            self.add_entry(tgt,thumb)
            if (tgt & ~1) in self.entries:
                return f'if ({reg} {"==" if base=="cbz" else "!="} 0) return fn_{tgt:08x}(cpu);'
            return f'if ({reg} {"==" if base=="cbz" else "!="} 0) {{ guest_jump(cpu, 0x{tgt:08x}u); return; }}'
        return None

    def emit_jump_table(self, ins, addr, thumb):
        # addls pc, pc, rX, lsl #2  (conditional)
        reg = ins.operands[2].reg if len(ins.operands)>2 else 0
        targets = self.jump_targets(addr)
        if not targets:
            return 'guest_unimplemented(cpu, 0x%08xu); return;' % addr
        f = self.funcs.get(self.current_entry)
        lines = [f'switch ({self.r(reg,addr,thumb)}) {{']
        for i,t in enumerate(targets):
            if f and t in f.insns:
                lines.append(f'case {i}: goto L_{t:08x};')
            else:
                lines.append(f'case {i}: guest_jump(cpu, 0x{t:08x}u); return;')
        lines.append('default: guest_unimplemented(cpu, 0x%08xu); return; }' % addr)
        return '\n'.join(lines)

    def generate_function(self, entry):
        thumb, name = self.entries[entry]
        f = self.decode(entry, thumb, name)
        self.current_entry = entry
        lines = [f'/* {name} @ {entry:08x} ({"thumb" if thumb else "arm"}) */',
                 f'void fn_{entry:08x}(CPU *cpu)', '{',
                 '    const uint32_t entry_lr = cpu->r[14];',
                 '    uint32_t shc = 0; (void)shc; (void)entry_lr;']
        for addr in sorted(f.insns):
            ins = f.insns[addr]
            base = self.base_mnem(ins)
            try:
                body = self.emit_op(ins, base, addr, thumb)
            except Exception as e:
                body = None
                self.stats['emitter_exception'] += 1
                if len(self.exceptions) < 40:
                    self.exceptions.append((addr, base, repr(e)))
            if body is None:
                self.unsupported[f'{base}'] += 1
                body = f'guest_unimplemented(cpu, 0x{addr:08x}u); return;'
            lines.append(f'L_{addr:08x}:;')
            body = body.strip()
            if body:
                body = self.cond_wrap(ins, body)
                lines.append('    {')
                lines.append('        ' + body.replace('\n','\n        '))
                lines.append('    }')
        lines.append('}')
        return '\n'.join(lines)

    def run(self):
        # collect entry points
        for s in self.syms:
            self.add_entry(s.addr, s.thumb, s.name)
        # static constructors/destructors are internal pointers, not branches
        for secname in ('.init_array', '.fini_array'):
            for sec in self.sections:
                if sec['name'] != secname: continue
                off = sec['off']; count = sec['size'] // 4
                for i in range(count):
                    v = struct.unpack_from('<I', self.blob, off + i*4)[0]
                    if v: self.add_entry(v, None, f'{secname[1:]}_{i}')
        # extra entry points: callbacks (qsort comparators, function tables)
        # that are only referenced at runtime through registers/stack.
        for v in self.extra:
            self.add_entry(v, None, None)
        if self.only:
            self.entries = {a:v for a,v in self.entries.items() if v[1] == self.only or self.only in v[1]}
        # decode/generate (loop because new entries can be discovered)
        generated = set()
        while True:
            todo = [a for a in self.entries if a not in generated]
            if not todo: break
            for a in todo:
                self.generate_function(a)
                generated.add(a)
        os.makedirs(self.out_dir, exist_ok=True)
        hdr = ['#ifndef GENERATED_FUNCTIONS_H', '#define GENERATED_FUNCTIONS_H',
               '#include "guest.h"', '#include "imports_gen.h"', '#ifdef __cplusplus', 'extern "C" {', '#endif']
        for a in sorted(generated):
            hdr.append(f'void fn_{a:08x}(CPU *cpu);')
        hdr += ['#ifdef __cplusplus', '}', '#endif', '#endif']
        open(os.path.join(self.out_dir,'functions.h'),'w').write('\n'.join(hdr)+'\n')
        parts=[]
        for a in sorted(generated):
            parts.append(self.generate_function(a))

        # Split the translation into manageable translation units.  Keeping one
        # 44 MB functions.c makes every edit a full rebuild and trips some
        # editors; chunks also let Ninja compile in parallel.  A zero chunk size
        # writes a single unit (useful for debugging the translator output).
        for old in os.listdir(self.out_dir):
            if old == 'functions.c' or (old.startswith('functions_') and old.endswith('.c')):
                os.remove(os.path.join(self.out_dir, old))
        chunks=[]; cur=[]; cur_len=0
        for part in parts:
            plen=len(part)+2
            if self.chunk_bytes and cur and cur_len+plen > self.chunk_bytes:
                chunks.append(cur); cur=[]; cur_len=0
            cur.append(part); cur_len+=plen
        if cur or not chunks: chunks.append(cur)
        for i, chunk in enumerate(chunks):
            path=os.path.join(self.out_dir, f'functions_{i:02d}.c')
            open(path,'w',encoding='utf-8').write(
                '#include "functions.h"\n\n' + '\n\n'.join(chunk) + '\n')
        print(f'wrote {len(chunks)} translation unit(s)')

        table=['#include "guest.h"', '#include "functions.h"', '',
               'const GuestEntry g_generated_functions[] = {']
        for a in sorted(generated):
            name=self.entries[a][1].replace('"','')
            table.append(f'    {{ 0x{a:08x}u, fn_{a:08x}, "{name}" }},')
        table.append('};')
        table.append(f'const size_t g_generated_function_count = {len(generated)};')
        open(os.path.join(self.out_dir,'table.c'),'w').write('\n'.join(table)+'\n')
        # import veneers
        funcs = [n for n in self.undef if n not in self.data_imports]
        ih = ['#ifndef IMPORTS_GEN_H', '#define IMPORTS_GEN_H', '#include "guest.h"',
              '#ifdef __cplusplus', 'extern "C" {', '#endif']
        for n in funcs:
            ih.append(f'void imp_{self.cname(n)}(CPU *cpu);')
        ih += ['#ifdef __cplusplus', '}', '#endif', '#endif']
        open(os.path.join(self.out_dir,'imports_gen.h'),'w').write('\n'.join(ih)+'\n')
        ic = ['#include "guest.h"', '#include "imports_gen.h"', '']
        for n in funcs:
            ic.append(f'void imp_{self.cname(n)}(CPU *cpu) {{ import_dispatch(cpu, "{n}"); }}')
        ic.append('')
        ic.append('const ImportDef g_import_defs[] = {')
        for n in funcs:
            ic.append(f'    {{ "{n}", imp_{self.cname(n)} }},')
        ic.append('};')
        ic.append(f'const size_t g_import_def_count = {len(funcs)};')
        open(os.path.join(self.out_dir,'imports_gen.c'),'w').write('\n'.join(ic)+'\n')
        # PLT address -> import name table, used by the runtime trampoline
        pt = ['#include "guest.h"', '', 'const PltImport g_plt_imports[] = {']
        for addr in sorted(self.plt):
            pt.append(f'    {{ 0x{addr:08x}u, "{self.plt[addr]}" }},')
        pt.append('};')
        pt.append(f'const size_t g_plt_import_count = {len(self.plt)};')
        open(os.path.join(self.out_dir,'plt_table.c'),'w').write('\n'.join(pt)+'\n')
        print(f'generated {len(generated)} functions, {self.stats["insns"]} instructions')
        if self.unsupported:
            print('unsupported:', self.unsupported)
        if self.exceptions:
            print('emitter exceptions:')
            for a, b, e in self.exceptions:
                print(f'  {a:08x} {b}: {e}')
        if self.stats: print('stats:', dict(self.stats))

def parse_extra(text):
    if not text: return []
    out = []
    for part in text.replace(';', ',').split(','):
        part = part.strip()
        if part:
            out.append(int(part, 0))
    return out

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument('--so', required=True)
    ap.add_argument('--out', default='generated')
    ap.add_argument('--only')
    ap.add_argument('--extra', help='comma-separated extra code entry addresses')
    ap.add_argument('--chunk-bytes', type=int, default=500_000,
                    help='target size of each generated functions_NN.c (0 = one file)')
    args=ap.parse_args()
    Recompiler(args.so, args.out, args.only, parse_extra(args.extra),
               args.chunk_bytes).run()

if __name__=='__main__':
    main()
