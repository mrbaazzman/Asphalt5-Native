#!/usr/bin/env python3
"""Extract the original APK into original/apk/ (without modifying it).

Usage:
    python tools/extract_apk.py [apk] [--out original/apk]

Defaults to the single *.apk found in original/.  Rejects entries that would
escape the output directory.
"""
import argparse
import glob
import os
import sys
import zipfile


def find_apk():
    here = os.path.join("original", "*.apk")
    hits = sorted(glob.glob(here))
    return hits[0] if len(hits) == 1 else None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("apk", nargs="?")
    ap.add_argument("--out", default=os.path.join("original", "apk"))
    args = ap.parse_args()

    apk = args.apk or find_apk()
    if not apk or not os.path.isfile(apk):
        sys.exit("APK not found. Put it in original/ or pass the path explicitly.")

    out = os.path.abspath(args.out)
    os.makedirs(out, exist_ok=True)
    root = out + os.sep
    count = 0
    with zipfile.ZipFile(apk) as z:
        for info in z.infolist():
            dest = os.path.abspath(os.path.join(out, info.filename))
            if not dest.startswith(root) and dest != out:
                sys.exit("unsafe path in APK: %s" % info.filename)
            if info.is_dir():
                os.makedirs(dest, exist_ok=True)
                continue
            os.makedirs(os.path.dirname(dest), exist_ok=True)
            with z.open(info) as src, open(dest, "wb") as dst:
                dst.write(src.read())
            count += 1
    print("extracted %d files to %s" % (count, out))


if __name__ == "__main__":
    main()
