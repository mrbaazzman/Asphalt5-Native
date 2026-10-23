# Contributing

Thanks for helping improve the native Android ARM recompilation pipeline.

## Ground rules

- **Never commit game content**: no APKs, `.so` files, data packs, textures,
  audio, video, saves, generated translations (`autogens*.inc`,
  `autogen_part_*.c`), or built executables.  `.gitignore` covers these.
- Do not add code that bypasses DRM or enables piracy.  The builder must
  require the user's own legally obtained APK.
- Keep the pure-native invariant: an untranslated execution must fail loudly,
  not silently fall back, in the default build.

## Development setup

- Windows 10/11 x64 (the host uses Win32, WASAPI/MF and a GL window).
- Python 3.10+.
- CMake, Ninja and MinGW-w64 GCC on `PATH` (or Visual Studio with a compatible
  generator).
- `python -m pip install -r requirements.txt`.
- A legally owned Asphalt 5 HD 3.4.1 APK for end-to-end testing.

## Translation changes

1. Add/update the address in `analysis/autogen/list.txt`.
2. Run:
   `autotrans.py --gen` -> `postgen.py` -> `split_autogens.py`.
3. Build and test with `A5_NATIVE_REPORT=1` / `A5_HOST_REPORT=1`.
4. Validate with the differential (`A5_AUTO_VERIFY=1`,
   `A5_VERIFY_GATED=...`) and real gameplay.
5. Keep new functions gated until proven; never hand-edit generated C.

## Host/tool changes

- C11 for host code; Python 3.10+ for tools.
- Preserve the 32-bit guest layout, VFP/NaN semantics, write-log coverage and
  GL state shadow rules described in `docs/PIPELINE.md`.
- Test boot, menu, race, pause, results, save/relaunch, movie audio and input
  at 60/120 FPS.
- Include the diagnostic output (`A5_HOST_REPORT`) in bug reports.

## Pull requests

- One logical change per PR.
- State which scenario and APK/data version you tested.
- Do not attach game files, generated C, or built binaries.
- Update `docs/` if behavior or the pipeline changes.
