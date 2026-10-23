#!/usr/bin/env python3
"""Strip ARM instruction bytes from an engine image while preserving data.

The native host only needs the engine's data image: strings, globals, vtables,
relocations and PC-relative literal pools.  Every ARM instruction has already
been translated to C.  This tool zeroes the instruction bytes in `.text` but
keeps bytes that instructions read as data (PC-relative literals, ADR targets,
VFP constant pools, etc.).

Usage:
    python strip_engine.py input.so output.so
    from strip_engine import strip_engine
    data = strip_engine(open("libasphalt5.so","rb").read())
"""
from __future__ import annotations

import argparse
import pathlib
import struct
import sys

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_OP_REG, ARM_REG_PC


def _elf_text(data: bytes) -> tuple[int, int, int]:
    if len(data) < 0x34 or data[:4] != b"\x7fELF":
        raise ValueError("not an ELF file")
    if data[4] != 1 or data[5] != 1:
        raise ValueError("expected ELF32 little-endian")
    e_shoff = struct.unpack_from("<I", data, 0x20)[0]
    e_shentsize = struct.unpack_from("<H", data, 0x2E)[0]
    e_shnum = struct.unpack_from("<H", data, 0x30)[0]
    e_shstrndx = struct.unpack_from("<H", data, 0x32)[0]
    if e_shoff == 0 or e_shentsize < 40 or e_shnum == 0 or e_shstrndx >= e_shnum:
        raise ValueError("no usable section table")

    def sh(i: int) -> tuple[int, int, int, int, int]:
        off = e_shoff + i * e_shentsize
        name, typ, flags, addr, offset, size = struct.unpack_from("<IIIIII", data, off)
        return name, typ, flags, addr, offset, size

    _, _, _, _, str_off, str_size = sh(e_shstrndx)
    strtab = data[str_off:str_off + str_size]
    for i in range(e_shnum):
        name_off, _, flags, addr, offset, size = sh(i)
        end = strtab.find(b"\0", name_off)
        name = strtab[name_off:end].decode("latin-1") if end >= 0 else ""
        if name == ".text":
            if not (flags & 0x4):   # SHF_EXECINSTR
                raise ValueError(".text is not executable?")
            return offset, addr, size
    raise ValueError("no .text section")


def strip_engine(data: bytes, log=None) -> bytes:
    """Return a copy of *data* with instruction bytes zeroed.

    Literal-pool bytes referenced by PC-relative loads, ADR/ADD/SUB PC
    sequences and VFP constant loads are preserved.  Non-instruction bytes are
    left untouched.
    """
    text_off, text_addr, text_size = _elf_text(data)
    code = bytes(data[text_off:text_off + text_size])
    code_mask = bytearray(text_size)     # 1 = instruction byte
    data_mask = bytearray(text_size)     # 1 = referenced data byte (wins)
    md = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    md.detail = True
    n_ins = 0
    n_data = 0

    def mark_code(off: int, size: int) -> None:
        a = max(0, off)
        b = min(text_size, off + size)
        if b > a:
            code_mask[a:b] = b"\x01" * (b - a)

    def mark_data(addr: int, size: int) -> None:
        nonlocal n_data
        off = addr - text_addr
        if off < 0 or off >= text_size:
            return
        a = max(0, off)
        b = min(text_size, off + size)
        if b > a:
            data_mask[a:b] = b"\x01" * (b - a)
            n_data += 1

    def mark_pointer_target(value: int, size: int = 0x100) -> None:
        # A literal/table slot may contain a guest pointer into .text (for
        # example a jump table or vtable).  Keep a conservative window at the
        # target; it is data, not executed.
        if text_addr <= value < text_addr + text_size:
            mark_data(value, size)

    # Capstone's streaming disassembler stops at the first literal pool.
    # Decode one 4-byte word at a time; undecodable words are left untouched.
    addr = text_addr
    end = text_addr + text_size
    while addr + 4 <= end:
        off = addr - text_addr
        ins = next(md.disasm(code[off:off + 4], addr), None)
        if ins is None:
            addr += 4
            continue
        mark_code(off, ins.size)
        n_ins += 1
        ops = ins.operands

        # PC-relative memory operand: ldr/ldrb/ldrh/ldrd/vldr etc.
        for op in ops:
            if op.type != ARM_OP_MEM or op.mem.base != ARM_REG_PC:
                continue
            if op.mem.index not in (0,):
                # Dynamic PC-relative table (e.g. ldr r0, [pc, r1, lsl #2]):
                # the table is nearby, but its exact extent is register-
                # dependent.  Keep a conservative window; the rest of .text
                # is still stripped.  The translator never executes these
                # bytes, but the table itself is read by the native code.
                mark_data(ins.address, 0x1000)
                continue
            target = ins.address + 8 + op.mem.disp
            # 8 bytes covers ldr/ldrd/vldr s/d and the adjacent literal.
            mark_data(target, 8)
            # A literal may hold a guest pointer to a table/vtable in .text.
            toff = target - text_addr
            if 0 <= toff and toff + 4 <= len(code):
                mark_pointer_target(struct.unpack_from("<I", code, toff)[0])

        # adr / add/sub rX, pc, #imm: address of a literal/string/table.
        if ins.mnemonic.startswith(("add", "sub")) and len(ops) >= 3:
            if (ops[0].type == ARM_OP_REG and ops[0].reg != ARM_REG_PC and
                    ops[1].type == ARM_OP_REG and ops[1].reg == ARM_REG_PC and
                    ops[2].type == ARM_OP_IMM):
                delta = ops[2].imm if ins.mnemonic.startswith("add") else -ops[2].imm
                mark_data(ins.address + 8 + delta, 0x100)
        addr += 4

    out = bytearray(data)
    zeroed = 0
    for i in range(text_size):
        if code_mask[i] and not data_mask[i]:
            out[text_off + i] = 0
            zeroed += 1
    if log:
        log("strip: %d instructions, %d data targets, %d/%d text bytes zeroed"
            % (n_ins, n_data, zeroed, text_size))
    return bytes(out)


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("input", help="input ELF shared object")
    ap.add_argument("output", help="output stripped ELF")
    args = ap.parse_args()
    data = pathlib.Path(args.input).read_bytes()
    out = strip_engine(data, log=print)
    pathlib.Path(args.output).write_bytes(out)
    print("wrote", args.output, len(out), "bytes")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
