#!/usr/bin/env python3
"""autotrans.py - semi-automatic ARM -> C translator for libasphalt5.so.

Usage (single function):
    python autotrans.py <elf> <addr_hex> [max_insns]

Usage (batch -> include file):
    python autotrans.py --gen <elf> <listfile> <out.inc>

The list file has one function per line:  0x63574   [name/comment]

What the generated C does (all bit-faithful to the ARM):
  - the frame: pushes/pops/ldm/stm and sp adjustments exactly as the ARM
  - registers: uint32_t r0..r12, sp, lr; entry from R[0..14], exit stored back
  - memory: rd32/ur16/rd8 (read), uw32/uw16/uw8 (write) - the write helpers
    log old values in verify mode (A5_AUTO_VERIFY, see hooks.inc)
  - flags: reconstructed per branch from the tracked flag-setting op
    (cmp/cmn/tst/teq/adds/subs/...); anything not exactly reconstructible
    refuses the whole function (no silent wrong code)
  - calls (bl): call_emulated_regs(target, {r0..r3}, 4, sp); after the call the
    caller-saved regs are reloaded from the emulated context (exact ABI
    behaviour); the callee's stack args were stored into the frame by the
    generated code itself, exactly like the ARM
  - pc-relative literals: read as BASE + addr (the ELF image is mapped there)
  - VFP / jump tables / indirect pc writes / external branch targets: REFUSED
    (whole function), so every emitted function is a complete translation.

Returns 1 when handled; the generated function never bails at runtime.
"""
import os
import re
import sys

import capstone

BASE = 0x10000000   # the host maps the .so at BASE + vaddr (a5host.c) - the
                    # generator emits "BASE + off" symbolically, so this value
                    # is only documentation; the C macro is authoritative
ALU_SET = {'add', 'sub', 'rsb', 'and', 'orr', 'eor', 'bic', 'mov', 'mvn',
           'mul', 'mla', 'lsl', 'lsr', 'asr', 'ror'}
SHIFTS = {'lsl', 'lsr', 'asr', 'ror', 'rrx'}
# PLT stubs of noreturn functions: the bytes after a call to these are dead
# data (a literal pool), not code.  __stack_chk_fail = 0x5c5f8.
NORETURN_PLTS = {0x5c5f8, 0x5ca24}
CONDS = {'eq', 'ne', 'cs', 'hs', 'cc', 'lo', 'mi', 'pl', 'vs', 'vc',
         'hi', 'ls', 'ge', 'lt', 'gt', 'le'}
KNOWN_BASES = {
    'b', 'bl', 'bx', 'blx', 'push', 'pop', 'ldm', 'stm', 'ldmia', 'stmia',
    'ldmdb', 'stmdb', 'ldmfd', 'stmfd', 'ldmib', 'stmib', 'ldmea', 'stmea',
    'ldmfa', 'stmfa', 'ldmed', 'stmed', 'ldr', 'str', 'ldrb', 'strb', 'ldrh',
    'strh', 'ldrsh', 'ldrsb', 'ldrt', 'strt', 'ldrbt', 'strbt', 'ldrht',
    'strht', 'mov', 'movw', 'movt', 'mvn', 'add', 'sub', 'rsb', 'adc', 'sbc',
    'and', 'orr', 'eor', 'bic', 'cmp', 'cmn', 'tst', 'teq', 'lsl', 'lsr',
    'asr', 'ror', 'rrx', 'mul', 'mla', 'mls', 'smull', 'umull', 'smlal',
    'umlal', 'sxtb', 'sxth', 'uxtb', 'uxth', 'rev', 'rev16', 'clz', 'ubfx',
    'sbfx', 'bfi', 'bfc', 'nop', 'svc', 'mrs', 'msr', 'cps', 'setend', 'rfe',
    'srs', 'ldrd', 'strd', 'pld', 'pldw', 'dmb', 'dsb', 'isb', 'it', 'addw',
    'subw', 'pkhbt', 'pkhtb', 'sadd16', 'ssat', 'usat', 'bkpt', 'udiv',
    'sdiv', 'clrex',
    # VFP (so vldreq/vaddne etc. split into base + condition)
    'vldr', 'vstr', 'vldmia', 'vldmdb', 'vstmia', 'vstmdb', 'vpush', 'vpop',
    'vmov', 'vadd', 'vsub', 'vmul', 'vdiv', 'vmla', 'vmls', 'vabs', 'vneg',
    'vsqrt', 'vcvt', 'vcmp', 'vcmpe', 'vmrs', 'vmsr', 'vnmul',
}


VMAP = {'fstmdbx': 'vstmdb', 'fstmdb': 'vstmdb', 'fstmdbs': 'vstmdb',
        'fstmiax': 'vstmia', 'fstmia': 'vstmia', 'fstmias': 'vstmia',
        'fldmiax': 'vldmia', 'fldmia': 'vldmia', 'fldmias': 'vldmia',
        'fldmdbx': 'vldmdb', 'fldmdb': 'vldmdb', 'fldmds': 'vldmdb',
        'fldmea': 'vldmdb', 'fstmea': 'vstmdb',
        'fmrs': 'vmrs', 'fmsr': 'vmov', 'fcpys': 'vmov', 'fadds': 'vadd',
        'fsubs': 'vsub', 'fmuls': 'vmul', 'fdivs': 'vdiv', 'fmacs': 'vmla',
        'fmscs': 'vmls', 'fabss': 'vabs', 'fnegs': 'vneg', 'fsqrts': 'vsqrt'}


def split_cc(m):
    """split a mnemonic into (base, condition) - longest condition suffix on a
    known base mnemonic wins, so teq/bics/movs stay intact"""
    for cc in sorted(CONDS, key=len, reverse=True):
        if m.endswith(cc):
            b = m[:-len(cc)]
            if b in KNOWN_BASES:
                return b, cc
    return m, None


def foff(v):
    return v - 0x1000 if v >= 0x1EE590 else v


def split_ops(ops):
    """split on top-level commas only (keep [...] and {...} together)"""
    parts, depth, cur = [], 0, ''
    for ch in ops:
        if ch in '[{':
            depth += 1
        elif ch in ']}':
            depth -= 1
        if ch == ',' and depth == 0:
            parts.append(cur.strip())
            cur = ''
        else:
            cur += ch
    if cur.strip():
        parts.append(cur.strip())
    # merge trailing shift operands into the previous operand
    out = []
    for p in parts:
        if out and p.split()[0] in SHIFTS:
            out[-1] = out[-1] + ', ' + p
        else:
            out.append(p)
    # normalize register aliases (ip/sb/sl/fp) to rN
    return [map_regs(p) for p in out]


REG_FIX = {'sb': 'r9', 'sl': 'r10', 'fp': 'r11', 'ip': 'r12'}


def map_regs(s):
    for k, v in REG_FIX.items():
        s = re.sub(r'\b%s\b' % k, v, s)
    return s


class Flags:
    """Track the last flag-setting op.  The operands are SNAPSHOT into C
    temporaries (_fa/_fb/_fd) at the moment the flags are set, so a later
    conditional branch still tests the values the ARM flags were computed
    from even if the registers have been overwritten meanwhile (e.g.
    `cmp r0,#0; addeq r0,r0,#6; beq L`)."""

    def __init__(self):
        self.kind = None      # cmp | cmn | tst | alu
        self.op = None        # for alu: add | sub | logic | shift_* | logic64
        self.cexpr = None     # for shift_*: the exact carry expression (or None)
        self.merge = None     # (cond, old_kind, old_op, old_cexpr) for cmpne-style merges

    def set_cmp(self, a, b, sub):
        self.kind, self.op = ('cmp' if sub else 'cmn'), None
        self.cexpr = None
        self.merge = None
        return ['_fa = %s; _fb = %s;' % (a, b)]

    def set_test(self, a, b):
        self.kind, self.op = 'tst', None
        self.cexpr = None
        self.merge = None
        return ['_fa = %s; _fb = %s;' % (a, b)]

    def set_vfp(self):
        self.kind, self.op = 'vfp', None
        self.cexpr = None
        self.merge = None
        return []

    def set_shift(self, sh, dst, x, y, imm):
        """Flags after lsls/lsrs/asrs/rors: N/Z from the result, C = the last
        bit shifted out.  Exact for immediate amounts; for register amounts C
        is left unmodelled (C-dependent conditions refuse).
        The caller emits these SNAPSHOTS before the destination write (ARM
        reads the operands first) and `_fd = dst;` afterwards."""
        self.kind, self.op = 'alu', 'shift_' + sh
        self.cexpr = None
        self.merge = None
        if imm:
            n = int(y)
            if sh == 'lsl':
                if n != 0:                       # lsl #0: C unchanged
                    self.cexpr = '((((uint32_t)_fa >> %d) & 1) != 0)' % (32 - n)
            elif sh in ('lsr', 'asr'):
                k = 31 if n == 0 else n - 1      # lsr/asr #0 means #32
                self.cexpr = '((((uint32_t)_fa >> %d) & 1) != 0)' % k
            else:                                # ror
                if n != 0:                       # ror #0 = rrx: C unchanged
                    self.cexpr = '((((uint32_t)_fa >> %d) & 1) != 0)' % (n - 1)
        out = []
        if x is not None:
            out.append('_fa = %s;' % x)
        if y is not None:
            out.append('_fb = %s;' % y)
        return out

    def set_alu(self, kind, dst, a, b):
        self.kind, self.op = 'alu', kind
        self.cexpr = None
        self.merge = None
        out = ['_fd = %s;' % dst]
        if a is not None:
            out.append('_fa = %s;' % a)
        if b is not None:
            out.append('_fb = %s;' % b)
        return out

    def set_cond_cmp(self, kind, a, b, cond):
        """Conditional cmp/cmn: the flags become the new comparison when
        `cond` (evaluated on the OLD flags) is true, otherwise they keep the
        previous comparison.  The next condition is a ternary of the two."""
        self.merge = (cond, self.kind, self.op, self.cexpr)
        self.kind, self.op, self.cexpr = kind, None, None
        return ['if (%s) { _fa2 = %s; _fb2 = %s; }' % (cond, a, b)]

    def cond(self, cc):
        """C expression for the ARM condition, or None if not reconstructible"""
        if self.merge is not None:
            cond, okind, oop, ocexpr = self.merge
            new = self._cond(cc)
            if new:
                new = new.replace('_fa', '_fa2').replace('_fb', '_fb2')
            ck, co, ccx = self.kind, self.op, self.cexpr
            self.kind, self.op, self.cexpr = okind, oop, ocexpr
            old = self._cond(cc)
            self.kind, self.op, self.cexpr = ck, co, ccx
            if new is None or old is None:
                return None
            return '(%s) ? (%s) : (%s)' % (cond, new, old)
        return self._cond(cc)

    def _cond(self, cc):
        k = self.kind
        op = self.op
        cexpr = self.cexpr
        if cc == 'al':
            return None
        if k in ('cmp', 'cmn'):
            u = '(uint32_t)'
            s = '(int32_t)'
            if cc in ('eq', 'ne'):
                if k == 'cmp':
                    return {'eq': '_fa == _fb', 'ne': '_fa != _fb'}[cc]
                # CMN compares a + b against zero
                return {'eq': '(_fa + _fb) == 0', 'ne': '(_fa + _fb) != 0'}[cc]
            if cc in ('mi', 'pl'):
                d = '_fa - _fb' if k == 'cmp' else '_fa + _fb'
                return {'mi': '(int32_t)(%s) < 0' % d, 'pl': '(int32_t)(%s) >= 0' % d}[cc]
            if k == 'cmp':
                tbl = {
                    'cs': '(uint32_t)_fa >= (uint32_t)_fb', 'hs': '(uint32_t)_fa >= (uint32_t)_fb',
                    'cc': '(uint32_t)_fa < (uint32_t)_fb', 'lo': '(uint32_t)_fa < (uint32_t)_fb',
                    'hi': '(uint32_t)_fa > (uint32_t)_fb', 'ls': '(uint32_t)_fa <= (uint32_t)_fb',
                    'gt': '(int32_t)_fa > (int32_t)_fb', 'ge': '(int32_t)_fa >= (int32_t)_fb',
                    'lt': '(int32_t)_fa < (int32_t)_fb', 'le': '(int32_t)_fa <= (int32_t)_fb',
                }
                return tbl.get(cc)
            # cmn: the flags are those of the exact sum a + b; a 64-bit sum
            # reproduces them exactly (carry, overflow, sign, zero)
            s64 = '((int64_t)(int32_t)_fa + (int64_t)(int32_t)_fb)'
            u64 = '((uint64_t)(uint32_t)_fa + (uint64_t)(uint32_t)_fb)'
            tbl = {
                'cs': '(%s > 0xFFFFFFFFull)' % u64, 'hs': '(%s > 0xFFFFFFFFull)' % u64,
                'cc': '(%s <= 0xFFFFFFFFull)' % u64, 'lo': '(%s <= 0xFFFFFFFFull)' % u64,
                'hi': '(%s > 0xFFFFFFFFull) && ((_fa + _fb) != 0)' % u64,
                'ls': '(%s <= 0xFFFFFFFFull) || ((_fa + _fb) == 0)' % u64,
                'gt': '(%s > 0)' % s64, 'ge': '(%s >= 0)' % s64,
                'lt': '(%s < 0)' % s64, 'le': '(%s <= 0)' % s64,
            }
            return tbl.get(cc)
        if k == 'tst':
            if cc in ('eq', 'ne'):
                return {'eq': '(_fa & _fb) == 0', 'ne': '(_fa & _fb) != 0'}[cc]
            if cc in ('mi', 'pl'):
                return {'mi': '(int32_t)(_fa & _fb) < 0', 'pl': '(int32_t)(_fa & _fb) >= 0'}[cc]
            return None
        if k == 'vfp':
            tbl = {
                'eq': '_fv == 0', 'ne': '_fv != 0',
                'gt': '_fv == 1', 'ge': '_fv == 1 || _fv == 0',
                'lt': '_fv == 2 || _fv == 3', 'le': '_fv == 2 || _fv == 0 || _fv == 3',
                'hi': '_fv == 1 || _fv == 3', 'ls': '_fv == 2 || _fv == 0',
                'mi': '_fv == 2', 'pl': '_fv == 1 || _fv == 0 || _fv == 3',
                'vs': '_fv == 3', 'vc': '_fv != 3',
                'cs': '_fv != 2', 'hs': '_fv != 2',
                'cc': '_fv == 2', 'lo': '_fv == 2',
            }
            return tbl.get(cc)
        if k == 'alu':
            if op == 'logic64':
                # smulls/umulls: Z = all 64 bits zero, N = bit 63
                if cc in ('eq', 'ne'):
                    return {'eq': '(_fa | _fb) == 0', 'ne': '(_fa | _fb) != 0'}[cc]
                if cc in ('mi', 'pl'):
                    return {'mi': '(int32_t)_fb < 0', 'pl': '(int32_t)_fb >= 0'}[cc]
                return None
            if cc in ('eq', 'ne'):
                return {'eq': '_fd == 0', 'ne': '_fd != 0'}[cc]
            if cc in ('mi', 'pl'):
                return {'mi': '(int32_t)_fd < 0', 'pl': '(int32_t)_fd >= 0'}[cc]
            if op and op.startswith('shift_'):
                if cexpr is None:
                    return None
                c = cexpr
                if cc in ('cs', 'hs'):
                    return c
                if cc in ('cc', 'lo'):
                    return '!(%s)' % c
                if cc == 'hi':
                    return '(%s) && (_fd != 0)' % c
                if cc == 'ls':
                    return '!(%s) || (_fd == 0)' % c
                return None
            if op in ('sub', 'add'):
                tbl = {
                    'cs': '(uint32_t)_fa >= (uint32_t)_fb', 'hs': '(uint32_t)_fa >= (uint32_t)_fb',
                    'cc': '(uint32_t)_fa < (uint32_t)_fb', 'lo': '(uint32_t)_fa < (uint32_t)_fb',
                    'hi': '(uint32_t)_fa > (uint32_t)_fb', 'ls': '(uint32_t)_fa <= (uint32_t)_fb',
                    'gt': '(int32_t)_fa > (int32_t)_fb', 'ge': '(int32_t)_fa >= (int32_t)_fb',
                    'lt': '(int32_t)_fa < (int32_t)_fb', 'le': '(int32_t)_fa <= (int32_t)_fb',
                }
                if op == 'sub':
                    # the stored result is _fd; the carry of a-b is _fa >= _fb
                    return tbl.get(cc)
                # add: eq/ne/mi/pl handled above; unsigned carry uses the result
                if cc in ('cs', 'hs'):
                    return '(uint32_t)_fd < (uint32_t)_fa'
                if cc in ('cc', 'lo'):
                    return '(uint32_t)_fd >= (uint32_t)_fa'
                return None
            return None
        return None

class Refuse(Exception):
    pass


def expr(s, pc_val):
    """C expression for an operand: '#imm' | 'rX' | 'pc' | 'rX, lsl #2' ..."""
    s = s.strip()
    if s.startswith('#'):
        return str(int(s[1:], 0))
    if ',' in s:
        base, rest = s.split(',', 1)
        m = re.match(r'(lsl|lsr|asr|ror)\s+(.*)$', rest.strip())
        if not m:
            raise Refuse('operand shift %r' % s)
        op, arg = m.group(1), m.group(2).strip()
        b = expr(base, pc_val)
        sh = expr(arg, pc_val)
        if op == 'lsl':
            return '((uint32_t)(%s) << ((%s) & 31))' % (b, sh)
        if op == 'lsr':
            return '((uint32_t)(%s) >> ((%s) & 31))' % (b, sh)
        if op == 'asr':
            return '(uint32_t)((int32_t)(%s) >> ((%s) & 31))' % (b, sh)
        return '(((uint32_t)(%s) >> ((%s) & 31)) | ((uint32_t)(%s) << ((32 - ((%s) & 31)) & 31)))' % (b, sh, b, sh)
    if s == 'pc':
        return 'BASE + %#x' % pc_val
    return s


def rlist(ops):
    m = re.match(r'^\{([^}]*)\}', ops.strip())
    if not m:
        raise Refuse('bad register list')
    out = []
    for p in m.group(1).split(','):
        p = p.strip()
        names = {'sl': 10, 'fp': 11, 'ip': 12, 'sp': 13, 'lr': 14, 'pc': 15}
        if p in names:
            out.append(names[p])
        elif re.match(r'^r\d+$', p):
            out.append(int(p[1:]))
        else:
            raise Refuse('reg %r' % p)
    return out


def rn(r):
    """C variable name for a register number"""
    return {13: 'sp', 14: 'lr'}.get(r, 'r%d' % r)


def translate(elf, addr, maxn=4000, native_set=None):
    """returns (list_of_c_lines, func_addr) or raises Refuse"""
    md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    md.detail = False

    def dec(a):
        for ins in md.disasm(elf[foff(a):foff(a) + 4], a):
            return ins
        return None

    # ---- pass 1: recursive descent reachability
    fend = func_end(addr, maxn)
    todo = [addr]
    seen = {}
    calls = []
    jt = {}
    ind_calls = {}
    tail_calls = {}
    pc_jt = {}
    order = []
    while todo:
        a = todo.pop()
        if a in seen:
            continue
        if len(seen) >= maxn:
            raise Refuse('too many instructions')
        ins = dec(a)
        if ins is None:
            # dead data in the instruction stream (e.g. a literal pool after a
            # noreturn call): drop this path instead of refusing.  The path is
            # unreachable; the differential catches any real problem.
            print('  note: undecodable word at %#x (path dropped)' % a)
            continue
        seen[a] = ins
        order.append(a)
        m = ins.mnemonic
        base, cc = split_cc(VMAP.get(m.split('.')[0], m.split('.')[0]))
        ops = split_ops(ins.op_str)
        fall = True
        if base == 'bl':
            tgt = int(ops[0].lstrip('#'), 16)
            calls.append((a, tgt))
            if tgt in NORETURN_PLTS:
                # e.g. __stack_chk_fail: never returns, so the bytes after the
                # call are dead data (a literal pool) - do not walk into them
                fall = False
        elif base == 'b':
            tgt = int(ops[0].lstrip('#'), 16)
            if not (addr <= tgt < fend):
                tail_calls[a] = tgt
                if cc is None:
                    fall = False
            else:
                todo.append(tgt)
                if cc is None:
                    fall = False
        elif base == 'add' and ops[0] == 'pc' and ops[1] == 'pc':
            # switch table: the slots at pc+8 hold `b target` instructions
            base_tbl = a + 8
            slots = []
            for k in range(512):
                off = foff(base_tbl) + 4 * k
                if off + 4 > len(elf):
                    break
                wv = int.from_bytes(elf[off:off + 4], 'little')
                if (wv & 0x0F000000) == 0x0A000000:   # a B/BL instruction
                    slots.append(base_tbl + 4 * k)
                else:
                    break
            if not slots:
                raise Refuse('pc table (no slots)')
            pc_jt[a] = (base_tbl, slots)
            todo.extend(slots)
        elif base == 'bx' and ops[0] == 'lr':
            if cc is None:
                fall = False
        elif base in ('pop',) and 15 in rlist(ops[0]):
            if cc is None:
                fall = False
        elif base in ('ldm', 'ldmia', 'ldmfd', 'ldmib', 'ldmed') and any(
                r in (15,) for r in rlist(ops[1]) if True):
            # ldm with pc in the list: a return through the loaded value (the
            # pass-2 emitter loads it into lr and jumps to L_ret).  Only the
            # unconditional form terminates the block.
            if cc is None:
                fall = False
            else:
                raise Refuse('conditional pc in ldm list')
        elif base in ('mov', 'add') and ops[0] == 'pc':
            if base == 'mov' and ops[1] == 'lr':
                if cc is None:
                    fall = False
            else:
                raise Refuse('pc write (%s)' % m)
        elif base in ('bx', 'blx') and ops[0] != 'lr':
            pass   # indirect call/jump: emitted in pass 2
        elif base == 'ldr' and ops[0] == 'pc':
            # jump table: ldr pc, [pc, #imm] -> enumerate the pool entries
            mo = re.match(r'^\[pc(?:,\s*#?([0-9x]+))?\]$', ops[1])
            if not mo or mo.group(1) is None:
                # vtable dispatch: mov lr, pc / ldr pc, [rX, #imm] (an indirect
                # call - the callee returns to lr, control continues at a+4)
                mo2 = re.match(r'^\[([a-z0-9]+)(?:,\s*([^\]]*))?\](!?)$', ops[1])
                if not mo2 or mo2.group(3):
                    raise Refuse('ldr pc %r' % ops[1])
                ind_calls[a] = (mo2.group(1), mo2.group(2))
                if fall:
                    todo.append(a + 4)
                continue
            pool = a + 8 + int(mo.group(1), 0)
            cands = []
            for k in range(1024):
                off = foff(pool) + 4 * k
                if off + 4 > len(elf):
                    break
                v = int.from_bytes(elf[off:off + 4], 'little')
                if addr <= v < fend:
                    cands.append(v)
                elif cands:
                    break
            if not cands:
                raise Refuse('ldr pc (empty table)')
            jt[a] = (pool, cands)
            todo.extend(cands)
        elif base.startswith('v') or base.startswith('f'):
            # VFP: control flow neutral (vcmp/vmrs are refused in the emitter)
            pass
        elif base in ('svc', 'mrs', 'msr', 'cps', 'setend', 'rfe', 'srs', 'ldrd',
                      'pld', 'pldw', 'clrex', 'dmb', 'dsb', 'isb', 'it', 'ite', 'itt',
                      'addw', 'subw'):
            if base in ('dmb', 'dsb', 'isb'):
                pass
            else:
                raise Refuse('unsupported %s' % m)
        if fall:
            todo.append(a + 4)
    order.sort()

    # ---- pass 2: emit
    out = []
    fl = Flags()
    has_fp = [False]
    w = out.append
    labels = set(order)

    def cond_of(cc, m):
        if cc is None:
            return None
        c = fl.cond(cc)
        if c is None:
            raise Refuse('condition %s after %s not reconstructible at %#x (kind=%s)'
                         % (cc, m, a, fl.kind))
        return c

    for a in order:
        ins = seen[a]
        m = ins.mnemonic
        w('  L_%x:;' % a)
        base, cc = split_cc(VMAP.get(m.split('.')[0], m.split('.')[0]))
        sets = False
        if base.endswith('s') and base[:-1] in ALU_SET:
            base = base[:-1]
            sets = True
        ops = split_ops(ins.op_str)
        pcv = a + 8

        def C(stmt):
            if cc is None:
                w('    ' + stmt)
            else:
                c = cond_of(cc, m)
                w('    if (%s) { %s }' % (c, stmt))

        if sets and cc is not None:
            raise Refuse('conditional flag-setter %s' % m)
        if base == 'add' and ops[0] == 'pc' and a in pc_jt:
            base_tbl, slots = pc_jt[a]
            x = expr(ops[2], pcv)
            if cc is None:
                w('    { uint32_t _pc = (BASE + %#x) + (%s);' % (base_tbl, x))
            else:
                w('    if (%s) { uint32_t _pc = (BASE + %#x) + (%s);'
                  % (cond_of(cc, m), base_tbl, x))
            w('    switch (_pc) {')
            for sl in slots:
                w('    case BASE + %#x: goto L_%x;' % (sl, sl))
            w('    default: return 0; } }')
            continue
        if base == 'ldr' and ops[0] == 'pc' and a in ind_calls:
            rb, off = ind_calls[a]
            ad = expr(rb, pcv)
            if off:
                ad = '(%s) + (%s)' % (ad, expr(off, pcv))
            ret = a + 4
            w('    { uint32_t _R[16];')
            w('    _R[0] = r0; _R[1] = r1; _R[2] = r2; _R[3] = r3;')
            w('    _R[4] = r4; _R[5] = r5; _R[6] = r6; _R[7] = r7;')
            w('    _R[8] = r8; _R[9] = r9; _R[10] = r10; _R[11] = r11; _R[12] = r12;')
            w('    _R[13] = sp; _R[14] = BASE + %#x; _R[15] = 0;' % ret)
            w('    uint32_t _fn = rd32(%s);' % ad)
            w('    if (auto_enabled(_fn)) {')
            w('        auto_dispatch(_fn, _R, S, sp);')
            w('    } else {')
            w('        usetreg_batch_s(S);   // callee sees live VFP state\n')
            w('        _R[0] = call_emulated_regs(_fn, (uint32_t[]){ r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12 }, sp);')
            w('        _R[1] = ureg(UC_ARM_REG_R1); _R[2] = ureg(UC_ARM_REG_R2); _R[3] = ureg(UC_ARM_REG_R3);')
            w('        _R[12] = ureg(UC_ARM_REG_R12); _R[14] = ureg(UC_ARM_REG_LR);')
            w('        ureg_batch_s(S);')
            w('        if (_R[14] == LR_SENTINEL) _R[14] = BASE + %#x;' % ret)
            w('    }')
            w('    r0 = _R[0]; r1 = _R[1]; r2 = _R[2]; r3 = _R[3]; r12 = _R[12]; lr = _R[14]; }')
            continue
        if base == 'ldr' and ops[0] == 'pc':
            pool, cands = jt[a]
            C('{ uint32_t _t = rd32(BASE + %#x);' % pool)
            w('    switch (_t) {')
            for c in cands:
                w('    case BASE + %#x: goto L_%x;' % (c, c))
            w('    default: return 0; }')
            continue

        if base in ('nop',):
            continue
        if base in ('push', 'stmdb', 'stmfd', 'stm', 'stmia', 'stmea', 'stmib', 'stmfa'):
            # push/stmdb: lowest reg at lowest address; stmia: ascending from rbase
            if base in ('push', 'stmdb', 'stmfd'):
                rbase = 'sp' if base == 'push' else ops[0].rstrip('!')
                lst = rlist(ops[-1])
                n = len(lst)
                wb = base == 'push' or ops[0].endswith('!')
                C('%s = %s - %d;' % (rbase, rbase, 4 * n))
                for i, r in enumerate(lst):
                    C('uw32(%s + %d, %s);' % (rbase, 4 * i, rn(r)))
                if not wb and rbase != 'sp':
                    C('%s = %s + %d;' % (rbase, rbase, 4 * n))
            else:
                rbase = ops[0].rstrip('!')
                lst = rlist(ops[-1])
                wb = ops[0].endswith('!')
                off0 = 4 if base in ('stmib', 'stmfa') else 0
                for i, r in enumerate(lst):
                    C('uw32(%s + %d, %s);' % (rbase, off0 + 4 * i, rn(r)))
                if wb:
                    C('%s = %s + %d;' % (rbase, rbase, 4 * len(lst)))
            continue
        if base in ('pop', 'ldm', 'ldmia', 'ldmfd', 'ldmib', 'ldmed', 'ldmdb', 'ldmea'):
            rbase = 'sp' if base == 'pop' else ops[0].rstrip('!')
            lst = rlist(ops[-1])
            wb = base == 'pop' or ops[0].endswith('!')
            if base in ('ldmdb', 'ldmea'):
                C('%s = %s - %d;' % (rbase, rbase, 4 * len(lst)))
            off0 = 4 if base in ('ldmib', 'ldmed') else 0
            # snapshot the base: when the base register is itself in the list
            # (e.g. `ldm r0, {r0, ip, lr}`) the first load would corrupt the
            # addresses of the following ones
            # A conditional pop/ldm (e.g. `pople {pc}`) must only run when the
            # condition holds - and the return must stay INSIDE the block,
            # otherwise the generated code returns unconditionally.
            _pre = 'if (%s) ' % cond_of(cc, m) if cc is not None else ''
            w('    %s{ uint32_t _b = %s;' % (_pre, rbase))
            ret = False
            for i, r in enumerate(lst):
                if r == 15:
                    w('    lr = rd32(_b + %d);' % (off0 + 4 * i))
                    ret = True
                else:
                    w('    %s = rd32(_b + %d);' % (rn(r), off0 + 4 * i))
            if wb:
                w('    %s = _b + %d;' % (rbase, 4 * len(lst)))
            if ret:
                w('    goto L_ret;')
            w('    }')
            continue
        if base == 'bl':
            tgt = int(ops[0].lstrip('#'), 16)
            if 0x5c000 <= tgt < 0x5d000:
                # PLT stub -> resolve to the host shim and call it directly
                # (no nested emulator instance; the shim sequence is compared
                # by the differential via the shim call log)
                C('r0 = auto_call_plt(BASE + %#x, r0, r1, r2, r3, sp);' % tgt)
                w('    r1 = g_auto_r1;   // idivmod remainder / softfp high word')
                if tgt in NORETURN_PLTS:
                    # noreturn (__stack_chk_fail): the function aborts; the
                    # generated path returns instead of running into dead data
                    w('    goto L_ret;')
                continue
            if native_set and tgt in native_set:
                # the callee is also an auto-translated native: call it directly
                # (no Unicorn round-trip - exact ABI: r0-r3/r12 come back from
                # the callee, r4-r11 are preserved by it, lr = the return addr)
                C('{ uint32_t _R[16];')
                w('    _R[0] = r0; _R[1] = r1; _R[2] = r2; _R[3] = r3;')
                w('    _R[4] = r4; _R[5] = r5; _R[6] = r6; _R[7] = r7;')
                w('    _R[8] = r8; _R[9] = r9; _R[10] = r10; _R[11] = r11; _R[12] = r12;')
                w('    _R[13] = sp; _R[14] = BASE + %#x; _R[15] = 0;' % (a + 4))
                w('    if (probe_dispatch(BASE + %#x, _R, S, sp)) {' % tgt)
                w('        /* handled in-process by a native probe */')
                w('    } else if (auto_enabled(BASE + %#x)) {' % tgt)
                w('        auto_%x(_R, S, sp);' % tgt)
                w('    } else {')
                w('        usetreg_batch_s(S);   // callee sees live VFP state\n')
                w('        _R[0] = call_emulated_regs(BASE + %#x, (uint32_t[]){ r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12 }, sp);' % tgt)
                w('        _R[1] = ureg(UC_ARM_REG_R1); _R[2] = ureg(UC_ARM_REG_R2); _R[3] = ureg(UC_ARM_REG_R3);')
                w('        _R[12] = ureg(UC_ARM_REG_R12); _R[14] = ureg(UC_ARM_REG_LR);')
                w('        ureg_batch_s(S);')
                w('        if (_R[14] == LR_SENTINEL) _R[14] = BASE + %#x;' % (a + 4))
                w('    }')
                w('    r0 = _R[0]; r1 = _R[1]; r2 = _R[2]; r3 = _R[3]; r12 = _R[12]; lr = _R[14]; }')
                continue
            C('lr = BASE + %#x;' % (a + 4))
            w('    { uint32_t _R[16];')
            w('    _R[0] = r0; _R[1] = r1; _R[2] = r2; _R[3] = r3;')
            w('    _R[4] = r4; _R[5] = r5; _R[6] = r6; _R[7] = r7;')
            w('    _R[8] = r8; _R[9] = r9; _R[10] = r10; _R[11] = r11; _R[12] = r12;')
            w('    _R[13] = sp; _R[14] = BASE + %#x; _R[15] = 0;' % (a + 4))
            w('    if (probe_dispatch(BASE + %#x, _R, S, sp)) {' % tgt)
            w('        /* handled in-process by a native probe */')
            w('    } else {')
            w('        usetreg_batch_s(S);   // callee sees live VFP state\n')
            w('        _R[0] = call_emulated_regs(BASE + %#x, (uint32_t[]){ r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12 }, sp);' % tgt)
            w('        _R[1] = ureg(UC_ARM_REG_R1); _R[2] = ureg(UC_ARM_REG_R2); _R[3] = ureg(UC_ARM_REG_R3);')
            w('        _R[12] = ureg(UC_ARM_REG_R12); _R[14] = ureg(UC_ARM_REG_LR);')
            w('        ureg_batch_s(S);')
            w('        if (_R[14] == LR_SENTINEL) _R[14] = BASE + %#x;' % (a + 4))
            w('    }')
            w('    r0 = _R[0]; r1 = _R[1]; r2 = _R[2]; r3 = _R[3]; r12 = _R[12]; lr = _R[14]; }')
            continue
        if base == 'bx' and ops[0] == 'lr':
            if cc is None:
                w('    goto L_ret;')
            else:
                w('    if (%s) goto L_ret;' % cond_of(cc, m))
            continue
        if base == 'mov' and ops[0] == 'pc' and ops[1] == 'lr':
            if cc is None:
                w('    goto L_ret;')
            else:
                w('    if (%s) goto L_ret;' % cond_of(cc, m))
            continue
        if base == 'b' and a in tail_calls:
            tgt = tail_calls[a]
            ret = 'lr'
            if cc is not None:
                w('    if (%s) {' % cond_of(cc, m))
            w('    { uint32_t _R[16];')
            w('    _R[0] = r0; _R[1] = r1; _R[2] = r2; _R[3] = r3;')
            w('    _R[4] = r4; _R[5] = r5; _R[6] = r6; _R[7] = r7;')
            w('    _R[8] = r8; _R[9] = r9; _R[10] = r10; _R[11] = r11; _R[12] = r12;')
            w('    _R[13] = sp; _R[14] = lr; _R[15] = 0;')
            w('    if (auto_enabled(BASE + %#x)) {' % tgt)
            w('        auto_dispatch(BASE + %#x, _R, S, sp);' % tgt)
            w('    } else if (probe_dispatch(BASE + %#x, _R, S, sp)) {' % tgt)
            w('        /* handled in-process by a native probe */')
            w('    } else {')
            w('        usetreg_batch_s(S);   // callee sees live VFP state\n')
            w('        _R[0] = call_emulated_regs(BASE + %#x, (uint32_t[]){ r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12 }, sp);' % tgt)
            w('        _R[1] = ureg(UC_ARM_REG_R1); _R[2] = ureg(UC_ARM_REG_R2); _R[3] = ureg(UC_ARM_REG_R3);')
            w('        _R[12] = ureg(UC_ARM_REG_R12); _R[14] = ureg(UC_ARM_REG_LR);')
            w('        ureg_batch_s(S);')
            w('        if (_R[14] == LR_SENTINEL) _R[14] = lr;')
            w('    }')
            w('    r0 = _R[0]; r1 = _R[1]; r2 = _R[2]; r3 = _R[3]; r12 = _R[12]; lr = _R[14]; }')
            w('    goto L_ret;')
            if cc is not None:
                w('    }')
            continue
        if base == 'b':
            tgt = int(ops[0].lstrip('#'), 16)
            if cc is None:
                w('    goto L_%x;' % tgt)
            else:
                w('    if (%s) goto L_%x;' % (cond_of(cc, m), tgt))
            continue
        if base in ('cmp', 'cmn', 'tst', 'teq'):
            newkind = 'cmp' if base == 'cmp' else 'cmn' if base == 'cmn' else 'tst'
            if cc is not None:
                # conditional flag setter: only when the flag semantics are
                # unchanged (same kind), so a conditional snapshot update is
                # exact; otherwise the flags could be the previous setter's
                if fl.kind != newkind:
                    # cmn -> cmpne / cmp -> cmnne: the flags are a merge of the
                    # old comparison (when the condition is false) and the new
                    # one.  Model one level exactly; stacking refuses.
                    if (fl.merge is None and newkind in ('cmp', 'cmn')
                        and fl.kind in ('cmp', 'cmn')):
                        c = cond_of(cc, m)
                        for st in fl.set_cond_cmp(newkind, expr(ops[0], pcv),
                                                  expr(ops[1], pcv), c):
                            w('    ' + st)
                        continue
                    raise Refuse('conditional flag-setter %s (kind %s)' % (m, fl.kind))
                w('    if (%s) { _fa = %s; _fb = %s; }'
                  % (cond_of(cc, m), expr(ops[0], pcv), expr(ops[1], pcv)))
                continue
            if base in ('tst', 'teq'):
                snaps = fl.set_test(expr(ops[0], pcv), expr(ops[1], pcv))
            else:
                snaps = fl.set_cmp(expr(ops[0], pcv), expr(ops[1], pcv), sub=(base == 'cmp'))
            for s in snaps:
                w('    ' + s)
            continue
        if base in ('mov', 'mvn'):
            src = expr(ops[1], pcv)
            if base == 'mvn':
                C('%s = ~%s;' % (ops[0], src))
            else:
                C('%s = %s;' % (ops[0], src))
            if sets:
                for s in fl.set_alu('logic', ops[0], None, None):
                    w('    ' + s)
            continue
        if base == 'movw':
            C('%s = %s;' % (ops[0], expr(ops[1], pcv)))
            continue
        if base == 'movt':
            C('%s = (%s & 0xFFFFu) | ((%s) << 16);' % (ops[0], ops[0], expr(ops[1], pcv)))
            continue
        if base in ('add', 'sub', 'rsb', 'and', 'orr', 'eor', 'bic'):
            d, x, y = ops[0], expr(ops[1], pcv), expr(ops[2], pcv)
            # ARM reads the operands before writing the destination, so the
            # flag snapshots must come from the OLD register values (e.g.
            # `subs r5, r5, #1` snapshots the pre-decrement r5; capturing it
            # after the write turns `blo` into `result < 1`, one iteration off).
            if sets:
                if base == 'rsb':
                    # rsb d, x, y computes y - x: the flags are those of the
                    # subtraction y - x, so the snapshot must be (y, x)
                    kind, fa, fb = 'sub', y, x
                else:
                    kind = {'add': 'add', 'sub': 'sub'}.get(base, 'logic')
                    fa, fb = x, y
                w('    _fa = %s; _fb = %s;' % (fa, fb))
            if base == 'rsb':
                C('%s = %s - %s;' % (d, y, x))
            elif base == 'bic':
                C('%s = %s & ~%s;' % (d, x, y))
            else:
                op = {'add': '+', 'sub': '-', 'and': '&', 'orr': '|', 'eor': '^'}[base]
                C('%s = %s %s %s;' % (d, x, op, y))
            if sets:
                for s in fl.set_alu(kind, d, None, None):
                    w('    ' + s)
            continue
        if base in ('lsl', 'lsr', 'asr', 'ror'):
            d, x, y = ops[0], expr(ops[1], pcv), expr(ops[2], pcv)
            if sets:
                if cc is not None:
                    raise Refuse('conditional flag-setter %s' % m)
                imm = ops[2].strip().startswith('#')
                for s in fl.set_shift(base, d, x, y, imm):   # snapshots (old x/y)
                    w('    ' + s)
            if base == 'lsl':
                C('%s = (uint32_t)%s << ((%s) & 31);' % (d, x, y))
            elif base == 'lsr':
                C('%s = (uint32_t)%s >> ((%s) & 31);' % (d, x, y))
            elif base == 'asr':
                C('%s = (uint32_t)((int32_t)%s >> ((%s) & 31));' % (d, x, y))
            else:
                C('%s = ((uint32_t)%s >> ((%s) & 31)) | ((uint32_t)%s << ((32 - ((%s) & 31)) & 31));'
                  % (d, x, y, x, y))
            if sets:
                w('    _fd = %s;' % d)                        # the result (N/Z)
            continue
        if base == 'mul':
            C('%s = %s * %s;' % (ops[0], expr(ops[1], pcv), expr(ops[2], pcv)))
            if sets:
                if cc is not None:
                    raise Refuse('conditional flag-setter %s' % m)
                for s in fl.set_alu('logic', ops[0], None, None):
                    w('    ' + s)
            continue
        if base == 'mla':
            C('%s = %s * %s + %s;' % (ops[0], expr(ops[1], pcv), expr(ops[2], pcv), expr(ops[3], pcv)))
            if sets:
                if cc is not None:
                    raise Refuse('conditional flag-setter %s' % m)
                for s in fl.set_alu('logic', ops[0], None, None):
                    w('    ' + s)
            continue
        if base in ('smull', 'umull'):
            dlo, dhi = ops[0], ops[1]
            x, y = expr(ops[2], pcv), expr(ops[3], pcv)
            if base == 'smull':
                C('{ int64_t _p = (int64_t)(int32_t)%s * (int64_t)(int32_t)%s; %s = (uint32_t)_p; %s = (uint32_t)(_p >> 32); }'
                  % (x, y, dlo, dhi))
            else:
                C('{ uint64_t _p = (uint64_t)(uint32_t)%s * (uint64_t)(uint32_t)%s; %s = (uint32_t)_p; %s = (uint32_t)(_p >> 32); }'
                  % (x, y, dlo, dhi))
            if sets:
                if cc is not None:
                    raise Refuse('conditional flag-setter %s' % m)
                fl.kind, fl.op, fl.cexpr = 'alu', 'logic64', None
                w('    _fa = %s; _fb = %s;' % (dlo, dhi))
            continue
        if base in ('umlal', 'smlal'):
            raise Refuse('64-bit accumulate %s' % m)
        if base in ('sxtb', 'sxth', 'uxtb', 'uxth', 'rev', 'rev16', 'clz'):
            x = expr(ops[1], pcv)
            if base == 'sxtb':
                C('%s = (uint32_t)(int32_t)(int8_t)(%s);' % (ops[0], x))
            elif base == 'sxth':
                C('%s = (uint32_t)(int32_t)(int16_t)(%s);' % (ops[0], x))
            elif base == 'uxtb':
                C('%s = (uint32_t)(uint8_t)(%s);' % (ops[0], x))
            elif base == 'uxth':
                C('%s = (uint32_t)(uint16_t)(%s);' % (ops[0], x))
            elif base == 'rev':
                C('%s = (uint32_t)__builtin_bswap32(%s);' % (ops[0], x))
            elif base == 'rev16':
                C('%s = (uint32_t)__builtin_bswap16((uint16_t)(%s)) | ((uint32_t)__builtin_bswap16((uint16_t)((%s) >> 16)) << 16);'
                  % (ops[0], x, x))
            else:
                C('%s = (%s) ? (uint32_t)__builtin_clz(%s) : 32u;' % (ops[0], x, x))
            continue
        if base in ('ubfx', 'sbfx'):
            d, x = ops[0], expr(ops[1], pcv)
            lsb = int(ops[2].lstrip('#'), 0)
            wdt = int(ops[3].lstrip('#'), 0)
            if base == 'ubfx':
                C('%s = ((uint32_t)(%s) >> %d) & %#x;' % (d, x, lsb, (1 << wdt) - 1))
            else:
                C('%s = (uint32_t)((int32_t)((uint32_t)(%s) << %d) >> %d);'
                  % (d, x, 32 - lsb - wdt, 32 - wdt))
            continue
        if base == 'bfi':
            d, x = ops[0], expr(ops[1], pcv)
            lsb = int(ops[2].lstrip('#'), 0)
            wdt = int(ops[3].lstrip('#'), 0)
            C('%s = (%s & ~(%#xu << %d)) | (((uint32_t)(%s) & %#x) << %d);'
              % (d, d, ((1 << wdt) - 1), lsb, x, (1 << wdt) - 1, lsb))
            continue
        if base == 'bfc':
            d = ops[0]
            lsb = int(ops[1].lstrip('#'), 0)
            wdt = int(ops[2].lstrip('#'), 0)
            C('%s = %s & ~(%#xu << %d);' % (d, d, (1 << wdt) - 1, lsb))
            continue
        if base == 'strd':
            if len(ops) < 3:
                raise Refuse('strd %r' % ins.op_str)
            rt, rt2 = ops[0], ops[1]
            mo = re.match(r'^\[([a-z0-9]+)(?:,\s*([^\]]*))?\](!?)$', ops[2])
            if not mo:
                raise Refuse('strd mem form %r' % ops[2])
            rbase, off, bang = mo.group(1), mo.group(2), mo.group(3)
            post = len(ops) > 3 and not bang
            base_e = expr(rbase, pcv)
            addr_e = base_e
            if off:
                addr_e = '(%s) + (%s)' % (addr_e, expr(off, pcv))
            C('uw32(%s, %s);' % (addr_e, rt))
            C('uw32((%s) + 4, %s);' % (addr_e, rt2))
            if post:
                C('%s = %s + (%s);' % (rbase, base_e, expr(ops[3], pcv)))
            elif bang and off:
                C('%s = %s + (%s);' % (rbase, base_e, expr(off, pcv)))
            continue
        if base in ('ldr', 'ldrb', 'ldrh', 'ldrsh', 'ldrsb', 'ldrt', 'ldrbt', 'ldrht'):
            d = ops[0]
            mo = re.match(r'^\[([a-z0-9]+)(?:,\s*([^\]]*))?\](!?)$', ops[1])
            if not mo:
                raise Refuse('mem form %r' % ops[1])
            rbase, off, bang = mo.group(1), mo.group(2), mo.group(3)
            post = len(ops) > 2 and not bang
            addr_e = expr(rbase, pcv)
            if off:
                addr_e = '(%s) + (%s)' % (addr_e, expr(off, pcv))
            load = {'ldr': 'rd32', 'ldrt': 'rd32', 'ldrb': 'rd8', 'ldrbt': 'rd8',
                    'ldrh': 'ur16', 'ldrht': 'ur16',
                    'ldrsh': '(uint32_t)(int32_t)(int16_t)ur16',
                    'ldrsb': '(uint32_t)(int32_t)(int8_t)rd8'}[base]
            C('%s = %s(%s);' % (d, load, addr_e))
            if bang:
                C('%s = %s;' % (rbase, addr_e))
            elif post:
                pv = expr(', '.join(ops[2:]), pcv)
                C('%s = %s + %s;' % (rbase, rbase, pv))
            continue
        if base in ('str', 'strb', 'strh', 'strt', 'strbt', 'strht'):
            d = ops[0]
            mo = re.match(r'^\[([a-z0-9]+)(?:,\s*([^\]]*))?\](!?)$', ops[1])
            if not mo:
                raise Refuse('mem form %r' % ops[1])
            rbase, off, bang = mo.group(1), mo.group(2), mo.group(3)
            post = len(ops) > 2 and not bang
            addr_e = expr(rbase, pcv)
            if off:
                addr_e = '(%s) + (%s)' % (addr_e, expr(off, pcv))
            store = {'str': 'uw32', 'strt': 'uw32', 'strb': 'uw8', 'strbt': 'uw8',
                     'strh': 'uw16', 'strht': 'uw16'}[base]
            C('%s(%s, %s);' % (store, addr_e, d))
            if bang:
                C('%s = %s;' % (rbase, addr_e))
            elif post:
                pv = expr(', '.join(ops[2:]), pcv)
                C('%s = %s + %s;' % (rbase, rbase, pv))
            continue
        # ------------------------------------------------ VFP (scalar)
        if base in ('vldr', 'vstr', 'vldmia', 'vldmdb', 'vstmia', 'vstmdb',
                    'vpush', 'vpop', 'vmov', 'vadd', 'vsub', 'vmul', 'vdiv',
                    'vmla', 'vmls', 'vabs', 'vneg', 'vsqrt', 'vcvt', 'vnmul',
                    'vnmla', 'vnmls'):
            if base in ('vadd', 'vsub', 'vmul', 'vdiv', 'vmla', 'vmls', 'vabs',
                        'vneg', 'vsqrt', 'vcvt', 'vnmul'):
                has_fp[0] = True
            # sN -> S[N]; dN -> S[2N]/S[2N+1]
            def sreg(x):
                x = x.strip()
                if x.startswith('s'):
                    return 'S[%d]' % int(x[1:])
                if x.startswith('d'):
                    return 'S[%d]' % (2 * int(x[1:]))
                raise Refuse('vfp reg %r' % x)
            def vlist(ops_s):
                # {s8, s9, s10} or {s8-s11} or {d0, d1}
                mm2 = re.match(r'^\{([^}]*)\}', ops_s.strip())
                if not mm2:
                    raise Refuse('vfp list %r' % ops_s)
                body = mm2.group(1).replace(' ', '')
                regs = []
                for part in body.split(','):
                    if '-' in part:
                        a0, b0 = part.split('-')
                        n0, n1 = int(a0[1:]), int(b0[1:])
                        step = 1 if n1 >= n0 else -1
                        for k in range(n0, n1 + step, step):
                            regs.append(a0[0] + str(k))
                    else:
                        regs.append(part)
                return regs
            if base in ('vldr', 'vstr'):
                mo = re.match(r'^\[([a-z0-9]+)(?:,\s*([^\]]*))?\](!?)$', ops[1])
                if not mo:
                    raise Refuse('vfp mem %r' % ops[1])
                rb, off, bang = mo.group(1), mo.group(2), mo.group(3)
                ad = expr(rb, pcv)
                if off:
                    ad = '(%s) + (%s)' % (ad, expr(off, pcv))
                if base == 'vldr':
                    if ops[0].startswith('s'):
                        C('%s = uf32(%s);' % (sreg(ops[0]), ad))
                    else:
                        C('{ uint32_t _a = %s; %s = uf32(_a); %s = uf32(_a + 4); }'
                          % (ad, sreg(ops[0]), sreg('s%d' % (2 * int(ops[0][1:]) + 1))))
                else:
                    if ops[0].startswith('s'):
                        C('uw32(%s, fbits(%s));' % (ad, sreg(ops[0])))
                    else:
                        C('{ uint32_t _a = %s; uw32(_a, fbits(%s)); uw32(_a + 4, fbits(%s)); }'
                          % (ad, sreg(ops[0]), sreg('s%d' % (2 * int(ops[0][1:]) + 1))))
                if bang:
                    C('%s = %s;' % (rb, ad))
                continue
                
                if bang:
                    C('%s = %s;' % (rb, ad))
                continue
            if base in ('vldmia', 'vldmdb', 'vstmia', 'vstmdb', 'vpush', 'vpop'):
                if base == 'vpush':
                    rb = 'sp'
                    lst = vlist(ops[0])
                elif base == 'vpop':
                    rb = 'sp'
                    lst = vlist(ops[0])
                else:
                    rb = ops[0].rstrip('!')
                    lst = vlist(ops[1])
                xform = m.endswith('x')   # FPA extended format: one exponent
                words = []                # word for the WHOLE transfer (at the
                for r0 in lst:            # high end), 2 words per register
                    if r0.startswith('s'):
                        words.append(int(r0[1:]))
                    else:
                        words.append(2 * int(r0[1:]))
                        words.append(2 * int(r0[1:]) + 1)
                if xform:
                    words.append(-1)      # the FPA exponent word (dead for VFP)
                wb = base in ('vpush', 'vpop') or ops[0].endswith('!')
                dec_ = base in ('vstmdb', 'vpush', 'vldmdb')
                if dec_:
                    C('%s = %s - %d;' % (rb, rb, 4 * len(words)))
                base_reg = rb
                for i, n0 in enumerate(words):
                    if n0 < 0:
                        # FPA extended exponent word: real FPA state that the
                        # VFP-mapped recomp cannot reproduce.  It is dead for
                        # the save/restore pairs the game uses, so leave the
                        # slot untouched (also keeps the differential clean).
                        continue
                    if base in ('vstmdb', 'vstmia', 'vpush'):
                        C('uw32(%s + %d, fbits(S[%d]));' % (base_reg, 4 * i, n0))
                    else:
                        C('S[%d] = uf32(%s + %d);' % (n0, base_reg, 4 * i))
                if wb and not dec_:
                    C('%s = %s + %d;' % (rb, rb, 4 * len(words)))
                continue
            if base == 'vmov':
                # vmov sD, sN | vmov sD, #imm | vmov rX, sN | vmov sD, rX
                # vmov rA, rB, dN | vmov dN, rA, rB  (core-register pair <-> D)
                if len(ops) == 3 and ops[2].startswith('d'):
                    dn = 2 * int(ops[2][1:])
                    C('%s = fbits(S[%d]);' % (ops[0], dn))
                    C('%s = fbits(S[%d]);' % (ops[1], dn + 1))
                    continue
                if len(ops) == 3 and ops[0].startswith('d'):
                    dn = 2 * int(ops[0][1:])
                    C('S[%d] = ffrombits(%s);' % (dn, ops[1]))
                    C('S[%d] = ffrombits(%s);' % (dn + 1, ops[2]))
                    continue
                if ops[1].startswith('#'):
                    imm8 = int(ops[1][1:], 0)
                    b6 = (imm8 >> 6) & 1
                    e = ((1 - b6) << 5) | (b6 << 4) | (b6 << 3) | (b6 << 2) | (b6 << 1) | ((imm8 >> 5) & 1)
                    u = (((imm8 >> 7) & 1) << 31) | (e << 25) | ((imm8 & 0x1F) << 19)
                    C('%s = ffrombits(%#xu);' % (sreg(ops[0]), u))
                elif ops[0].startswith(('s', 'd')) and ops[1].startswith(('s', 'd')):
                    if ops[0].startswith('d') or ops[1].startswith('d'):
                        # a d-register move copies 8 bytes (two S words)
                        C('memcpy(&S[%d], &S[%d], 8);' % (2 * int(ops[0][1:]), 2 * int(ops[1][1:])))
                    else:
                        C('%s = %s;' % (sreg(ops[0]), sreg(ops[1])))
                elif ops[0].startswith(('s', 'd')):
                    C('%s = ffrombits(%s);' % (sreg(ops[0]), ops[1]))
                else:
                    C('%s = fbits(%s);' % (ops[0], sreg(ops[1])))
                continue
            if base in ('vadd', 'vsub', 'vmul', 'vdiv', 'vnmul') and '.f64' in m:
                # double-precision forms: the d-register is two S words (low,
                # high) read as a native double
                dd, nd, md = ops[0], ops[1], ops[2]
                op = {'vadd': '+', 'vsub': '-', 'vmul': '*', 'vdiv': '/',
                      'vnmul': '*'}[base]
                neg = '-' if base == 'vnmul' else ''
                C('{ double _a, _b; memcpy(&_a, &S[%d], 8); memcpy(&_b, &S[%d], 8); '
                  '_a = arm_vfp_nan_d(%s(_a %s _b)); memcpy(&S[%d], &_a, 8); }'
                  % (2 * int(nd[1:]), 2 * int(md[1:]), neg, op, 2 * int(dd[1:])))
                continue
            if base in ('vmla', 'vmls', 'vnmla', 'vnmls') and '.f64' in m:
                dd, nd, md = ops[0], ops[1], ops[2]
                expr_d = {'vmla': '(_a + (_b * _c))', 'vmls': '(_a - (_b * _c))',
                          'vnmla': '(-(_a + (_b * _c)))',
                          'vnmls': '((_b * _c) - _a)'}[base]
                C('{ double _a, _b, _c; memcpy(&_a, &S[%d], 8); memcpy(&_b, &S[%d], 8); '
                  'memcpy(&_c, &S[%d], 8); _a = arm_vfp_nan_d(%s); memcpy(&S[%d], &_a, 8); }'
                  % (2 * int(dd[1:]), 2 * int(nd[1:]), 2 * int(md[1:]), expr_d, 2 * int(dd[1:])))
                continue
            if base in ('vabs', 'vneg') and '.f64' in m:
                dn = 2 * int(ops[0][1:]) + 1   # the sign bit lives in the HIGH word
                if base == 'vabs':
                    C('S[%d] = ffrombits(fbits(S[%d]) & 0x7FFFFFFFu);' % (dn, dn))
                else:
                    C('S[%d] = ffrombits(fbits(S[%d]) ^ 0x80000000u);' % (dn, dn))
                continue
            if base == 'vsqrt' and '.f64' in m:
                dn = 2 * int(ops[0][1:])
                C('{ double _a; memcpy(&_a, &S[%d], 8); _a = arm_vfp_nan_d(sqrt(_a)); '
                  'memcpy(&S[%d], &_a, 8); }' % (2 * int(ops[1][1:]), dn))
                continue
            if base in ('vadd', 'vsub', 'vmul', 'vdiv', 'vnmul'):
                d0, n0, m0 = sreg(ops[0]), sreg(ops[1]), sreg(ops[2])
                op = {'vadd': '+', 'vsub': '-', 'vmul': '*', 'vdiv': '/', 'vnmul': '*'}[base]
                if base == 'vnmul':
                    C('%s = arm_vfp_nan(-(%s %s %s));' % (d0, n0, op, m0))
                else:
                    C('%s = arm_vfp_nan(%s %s %s);' % (d0, n0, op, m0))
                continue
            if base in ('vnmla', 'vnmls'):
                d0, n0, m0 = sreg(ops[0]), sreg(ops[1]), sreg(ops[2])
                if base == 'vnmla':
                    C('%s = arm_vfp_nan(-(%s + (%s * %s)));' % (d0, d0, n0, m0))
                else:
                    # VNMLS is (sN*sM) - sD, NOT a negated subtraction: the
                    # final negation would flip +0.0 to -0.0 (pinned with the
                    # single-instruction harness: zeros -> +0.0)
                    C('%s = arm_vfp_nan((%s * %s) - %s);' % (d0, n0, m0, d0))
                continue
            if base in ('vmla', 'vmls'):
                d0, n0, m0 = sreg(ops[0]), sreg(ops[1]), sreg(ops[2])
                if base == 'vmla':
                    C('%s = arm_vfp_nan(%s + (%s * %s));' % (d0, d0, n0, m0))
                else:
                    C('%s = arm_vfp_nan(%s - (%s * %s));' % (d0, d0, n0, m0))
                continue
            if base in ('vabs', 'vneg'):
                d0, m0 = sreg(ops[0]), sreg(ops[1])
                if base == 'vabs':
                    C('%s = ffrombits(fbits(%s) & 0x7FFFFFFFu);' % (d0, m0))
                else:
                    C('%s = ffrombits(fbits(%s) ^ 0x80000000u);' % (d0, m0))
                continue
            if base == 'vsqrt':
                C('%s = arm_vfp_nan(sqrtf(%s));' % (sreg(ops[0]), sreg(ops[1])))
                continue
            if base == 'vcvt':
                # vcvt.f32.s32 sD, sM | vcvt.s32.f32 sD, sM | ...u32
                mm3 = re.match(r'^([a-z0-9]+)\s*,\s*([a-z0-9]+)$', ', '.join(ops))
                if not mm3:
                    raise Refuse('vcvt form %r' % m)
                dst, src = ops[0], ops[1]
                if 'f64.f32' in m:
                    C('{ double _t = (double)%s; uint64_t _u; memcpy(&_u, &_t, 8); %s = ffrombits((uint32_t)_u); %s = ffrombits((uint32_t)(_u >> 32)); }'
                      % (sreg(src), sreg(dst), sreg('s%d' % (2 * int(dst[1:]) + 1))))
                elif 'f32.f64' in m:
                    C('{ uint64_t _u = (uint64_t)fbits(%s) | ((uint64_t)fbits(%s) << 32); double _t; memcpy(&_t, &_u, 8); %s = arm_vfp_nan((float)_t); }'
                      % (sreg(src), sreg('s%d' % (2 * int(src[1:]) + 1)), sreg(dst)))
                elif 'f64.s32' in m:
                    C('{ double _t = (double)(int32_t)fbits(%s); uint64_t _u; memcpy(&_u, &_t, 8); %s = ffrombits((uint32_t)_u); %s = ffrombits((uint32_t)(_u >> 32)); }'
                      % (sreg(src), sreg(dst), sreg('s%d' % (2 * int(dst[1:]) + 1))))
                elif 'f64.u32' in m:
                    C('{ double _t = (double)(uint32_t)fbits(%s); uint64_t _u; memcpy(&_u, &_t, 8); %s = ffrombits((uint32_t)_u); %s = ffrombits((uint32_t)(_u >> 32)); }'
                      % (sreg(src), sreg(dst), sreg('s%d' % (2 * int(dst[1:]) + 1))))
                elif 's32.f64' in m:
                    C('{ double _t; memcpy(&_t, &S[%d], 8); %s = ffrombits(vcvt_s32_f64(_t)); }'
                      % (2 * int(src[1:]), sreg(dst)))
                elif 'u32.f64' in m:
                    C('{ double _t; memcpy(&_t, &S[%d], 8); %s = ffrombits(vcvt_u32_f64(_t)); }'
                      % (2 * int(src[1:]), sreg(dst)))
                elif 's32.f32' in m:
                    C('%s = ffrombits(vcvt_s32_f32(%s));' % (sreg(dst), sreg(src)))
                elif 'u32.f32' in m:
                    C('%s = ffrombits(vcvt_u32_f32(%s));' % (sreg(dst), sreg(src)))
                elif 'f32.s32' in m:
                    C('%s = arm_vfp_nan((float)(int32_t)fbits(%s));' % (sreg(dst), sreg(src)))
                elif 'f32.u32' in m:
                    C('%s = arm_vfp_nan((float)(uint32_t)fbits(%s));' % (sreg(dst), sreg(src)))
                else:
                    raise Refuse('vcvt %s' % m)
                continue
            raise Refuse('vfp %s %s' % (m, ins.op_str))
        if base == 'smulbb':
            # signed 16x16 -> 32 multiply (DSP)
            C('%s = (uint32_t)((int32_t)(int16_t)(%s) * (int32_t)(int16_t)(%s));'
              % (ops[0], expr(ops[1], pcv), expr(ops[2], pcv)))
            continue
        if base in ('vcmp', 'vcmpe'):
            if cc is not None:
                raise Refuse('conditional %s' % m)
            has_fp[0] = True
            if '.f64' in m or ops[0].startswith('d'):
                # double-precision compare: each operand is a d-register
                # (two S words) - comparing the low words as floats is wrong.
                if not ops[0].startswith('d'):
                    raise Refuse('vcmp f64 src %r' % ops[0])
                da = 2 * int(ops[0][1:])
                if ops[1].startswith('#'):
                    w('    { double _a; memcpy(&_a, &S[%d], 8);' % da)
                    w('    _fvp = (_a < 0.0) ? 2 : (_a > 0.0) ? 1 : (_a == 0.0) ? 0 : 3; }')
                else:
                    if not ops[1].startswith('d'):
                        raise Refuse('vcmp f64 rhs %r' % ops[1])
                    db = 2 * int(ops[1][1:])
                    w('    { double _a, _b; memcpy(&_a, &S[%d], 8); memcpy(&_b, &S[%d], 8);' % (da, db))
                    w('    _fvp = (_a < _b) ? 2 : (_a > _b) ? 1 : (_a == _b) ? 0 : 3; }')
            else:
                a0 = sreg(ops[0])
                b0 = sreg(ops[1]) if not ops[1].startswith('#') else 'ffrombits(0x00000000u)'
                w('    _fvp = (%s < %s) ? 2 : (%s > %s) ? 1 : (%s == %s) ? 0 : 3;'
                  % (a0, b0, a0, b0, a0, b0))
            for st in fl.set_vfp():
                w('    ' + st)
            continue
        if base == 'vmrs':
            if ops[0] in ('apsr_nzcv', 'APSR_nzcv'):
                # vcmp writes FPSCR; conditional instructions test the APSR,
                # which only sees those flags after THIS vmrs.  Commit the
                # pending FPSCR-model flags now (a vcmp followed directly by a
                # conditional instruction must use the OLD APSR, which is what
                # keeping _fv separate from _fvp models).
                w('    _fv = _fvp;')
                for st in fl.set_vfp():
                    w('    ' + st)
                continue
            raise Refuse('vmrs %s (FPSCR value not modelled)' % ops[0])
        if base == 'vmsr':
            raise Refuse('vmsr')
        if base in ('adc', 'sbc', 'rrx', 'pkhbt', 'pkhtb', 'sadd16', 'ssat', 'usat'):
            raise Refuse('unsupported %s' % m)
        if base in ('bx', 'blx') and ops[0] != 'lr':
            ret = a + 4
            if base == 'blx':
                C('lr = BASE + %#x;' % ret)
            w('    { uint32_t _R[16];')
            w('    _R[0] = r0; _R[1] = r1; _R[2] = r2; _R[3] = r3;')
            w('    _R[4] = r4; _R[5] = r5; _R[6] = r6; _R[7] = r7;')
            w('    _R[8] = r8; _R[9] = r9; _R[10] = r10; _R[11] = r11; _R[12] = r12;')
            w('    _R[13] = sp; _R[14] = lr; _R[15] = 0;')
            w('    uint32_t _fn = %s & ~1u;' % ops[0])
            w('    if (auto_enabled(_fn)) {')
            w('        auto_dispatch(_fn, _R, S, sp);')
            w('    } else if (probe_dispatch(_fn, _R, S, sp)) {')
            w('        /* handled in-process by a native probe */')
            w('    } else {')
            w('        usetreg_batch_s(S);   // callee sees live VFP state\n')
            w('        _R[0] = call_emulated_regs(_fn, (uint32_t[]){ r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12 }, sp);')
            w('        _R[1] = ureg(UC_ARM_REG_R1); _R[2] = ureg(UC_ARM_REG_R2); _R[3] = ureg(UC_ARM_REG_R3);')
            w('        _R[12] = ureg(UC_ARM_REG_R12); _R[14] = ureg(UC_ARM_REG_LR);')
            w('        ureg_batch_s(S);')
            w('        if (_R[14] == LR_SENTINEL) _R[14] = BASE + %#x;' % ret)
            w('    }')
            w('    r0 = _R[0]; r1 = _R[1]; r2 = _R[2]; r3 = _R[3]; r12 = _R[12]; lr = _R[14]; }')
            continue
        if base in ('bx', 'blx'):
            raise Refuse('unsupported %s' % m)
        raise Refuse('unhandled %s %s' % (m, ins.op_str))

    return out, order, calls, has_fp[0]


def gen_function(elf, addr, name, maxn=4000, native_set=None):
    body, order, calls, has_fp = translate(elf, addr, maxn, native_set)
    ncalls = len(calls)
    nset = native_set or set()
    all_direct = all(t in nset or (0x5c000 <= t < 0x5d000) for _, t in calls)
    lines = []
    lines.append('// %s @ %#x (%d insns, %d calls%s%s)' % (name, addr, len(order), ncalls,
                 ', all direct' if all_direct else '', ', VFP' if has_fp else ''))
    lines.append('static int auto_%x(uint32_t* R, float* S, uint32_t sp_entry) {' % addr)
    lines.append('    (void)sp_entry;')
    lines.append('    uint32_t _wcur0 = g_wcur; g_wcur = 0x%x;   // write-log writer id' % addr)
    for i in range(13):
        lines.append('    uint32_t r%d = R[%d];' % (i, i))
    lines.append('    uint32_t sp = R[13], lr = R[14];')
    lines.append('    uint32_t _fa = 0, _fb = 0, _fd = 0, _fa2 = 0, _fb2 = 0;')
    lines.append('    (void)_fa; (void)_fb; (void)_fd; (void)_fa2; (void)_fb2;')
    lines.append('    uint32_t _fv = 0, _fvp = 0; (void)_fv; (void)_fvp;')
    lines.append('    (void)lr; (void)S;')
    if has_fp:
        # ARM FPSCR in this engine is 0x83030010 (FZ + DN): SSE FTZ+DAZ matches
        # FZ; NaN results go through arm_vfp_nan (DN).  Per-function local
        # so nested native calls cannot corrupt each other's MXCSR.
        lines.append('    uint32_t _csr = _mm_getcsr();')
        lines.append('    _mm_setcsr(_csr | 0x8040u);')
    lines.extend(body)
    lines.append('  L_ret:;')
    lines.append('    g_wcur = _wcur0;')
    if has_fp:
        lines.append('    _mm_setcsr(_csr);')
    for i in range(13):
        lines.append('    R[%d] = r%d;' % (i, i))
    lines.append('    R[13] = sp; R[14] = lr;')
    lines.append('    return 1;')
    lines.append('}')
    lines.append('')
    return lines, ncalls, all_direct


_SYM_ADDRS = []


def load_symbols(path):
    global _SYM_ADDRS
    syms = {}
    try:
        for ln in open(path, encoding='latin-1'):
            m = re.match(r'^([0-9a-f]{8}) [Tt] (.*)$', ln)
            if m:
                syms[int(m.group(1), 16)] = m.group(2)
    except OSError:
        pass
    _SYM_ADDRS = sorted(syms)
    return syms


def func_end(addr, maxn):
    """end of the function containing addr (next symbol), else addr + maxn*4"""
    import bisect
    i = bisect.bisect_right(_SYM_ADDRS, addr)
    if i < len(_SYM_ADDRS) and _SYM_ADDRS[i] - addr < maxn * 4:
        return _SYM_ADDRS[i]
    return addr + maxn * 4


def main():
    if len(sys.argv) >= 2 and sys.argv[1] == '--gen':
        elf_path, list_path, out_path = sys.argv[2], sys.argv[3], sys.argv[4]
        elf = open(elf_path, 'rb').read()
        syms = load_symbols(os.environ.get('A5_SYMBOLS',
                                           r'analysis\rea\symbols_demangled.txt'))
        # phase 1: which entries translate (a call to any of them can then be a
        # direct native call instead of an emulated round-trip)
        cand = []
        for ln in open(list_path):
            ln = ln.split('//')[0].strip()
            if not ln:
                continue
            force_ver = ln.split()[0].endswith('!')
            trusted = ln.split()[0].endswith('~')
            gated = ln.split()[0].endswith('^')
            ln = ln.replace('!', '', 1).replace('~', '', 1).replace('^', '', 1)
            addr = int(ln.split()[0], 16)
            cand.append((addr, force_ver, trusted, gated))
        nset = set()
        for addr, fv, tr, gd in cand:
            try:
                translate(elf, addr)
                nset.add(addr)
            except Refuse:
                pass
        entries = []
        seen = set()
        for addr, force_ver, trusted, gated in cand:
            if addr in seen:
                continue
            seen.add(addr)
            name = syms.get(addr, '?')
            try:
                lines, ncalls, all_direct = gen_function(elf, addr, name, native_set=nset)
                entries.append((addr, name, lines, ncalls, force_ver and not gated, trusted and not gated, gated))
                print('OK   %#08x %-60s %d insns %d calls%s%s' % (addr, name[:60], len(lines), ncalls,
                      ' [direct]' if all_direct else '',
                      ' [force-verifiable]' if force_ver else ''))
            except Refuse as e:
                print('SKIP %#08x %-60s %s' % (addr, name[:60], e))
        with open(out_path, 'w') as f:
            f.write('// auto-generated by analysis/tools/autotrans.py --gen - DO NOT EDIT\n')
            f.write('// faithful ARM->C translations; validated per-call by A5_AUTO_VERIFY\n')
            f.write('static int g_auto_bypass = 0;\n')
            for addr, name, lines, ncalls, fv, tr, gd in entries:
                f.write('static int auto_%x(uint32_t*, float*, uint32_t);\n' % addr)
            f.write('static int auto_is_auto(uint32_t);\n')
            f.write('static int auto_verifiable(uint32_t);\n')
            f.write('static int auto_trusted(uint32_t);\n')
            f.write('static int auto_dispatch(uint32_t, uint32_t*, float*, uint32_t);\n')
            f.write('\n')
            for addr, name, lines, ncalls, fv, tr, gd in entries:
                f.writelines(l + '\n' for l in lines)
            f.write('static int auto_is_auto(uint32_t a) {\n    switch (a - BASE) {\n')
            for addr, name, lines, ncalls, fv, tr, gd in entries:
                f.write('    case %#x: return 1;   // %s\n' % (addr, name[:70]))
            f.write('    }\n    return 0;\n}\n\n')
            f.write('static const uint32_t auto_addrs[] = {\n')
            for i in range(0, len(entries), 8):
                f.write('    ' + ', '.join('%#x' % e[0] for e in entries[i:i+8]) + ',\n')
            f.write('};\n')
            f.write('#define AUTO_N (sizeof(auto_addrs) / sizeof(auto_addrs[0]))\n\n')
            f.write('static int auto_dispatch(uint32_t a, uint32_t* R, float* S, uint32_t sp) {\n    switch (a - BASE) {\n')
            for addr, name, lines, ncalls, fv, tr, gd in entries:
                f.write('    case %#x: return auto_%x(R, S, sp);\n' % (addr, addr))
            f.write('    }\n    return 0;\n}\n\n')
            f.write('static int auto_index(uint32_t a) {\n    switch (a - BASE) {\n')
            for i, (addr, name, lines, ncalls, fv, tr, gd) in enumerate(entries):
                f.write('    case %#x: return %d;\n' % (addr, i))
            f.write('    }\n    return -1;\n}\n\n')
            # a function is verifiable only when it makes no emulated calls
            # (callee writes are not in the helper log, so the state could not
            # be restored exactly for the interpreter re-run)
            f.write('static int auto_verifiable(uint32_t a) {\n    switch (a - BASE) {\n')
            for addr, name, lines, ncalls, fv, tr, gd in entries:
                f.write('    case %#x: return %d;   // %s\n' % (addr, 1 if (fv and not gd) else 0, name[:60]))
            f.write('    }\n    return 0;\n}\n')
            f.write('static int auto_trusted(uint32_t a) {\n    switch (a - BASE) {\n')
            for addr, name, lines, ncalls, fv, tr, gd in entries:
                f.write('    case %#x: return %d;   // %s\n' % (addr, 1 if tr else 0, name[:60]))
            f.write('    }\n    return 0;\n}\n')
        print('wrote %s (%d functions)' % (out_path, len(entries)))
        return
    elf = open(sys.argv[1], 'rb').read()
    addr = int(sys.argv[2], 16)
    maxn = int(sys.argv[3]) if len(sys.argv) > 3 else 4000
    syms = load_symbols(os.environ.get('A5_SYMBOLS',
                                       r'analysis\rea\symbols_demangled.txt'))
    try:
        lines, ncalls, _ = gen_function(elf, addr, syms.get(addr, '?'))
        print('\n'.join(lines))
    except Refuse as e:
        print('REFUSED: %s' % e, file=sys.stderr)
        sys.exit(1)


if __name__ == '__main__':
    main()
