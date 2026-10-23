#!/usr/bin/env python3
"""Build the end-user one-click Asphalt 5 setup (release artifact).

The release contains the prebuilt native host, but NOT the APK, engine image,
game data, or generated translations.  At install time the setup extracts the
engine image and installer assets from the user's own APK; the game's original
installer downloads the data from Gameloft on first launch.

    python scripts/make_release_installer.py
    python scripts/make_release_installer.py --console   # test build

Requires PyInstaller and a built host at dist/Asphalt5.exe.
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
HOST_CANDIDATES = [
    ROOT / "dist" / "Asphalt5.exe",
    ROOT / "port" / "a5host" / "a5host_gui.exe",
    ROOT / "port" / "a5host" / "a5host.exe",
]

SETUP_README = """ASPHALT 5 - native x86-64 PC version
====================================

QUICK START
  1. Run Asphalt5-Setup.exe.
  2. Select your legally owned Asphalt 5 3.4.1 APK.
  3. Choose a folder (for example C:\\Games\\Asphalt5) and click Install.
  4. Launch the game.

The game is a Windows GUI application: it runs without a console window.
It renders at 1920x1080 physical pixels by default (DPI-aware), scaling the
original 854x480 UI layout to the render resolution.  Use A5_WINDOW=1600x900
for another size or A5_WINDOWED=1 for a bordered window.
Diagnostics go to %TEMP%\\Asphalt5.log.  The installed folder contains only
Asphalt5.exe, saves and the game data - no .so, APK or installer files.

FIRST LAUNCH
  The original Gameloft installer is included.  It automatically downloads
  the additional game data (about 100 MB) from Gameloft and installs it into:

      sdcard\\gameloft\\games\\asphalt5\\

  Keep the window open while it downloads.  Later launches need no download.

  The setup itself does not download game data; the game does.

CONTROLS
  Mouse/touch: menus, pedals, nitro, pause
  Left/Right or A/D: steer
  Space: nitro
  C: camera
  Esc: pause / back

REQUIREMENTS
  Windows 10/11 x64, an internet connection for the first download, and your
  own Asphalt 5 3.4.1 APK.  No compiler, Python, or other build tools needed.

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

This release contains a prebuilt native host executable produced from the
Asphalt 5 3.4.1 engine for use with the user's own APK.  It does not contain
the APK, game data packs, textures, audio, video, or the original .so.  The
setup extracts those files from the user's APK, and the game's own installer
downloads the game data from Gameloft.

Do not redistribute the installed game folder, the APK, the engine image, or
the downloaded data.  Keep this notice with any copy of the setup.

The host/tool source is available in the project repository under the MIT
license; the MIT license does not cover Asphalt 5 or its content.
"""


def find_host() -> pathlib.Path:
    for p in HOST_CANDIDATES:
        if p.is_file():
            return p.resolve()
    raise SystemExit("no built host found; build dist/Asphalt5.exe first")


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
    args = ap.parse_args()

    try:
        import PyInstaller  # noqa: F401
    except ImportError:
        raise SystemExit("PyInstaller missing: python -m pip install pyinstaller")

    host = find_host()
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
        "--add-data", f"{host};.",
        "--hidden-import", "PIL.Image",
        "--hidden-import", "strip_engine",
        "--collect-all", "capstone",
        str(ROOT / "scripts" / "a5_installer_gui.py"),
    ]
    print("embedded host: %s (%d bytes, %s)" % (host, host.stat().st_size, sha256(host)))
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
