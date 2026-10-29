# Contributing

## Build

```powershell
python -m pip install -r requirements.txt
python tools/extract_apk.py "original\Asphalt5 v3.2.4 SE pro.apk"
python tools/apply_runtime_patches.py generated
cmake -S . -B build -G Ninja -DCMAKE_C_COMPILER=gcc
cmake --build build
```

The generated translation is committed. Rebuild it only when changing the
translator or supporting a different library.

## Tests

```powershell
ctest --test-dir build --output-on-failure
powershell -ExecutionPolicy Bypass -File tests\smoke.ps1
```

Visual tests need the original APK and the `GloftA5HD` data.

## Generated code

`generated/functions_*.c` is produced by `tools/armrecomp.py`. Do not edit
those files by hand. If a generated function needs a runtime fix, add it to
`tools/apply_runtime_patches.py` so it survives regeneration.

## Pull requests

- Keep changes focused and include a short description of the behavior.
- Update `docs/CONTROLS.md` or `docs/TESTING.md` when controls or test
  switches change.
- Do not commit the APK, the original `.so`, `assets/`, `original/`, `work/`,
  build output or a built executable.
- Run CTest and the smoke test before opening a PR. Mention which tests were
  run and which platform was used.
