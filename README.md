# Asphalt 5 Native

Static ARMv7 to x86-64 recompilation of **Asphalt 5 HD** for Windows, built
from the user's own Android APK.  Three preserved builds are supported:

- **3.2.4** Sony Ericsson (`lib/armeabi-v7a/libasphalt5.so`, 854x480 UI)
- **3.3.7** Galaxy Tab (`lib/armeabi/libasphalt5.so`, 1024x600 UI)
- **3.4.1** Android Market/Motorola (`lib/armeabi/libasphalt5.so`, 854x480 UI)

The game's `libasphalt5.so` is translated to C at build time and compiled
with MinGW for Windows. The shipped executable contains native x86-64 code:
there is no ARM interpreter or emulator in the runtime. The Android platform
layer (JNI, files, OpenGL ES, audio, input, movies) is replaced by a small
Win32 host.  The 3.3.7 and 3.4.1 builds also contain a native port of the
Android GameInstaller: first launch shows the Gameloft logo, plays
`installer_000.ogg`, downloads the official PVRTC pack from the live Gameloft
server, unpacks it and continues into the game.

This repository contains source code and the 3.2.4 generated C translation.
It does not contain the APK, the original `.so`, or the game data packs.

## Status

| Area | State |
|---|---|
| Engine boot and menus | Working for 3.2.4, 3.3.7 and 3.4.1 |
| Rendering | OpenGL ES 1.x compatibility layer, 1920x1080 by default |
| 3.3.7 / 3.4.1 first-run installer | Native GameInstaller UI: logo, music, live data download |
| Race tracks | 12/12 playable scenes |
| Physics | Original 25 Hz fixed-step engine code |
| Frame rate | Unlocked; optional cap with `RECOMP_FPS` |
| Camera | Real-time view smoothing at high frame rates |
| Input | Keyboard, mouse and optional XInput gamepad; phone touch overlay hidden in races |
| Audio | Engine vox mixer, WinMM output |
| Movies | Intro and career H.264 videos |
| Pause / exit | `Esc` toggles pause/resume; in-game Exit quits |
| Installer | One setup builds either APK locally |

## Requirements

- Windows 10 or 11 x64
- A legally owned Asphalt 5 HD APK (3.2.4 SE, 3.3.7 Galaxy Tab or 3.4.1 Market)
- 3.2.4: the matching `GloftA5HD` game data folder
- 3.3.7 / 3.4.1: internet access for the official data pack (or a local pack)
- Python 3.10+, CMake 3.20+, Ninja and MinGW-w64 GCC for source builds

## Build

The supported end-user path is the setup, which bundles the translator and
toolchain and builds either APK locally:

```powershell
python -m pip install -r requirements.txt
powershell -ExecutionPolicy Bypass -File tools\make_builder.ps1
powershell -ExecutionPolicy Bypass -File tools\build_installer.ps1
.\build\Asphalt5Setup.exe
```

The setup detects 3.2.4, 3.3.7 or 3.4.1 from the APK, selects the right
library, patch set, UI size and data folder, and builds `Asphalt5.exe`.  It
does not download or copy game data: the 3.3.7/3.4.1 games fetch their
official packs on first launch, and 3.2.4 users drop their own `GloftA5HD`
folder next to the game.  For 3.3.7 and 3.4.1 the setup embeds the six
installer UI files (logo, font, panel and music) and the data manifest inside
`Asphalt5.exe`.  The install folder therefore contains only `Asphalt5.exe`
and `gamefiles/`; no APK resources or manifest are left loose.  The first-run
installer extracts the embedded UI to `%LOCALAPPDATA%` temporarily, then
removes it.

For a source build of 3.2.4:

```powershell
python tools/extract_apk.py "original\Asphalt5 v3.2.4 SE pro.apk"
cmake -S . -B build -G Ninja -DCMAKE_C_COMPILER=gcc
cmake --build build
```

The 3.2.4 translation is already included under `generated/`. To rebuild it
from your own library:

```powershell
python tools/armrecomp.py --so original/apk/lib/armeabi-v7a/libasphalt5.so --out generated
python tools/apply_runtime_patches.py generated
```

Place the 3.2.4 data in `assets/GloftA5HD/` (or next to the executable as
`GloftA5HD/`) when doing a source build. For a manual 3.3.7 or 3.4.1 source build, generate a tree with
`tools/armrecomp.py`, apply
`tools/apply_runtime_patches.py --version 3.3.7` (or `3.4.1`), and compile with
`-DRECOMP_TARGET_337` or `-DRECOMP_TARGET_341` plus the miniz sources (the
setup does this automatically). See [docs/BUILDING.md](docs/BUILDING.md).

Outputs:

- `build/asphalt5.exe` - console development build
- `Asphalt5.exe` - GUI build in the repository root

## Controls

Mouse and keyboard work out of the box; an XInput controller is optional.
See [docs/CONTROLS.md](docs/CONTROLS.md).

## Tests

```powershell
ctest --test-dir build --output-on-failure
powershell -ExecutionPolicy Bypass -File tests\smoke.ps1
```

The visual tests need the APK and game data. CTest uses the library from
`original/apk/` and skips the two tests when it is missing. See
[docs/TESTING.md](docs/TESTING.md).

## Layout

```
src/          Win32 host, guest runtime, OpenGL layer
generated/    split translation of libasphalt5.so (89 units)
tools/        recompiler, patcher, packaging and test utilities
tests/        CTest and smoke tests
installer/    Windows installer source
docs/         build, controls, architecture and testing notes
```

## Legal

This is an unofficial interoperability project. It is not affiliated with
Gameloft. Asphalt 5 and related marks belong to Gameloft SE. You must own the
game and must not redistribute the APK, the original library or the game data.
See [NOTICE.md](NOTICE.md).

The host code, tools and documentation are MIT licensed. See [LICENSE](LICENSE).
