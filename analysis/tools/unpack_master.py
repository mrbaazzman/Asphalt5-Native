#!/usr/bin/env python3
"""Install a Gameloft Android "master" data pack into a native data folder.

The Java installer downloads one zlib-compressed stream (the URL in the APK's
``GameInstaller`` class) and splits it into the game files listed by the
version manifest.  This tool does the same offline:

    python analysis/tools/unpack_master.py ^
        AndroidResources_PVRT.zip ^
        analysis/version/data-3.3.7.json ^
        build/data-3.3.7

The manifest file is interoperability metadata derived from the game's own
installer (names and sizes only).  Both the 3.3.7 APK and the 3.4.1 APK can be
used as the source of the compressed stream if you already have one; the
manifest decides the output layout.

Pass ``--keep-zlib`` to keep the inflated intermediate file.
"""
from __future__ import annotations

import argparse
import json
import pathlib
import sys
import zlib


def inflate_to(path: pathlib.Path, out: pathlib.Path) -> int:
    d = zlib.decompressobj()
    total = 0
    with path.open("rb") as src, out.open("wb") as dst:
        while True:
            chunk = src.read(1 << 20)
            if not chunk:
                break
            data = d.decompress(chunk)
            dst.write(data)
            total += len(data)
        tail = d.flush()
        dst.write(tail)
        total += len(tail)
    if not d.eof:
        raise SystemExit("input is not a complete zlib stream")
    return total


def unpack(master: pathlib.Path, manifest_path: pathlib.Path,
           out_dir: pathlib.Path, keep_zlib: bool = False) -> None:
    manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    files = manifest["files"]
    expected = int(manifest.get("total_bytes") or sum(e["size"] for e in files))
    out_dir.mkdir(parents=True, exist_ok=True)

    raw = out_dir / ".master.inflated"
    print("inflating %s ..." % master)
    total = inflate_to(master, raw)
    print("inflated %d bytes (manifest expects %d)" % (total, expected))
    if total != expected:
        raise SystemExit("master size does not match the manifest")

    data = raw.read_bytes()
    off = 0
    for e in files:
        name = e["name"]
        size = int(e["size"])
        p = out_dir / name
        p.parent.mkdir(parents=True, exist_ok=True)
        p.write_bytes(data[off:off + size])
        off += size
    if not keep_zlib:
        raw.unlink()
    print("wrote %d files to %s" % (len(files), out_dir))
    print("\nBuild an installation that uses it:")
    print('  python build_from_apk.py "Asphalt 5 HD 3.3.7.apk" --installed-data "%s"'
          % out_dir)


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("master", help="downloaded master file (zlib-compressed)")
    ap.add_argument("manifest", help="version manifest JSON (analysis/version/data-*.json)")
    ap.add_argument("out", help="output data directory")
    ap.add_argument("--keep-zlib", action="store_true",
                    help="keep the inflated master stream")
    args = ap.parse_args()
    unpack(pathlib.Path(args.master).resolve(),
           pathlib.Path(args.manifest).resolve(),
           pathlib.Path(args.out).resolve(), args.keep_zlib)
    return 0


if __name__ == "__main__":
    sys.exit(main())
