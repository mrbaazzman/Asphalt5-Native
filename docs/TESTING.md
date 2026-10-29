# Testing

## CTest

```powershell
cmake -S . -B build -G Ninja -DCMAKE_C_COMPILER=gcc
cmake --build build
ctest --test-dir build --output-on-failure
```

- `crc` calls the translated zlib `crc32` and must print `cbf43926`.
- `mtxtest` compares the scalar matrix replacements with the guest versions.

Both tests are skipped when the library is not present; place it under
`original/apk/lib/armeabi-v7a/libasphalt5.so` to run them.

## Smoke test

```powershell
powershell -ExecutionPolicy Bypass -File tests\smoke.ps1
```

The script boots the game off-screen, captures the menu, forces scene 2,
dismisses the tutorial, captures a race frame, and runs the pixel probe. Use
`-SkipVisual` when the game data is not available.

Captures go to `work/captures/`, logs to `work/logs/`.

## Scene coverage

```powershell
powershell -ExecutionPolicy Bypass -File tools\scene_coverage.ps1
```

Runs scenes 1-12, captures one frame per track and checks that every scene
is distinct and non-blank. Output goes to `work/scene-coverage/`, including a
labelled `contact.png`.

A local signature baseline can be recorded and replayed:

```powershell
python tools\pixel_probe.py check --kind scene-dir --dir work\scene-coverage `
  --record-baseline work\scene-coverage\baseline.json

python tools\pixel_probe.py check --kind scene-dir --dir work\scene-coverage `
  --baseline work\scene-coverage\baseline.json
```

## Deterministic captures

```powershell
$env:RECOMP_OFFSCREEN='1'
$env:RECOMP_FORCE_SCENE='2'
$env:RECOMP_TAP='368,438,600;427,435,2500;427,435,3500;427,435,4500;427,435,5500'
$env:RECOMP_CAPTURE='work\captures\race.ppm'
$env:RECOMP_CAPTURE_FRAME='13000'
.\build\asphalt5.exe boot -q
```

## Input checks

- Pause and resume: `RECOMP_INPUT_LOG=1` prints `back/pause`, `race left`,
  `pause resume` and `race entered`.
- Steer + brake: `RECOMP_NITRO_LOG=120` ends each line with `p0c`, the engine's
  current GamePad word. While Left + Down are held it should contain the
  steering and brake bits together.
- Exit: `RECOMP_EXIT_FRAME=8000` must print `[exit] Game::Exit` and terminate
  the process.
- Straight start: `RECOMP_START_LOG=1` prints any pre-race orientation hold.

Visual tests require `assets/GloftA5HD/` and
`original/apk/lib/armeabi-v7a/libasphalt5.so`.
