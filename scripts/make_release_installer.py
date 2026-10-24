#!/usr/bin/env python3
"""Build the end-user one-click Asphalt 5 setup (release artifact).

The release contains the prebuilt native hosts for 3.4.1 and 3.3.7, but NOT
the APK, engine image, game data, or generated translations.  At install time
the setup extracts the engine image and installer assets from the user's own
APK; the game's original installer downloads the data from Gameloft on first
launch.

    python scripts/make_release_installer.py
    python scripts/make_release_installer.py --console   # test build

Requires PyInstaller and both GUI hosts (see docs/RELEASE.md).
The output folder is git-ignored; upload the .exe to GitHub Releases, never
commit it to the source repository.
"""
from __future__ import annotations

import argparse
import hashlib
import pathlib
import shutil
import subprocess
import sys
import time

ROOT = pathlib.Path(__file__).resolve().parents[1]
RELEASE = ROOT / "release"
sys.path.insert(0, str(ROOT / "scripts"))
from a5_installer_gui import ENGINE_VERSIONS  # noqa: E402

# The setup embeds one prebuilt host per supported engine.  The installer picks
# the host from the APK's .so hash; names here are what it looks for at runtime.
HOST_CANDIDATES = {
    label: [
        ROOT / "dist" / info["host"],
        ROOT / "build" / ("a5host_" + info["sha256"][:8]) / "a5host_gui.exe",
    ]
    for label, info in ENGINE_VERSIONS.items()
}
HOST_CANDIDATES["3.4.1"].append(ROOT / "port" / "a5host" / "a5host_gui.exe")

SETUP_README = """ASPHALT 5 - native x86-64 PC version
====================================

QUICK START
  1. Run Asphalt5-Setup.exe.
  2. Select your legally owned Asphalt 5 3.4.1 or 3.3.7 APK.
  3. Choose a folder (for example C:\\Games\\Asphalt5) and click Install.
  4. Launch the game.

  Both APKs are supported: the setup reads the engine from your APK and picks
  the matching native host automatically.  Use the original 3.4.1 APK or the
  3.3.7 Galaxy Tab (PVRT) APK.

The game is a Windows GUI application: it runs without a console window.
It renders at 1920x1080 physical pixels by default (DPI-aware), scaling the
original 854x480 (3.4.1) or 1024x600 (3.3.7) UI layout to the render
resolution.  Level-0 2D/3D textures are resampled to the same density
(A5_TEXSCALE, default auto; use off to keep original texture resolution).
Use A5_WINDOW=1600x900 for another size or A5_WINDOWED=1 for a bordered window.
Diagnostics go to %TEMP%\\Asphalt5.log.  The installed folder contains only
Asphalt5.exe, saves and the game data - no .so, APK or installer files.

FIRST LAUNCH
  The original Gameloft installer is included.  It automatically downloads
  the additional game data (about 100-220 MB depending on the build) from
  Gameloft and installs it into:

      sdcard\\gameloft\\games\\asphalt5\\

  Keep the window open while it downloads.  Later launches need no download.

  The setup itself does not download game data; the game does.

CONTROLS
  Mouse/touch: menus, pedals, nitro, pause
  Left/Right or A/D: steer
  Space: nitro
  C: camera
  Esc: pause / back
  Mouse click / Esc: skip intro or reward video (after 0.5 s)

REQUIREMENTS
  Windows 10/11 x64, an internet connection for the first download, and your
  own Asphalt 5 3.4.1 or 3.3.7 APK.  No compiler, Python, or other build tools
  needed.

  The setup is not code-signed, so Windows SmartScreen may show an "unknown
  publisher" prompt.  Verify the SHA-256 in SHA256SUMS.txt if you want, then
  choose "More info" -> "Run anyway".

LEGAL
  Unofficial fan port; not affiliated with Gameloft.  Asphalt 5 and its
  engine/data remain the property of their owners.  This installer contains a
  prebuilt native host derived from the game; use it only with a legally owned
  APK and do not redistribute the installed game folder.
"""

RELEASE_NOTICE = """ASPHALT 5 NATIVE PORT - RELEASE NOTICE

Asphalt 5 is a trademark of Gameloft SE.  This is an unofficial,
non-commercial interoperability project, not affiliated with or endorsed by
Gameloft.

This release contains prebuilt native host executables produced from the
Asphalt 5 3.4.1 and 3.3.7 engines for use with the user's own APK.  It does
not contain the APK, game data packs, textures, audio, video, or the original
.so.  The setup extracts those files from the user's APK, and the game's own
installer downloads the game data from Gameloft.

Do not redistribute the installed game folder, the APK, the engine image, or
the downloaded data.  Keep this notice with any copy of the setup.

The host/tool source is available in the project repository under the MIT
license; the MIT license does not cover Asphalt 5 or its content.
"""


def find_hosts(overrides: dict[str, str | None]) -> dict[str, pathlib.Path]:
    found: dict[str, pathlib.Path] = {}
    missing: list[str] = []
    for label, candidates in HOST_CANDIDATES.items():
        override = overrides.get(label)
        trial = ([pathlib.Path(override).expanduser()] if override else []) + candidates
        for p in trial:
            if p.is_file():
                found[label] = p.resolve()
                break
        else:
            missing.append(label)
    if missing:
        raise SystemExit(
            "missing prebuilt GUI host(s): %s\n"
            "Build them first:\n"
            "  3.4.1: port\\a5host\\build_gui.bat\n"
            "  3.3.7: python build_from_apk.py \"Asphalt 5 HD 3.3.7.apk\" "
            "--out build\\Asphalt5-3.3.7-native\n"
            "(then use build\\a5host_<sha8>\\a5host_gui.exe)"
            % ", ".join(missing))
    return found


def sha256(path: pathlib.Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--console", action="store_true",
                    help="build a console test executable")
    ap.add_argument("--keep", action="store_true",
                    help="keep PyInstaller work directories")
    ap.add_argument("--host-341", default=None,
                    help="override the 3.4.1 GUI host executable")
    ap.add_argument("--host-337", default=None,
                    help="override the 3.3.7 GUI host executable")
    args = ap.parse_args()

    try:
        import PyInstaller  # noqa: F401
    except ImportError:
        raise SystemExit("PyInstaller missing: python -m pip install pyinstaller")

    hosts = find_hosts({"3.4.1": args.host_341, "3.3.7": args.host_337})
    payload = ROOT / "release_payload"
    if payload.exists():
        shutil.rmtree(payload)
    payload.mkdir(parents=True)
    for label, host in hosts.items():
        dst = payload / ENGINE_VERSIONS[label]["host"]
        shutil.copy2(host, dst)
        print("host %s: %s (%d bytes, %s)" %
              (label, host, host.stat().st_size, sha256(host)))

    RELEASE.mkdir(exist_ok=True)
    name = "Asphalt5-Setup-console" if args.console else "Asphalt5-Setup"
    out_name = name + ".exe"
    build = ROOT / "build" / "release_build"
    dist = build / "dist"
    work = build / "work"
    spec = build / "spec"
    if build.exists() and not args.keep:
        shutil.rmtree(build)
    for d in (dist, work, spec):
        d.mkdir(parents=True, exist_ok=True)

    cmd = [
        sys.executable, "-m", "PyInstaller",
        "--noconfirm", "--clean",
        "--onefile",
        "--console" if args.console else "--windowed",
        "--name", name,
        "--distpath", str(dist),
        "--workpath", str(work),
        "--specpath", str(spec),
        "--add-data", f"{payload};.",
        "--hidden-import", "PIL.Image",
        "--hidden-import", "strip_engine",
        "--collect-all", "capstone",
        str(ROOT / "scripts" / "a5_installer_gui.py"),
    ]
    print("+ " + " ".join(cmd))
    subprocess.run(cmd, cwd=ROOT, check=True)

    built = dist / out_name
    if not built.is_file():
        raise SystemExit("PyInstaller did not produce %s" % built)
    final = RELEASE / out_name
    shutil.copy2(built, final)
    (RELEASE / "README.txt").write_text(SETUP_README, encoding="utf-8", newline="\r\n")
    (RELEASE / "NOTICE.txt").write_text(RELEASE_NOTICE, encoding="utf-8", newline="\r\n")
    if (ROOT / "LICENSE").is_file():
        shutil.copy2(ROOT / "LICENSE", RELEASE / "LICENSE.txt")

    digest = sha256(final)
    (RELEASE / "SHA256SUMS.txt").write_text(
        "%s  %s\n" % (digest, final.name), encoding="ascii")
    print("\nrelease: %s" % final)
    print("size:    %d bytes" % final.stat().st_size)
    print("sha256:  %s" % digest)
    print("Do not commit release/; attach the .exe to a GitHub Release.")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
