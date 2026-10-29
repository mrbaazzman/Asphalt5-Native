# Building

## Requirements

- Windows 10/11 x64
- Python 3.10+ with `capstone`, `pyelftools` and (for the contact sheet) `Pillow`
- CMake 3.20+, Ninja and MinGW-w64 GCC on `PATH`
- Your own Asphalt 5 HD 3.2.4 APK
- The matching `GloftA5HD` game data

## Game files

Create this layout. Both directories are ignored by Git:

```
original/
  Asphalt5 v3.2.4 SE pro.apk
  apk/                         extracted APK
assets/
  GloftA5HD/                   game data (package_general.bar_*.cnk, ...)
```

Extract the APK:

```powershell
python tools/extract_apk.py "original\Asphalt5 v3.2.4 SE pro.apk"
```

The game can also read a `GloftA5HD` folder placed next to `Asphalt5.exe`.

## Build

The generated translation is included under `generated/`. If you only want
to compile it:

```powershell
cmake -S . -B build -G Ninja -DCMAKE_C_COMPILER=gcc
cmake --build build
```

Outputs:

- `build/asphalt5.exe` - console build with `crc`, `mtxtest` and `boot`
- `Asphalt5.exe` - GUI build in the repository root

## Regenerating the translation

Use this after changing `tools/armrecomp.py` or when using a different
library build:

```powershell
python tools/armrecomp.py `
  --so original/apk/lib/armeabi-v7a/libasphalt5.so `
  --out generated

python tools/apply_runtime_patches.py generated
```

`armrecomp.py` writes one translation unit per ~500 KB. The current library
produces 89 files. The patch step is mandatory: it installs the scalar
`CMatrix` replacements and the camera, nitro, phone-rotation and exit fixes.

## Installer

The installer compiles the game locally from the user's APK and a bundled
MinGW toolchain. To build it:

```powershell
powershell -ExecutionPolicy Bypass -File tools\make_dist.ps1
```

The result is `dist\Asphalt5Setup.exe`. The installer source is in
`installer/Asphalt5Setup.cs`; it expects `build/builder.zip` from
`tools/make_builder.ps1`.
