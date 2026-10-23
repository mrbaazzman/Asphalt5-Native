# End-user release (`Asphalt5-Setup.exe`)

## What users get

`Asphalt5-Setup.exe` is a **self-contained Windows installer** built with
PyInstaller. It embeds:

- the Python runtime, Tkinter and Pillow (used only by the setup UI);
- the prebuilt native `Asphalt5.exe` host.

It does **not** contain:

- the original APK;
- `libasphalt5.so` or any engine code;
- game data packs or installed game data;
- textures, audio, video or generated translation C files.

At install time it strips the ARM instruction bytes from the engine image,
embeds only the data image inside `Asphalt5.exe`, and keeps the installer
sprites in a cache outside the game folder.  The installed folder has no
`.so`, APK, engine code or installer assets.  The game itself is built as a
Windows GUI-subsystem executable: no console window opens; diagnostics go to
`%TEMP%\Asphalt5.log`.

Users need only:

1. Windows 10/11 x64;
2. their own Asphalt 5 **3.4.1** APK;
3. internet access for the game's first-run data download.

No Python, CMake, Ninja, GCC, MinGW, Visual Studio or other build tool is
required.

## User flow

1. Run `Asphalt5-Setup.exe`.
2. Select the original APK and an install folder.
3. Click **Install**. The setup:
   - reads `libasphalt5.so` from `lib/armeabi/`;
   - zeroes the ARM instruction bytes, keeping the data image;
   - embeds that data image inside `Asphalt5.exe`;
   - stages the original installer sprites in a cache outside the game folder;
   - copies the bundled GUI-subsystem native host.
4. Launch the game (no console window). It runs at 1920×1080 physical pixels
   by default, DPI-aware and borderless on a 1080p display. The original
   854×480 UI layout and level-0 textures are scaled to the render resolution
   (`A5_TEXSCALE=auto`; 2.25× at 1080p). Use `A5_TEXSCALE=off` for original
   texture resolution.
5. On first launch the **game's own installer** automatically downloads the
   data pack from Gameloft and writes it to
   `sdcard\gameloft\games\asphalt5\`.

The setup itself never downloads game data. The download is the original
Gameloft installer flow inside the port; the setup only enables the
installer's automatic-start mode.

## Building the release

Prerequisites:

- a built host at `dist/Asphalt5.exe` (or `port/a5host/a5host.exe`);
- Python 3.10+ with the repo dependencies and PyInstaller:

```bat
python -m pip install -r requirements.txt
python scripts\make_release_installer.py
```

Outputs:

```text
release\Asphalt5-Setup.exe       one-file windowed installer
release\README.txt              user instructions
release\NOTICE.txt              game-content/legal notice
release\LICENSE.txt             MIT license for the host/tool code
release\SHA256SUMS.txt          release checksum
```

The folder is git-ignored. Do **not** commit the setup or any output.

For a console build useful when debugging:

```bat
python scripts\make_release_installer.py --console
```

That produces `release\Asphalt5-Setup-console.exe`, which prints installation
logs. The normal windowed build writes errors to
`%TEMP%\Asphalt5-Setup-error.txt`.

## Publishing to GitHub Releases

Create a release in GitHub and attach:

- `Asphalt5-Setup.exe`
- `README.txt`
- `NOTICE.txt`
- `LICENSE.txt`
- `SHA256SUMS.txt`

The source repository stays clean. The release asset is separate because it
contains a prebuilt host derived from the game engine; see the legal note
below.

## Verification

Check the checksum:

```powershell
Get-FileHash .\Asphalt5-Setup.exe -Algorithm SHA256
Get-Content .\SHA256SUMS.txt
```

A staged install can be tested without launching:

```powershell
.\Asphalt5-Setup.exe --cli `
  --apk "D:\Asphalt 5 3.4.1.apk" `
  --out "D:\Games\Asphalt5"
```

The windowed executable has no console, so check the output folder. The game
writes diagnostics to `%TEMP%\Asphalt5.log`. For setup logs use the
`--console` build or run `python scripts\a5_installer_gui.py --cli ...` from
the source tree.

## Troubleshooting

| Symptom | Cause / fix |
|---|---|
| “unsupported engine build” | The APK is not the known 3.4.1 `armeabi` engine. Use the original APK. |
| setup exits with no output | Windowed build: inspect `%TEMP%\Asphalt5-Setup-error.txt`; paths with spaces must be quoted when invoking `--apk`. |
| game says data download failed | The game's first-run installer could not reach Gameloft. Keep the window open, check the connection/firewall, or build from source with `--packs` / `--installed-data`. |
| antivirus/SmartScreen warns about the setup | One-file PyInstaller executables are sometimes flagged heuristically, and the build is unsigned. Publish the SHA-256, choose “More info → Run anyway” if you trust the build, or build from source. |

## Legal note

The release contains a prebuilt native host produced from the game engine.
That host is a derivative work of the game. Keep the release for users who
legally own the APK; do not redistribute the installed game folder, the APK,
the embedded engine data, or the downloaded data. The MIT license covers only
the original host/tool code, not Asphalt 5 or its content. See `NOTICE.md`.
