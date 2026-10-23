#!/usr/bin/env python3
"""Asphalt 5 native installer for end users.

The setup only does local installation:
  - reads the user's original Asphalt 5 3.4.1 APK
  - strips the ARM instruction bytes from the engine image
  - embeds the remaining data image inside the prebuilt native host
  - stages the original installer UI assets outside the game folder

It deliberately does NOT download the game data.  On first launch the game's
own installer contacts Gameloft, downloads the data pack, and unpacks it into
sdcard/gameloft/games/asphalt5/ itself.

Run with no arguments for the GUI, or use --cli for scripted installs.
"""
from __future__ import annotations

import argparse
import hashlib
import io
import json
import os
import pathlib
import queue
import shutil
import struct
import subprocess
import sys
import tempfile
import threading
import time
import traceback
import zipfile

from strip_engine import strip_engine

APP_NAME = "Asphalt 5 Native"
APP_VERSION = "1.1"
EXPECTED_SO_SHA256 = "2966c986c73e71e7d2fa791a2f3a371749c7db183d7c40ff6641a57f01b78206"
SO_ENTRY = "lib/armeabi/libasphalt5.so"
ASSET_NAMES = ("gameloft_logo", "interface_menu", "font_menu")
HOST_NAME = "Asphalt5.exe"


class InstallError(RuntimeError):
    pass


def sha256_file(path: pathlib.Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def frozen_dir() -> pathlib.Path | None:
    if getattr(sys, "frozen", False):
        return pathlib.Path(getattr(sys, "_MEIPASS", pathlib.Path(sys.executable).parent))
    return None


def repo_root() -> pathlib.Path:
    return pathlib.Path(__file__).resolve().parents[1]


def find_host(explicit: str | None = None) -> pathlib.Path:
    candidates: list[pathlib.Path] = []
    if explicit:
        candidates.append(pathlib.Path(explicit).expanduser())
    fd = frozen_dir()
    if fd is not None:
        candidates.append(fd / HOST_NAME)
    else:
        here = pathlib.Path(__file__).resolve()
        candidates += [
            here.parent / HOST_NAME,
            here.parent.parent / "release_payload" / HOST_NAME,
            here.parent.parent / "dist" / HOST_NAME,
            here.parent.parent / "port" / "a5host" / "a5host_gui.exe",
            here.parent.parent / "port" / "a5host" / "a5host.exe",
        ]
    for p in candidates:
        if p.is_file():
            return p.resolve()
    raise InstallError("native host (Asphalt5.exe) not found next to the setup")


def default_apk() -> str:
    names = ("Asphalt 5 3.4.1.apk", "Asphalt5 3.4.1.apk", "Asphalt 5.apk")
    homes = [pathlib.Path.cwd(), pathlib.Path.home() / "Downloads",
             pathlib.Path.home() / "Desktop"]
    if getattr(sys, "frozen", False):
        homes.insert(0, pathlib.Path(sys.executable).parent)
    for d in homes:
        for n in names:
            p = d / n
            if p.is_file():
                return str(p)
    return ""


def default_out() -> str:
    base = os.environ.get("LOCALAPPDATA") or str(pathlib.Path.home())
    return str(pathlib.Path(base) / "Asphalt5")


def assets_cache_dir() -> pathlib.Path:
    base = os.environ.get("LOCALAPPDATA") or tempfile.gettempdir()
    return pathlib.Path(base) / "Asphalt5" / "installer_assets"


def extract_apk(apk: pathlib.Path, assets_dir: pathlib.Path,
                allow_unknown: bool, log) -> tuple[str, bytes]:
    if not apk.is_file():
        raise InstallError("APK not found: %s" % apk)
    try:
        z = zipfile.ZipFile(apk)
    except zipfile.BadZipFile as e:
        raise InstallError("not a valid APK: %s" % e)
    with z:
        names = set(z.namelist())
        if SO_ENTRY not in names:
            raise InstallError("this APK does not contain %s" % SO_ENTRY)
        so = z.read(SO_ENTRY)
        digest = hashlib.sha256(so).hexdigest()
        log("engine: %d bytes (original), sha256 %s" % (len(so), digest))
        if digest.lower() != EXPECTED_SO_SHA256 and not allow_unknown:
            raise InstallError(
                "unsupported engine build.\n\n"
                "Expected Asphalt 5 3.4.1 sha256:\n%s\n\n"
                "This APK has:\n%s\n\n"
                "Use the original 3.4.1 APK, or pass --allow-unknown at your own risk."
                % (EXPECTED_SO_SHA256, digest))

        # The ARM code is already translated; keep only the engine data
        # (strings/globals/vtables/literal pools) and zero the instruction
        # bytes.  The result is embedded in the exe, never written as a .so.
        try:
            image = strip_engine(so, log=log)
        except Exception as e:
            raise InstallError("cannot prepare engine data: %s" % e)
        log("engine data image: %d bytes" % len(image))

        # Installer UI assets: the host has no PNG decoder, so convert the
        # APK's sprite sheets to raw RGBA (exactly what the Java activity used).
        # They are staged outside the game folder, not copied into the output.
        try:
            from PIL import Image
        except ImportError:
            raise InstallError("Pillow is required by this setup")

        assets = assets_dir
        assets.mkdir(parents=True, exist_ok=True)
        for name in ASSET_NAMES:
            bs_name = "res/raw/%s.bsprite" % name
            png_name = "res/raw/%s_01.png" % name
            if bs_name not in names or png_name not in names:
                raise InstallError("APK is missing %s / %s" % (bs_name, png_name))
            bs = z.read(bs_name)
            png = z.read(png_name)
            (assets / ("%s.bsprite" % name)).write_bytes(bs)
            im = Image.open(io.BytesIO(png)).convert("RGBA")
            (assets / ("%s_01.rgba" % name)).write_bytes(im.tobytes())
            (assets / ("%s_01.size" % name)).write_text(
                "%d %d\n" % im.size, encoding="ascii")
            log("installer asset: %s (%dx%d)" % (name, im.size[0], im.size[1]))

        for raw in ("datalink.txt", "serialkey.txt"):
            entry = "res/raw/" + raw
            if entry not in names:
                raise InstallError("APK is missing %s" % entry)
            (assets / raw).write_bytes(z.read(entry))
    return digest, image


def write_readme(out: pathlib.Path) -> None:
    text = """ASPHALT 5 - native x86-64 PC version
====================================

RUN
  Double-click Asphalt5.exe.  It is a Windows GUI application; no console
  window appears.  Diagnostics go to %TEMP%\\Asphalt5.log.

FIRST LAUNCH - GAME DATA
  The original Gameloft installer is included.  On the first launch it
  automatically downloads the additional game data (about 100 MB) from
  Gameloft's servers and installs it into:

      sdcard\\gameloft\\games\\asphalt5\\

  Leave the window open while it downloads.  When it finishes, the game
  starts.  After that, no download is needed.  If the Gameloft server is
  unreachable, the game cannot install its data; in that case use a source
  build with --packs/--installed-data.

DISPLAY
  Runs at 1920x1080 physical pixels by default (DPI-aware, borderless when
  the window fills the display).  The original 854x480 UI layout is scaled
  to the render resolution; 3D is rasterized at the window size.
  A5_WINDOW=1600x900   run at another resolution
  A5_WINDOWED=1        force a normal bordered window
  A5_SCREEN=854x480    override the logical UI layout (advanced)

CONTROLS
  Mouse / touch : menus, HUD, pedals, nitro and pause
  Left/Right or A/D : steer
  Space : nitro
  C : camera
  Esc : pause / back

FILES
  Asphalt5.exe            native game (engine data embedded; no .so)
  saves\\                  profile/progress created by the game
  sdcard\\                 created by the game installer on first run

  The APK is only read during setup.  No APK, .so, engine code or installer
  assets are copied into this folder.

LEGAL
  Unofficial port; not affiliated with Gameloft.  Asphalt 5 and its content
  remain the property of their owners.  Do not redistribute this folder or
  the game data.  You must own the original APK.
"""
    (out / "README.txt").write_text(text, encoding="utf-8", newline="\r\n")


def embed_engine(exe: pathlib.Path, image: bytes) -> None:
    """Append the stripped data image + footer to the native exe."""
    with exe.open("r+b") as f:
        f.seek(0, 2)
        off = f.tell()
        f.write(image)
        f.write(b"A5EMBED1" + struct.pack("<QQ", off, len(image)))


def install(apk: str, out: str, host: str | None = None,
            allow_unknown: bool = False, log=print) -> pathlib.Path:
    apk_p = pathlib.Path(apk).expanduser().resolve()
    out_p = pathlib.Path(out).expanduser().resolve()
    host_p = find_host(host)
    if out_p.exists() and not out_p.is_dir():
        raise InstallError("install path is a file: %s" % out_p)
    out_p.mkdir(parents=True, exist_ok=True)

    log("APK:  %s" % apk_p)
    log("OUT:  %s" % out_p)
    log("host: %s" % host_p)

    cache = assets_cache_dir()
    log("installer asset cache: %s" % cache)
    so_hash, image = extract_apk(apk_p, cache, allow_unknown, log)

    dst_host = out_p / HOST_NAME
    if host_p != dst_host:
        shutil.copy2(host_p, dst_host)
    embed_engine(dst_host, image)

    # Clean artifacts from older layouts; data and saves are preserved.
    for p in (out_p / "libasphalt5.so", out_p / "build-info.json"):
        try:
            p.unlink()
        except FileNotFoundError:
            pass
    old_assets = out_p / "assets" / "installer"
    if old_assets.exists():
        shutil.rmtree(old_assets)
        try:
            (out_p / "assets").rmdir()
        except OSError:
            pass

    (out_p / "saves").mkdir(exist_ok=True)
    write_readme(out_p)
    log("installed: %s" % out_p)
    log("engine data embedded in Asphalt5.exe; no .so or APK files in the folder")
    log("first launch will download game data through the original installer")
    return out_p


def launch(out: pathlib.Path) -> None:
    exe = out / HOST_NAME
    if not exe.is_file():
        raise InstallError("cannot launch, missing %s" % exe)
    env = os.environ.copy()
    # The original Gameloft installer still runs and shows its progress, but
    # starts the data download automatically on first launch.  Its sprites
    # live in the cache created by the setup, not in the game folder.
    env["A5_INSTALL_AUTO"] = "1"
    env["A5_INSTALLER_ASSETS"] = str(assets_cache_dir())
    flags = getattr(subprocess, "CREATE_NO_WINDOW", 0)
    subprocess.Popen([str(exe)], cwd=str(out), env=env, creationflags=flags)


# ------------------------------------------------------------------ GUI
def gui_main(apk_default: str, out_default: str, host: str | None,
             allow_unknown: bool) -> int:
    import tkinter as tk
    from tkinter import filedialog, messagebox, ttk

    root = tk.Tk()
    root.title("%s - installer" % APP_NAME)
    root.geometry("720x480")
    root.minsize(620, 420)

    frame = ttk.Frame(root, padding=14)
    frame.pack(fill="both", expand=True)
    frame.columnconfigure(1, weight=1)

    apk_var = tk.StringVar(value=apk_default)
    out_var = tk.StringVar(value=out_default)
    status_var = tk.StringVar(value="Select your original Asphalt 5 3.4.1 APK.")
    progress = tk.IntVar(value=0)
    q: queue.Queue = queue.Queue()
    busy = {"value": False}

    ttk.Label(frame, text="Original APK").grid(row=0, column=0, sticky="w", pady=4)
    apk_entry = ttk.Entry(frame, textvariable=apk_var)
    apk_entry.grid(row=0, column=1, sticky="ew", padx=6, pady=4)

    def browse_apk() -> None:
        p = filedialog.askopenfilename(
            title="Select Asphalt 5 3.4.1 APK",
            filetypes=[("Android package", "*.apk"), ("All files", "*.*")])
        if p:
            apk_var.set(p)

    browse_apk_btn = ttk.Button(frame, text="Browse...", command=browse_apk)
    browse_apk_btn.grid(row=0, column=2, sticky="ew", pady=4)

    ttk.Label(frame, text="Install folder").grid(row=1, column=0, sticky="w", pady=4)
    out_entry = ttk.Entry(frame, textvariable=out_var)
    out_entry.grid(row=1, column=1, sticky="ew", padx=6, pady=4)

    def browse_out() -> None:
        p = filedialog.askdirectory(title="Select install folder",
                                    initialdir=out_var.get() or str(pathlib.Path.home()))
        if p:
            out_var.set(p)

    browse_out_btn = ttk.Button(frame, text="Browse...", command=browse_out)
    browse_out_btn.grid(row=1, column=2, sticky="ew", pady=4)

    ttk.Label(
        frame,
        text="The setup extracts the engine and installer assets from your APK.\n"
             "The game itself downloads the data from Gameloft on first launch.",
        foreground="#444").grid(row=2, column=0, columnspan=3, sticky="w", pady=(8, 6))

    bar = ttk.Progressbar(frame, variable=progress, maximum=100)
    bar.grid(row=3, column=0, columnspan=3, sticky="ew", pady=6)
    ttk.Label(frame, textvariable=status_var).grid(
        row=4, column=0, columnspan=3, sticky="w")

    log_box = tk.Text(frame, height=10, wrap="word", state="disabled")
    log_box.grid(row=5, column=0, columnspan=3, sticky="nsew", pady=(8, 6))
    frame.rowconfigure(5, weight=1)
    scroll = ttk.Scrollbar(frame, orient="vertical", command=log_box.yview)
    scroll.grid(row=5, column=3, sticky="ns")
    log_box.configure(yscrollcommand=scroll.set)

    def append_log(s: str) -> None:
        log_box.configure(state="normal")
        log_box.insert("end", s + "\n")
        log_box.see("end")
        log_box.configure(state="disabled")

    def set_busy(v: bool) -> None:
        busy["value"] = v
        state = "disabled" if v else "normal"
        for w in (apk_entry, out_entry, browse_apk_btn, browse_out_btn, install_btn):
            w.configure(state=state)

    def poll() -> None:
        try:
            while True:
                kind, payload = q.get_nowait()
                if kind == "log":
                    append_log(str(payload))
                elif kind == "status":
                    status_var.set(str(payload))
                elif kind == "progress":
                    progress.set(int(payload))
                elif kind == "done":
                    set_busy(False)
                    progress.set(100)
                    status_var.set("Installation complete.")
                    out_p = pathlib.Path(payload)
                    if messagebox.askyesno(
                            "Installation complete",
                            "Asphalt 5 is installed.\n\n"
                            "On first launch the game will download its data "
                            "from Gameloft.\n\nLaunch it now?"):
                        try:
                            launch(out_p)
                        except Exception as e:
                            messagebox.showerror("Launch failed", str(e))
                elif kind == "error":
                    set_busy(False)
                    status_var.set("Installation failed.")
                    append_log(str(payload))
                    messagebox.showerror("Installation failed", str(payload))
        except queue.Empty:
            pass
        root.after(100, poll)

    def worker(apk: str, out: str) -> None:
        def log(msg: str) -> None:
            q.put(("log", msg))

        try:
            q.put(("status", "Reading APK..."))
            q.put(("progress", 10))
            out_p = install(apk, out, host, allow_unknown, log)
            q.put(("progress", 100))
            q.put(("done", str(out_p)))
        except Exception as e:
            traceback.print_exc()
            q.put(("error", str(e)))

    def start() -> None:
        if busy["value"]:
            return
        apk = apk_var.get().strip()
        out = out_var.get().strip()
        if not apk:
            messagebox.showwarning("Missing APK", "Select the original Asphalt 5 3.4.1 APK.")
            return
        if not out:
            messagebox.showwarning("Missing folder", "Select an install folder.")
            return
        if pathlib.Path(out).exists() and any(pathlib.Path(out).iterdir()):
            if not messagebox.askyesno(
                    "Existing folder",
                    "This folder already contains files.\n\n"
                    "Game files will be updated; existing saves and installed "
                    "data will be kept. Continue?"):
                return
        log_box.configure(state="normal")
        log_box.delete("1.0", "end")
        log_box.configure(state="disabled")
        progress.set(0)
        status_var.set("Installing...")
        set_busy(True)
        threading.Thread(target=worker, args=(apk, out), daemon=True).start()

    install_btn = ttk.Button(frame, text="Install", command=start)
    install_btn.grid(row=6, column=2, sticky="e", pady=(6, 0))
    ttk.Button(frame, text="Quit", command=root.destroy).grid(
        row=6, column=1, sticky="e", padx=6, pady=(6, 0))

    root.after(100, poll)
    root.mainloop()
    return 0


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--cli", action="store_true", help="run without the GUI")
    ap.add_argument("--apk", default=None, help="original Asphalt 5 3.4.1 APK")
    ap.add_argument("--out", default=None, help="install folder")
    ap.add_argument("--host", default=None, help="overrides the bundled host (dev)")
    ap.add_argument("--allow-unknown", action="store_true",
                    help="allow an engine hash other than 3.4.1")
    ap.add_argument("--launch", action="store_true", help="launch after installing")
    args = ap.parse_args()

    if args.cli:
        try:
            apk = args.apk or default_apk()
            out = args.out or default_out()
            if not apk:
                raise InstallError("--apk is required in CLI mode")
            out_p = install(apk, out, args.host, args.allow_unknown, print)
            if args.launch:
                launch(out_p)
            return 0
        except Exception as e:
            print("ERROR: %s" % e, file=sys.stderr)
            traceback.print_exc()
            try:
                err = pathlib.Path(tempfile.gettempdir()) / "Asphalt5-Setup-error.txt"
                err.write_text(traceback.format_exc(), encoding="utf-8")
                print("error log: %s" % err, file=sys.stderr)
            except OSError:
                pass
            return 1

    return gui_main(args.apk or default_apk(), args.out or default_out(),
                    args.host, args.allow_unknown)


if __name__ == "__main__":
    raise SystemExit(main())
