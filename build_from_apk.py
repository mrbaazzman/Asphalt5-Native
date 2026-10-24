#!/usr/bin/env python3
"""Build a clean native PC installation of Asphalt 5 from your APK.

The builder:
  1. reads your legally owned APK and identifies the engine build;
  2. strips the ARM code and keeps only the engine data image;
  3. maps the host's engine addresses to this build (via a checked-in version
     profile, or on the fly from the 3.4.1 reference), then generates the
     x86-64 translations from the engine binary;
  4. builds the native GUI-subsystem host (no console);
  5. embeds the data image in the exe and stages a clean install folder
     (exe, optional data packs / installed game data, saves, README).
     The output has no .so or APK files.

It does NOT download, bundle, or redistribute the game data.  The APK itself
only contains the engine + installer; the ~100 MB data packs are separate.
Pass --packs or --installed-data to include data you already own, or leave
them out and let the original installer fetch it on first run.

Known engine builds (currently 3.4.1 and 3.3.7) build with no extra flags.
Other builds need --allow-unknown and a 3.4.1 reference engine (see
analysis/version/README.md).

Examples:
    python build_from_apk.py "Asphalt 5 3.4.1.apk"
    python build_from_apk.py "Asphalt 5 HD 3.3.7.apk"
    python build_from_apk.py "Asphalt 5 3.4.1.apk" --packs data\\packs
    python build_from_apk.py "Asphalt 5 3.4.1.apk" --installed-data ^
        "D:\\phone-backup\\sdcard\\gameloft\\games\\asphalt5"
    python build_from_apk.py "Asphalt 5 3.4.1.apk" --release --zip
"""
from __future__ import annotations

import argparse
import hashlib
import json
import os
import pathlib
import shutil
import struct
import subprocess
import sys
import zipfile

ROOT = pathlib.Path(__file__).resolve().parent
sys.path.insert(0, str(ROOT / "scripts"))
sys.path.insert(0, str(ROOT / "analysis" / "tools"))
from strip_engine import strip_engine  # noqa: E402
import vermap  # noqa: E402
TOOLS = ROOT / "analysis" / "tools"
HOST = ROOT / "port" / "a5host"
LIST = ROOT / "analysis" / "autogen" / "list.txt"
VERSION_DIR = ROOT / "analysis" / "version"
REF_SYMBOLS = VERSION_DIR / "symbols-3.4.1.txt"
DEFAULT_APK = ROOT / "Asphalt 5 3.4.1.apk"
DEFAULT_OUT = ROOT / "build" / "Asphalt5-3.4.1-native"

# Asphalt 5 3.4.1 (armeabi) engine image the reference symbol snapshot and the
# host's address constants were built for.
EXPECTED_SO_SHA256 = "2966c986c73e71e7d2fa791a2f3a371749c7db183d7c40ff6641a57f01b78206"
SO_ENTRY = "lib/armeabi/libasphalt5.so"
BUILDER_VERSION = "1.1"


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
        label = getattr(extract_apk, "profile_label", None)
        if label:
            print("engine build: %s (checked-in version profile)" % label)
        else:
            print("\nWARNING: this is not the known Asphalt 5 3.4.1 armeabi engine.")
            print("  expected sha256: %s" % EXPECTED_SO_SHA256)
            print("  actual   sha256: %s" % digest)
            print("The reference gate list and host addresses are for 3.4.1;")
            print("a profile is derived by symbol name when one is available.")
            if not getattr(extract_apk, "allow_unknown", False):
                raise SystemExit("refusing unknown engine hash (use --allow-unknown)")
    return so, digest


def ensure_installer_assets(apk: pathlib.Path, host: pathlib.Path = HOST) -> None:
    sys.path.insert(0, str(TOOLS))
    try:
        from extract_installer_assets import extract as extract_assets
    except Exception as e:
        raise SystemExit("cannot import extract_installer_assets: %s" % e)
    extract_assets(apk, host / "assets" / "installer")


def load_profile(digest: str) -> dict | None:
    for p in sorted(VERSION_DIR.glob("profile-*.json")):
        try:
            prof = json.loads(p.read_text(encoding="utf-8"))
        except (OSError, ValueError):
            continue
        if str(prof.get("engine_sha256", "")).lower() == digest.lower():
            prof["_path"] = str(p)
            return prof
    return None


def copy_host_tree(dst: pathlib.Path) -> pathlib.Path:
    if dst.exists():
        shutil.rmtree(dst)

    def ignore(_dir, names):
        skip = {"build", "build_gui", "a5host.exe", "a5host_gui.exe"}
        return [n for n in names
                if n in skip or n.startswith("autogen_part_")
                or n in ("autogens.inc", "autogen_api.h")]

    shutil.copytree(HOST, dst, ignore=ignore)
    return dst


def _profile_cmake(host: pathlib.Path, profile: dict) -> None:
    cm = host / "CMakeLists.txt"
    text = cm.read_text(encoding="utf-8")
    marker = "target_compile_options(a5host PRIVATE"
    defs = []
    if profile.get("tolerant_data_check"):
        defs.append("A5_TOLERANT_DATA=1")
    if profile.get("default_pvrt"):
        defs.append("A5_DEFAULT_PVRT=1")
    if profile.get("auto_start_click"):
        defs.append("A5_AUTO_START_CLICK=1")
    ls = str(profile.get("logical_screen") or "").lower()
    if "x" in ls:
        lw, _, lh = ls.partition("x")
        if lw.strip().isdigit() and lh.strip().isdigit():
            defs.append("A5_DEFAULT_SCREEN_W=%s" % lw.strip())
            defs.append("A5_DEFAULT_SCREEN_H=%s" % lh.strip())
    dw = str(profile.get("default_window") or "").lower()
    if "x" in dw:
        ww, _, wh = dw.partition("x")
        if ww.strip().isdigit() and wh.strip().isdigit():
            defs.append("A5_DEFAULT_WINDOW_W=%s" % ww.strip())
            defs.append("A5_DEFAULT_WINDOW_H=%s" % wh.strip())
    if defs and marker in text:
        add = ["target_compile_definitions(a5host PRIVATE %s)" % d for d in defs
               if d.split('=')[0] not in text]
        if add:
            text = text.replace(marker, "\n".join(add) + "\n\n" + marker, 1)
            cm.write_text(text, encoding="utf-8", newline="")


def _sync_host_sources(host: pathlib.Path, profile: dict) -> None:
    """Refresh the non-generated host sources on a --skip-translate rebuild."""
    dst_src = host / "src"
    for p in (HOST / "src").rglob("*"):
        if not p.is_file() or p.name.startswith("autogen"):
            continue
        rel = p.relative_to(HOST)
        dst = host / rel
        dst.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(p, dst)
    for name in ("CMakeLists.txt", "build_cmake.bat", "build_gui.bat"):
        if (HOST / name).exists():
            shutil.copy2(HOST / name, host / name)
    _profile_cmake(host, profile)
    tmp = host / "src_new"
    vermap.rewrite_map(dst_src, tmp, profile["address_map"])
    shutil.rmtree(dst_src)
    tmp.rename(dst_src)


def prepare_profile_host(profile: dict, work: pathlib.Path,
                         reuse: bool = False) -> pathlib.Path:
    """Create a host tree whose engine addresses match this profile."""
    digest = profile["engine_sha256"]
    host = ROOT / "build" / ("a5host_" + digest[:8])
    if reuse and (host / "src" / "host" / "autogens.inc").exists():
        print("host profile: refreshing sources in %s" % host)
        _sync_host_sources(host, profile)
        return host
    copy_host_tree(host)

    gate = []
    for ent in profile["gate_list"]:
        addr, _, name = ent.partition(" ")
        gate.append("%s~ %s" % (addr, name))
    (host / "list.txt").write_text(
        "// generated from %s (%s)\n" % (profile["_path"], profile.get("label", "")) +
        "\n".join(gate) + "\n", encoding="utf-8")
    (host / "anchors.json").write_text(
        json.dumps(profile["anchors"], indent=2) + "\n", encoding="utf-8")

    _profile_cmake(host, profile)

    src = host / "src"
    tmp = host / "src_new"
    vermap.rewrite_map(src, tmp, profile["address_map"])
    shutil.rmtree(src)
    tmp.rename(src)
    print("host profile: %s (%d engine addresses, %d translated targets)" %
          (profile.get("label") or digest[:8], len(profile["address_map"]),
           len(profile["gate_list"])))
    return host


def extract_ref_so(ref_so, ref_apk, work: pathlib.Path) -> pathlib.Path | None:
    """Locate the reference 3.4.1 engine for dynamic (unknown-version) mapping."""
    if ref_so:
        p = pathlib.Path(ref_so).resolve()
        if not p.exists():
            raise SystemExit("--ref-so not found: %s" % p)
        return p
    if ref_apk:
        p = pathlib.Path(ref_apk).resolve()
        if not p.exists():
            raise SystemExit("--ref-apk not found: %s" % p)
        return extract_so_from_apk(p, work / "reference")

    cands = [
        work.parent.parent / "Asphalt 5 3.4.1.apk",
        ROOT / "Asphalt 5 3.4.1.apk",
    ]
    for c in cands:
        if c.exists():
            print("reference engine: %s" % c)
            return extract_so_from_apk(c, work / "reference")
    return None


def extract_so_from_apk(apk: pathlib.Path, work: pathlib.Path) -> pathlib.Path:
    with zipfile.ZipFile(apk) as z:
        data = z.read(SO_ENTRY)
    work.mkdir(parents=True, exist_ok=True)
    out = work / "libasphalt5.so"
    out.write_bytes(data)
    print("reference engine: %s (%d bytes, sha256 %s)" %
          (out, len(data), hashlib.sha256(data).hexdigest()))
    return out


def prepare_dynamic_host(so: pathlib.Path, digest: str, work: pathlib.Path,
                         ref_so: pathlib.Path, tolerant_data: bool = False,
                         default_pvrt: bool = False,
                         auto_start_click: bool = False,
                         logical_screen: str = "",
                         default_window: str = "") -> pathlib.Path:
    """Build a profile on the fly for an engine with no checked-in profile."""
    ref = pathlib.Path(ref_so)
    ref_digest = hashlib.sha256(ref.read_bytes()).hexdigest()
    if ref_digest.lower() != EXPECTED_SO_SHA256:
        raise SystemExit(
            "the reference engine must be the known 3.4.1 build\n"
            "  expected sha256: %s\n  actual   sha256: %s" %
            (EXPECTED_SO_SHA256, ref_digest))
    host = ROOT / "build" / ("a5host_" + digest[:8])
    if host.exists():
        shutil.rmtree(host)
    work.mkdir(parents=True, exist_ok=True)
    prof_path = work / "profile-auto.json"
    profile = vermap.gen_profile(REF_SYMBOLS, ref, so, HOST / "src", LIST,
                                 prof_path, label=digest[:8],
                                 tolerant_data=tolerant_data,
                                 default_pvrt=default_pvrt,
                                 auto_start_click=auto_start_click,
                                 logical_screen=logical_screen,
                                 default_window=default_window)
    profile["_path"] = str(prof_path)
    return prepare_profile_host(profile, work)


def generated_files_present(host: pathlib.Path = HOST) -> bool:
    need = [
        host / "src" / "host" / "autogen_api.h",
        host / "src" / "host" / "autogens.inc",
    ]
    need += [host / "src" / "host" / ("autogen_part_%02d.c" % i) for i in range(12)]
    return all(p.exists() for p in need)


def generate_translations(so: pathlib.Path, work: pathlib.Path,
                          host: pathlib.Path = HOST) -> None:
    syms = work / "symbols.txt"
    run([sys.executable, TOOLS / "extract_symbols.py", so, syms], ROOT)
    env = os.environ.copy()
    env["A5_SYMBOLS"] = str(syms)
    list_path = host / "list.txt"
    if not list_path.exists():
        list_path = LIST
    anchors = host / "anchors.json"
    if anchors.exists():
        env["A5_ANCHORS"] = str(anchors)
    print("\n[2/4] translating ARM functions to C (5k functions, this takes a while)")
    run([sys.executable, TOOLS / "autotrans.py", "--gen", so, list_path,
         host / "src" / "host" / "autogens.inc"], ROOT, env)
    print("\n[3/4] applying post-generation patches and splitting into 12 chunks")
    run([sys.executable, TOOLS / "postgen.py",
         host / "src" / "host" / "autogens.inc"], ROOT, env)
    env["A5_HOST"] = str(host)
    run([sys.executable, TOOLS / "split_autogens.py"], ROOT, env)


def assets_cache_dir() -> pathlib.Path:
    base = os.environ.get("LOCALAPPDATA") or os.environ.get("TEMP") or str(ROOT)
    return pathlib.Path(base) / "Asphalt5" / "installer_assets"


def build_host(host: pathlib.Path, release: bool, jobs: int, console: bool) -> pathlib.Path:
    env = os.environ.copy()
    env["NUMBER_OF_PROCESSORS"] = str(max(1, jobs))
    if console:
        print("\n[4/4] building the console diagnostic host (O2)" if release else
              "\n[4/4] building the console diagnostic host (O1)")
        cmd = ["cmd", "/c", str(host / "build_cmake.bat")]
        if release:
            cmd.append("release")
        run(cmd, host, env)
        exe = host / "a5host.exe"
    else:
        print("\n[4/4] building the GUI-subsystem host (no console)")
        run(["cmd", "/c", str(host / "build_gui.bat")], host, env)
        exe = host / "a5host_gui.exe"
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


def write_readme(out: pathlib.Path, data_mode: str, version: str = "3.4.1",
                 legacy: bool = False, logical: str = "854x480",
                 window_note: str = "1920x1080 physical pixels") -> None:
    legacy_none = (
        "No game data is included.  This engine build has its own data layout;\n"
        "  the 3.4.x download pack is not known to be compatible.  Put a\n"
        "  complete %s data folder in sdcard\\gameloft\\games\\asphalt5, or\n"
        "  rebuild with --installed-data pointing at that folder.\n"
        "  A5_INSTALL_SKIP=1 skips the installer." % version)
    first = {
        "installed": ("The game data is already installed in "
                      "sdcard\\gameloft\\games\\asphalt5.  Double-click "
                      "Asphalt5.exe and play."),
        "packs": ("The first run uses the original Gameloft installer and "
                  "installs from data\\packs.  Follow the on-screen installer."),
        "both": ("The game data is already installed; data\\packs is also "
                 "present as a fallback.  Double-click Asphalt5.exe."),
        "none": legacy_none if legacy else (
            "No game data is included.  On first run the original "
            "installer will try Gameloft's data server.  If it is no "
            "longer available, re-run the builder with --packs "
            "(Asphalt5_Android_FULL_*.zip) or --installed-data from a "
            "device where you already installed the game."),
    }[data_mode]
    text = """ASPHALT 5 (2010, Gameloft) - native x86-64 PC build
========================================================
Engine: Asphalt 5 HD {version} (built from your APK)

{first}

DISPLAY
  Default render size: {window_note} (DPI-aware, borderless when it fills the
  display).  The original {logical} UI layout is scaled to the render
  resolution; level-0 textures are resampled to match.
  A5_WINDOW=1600x900   run at another resolution
  A5_WINDOWED=1        force a normal bordered window
  A5_TEXSCALE=auto     texture density (default follows render scale)
  A5_TEXSCALE=off      keep original texture resolution
  A5_ASPECT=fit        preserve 16:9 with black bars (default)
  A5_ASPECT=stretch    fill the whole window

  If the window is larger than your desktop (or the UI looks too zoomed),
  run "Play windowed.bat", or set:
    A5_WINDOW=1280x720
    A5_WINDOWED=1

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
  - Click the mouse or press Esc to skip the intro/reward video (after 0.5 s).
  - If the game asks for data and the official server is gone, use your own
    installed data or data packs.

Built with the Asphalt 5 native pipeline (see README.md / docs/).
""".format(first=first, version=version, logical=logical, window_note=window_note)
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
        description="Build a clean native Asphalt 5 PC installation from your "
                    "APK.  Known engine builds use a checked-in profile; other "
                    "builds need --allow-unknown and the 3.4.1 reference engine.",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog=__doc__)
    ap.add_argument("apk", nargs="?", default=str(DEFAULT_APK),
                    help="input Asphalt 5 APK (default: %(default)s)")
    ap.add_argument("--out", default=None,
                    help="clean output folder (default: build/Asphalt5-<engine>-native)")
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
    ap.add_argument("--ref-so", default=None,
                    help="3.4.1 libasphalt5.so used as the address reference "
                         "when no profile matches the input engine")
    ap.add_argument("--ref-apk", default=None,
                    help="3.4.1 APK to extract the reference engine from")
    ap.add_argument("--tolerant-data", action="store_true",
                    help="unknown build: accept a populated data folder "
                         "(its own manifest), not the 3.4.1 exact-size list")
    ap.add_argument("--default-pvrt", action="store_true",
                    help="unknown build: default to the PVRTC texture path")
    ap.add_argument("--auto-start-click", action="store_true",
                    help="unknown build: splash waits for a tap (send two taps)")
    ap.add_argument("--logical-screen", default="",
                    help="unknown build: engine layout resolution, e.g. 1024x600")
    ap.add_argument("--default-window", default="",
                    help="unknown build: default window size, e.g. 1920x1080")
    ap.add_argument("--label", default=None,
                    help="version label for the output folder/README")
    ap.add_argument("--force", action="store_true",
                    help="replace an existing output folder")
    ap.add_argument("--zip", action="store_true",
                    help="also write <out>.zip")
    ap.add_argument("--keep-work", action="store_true",
                    help="keep build/apk_work after the build")
    args = ap.parse_args()

    apk = pathlib.Path(args.apk).resolve()
    work = ROOT / "build" / "apk_work"

    print("=" * 68)
    print(" Asphalt 5 native builder")
    print("=" * 68)
    print("APK:  %s" % apk)
    print("JOBS: %d" % args.jobs)

    if work.exists():
        shutil.rmtree(work)
    work.mkdir(parents=True, exist_ok=True)

    # 1) engine image (+ version check).  A checked-in profile makes an engine
    # known, so the explicit --allow-unknown flag is only needed for new builds.
    def apk_so_digest(path: pathlib.Path) -> str:
        try:
            with zipfile.ZipFile(path) as z:
                return hashlib.sha256(z.read(SO_ENTRY)).hexdigest()
        except (zipfile.BadZipFile, KeyError):
            return ""

    digest_hint = apk_so_digest(apk)
    hint_profile = load_profile(digest_hint)
    extract_apk.allow_unknown = (args.allow_unknown or
                                 hint_profile is not None)  # type: ignore[attr-defined]
    extract_apk.profile_label = ((hint_profile or {}).get("label") or
                                 digest_hint[:8])  # type: ignore[attr-defined]
    print("\n[1/4] reading APK")
    so, so_hash = extract_apk(apk, work)

    # pick the host tree for this engine
    profile = load_profile(so_hash)
    if so_hash.lower() == EXPECTED_SO_SHA256:
        host = HOST
        version_label = args.label or "3.4.1"
        default_out = DEFAULT_OUT
    elif profile is not None:
        host = prepare_profile_host(profile, work, reuse=args.skip_translate)
        version_label = args.label or profile.get("label") or so_hash[:8]
        default_out = ROOT / "build" / ("Asphalt5-%s-native" % version_label)
    else:
        if not args.allow_unknown:
            raise SystemExit(
                "no version profile for engine sha256 %s\n"
                "known profiles: %s\n"
                "re-run with --allow-unknown (plus --ref-so/--ref-apk) to "
                "derive one at build time" %
                (so_hash, ", ".join(p.name for p in VERSION_DIR.glob("profile-*.json"))))
        ref = extract_ref_so(args.ref_so, args.ref_apk, work)
        if ref is None:
            sibling = apk.parent / "Asphalt 5 3.4.1.apk"
            if sibling.exists():
                print("reference engine: %s" % sibling)
                ref = extract_so_from_apk(sibling, work / "reference")
        if ref is None:
            raise SystemExit(
                "no checked-in profile and no reference engine found.\n"
                "Pass --ref-so <3.4.1 libasphalt5.so> or --ref-apk <3.4.1 apk>.")
        host = prepare_dynamic_host(so, so_hash, work, ref,
                                    tolerant_data=args.tolerant_data,
                                    default_pvrt=args.default_pvrt,
                                    auto_start_click=args.auto_start_click,
                                    logical_screen=args.logical_screen,
                                    default_window=args.default_window)
        version_label = args.label or so_hash[:8]
        default_out = ROOT / "build" / ("Asphalt5-%s-native" % version_label)

    out = pathlib.Path(args.out).resolve() if args.out else default_out.resolve()
    print("OUT:  %s" % out)
    print("HOST: %s" % host)

    if out.exists():
        if not args.force:
            raise SystemExit("output exists: %s (use --force to replace)" % out)
        shutil.rmtree(out)

    # installer assets are needed both to build the host and at runtime
    ensure_installer_assets(apk, host)
    print("installer assets: OK")

    # 2/3) translations
    if args.exe:
        exe = pathlib.Path(args.exe).resolve()
        if not exe.exists():
            raise SystemExit("--exe not found: %s" % exe)
        print("\n[2-4/4] using prebuilt host, skipping translation/build: %s" % exe)
    else:
        if args.skip_translate:
            if not generated_files_present(host):
                raise SystemExit(
                    "--skip-translate requested but generated chunks are missing;\n"
                    "run without it (full generation), or provide --exe.")
            print("\n[2-3/4] reusing existing generated chunks")
        else:
            generate_translations(so, work, host)
        exe = build_host(host, args.release, args.jobs, args.console)

    # 4) stage the clean installation
    print("\nstaging clean install (strip + embed engine data)")
    out.mkdir(parents=True, exist_ok=True)
    shutil.copy2(exe, out / "Asphalt5.exe")
    image = strip_engine(so.read_bytes(), log=print)
    embed_engine(out / "Asphalt5.exe", image)

    # The original installer sprites are needed only on first run; keep them
    # outside the game folder so the output stays free of APK-derived files.
    assets_src = host / "assets" / "installer"
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
    (out / "Play windowed.bat").write_text(
        "@echo off\r\n"
        "setlocal\r\n"
        "set A5_WINDOW=1280x720\r\n"
        "set A5_WINDOWED=1\r\n"
        "start \"\" \"%~dp0Asphalt5.exe\"\r\n"
        "endlocal\r\n", encoding="ascii", newline="")
    (out / "Play fullscreen 1080p.bat").write_text(
        "@echo off\r\n"
        "setlocal\r\n"
        "set A5_WINDOW=1920x1080\r\n"
        "set A5_BORDERLESS=1\r\n"
        "start \"\" \"%~dp0Asphalt5.exe\"\r\n"
        "endlocal\r\n", encoding="ascii", newline="")
    logical = "854x480"
    window_note = "1920x1080 physical pixels"
    if profile is not None:
        logical = profile.get("logical_screen") or logical
        if profile.get("default_window"):
            window_note = "%s borderless full screen" % profile["default_window"]
    write_readme(out, data_mode, version_label,
                 legacy=(so_hash.lower() != EXPECTED_SO_SHA256),
                 logical=logical, window_note=window_note)

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
