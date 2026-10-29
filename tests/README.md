# Tests

```powershell
ctest --test-dir build --output-on-failure
powershell -ExecutionPolicy Bypass -File tests\smoke.ps1
powershell -ExecutionPolicy Bypass -File tools\scene_coverage.ps1
```

`smoke.ps1` needs `assets/GloftA5HD/` and
`original/apk/lib/armeabi-v7a/libasphalt5.so`. Use `-SkipVisual` for the
headless checks only.

See [docs/TESTING.md](../docs/TESTING.md) for capture recipes and runtime
switches.
