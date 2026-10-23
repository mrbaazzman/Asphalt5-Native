#!/usr/bin/env python3
"""Build a clean native PC installation of Asphalt 5 3.4.1 from your APK.

The builder:
  1. reads your legally owned Asphalt 5 3.4.1 APK;
  2. strips the ARM code and keeps only the engine data image;
  3. generates the x86-64 translations from the engine binary;
  4. builds the native GUI-subsystem host (no console);
  5. embeds the data image in the exe and stages a clean install folder
     (exe, optional data packs / installed game data, saves, README).
     The output has no .so or APK files.

It does NOT download, bundle, or redistribute the game data.  The APK itself
only contains the engine + installer; the ~100 MB data packs are separate.
Pass --packs or --installed-data to include data you already own, or leave
them out and let the original installer fetch it on first run.

Examples:
    python build_from_apk.py "Asphalt 5 3.4.1.apk"
    python build_from_apk.py "Asphalt 5 3.4.1.apk" --packs data\\packs
    python build_from_apk.py "Asphalt 5 3.4.1.apk" --installed-data ^
        "D:\\phone-backup\\sdcard\\gameloft\\games\\asphalt5"
    python build_from_apk.py "Asphalt 5 3.4.1.apk" --release --zip
"""
from __future__ import annotations

import argparse
import hashlib
import os
import pathlib
import shutil
import struct
import subprocess
import sys
import zipfile

ROOT = pathlib.Path(__file__).resolve().parent
sys.path.insert(0, str(ROOT / "scripts"))
from strip_engine import strip_engine  # noqa: E402
TOOLS = ROOT / "analysis" / "tools"
HOST = ROOT / "port" / "a5host"
LIST = ROOT / "analysis" / "autogen" / "list.txt"
DEFAULT_APK = ROOT / "Asphalt 5 3.4.1.apk"
DEFAULT_OUT = ROOT / "build" / "Asphalt5-3.4.1-native"

# Asphalt 5 3.4.1 (armeabi) engine image this gate list was built for.
EXPECTED_SO_SHA256 = "2966c986c73e71e7d2fa791a2f3a371749c7db183d7c40ff6641a57f01b78206"
SO_ENTRY = "lib/armeabi/libasphalt5.so"
BUILDER_VERSION = "1.0"


def sha256_file(path: pathlib.Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def run(cmd: list[str], cwd: pathlib.Path, env: dict | None = None) -> None:
    print("+ " + " ".join(str(c) for c in cmd))
    subprocess.run([str(c) for c in cmd], cwd=str(cwd), check=True, env=env)


def extract_apk(apk: pathlib.Path, work: pathlib.Path) -> tuple[pathlib.Path, str]:
    if not apk.exists():
        raise SystemExit("APK not found: %s" % apk)
    try:
        z = zipfile.ZipFile(apk)
    except zipfile.BadZipFile as e:
        raise SystemExit("not a valid APK/zip: %s (%s)" % (apk, e))
    with z:
        names = set(z.namelist())
        if SO_ENTRY not in names:
            alt = [n for n in names if n.endswith("/libasphalt5.so")]
            raise SystemExit("APK does not contain %s (found: %s)" %
                             (SO_ENTRY, alt or "no libasphalt5.so"))
        data = z.read(SO_ENTRY)
    work.mkdir(parents=True, exist_ok=True)
    so = work / "libasphalt5.so"
    so.write_bytes(data)
    digest = hashlib.sha256(data).hexdigest()
    print("engine: %s (%d bytes, sha256 %s)" % (so, len(data), digest))
    if digest.lower() != EXPECTED_SO_SHA256:
        print("\nWARNING: this is not the known Asphalt 5 3.4.1 armeabi engine.")
        print("  expected sha256: %s" % EXPECTED_SO_SHA256)
        print("  actual   sha256: %s" % digest)
        print("The gate list is address-specific; a different build may translate")
        print("incorrectly.  Re-run with --allow-unknown only if you understand this.")
        if not getattr(extract_apk, "allow_unknown", False):
            raise SystemExit("refusing unknown engine hash (use --allow-unknown)")
    return so, digest


def ensure_installer_assets(apk: pathlib.Path) -> None:
    sys.path.insert(0, str(TOOLS))
    try:
        from extract_installer_assets import extract as extract_assets
    except Exception as e:
        raise SystemExit("cannot import extract_installer_assets: %s" % e)
    extract_assets(apk, HOST / "assets" / "installer")


def generated_files_present() -> bool:
    need = [
        HOST / "src" / "host" / "autogen_api.h",
        HOST / "src" / "host" / "autogens.inc",
    ]
    need += [HOST / "src" / "host" / ("autogen_part_%02d.c" % i) for i in range(12)]
    return all(p.exists() for p in need)


def generate_translations(so: pathlib.Path, work: pathlib.Path) -> None:
    syms = work / "symbols.txt"
    run([sys.executable, TOOLS / "extract_symbols.py", so, syms], ROOT)
    env = os.environ.copy()
    env["A5_SYMBOLS"] = str(syms)
    print("\n[2/4] translating ARM functions to C (5k functions, this takes a while)")
    run([sys.executable, TOOLS / "autotrans.py", "--gen", so, LIST,
         HOST / "src" / "host" / "autogens.inc"], ROOT, env)
    print("\n[3/4] applying post-generation patches and splitting into 12 chunks")
    run([sys.executable, TOOLS / "postgen.py"], ROOT, env)
    run([sys.executable, TOOLS / "split_autogens.py"], ROOT, env)


def assets_cache_dir() -> pathlib.Path:
    base = os.environ.get("LOCALAPPDATA") or os.environ.get("TEMP") or str(ROOT)
    return pathlib.Path(base) / "Asphalt5" / "installer_assets"


def build_host(release: bool, jobs: int, console: bool) -> pathlib.Path:
    env = os.environ.copy()
    env["NUMBER_OF_PROCESSORS"] = str(max(1, jobs))
    if console:
        print("\n[4/4] building the console diagnostic host (O2)" if release else
              "\n[4/4] building the console diagnostic host (O1)")
        cmd = ["cmd", "/c", str(HOST / "build_cmake.bat")]
        if release:
            cmd.append("release")
        run(cmd, HOST, env)
        exe = HOST / "a5host.exe"
    else:
        print("\n[4/4] building the GUI-subsystem host (no console)")
        run(["cmd", "/c", str(HOST / "build_gui.bat")], HOST, env)
        exe = HOST / "a5host_gui.exe"
    if not exe.exists():
        raise SystemExit("build finished but %s is missing" % exe)
    return exe


def copy_packs(packs_dir: pathlib.Path, out: pathlib.Path) -> list[pathlib.Path]:
    if not packs_dir.exists():
        raise SystemExit("--packs directory not found: %s" % packs_dir)
    zips = sorted(packs_dir.glob("Asphalt5_Android_FULL_*.zip"))
    if not zips:
        zips = sorted(packs_dir.glob("*.zip"))
    if not zips:
        raise SystemExit("no Asphalt5_Android_FULL_*.zip found in %s" % packs_dir)
    dst = out / "data" / "packs"
    dst.mkdir(parents=True, exist_ok=True)
    copied = []
    for z in zips:
        print("  pack: %s (%d bytes)" % (z.name, z.stat().st_size))
        shutil.copy2(z, dst / z.name)
        copied.append(dst / z.name)
    return copied


def copy_installed_data(src: pathlib.Path, out: pathlib.Path) -> None:
    if not src.exists():
        raise SystemExit("--installed-data directory not found: %s" % src)
    dst = out / "sdcard" / "gameloft" / "games" / "asphalt5"
    dst.parent.mkdir(parents=True, exist_ok=True)
    print("  installed data: %s -> %s" % (src, dst))
    shutil.copytree(src, dst, dirs_exist_ok=True)


def write_readme(out: pathlib.Path, data_mode: str) -> None:
    first = {
        "installed": ("The game data is already installed in "
                      "sdcard\\gameloft\\games\\asphalt5.  Double-click "
                      "Asphalt5.exe and play."),
        "packs": ("The first run uses the original Gameloft installer and "
                  "installs from data\\packs.  Follow the on-screen installer."),
        "both": ("The game data is already installed; data\\packs is also "
                 "present as a fallback.  Double-click Asphalt5.exe."),
        "none": ("No game data is included.  On first run the original "
                 "installer will try Gameloft's data server.  If it is no "
                 "longer available, re-run the builder with --packs "
                 "(Asphalt5_Android_FULL_*.zip) or --installed-data from a "
                 "device where you already installed the game."),
    }[data_mode]
    text = """ASPHALT 5 (2010, Gameloft) - native x86-64 PC build
========================================================

{first}

DISPLAY
  Default render size: 1920x1080 physical pixels (DPI-aware, borderless when
  it fills the display).  The original 854x480 UI layout is scaled to the
  render resolution.
  A5_WINDOW=1600x900   run at another resolution
  A5_WINDOWED=1        force a normal bordered window

FILES
  Asphalt5.exe                    native game (engine data embedded; no .so)
  data\\packs\\                    optional offline data packs
  sdcard\\gameloft\\games\\asphalt5 optional installed game data
  saves\\                          your profile and progress

  No APK, .so, engine code or installer assets are copied into this folder.
  Diagnostics (if any) go to %TEMP%\\Asphalt5.log.

CONTROLS (screen tap / mouse is the default)
  - auto-acceleration: the car always drives
  - hold LEFT half of the screen  = steer left
  - hold RIGHT half of the screen = steer right
  - bottom corner pedals          = brake / reverse
  - right button                  = nitro
  - top-left button               = pause
  Arrow keys / A-D steer; Space = nitro; Esc = pause.

NOTES
  - This is an unofficial native port.  It is not affiliated with Gameloft.
  - The game engine image and data remain the property of their owners.
    Do not redistribute this folder; build it from your own legally owned
    APK and data.
  - If the game asks for data and the official server is gone, use your own
    installed data or data packs.

Built with the Asphalt 5 native pipeline (see README.md / docs/).
""".format(first=first)
    (out / "README.txt").write_text(text, encoding="utf-8", newline="\r\n")


def embed_engine(exe: pathlib.Path, image: bytes) -> None:
    """Append the stripped engine data image and footer to the host exe."""
    with exe.open("r+b") as f:
        f.seek(0, 2)
        off = f.tell()
        f.write(image)
        f.write(b"A5EMBED1" + struct.pack("<QQ", off, len(image)))


def main() -> int:
    ap = argparse.ArgumentParser(
        description="Build a clean native Asphalt 5 3.4.1 PC installation "
                    "from your APK.",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog=__doc__)
    ap.add_argument("apk", nargs="?", default=str(DEFAULT_APK),
                    help="input Asphalt 5 3.4.1 APK (default: %(default)s)")
    ap.add_argument("--out", default=str(DEFAULT_OUT),
                    help="clean output folder (default: %(default)s)")
    ap.add_argument("--packs", default=None,
                    help="directory with Asphalt5_Android_FULL_*.zip data packs")
    ap.add_argument("--installed-data", default=None,
                    help="existing .../sdcard/gameloft/games/asphalt5 directory")
    ap.add_argument("--exe", default=None,
                    help="use an existing host exe and skip translation/build")
    ap.add_argument("--skip-translate", action="store_true",
                    help="reuse existing generated chunks (developer mode)")
    ap.add_argument("--console", action="store_true",
                    help="build the console diagnostic host instead of the GUI host")
    ap.add_argument("--release", action="store_true",
                    help="console build: O2 instead of the fast O1 build")
    ap.add_argument("--jobs", type=int, default=os.cpu_count() or 4,
                    help="parallel compile jobs (default: all cores)")
    ap.add_argument("--allow-unknown", action="store_true",
                    help="allow an APK whose engine hash is not the known 3.4.1")
    ap.add_argument("--force", action="store_true",
                    help="replace an existing output folder")
    ap.add_argument("--zip", action="store_true",
                    help="also write <out>.zip")
    ap.add_argument("--keep-work", action="store_true",
                    help="keep build/apk_work after the build")
    args = ap.parse_args()

    apk = pathlib.Path(args.apk).resolve()
    out = pathlib.Path(args.out).resolve()
    work = ROOT / "build" / "apk_work"

    print("=" * 68)
    print(" Asphalt 5 3.4.1 native builder")
    print("=" * 68)
    print("APK:  %s" % apk)
    print("OUT:  %s" % out)
    print("JOBS: %d" % args.jobs)

    if out.exists():
        if not args.force:
            raise SystemExit("output exists: %s (use --force to replace)" % out)
        shutil.rmtree(out)
    if work.exists():
        shutil.rmtree(work)
    work.mkdir(parents=True, exist_ok=True)

    # 1) engine image (+ version check)
    extract_apk.allow_unknown = args.allow_unknown  # type: ignore[attr-defined]
    print("\n[1/4] reading APK")
    so, so_hash = extract_apk(apk, work)

    # installer assets are needed both to build the host and at runtime
    ensure_installer_assets(apk)
    print("installer assets: OK")

    # 2/3) translations
    if args.exe:
        exe = pathlib.Path(args.exe).resolve()
        if not exe.exists():
            raise SystemExit("--exe not found: %s" % exe)
        print("\n[2-4/4] using prebuilt host, skipping translation/build: %s" % exe)
    else:
        if args.skip_translate:
            if not generated_files_present():
                raise SystemExit(
                    "--skip-translate requested but generated chunks are missing;\n"
                    "run without it (full generation), or provide --exe.")
            print("\n[2-3/4] reusing existing generated chunks")
        else:
            generate_translations(so, work)
        exe = build_host(args.release, args.jobs, args.console)

    # 4) stage the clean installation
    print("\nstaging clean install (strip + embed engine data)")
    out.mkdir(parents=True, exist_ok=True)
    shutil.copy2(exe, out / "Asphalt5.exe")
    image = strip_engine(so.read_bytes(), log=print)
    embed_engine(out / "Asphalt5.exe", image)

    # The original installer sprites are needed only on first run; keep them
    # outside the game folder so the output stays free of APK-derived files.
    assets_src = HOST / "assets" / "installer"
    cache = assets_cache_dir()
    if cache.exists():
        shutil.rmtree(cache)
    cache.mkdir(parents=True, exist_ok=True)
    for f in assets_src.glob("*"):
        if f.name == "font_map.h":      # compile-time only
            continue
        shutil.copy2(f, cache / f.name)

    for legacy in (out / "libasphalt5.so", out / "build-info.json"):
        try:
            legacy.unlink()
        except FileNotFoundError:
            pass
    old_assets = out / "assets" / "installer"
    if old_assets.exists():
        shutil.rmtree(old_assets)
        try:
            (out / "assets").rmdir()
        except OSError:
            pass

    data_mode = "none"
    if args.packs:
        copy_packs(pathlib.Path(args.packs).resolve(), out)
        data_mode = "packs"
    if args.installed_data:
        copy_installed_data(pathlib.Path(args.installed_data).resolve(), out)
        data_mode = "both" if data_mode == "packs" else "installed"

    (out / "saves").mkdir(exist_ok=True)
    write_readme(out, data_mode)

    total = sum(p.stat().st_size for p in out.rglob("*") if p.is_file())
    print("\nclean install: %s" % out)
    print("  files: %d  bytes: %d" % (len(list(out.rglob("*"))), total))
    print("  data:  %s" % data_mode)

    if args.zip:
        zp = shutil.make_archive(str(out), "zip", root_dir=str(out.parent),
                                 base_dir=out.name)
        print("zip: %s (%d bytes)" % (zp, pathlib.Path(zp).stat().st_size))

    if not args.keep_work:
        shutil.rmtree(work, ignore_errors=True)

    print("\nDone.  Read %s\\README.txt" % out)
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except subprocess.CalledProcessError as e:
        print("\nBUILD FAILED: command returned %d" % e.returncode, file=sys.stderr)
        raise SystemExit(e.returncode or 1)
