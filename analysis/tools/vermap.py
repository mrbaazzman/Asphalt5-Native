#!/usr/bin/env python3
"""Version mapping helpers for porting the Asphalt 5 host to another engine build.

The host and the post-generation patches are written against one reference
engine (Asphalt 5 HD 3.4.1, armeabi).  Every engine address they use is
recorded as symbol-name + offset here, so another build of the same engine can
be mapped by name instead of by address.

Usage:
    # one-time: dump the reference symbol table (interoperability metadata)
    python analysis/tools/vermap.py snapshot libasphalt5-3.4.1.so \
        analysis/version/symbols-3.4.1.txt

    # dry run: which host addresses resolve against a target engine
    python analysis/tools/vermap.py report \
        analysis/version/symbols-3.4.1.txt libasphalt5-3.3.7.so \
        port/a5host/src

    # copy the host sources and rewrite engine addresses for the target
    python analysis/tools/vermap.py rewrite \
        analysis/version/symbols-3.4.1.txt libasphalt5-3.3.7.so \
        port/a5host/src build/a5host_337/src

    # translate the reference gate list to target addresses, then append every
    # other target function so the native build has full coverage
    python analysis/tools/vermap.py gatelist \
        analysis/version/symbols-3.4.1.txt libasphalt5-3.3.7.so \
        analysis/autogen/list.txt build/a5host_337/list.txt

    # postgen anchor addresses for the target
    python analysis/tools/vermap.py anchors \
        analysis/version/symbols-3.4.1.txt libasphalt5-3.3.7.so \
        build/a5host_337/anchors.json
"""
from __future__ import annotations

import argparse
import bisect
import json
import pathlib
import re
import shutil
import struct
import sys
from dataclasses import dataclass

from elftools.elf.elffile import ELFFile

ENGINE_SECTIONS = (".text", ".data", ".bss", ".rodata", ".plt",
                   ".data.rel.ro", ".got", ".init_array")

# Literals in the host that look like engine addresses but are not.
#   0x1fffff / 0x200000 / 0x100000 : region and hook-range sizes
#   0x643xx                        : Scene object field offsets (inside a
#                                    >0x64000-byte heap object, coincidentally
#                                    inside the .text address range)
NON_ENGINE_LITERALS = {
    0x100000, 0x1fffff, 0x200000,
    0x64328, 0x6432c, 0x64330, 0x64334,
}

# Reference addresses that are section boundaries, not symbols.
SECTION_ANCHORS = {
    0x5C368: (".plt", 0),
    0x5CB78: (".text", 0),
    0x1BC7B0: (".rodata", 0),
}

# postgen anchors, expressed as reference addresses.
ANCHOR_ADDRS = {
    "decompress": 0x14690C,
    "helper_twiddle": 0x146898,
    "helper_interp": 0x146528,
    "helper_modulation": 0x14670C,
    "updatecars": 0x9EF18,
    "updatekeys": 0x178FDC,
    "main_game": 0x1FA798,
    "car_tick": 0x9F1E4,
}

HEX_RE = re.compile(r"0x([0-9a-fA-F]+)([uUlL]*)\b")


# ------------------------------------------------------------------ ELF model
@dataclass
class Sym:
    addr: int
    size: int
    name: str
    kind: str          # 'F' function, 'O' object, 'T' thumb function

    @property
    def end(self):
        return self.addr + max(self.size, 1)


class Engine:
    def __init__(self, path):
        self.path = pathlib.Path(path)
        self.data = self.path.read_bytes()
        with self.path.open("rb") as f:
            elf = ELFFile(f)
            self.sections = {}
            for s in elf.iter_sections():
                self.sections[s.name] = (int(s["sh_addr"]), int(s["sh_offset"]),
                                         int(s["sh_size"]), s["sh_type"])
                if s.name == ".shstrtab":
                    self._shstr = s
            self.segments = [(int(p["p_offset"]), int(p["p_vaddr"]),
                              int(p["p_filesz"]), int(p["p_memsz"]))
                             for p in elf.iter_segments() if p["p_type"] == "PT_LOAD"]
            self.syms = []
            seen = set()
            for sn in (".symtab", ".dynsym"):
                sec = elf.get_section_by_name(sn)
                if sec is None:
                    continue
                for sym in sec.iter_symbols():
                    t = sym["st_info"]["type"]
                    if t not in ("STT_FUNC", "STT_OBJECT"):
                        continue
                    raw = int(sym["st_value"])
                    addr = raw & ~1
                    if not addr:
                        continue
                    kind = "F" if t == "STT_FUNC" else "O"
                    if t == "STT_FUNC" and (raw & 1):
                        kind = "T"
                    n = sym.name or "?"
                    key = (addr, n, kind)
                    if key in seen:
                        continue
                    seen.add(key)
                    self.syms.append(Sym(addr, int(sym["st_size"]), n, kind))
            self.by_name = {}
            for s in self.syms:
                if s.name == "?":
                    continue
                cur = self.by_name.get(s.name)
                if cur is None or s.size > cur.size:
                    self.by_name[s.name] = s
            self.starts = {}
            for s in sorted(self.syms, key=lambda x: (x.addr, x.name)):
                self.starts.setdefault(s.addr, []).append(s)
            self._addr_sorted = sorted((s.addr for s in self.syms))
            self._by_addr = {}
            for s in self.syms:
                self._by_addr.setdefault(s.addr, []).append(s)

    def section_of(self, addr):
        for name, (a, off, size, typ) in self.sections.items():
            if typ != 8 and a <= addr < a + size:
                return name
        return None

    def vaddr_to_off(self, addr):
        for off, vaddr, filesz, _memsz in self.segments:
            if vaddr <= addr < vaddr + filesz:
                return off + (addr - vaddr)
        raise ValueError("vaddr %#x is not file-backed" % addr)

    def owner(self, addr):
        """symbol containing addr, preferring the closest start"""
        i = bisect.bisect_right(self._addr_sorted, addr)
        best = None
        # scan back; symbols may be huge (.bss objects), so allow a window
        for j in range(i - 1, max(-1, i - 64), -1):
            a = self._addr_sorted[j]
            for s in self._by_addr[a]:
                if s.addr <= addr < s.end:
                    if best is None or s.addr > best.addr:
                        best = s
                    break
        return best

    def bytes_at(self, addr, n):
        try:
            off = self.vaddr_to_off(addr)
        except ValueError:
            return b""
        return self.data[off:off + n]


def read_snapshot(path):
    out = []
    for ln in pathlib.Path(path).read_text(encoding="utf-8").splitlines():
        if not ln.strip() or ln.startswith("#"):
            continue
        parts = ln.split(None, 3)
        if len(parts) == 3:
            addr, kind, name = parts
            size = 0
        else:
            addr, kind, size, name = parts
        out.append(Sym(int(addr, 16), int(size), name, kind))
    return out


def write_snapshot(engine, path):
    lines = []
    for s in sorted(engine.syms, key=lambda x: (x.addr, x.kind, x.name)):
        lines.append("%08x %s %d %s" % (s.addr, s.kind, s.size, s.name))
    pathlib.Path(path).parent.mkdir(parents=True, exist_ok=True)
    pathlib.Path(path).write_text("\n".join(lines) + "\n", encoding="utf-8")
    print("wrote %d symbols to %s" % (len(lines), path))


# --------------------------------------------------------------- resolution
class Resolver:
    def __init__(self, ref_snapshot, target_engine, log=print):
        self.ref = Engine.__new__(Engine)      # lightweight: no ELF needed
        self.ref.syms = read_snapshot(ref_snapshot)
        self.ref.by_name = {}
        for s in self.ref.syms:
            if s.name == "?":
                continue
            cur = self.ref.by_name.get(s.name)
            if cur is None or s.size > cur.size:
                self.ref.by_name[s.name] = s
        self.ref.starts = {}
        self.ref._addr_sorted = sorted(s.addr for s in self.ref.syms)
        self.ref._by_addr = {}
        for s in self.ref.syms:
            self.ref.starts.setdefault(s.addr, []).append(s)
            self.ref._by_addr.setdefault(s.addr, []).append(s)
        # owner()/section_of() need section data only for the target
        self.tgt = target_engine
        self.log = log
        self.unresolved = []
        self.warnings = []

    def _jni_fallback(self, name):
        """match Java_* exports across a Java package rename"""
        if not name.startswith("Java_"):
            return None
        tail = "_".join(name.split("_")[-2:])
        cands = [s for n, s in self.tgt.by_name.items()
                 if n.startswith("Java_") and n.endswith("_" + tail)]
        if len({c.addr for c in cands}) == 1:
            return cands[0]
        return None

    def resolve(self, ref_addr, why=""):
        if ref_addr in SECTION_ANCHORS:
            sec, off = SECTION_ANCHORS[ref_addr]
            if sec not in self.tgt.sections:
                self.unresolved.append((ref_addr, sec, why))
                return None
            return self.tgt.sections[sec][0] + off
        # PLT stubs are 12-byte entries after the 20-byte PLT0 header; map by
        # index instead of symbol name (the stub has no symbol of its own).
        ref_eng = getattr(self, "ref_engine", None)
        if ref_eng is not None:
            ps = ref_eng.sections.get(".plt")
            ts = self.tgt.sections.get(".plt")
            if ps and ts and ps[0] <= ref_addr < ps[0] + ps[2]:
                i = (ref_addr - ps[0] - 20) // 12
                if i >= 0 and 20 + i * 12 < ts[2]:
                    return ts[0] + 20 + i * 12
        owner = self.ref.owner(ref_addr)
        if owner is None:
            # nearest preceding symbol + delta
            i = bisect.bisect_right(self.ref._addr_sorted, ref_addr)
            if i == 0:
                self.unresolved.append((ref_addr, "?", why))
                return None
            prev = self.ref._by_addr[self.ref._addr_sorted[i - 1]][0]
            self.warnings.append("%#x: no owner, using %s+%d" %
                                 (ref_addr, prev.name, ref_addr - prev.addr))
            owner = prev
        delta = ref_addr - owner.addr
        # Several symbols can share a start address (aliases); try every name
        # before giving up.
        names = [owner.name]
        for s in self.ref._by_addr.get(owner.addr, []):
            if s.name not in names:
                names.append(s.name)
        cand = None
        for name in names:
            cand = self.tgt.by_name.get(name) or self._jni_fallback(name)
            if cand is not None:
                break
        if cand is None:
            self.unresolved.append((ref_addr, owner.name, why))
            return None
        if delta == 0:
            return cand.addr
        # Object offsets are layout-stable (the object is the same type), but
        # its bytes contain relocations, so do not fingerprint objects.
        if owner.kind == "O":
            return cand.addr + delta
        cand_addr = cand.addr + delta
        # Intra-function hook points: try decreasing fingerprints.  A short
        # fingerprint still pins the instruction when register allocation in
        # the surrounding code changed.
        for length in (12, 8, 4):
            ref_print = self.ref_bytes(ref_addr, length)
            if not ref_print:
                break
            if self.tgt.bytes_at(cand_addr, length) == ref_print:
                return cand_addr
        for length in (12, 8, 4):
            ref_print = self.ref_bytes(ref_addr, length)
            if not ref_print:
                continue
            window = self.tgt.bytes_at(cand.addr, max(cand.size, delta + 0x400))
            hit = window.find(ref_print)
            if hit >= 0 and window.find(ref_print, hit + 1) < 0:
                self.warnings.append("%#x -> %s+%d (moved +%d)" %
                                     (ref_addr, owner.name, hit, hit - delta))
                return cand.addr + hit
        # fall back to the same offset; the build log names every such site
        self.warnings.append("%#x -> %s+%d (bytes changed; same offset assumed)" %
                             (ref_addr, owner.name, delta))
        return cand_addr

    def ref_bytes(self, addr, n):
        # the reference snapshot has no bytes; only used when a reference ELF
        # is supplied through set_ref_engine()
        eng = getattr(self, "ref_engine", None)
        return eng.bytes_at(addr, n) if eng else b""

    def set_ref_engine(self, engine):
        self.ref_engine = engine
        # keep section/owner data from the real reference ELF
        self.ref = engine


def collect_literals(src_root, ref_engine, resolver):
    """engine address literals used by the host sources"""
    src_root = pathlib.Path(src_root)
    uses = {}
    for p in sorted(src_root.rglob("*")):
        if p.suffix not in (".c", ".h", ".inc"):
            continue
        if p.name.startswith("autogen"):
            continue
        try:
            text = p.read_text(encoding="latin-1", errors="ignore")
        except OSError:
            continue
        for ln, line in enumerate(text.splitlines(), 1):
            for m in HEX_RE.finditer(line):
                v = int(m.group(1), 16)
                if v < 0x10000 or v in NON_ENGINE_LITERALS:
                    continue
                sec = ref_engine.section_of(v)
                if sec not in ENGINE_SECTIONS:
                    continue
                uses.setdefault(v, []).append("%s:%d" % (p.relative_to(src_root), ln))
    return uses


def rewrite_tree(ref_snapshot, target_so, src_root, dst_root, ref_so=None):
    ref_engine = Engine(ref_so) if ref_so else None
    tgt = Engine(target_so)
    res = Resolver(ref_snapshot, tgt)
    if ref_engine:
        res.set_ref_engine(ref_engine)
    else:
        raise SystemExit("rewrite needs the reference ELF (--ref-so) for fingerprints")

    src_root = pathlib.Path(src_root)
    dst_root = pathlib.Path(dst_root)
    if dst_root.exists():
        shutil.rmtree(dst_root)
    shutil.copytree(src_root, dst_root)

    uses = collect_literals(src_root, ref_engine, res)
    mapping = {}
    for v in sorted(uses):
        mapping[v] = res.resolve(v, uses[v][0])

    failed = {v: uses[v] for v, a in mapping.items() if a is None}
    for v in failed:
        res.unresolved.append((v, "rewrite", uses[v][0]))

    # rewrite the copied tree
    changed = 0
    for p in sorted(dst_root.rglob("*")):
        if p.suffix not in (".c", ".h", ".inc"):
            continue
        if p.name.startswith("autogen"):
            continue
        text = p.read_text(encoding="latin-1", errors="ignore")
        out = []
        pos = 0
        local = 0
        for m in HEX_RE.finditer(text):
            v = int(m.group(1), 16)
            if v not in mapping or mapping[v] is None:
                continue
            out.append(text[pos:m.start(1)])
            out.append("%x" % mapping[v])
            pos = m.end(1)
            local += 1
        if not local:
            continue
        out.append(text[pos:])
        p.write_text("".join(out), encoding="latin-1", newline="")
        changed += 1

    print("rewrite: %d distinct engine literals, %d files updated, %d unresolved"
          % (len(mapping), changed, len(res.unresolved)))
    for w in res.warnings:
        print("  warn:", w)
    for v, name, why in res.unresolved:
        print("  UNRESOLVED %#x %s (%s)" % (v, name, why))
    return mapping, res


def _write_rewritten(src_root, dst_root, mapping):
    """copy a source tree and replace 0x<ref> with 0x<target> in code files"""
    src_root = pathlib.Path(src_root)
    dst_root = pathlib.Path(dst_root)
    if dst_root.exists():
        shutil.rmtree(dst_root)
    shutil.copytree(src_root, dst_root)
    changed = 0
    for p in sorted(dst_root.rglob("*")):
        if p.suffix not in (".c", ".h", ".inc"):
            continue
        if p.name.startswith("autogen"):
            continue
        text = p.read_text(encoding="latin-1", errors="ignore")
        out = []
        pos = 0
        local = 0
        for m in HEX_RE.finditer(text):
            v = int(m.group(1), 16)
            if v not in mapping or mapping[v] is None:
                continue
            out.append(text[pos:m.start(1)])
            out.append("%x" % mapping[v])
            pos = m.end(1)
            local += 1
        if not local:
            continue
        out.append(text[pos:])
        p.write_text("".join(out), encoding="latin-1", newline="")
        changed += 1
    return changed


def rewrite_map(src_root, dst_root, address_map):
    mapping = {int(k, 16) if isinstance(k, str) else int(k): int(v)
               for k, v in address_map.items()}
    changed = _write_rewritten(src_root, dst_root, mapping)
    print("rewrite: %d engine literals, %d files updated" % (len(mapping), changed))
    return changed


def gen_profile(ref_snapshot, ref_so, target_so, src_root, list_path, out_path,
                label="", tolerant_data=False, default_pvrt=False,
                auto_start_click=False, logical_screen="", default_window="",
                data_manifest="", master_url_pvrt="", master_url_atc="",
                direct_pad=False):
    ref = Engine(ref_so)
    tgt = Engine(target_so)
    res = Resolver(ref_snapshot, tgt)
    res.set_ref_engine(ref)
    uses = collect_literals(src_root, ref, res)
    address_map = {}
    for v in sorted(uses):
        a = res.resolve(v, uses[v][0])
        if a is not None:
            address_map["0x%x" % v] = a
    if res.unresolved:
        for v, name, why in res.unresolved:
            print("  UNRESOLVED %#x %s (%s)" % (v, name, why))
        raise SystemExit("cannot generate a profile with unresolved literals")

    # gate list: reference entries mapped by name + every target function
    entries = []
    seen = set()
    for ln in pathlib.Path(list_path).read_text(encoding="utf-8").splitlines():
        stripped = ln.split("//")[0].strip()
        if not stripped:
            continue
        tok = stripped.split()[0]
        marker = tok[-1] if tok[-1] in "!~^" else ""
        if marker:
            tok = tok[:-1]
        addr = int(tok, 16)
        t = res.resolve(addr, "gate list")
        if t is None or t in seen:
            continue
        seen.add(t)
        name = tgt.by_name and next((s.name for s in tgt.syms if s.addr == t), "")
        entries.append((t, name))
    for s in sorted(tgt.syms, key=lambda x: x.addr):
        if s.kind != "F" or s.addr in seen:
            continue
        seen.add(s.addr)
        entries.append((s.addr, s.name))

    # anchors
    anch = {}
    for key, addr in ANCHOR_ADDRS.items():
        v = res.resolve(addr, "postgen anchor")
        if v is None:
            raise SystemExit("cannot resolve anchor %s (%#x)" % (key, addr))
        anch[key] = v
    upd = tgt.by_name.get("_ZN5Scene10UpdateCarsEv")
    if upd is None:
        raise SystemExit("target has no Scene::UpdateCars")
    if not (upd.addr <= anch["car_tick"] < upd.addr + max(upd.size, 1)):
        raise SystemExit("car_tick is outside UpdateCars")
    anch["updatecars_off"] = anch["car_tick"] - upd.addr

    import hashlib
    profile = {
        "format": 1,
        "label": label,
        "engine_sha256": hashlib.sha256(tgt.data).hexdigest(),
        "engine_size": len(tgt.data),
        "reference": {
            "symbols": str(pathlib.Path(ref_snapshot).name),
            "source_sha256": hashlib.sha256(ref.data).hexdigest(),
        },
        "anchors": anch,
        "address_map": {k: v for k, v in sorted(address_map.items())},
        "gate_list": ["0x%x %s" % (a, n) for a, n in entries],
        "tolerant_data_check": bool(tolerant_data),
        "default_pvrt": bool(default_pvrt),
        "auto_start_click": bool(auto_start_click),
        "logical_screen": logical_screen,
        "default_window": default_window,
        "data_manifest": data_manifest,
        "master_url_pvrt": master_url_pvrt,
        "master_url_atc": master_url_atc,
        "direct_pad": bool(direct_pad),
    }
    pathlib.Path(out_path).parent.mkdir(parents=True, exist_ok=True)
    pathlib.Path(out_path).write_text(json.dumps(profile, indent=1) + "\n",
                                      encoding="utf-8")
    print("profile: %s (%d address mappings, %d gate entries, sha256 %s)" %
          (out_path, len(address_map), len(entries), profile["engine_sha256"]))
    return profile


def gate_list(ref_snapshot, target_so, list_path, out_path, ref_so=None):
    ref = Engine(ref_so) if ref_so else None
    tgt = Engine(target_so)
    if ref is None:
        # snapshot-only mode: names come from the list comments
        ref = Engine.__new__(Engine)
        ref.syms = read_snapshot(ref_snapshot)
        ref.by_name = {}
        for s in ref.syms:
            cur = ref.by_name.get(s.name)
            if cur is None or s.size > cur.size:
                ref.by_name[s.name] = s
        ref.starts = {}
        ref._addr_sorted = sorted(s.addr for s in ref.syms)
        ref._by_addr = {}
        for s in ref.syms:
            ref.starts.setdefault(s.addr, []).append(s)
            ref._by_addr.setdefault(s.addr, []).append(s)

    res = Resolver(ref_snapshot, tgt)
    if ref_so:
        res.set_ref_engine(Engine(ref_so))

    entries = []
    for ln in pathlib.Path(list_path).read_text(encoding="utf-8").splitlines():
        stripped = ln.split("//")[0].strip()
        if not stripped:
            continue
        tok = stripped.split()[0]
        marker = tok[-1] if tok[-1] in "!~^" else ""
        if marker:
            tok = tok[:-1]
        addr = int(tok, 16)
        entries.append((addr, marker, ln.strip()))

    out = []
    seen = set()
    mapped = 0
    for addr, marker, comment in entries:
        t = res.resolve(addr, "gate list")
        if t is None:
            continue
        if t in seen:
            continue
        seen.add(t)
        mapped += 1
        # The reference validation markers do not transfer to another build.
        # Everything translated is trusted; the strict backend still reports
        # any address that was not translated.
        name = comment.split(None, 1)[1] if len(comment.split(None, 1)) > 1 else ""
        out.append("%#010x~ %s" % (t, name))
    print("gate list: %d/%d reference entries mapped" % (mapped, len(entries)))

    extra = 0
    for s in sorted(tgt.syms, key=lambda x: x.addr):
        if s.kind != "F" or s.addr in seen:
            continue
        seen.add(s.addr)
        out.append("%#010x~ %s" % (s.addr, s.name))
        extra += 1
    print("gate list: +%d target-only functions" % extra)

    pathlib.Path(out_path).parent.mkdir(parents=True, exist_ok=True)
    pathlib.Path(out_path).write_text(
        "// generated by vermap.py from %s + %s\n" % (list_path, target_so) +
        "\n".join(out) + "\n", encoding="utf-8")
    print("wrote %d entries to %s" % (len(out), out_path))
    return len(out), res


def anchors(ref_snapshot, target_so, out_path, ref_so=None):
    tgt = Engine(target_so)
    res = Resolver(ref_snapshot, tgt)
    if ref_so:
        res.set_ref_engine(Engine(ref_so))
    result = {}
    for key, addr in ANCHOR_ADDRS.items():
        v = res.resolve(addr, "postgen anchor")
        if v is None:
            raise SystemExit("cannot resolve anchor %s (%#x)" % (key, addr))
        result[key] = v
    # the car tick is a label inside Scene::UpdateCars
    upd = tgt.by_name.get("_ZN5Scene10UpdateCarsEv")
    if upd is None:
        raise SystemExit("target has no Scene::UpdateCars")
    tick = result["car_tick"]
    if not (upd.addr <= tick < upd.addr + max(upd.size, 1)):
        raise SystemExit("car_tick %#x is outside UpdateCars %#x+%d" %
                         (tick, upd.addr, upd.size))
    # the generated dispatch uses the function address, the label uses the
    # absolute tick address
    result["updatecars_off"] = tick - upd.addr
    pathlib.Path(out_path).parent.mkdir(parents=True, exist_ok=True)
    pathlib.Path(out_path).write_text(json.dumps(result, indent=2) + "\n",
                                      encoding="utf-8")
    print("anchors:", json.dumps(result, indent=2))
    return result


def report(ref_snapshot, target_so, src_root, ref_so=None):
    ref_engine = Engine(ref_so) if ref_so else None
    if ref_engine is None:
        raise SystemExit("report needs --ref-so")
    tgt = Engine(target_so)
    res = Resolver(ref_snapshot, tgt)
    res.set_ref_engine(ref_engine)
    uses = collect_literals(src_root, ref_engine, res)
    ok = 0
    for v in sorted(uses):
        a = res.resolve(v, uses[v][0])
        if a is not None:
            ok += 1
    print("host literals: %d, resolved: %d, unresolved: %d" % (len(uses), ok, len(res.unresolved)))
    for w in res.warnings:
        print("  warn:", w)
    for v, name, why in res.unresolved:
        print("  UNRESOLVED %#x %s (%s)" % (v, name, why))


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)

    p = sub.add_parser("snapshot")
    p.add_argument("so")
    p.add_argument("out")

    p = sub.add_parser("report")
    p.add_argument("snapshot")
    p.add_argument("target_so")
    p.add_argument("src")
    p.add_argument("--ref-so", required=True)

    p = sub.add_parser("rewrite")
    p.add_argument("snapshot")
    p.add_argument("target_so")
    p.add_argument("src")
    p.add_argument("dst")
    p.add_argument("--ref-so", required=True)

    p = sub.add_parser("gatelist")
    p.add_argument("snapshot")
    p.add_argument("target_so")
    p.add_argument("list")
    p.add_argument("out")
    p.add_argument("--ref-so")

    p = sub.add_parser("anchors")
    p.add_argument("snapshot")
    p.add_argument("target_so")
    p.add_argument("out")
    p.add_argument("--ref-so")

    p = sub.add_parser("rewrite-map")
    p.add_argument("address_map_json")
    p.add_argument("src")
    p.add_argument("dst")

    p = sub.add_parser("genprofile")
    p.add_argument("snapshot")
    p.add_argument("target_so")
    p.add_argument("src")
    p.add_argument("list")
    p.add_argument("out")
    p.add_argument("--ref-so", required=True)
    p.add_argument("--label", default="")
    p.add_argument("--tolerant-data", action="store_true",
                   help="profile uses its own data manifest (accept core files)")
    p.add_argument("--default-pvrt", action="store_true",
                   help="profile's data pack uses PVRTC textures")
    p.add_argument("--auto-start-click", action="store_true",
                   help="profile's splash waits for a tap (send two taps)")
    p.add_argument("--logical-screen", default="",
                   help="engine layout resolution, e.g. 1024x600")
    p.add_argument("--default-window", default="",
                   help="default render/window size, e.g. 1920x1080")
    p.add_argument("--data-manifest", default="",
                   help="data manifest JSON in analysis/version, e.g. data-3.3.7.json")
    p.add_argument("--master-url-pvrt", default="",
                   help="PVRT master download URL from the APK's GameInstaller")
    p.add_argument("--master-url-atc", default="",
                   help="ATC master download URL from the APK's GameInstaller")
    p.add_argument("--direct-pad", action="store_true",
                   help="driving keys inject GamePad masks (3.3.7 touch build)")

    a = ap.parse_args(argv)
    if a.cmd == "snapshot":
        write_snapshot(Engine(a.so), a.out)
    elif a.cmd == "report":
        report(a.snapshot, a.target_so, a.src, a.ref_so)
    elif a.cmd == "rewrite":
        rewrite_tree(a.snapshot, a.target_so, a.src, a.dst, a.ref_so)
    elif a.cmd == "gatelist":
        gate_list(a.snapshot, a.target_so, a.list, a.out, a.ref_so)
    elif a.cmd == "anchors":
        anchors(a.snapshot, a.target_so, a.out, a.ref_so)
    elif a.cmd == "rewrite-map":
        data = json.loads(pathlib.Path(a.address_map_json).read_text(encoding="utf-8"))
        mapping = data.get("address_map", data)
        rewrite_map(a.src, a.dst, mapping)
    elif a.cmd == "genprofile":
        gen_profile(a.snapshot, a.ref_so, a.target_so, a.src, a.list, a.out,
                    a.label, a.tolerant_data, a.default_pvrt,
                    a.auto_start_click, a.logical_screen, a.default_window,
                    a.data_manifest, a.master_url_pvrt, a.master_url_atc,
                    a.direct_pad)
    return 0


if __name__ == "__main__":
    sys.exit(main())
