#!/usr/bin/env python3
"""Write a T-symbol map from an ELF shared object for autotrans.py.

Usage:
    python extract_symbols.py libgame.so analysis/rea/symbols_demangled.txt

The translator only needs addresses for correctness; names are used for
comments and diagnostics.  This tool removes the need to ship a pre-made
symbol dump with the repository.
"""
from __future__ import annotations

import argparse
import pathlib
import sys


def extract(so_path: str | pathlib.Path, out_path: str | pathlib.Path) -> int:
    try:
        from elftools.elf.elffile import ELFFile
    except ImportError:
        print("pyelftools is required: python -m pip install pyelftools",
              file=sys.stderr)
        return 2

    syms: dict[int, str] = {}
    with open(so_path, "rb") as f:
        elf = ELFFile(f)
        for section_name in (".symtab", ".dynsym"):
            section = elf.get_section_by_name(section_name)
            if section is None:
                continue
            for sym in section.iter_symbols():
                if sym["st_info"]["type"] != "STT_FUNC":
                    continue
                addr = int(sym["st_value"]) & ~1
                if addr == 0:
                    continue
                name = sym.name or "?"
                # prefer a named symbol over an empty/duplicate alias
                if addr not in syms or syms[addr] == "?":
                    syms[addr] = name

    out_path = pathlib.Path(out_path)
    out_path.parent.mkdir(parents=True, exist_ok=True)
    with out_path.open("w", encoding="utf-8", newline="\n") as f:
        for addr in sorted(syms):
            f.write("%08x T %s\n" % (addr, syms[addr]))
    print("wrote %d function symbols to %s" % (len(syms), out_path))
    return 0


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("so", help="input ELF shared object")
    ap.add_argument("out", help="output symbol map")
    args = ap.parse_args()
    return extract(args.so, args.out)


if __name__ == "__main__":
    raise SystemExit(main())
