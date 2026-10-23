# Asphalt 5 / Android ARM Recompilation Docs

This folder documents both the **general method** for turning Android ARM
native code into a pure x86-64 build, and the **concrete Asphalt 5 pipeline**
with its tools and current status.

## Start here

- **[RECOMPILATION_METHOD.md](RECOMPILATION_METHOD.md)** — the full field
  manual: feasibility, oracle host, ARM→C translation, differential
  validation, full coverage, removing the emulator, platform layer, QA,
  packaging, and lessons learned.
- **[NEW_TARGET_CHECKLIST.md](NEW_TARGET_CHECKLIST.md)** — copyable phase
  checklist for a new game/app, with red flags.
- **[PIPELINE.md](PIPELINE.md)** — the Asphalt 5 implementation: files,
  commands, gate markers, 12-chunk build, diagnostics, test recipes, known
  refusals.
- **[RELEASE.md](RELEASE.md)** — the one-click end-user setup, first-run
  Gameloft data download, and release packaging.
- **[GAMELOFT_NOTES.md](GAMELOFT_NOTES.md)** — what transfers to other
  Gameloft titles, what is game-specific, and a reuse decision table.

## Asphalt 5 reference material

- **[engine-map.md](engine-map.md)** — reverse-engineered engine/JNI/render
  map.
- **[formats.md](formats.md)** — `.bar`/`.cnk`, textures, `.glsnd`,
  `.bsprite` notes.
- **[lab.md](lab.md)** — extraction/analysis lab notes.
- **[../ROADMAP.md](../ROADMAP.md)** — project tracks and history.
- **[../analysis/HANDOFF.md](../analysis/HANDOFF.md)** — exact current build
  state, gate workflow, and next steps.

## Current state at a glance

| Item | Value |
|---|---|
| Game | Asphalt 5 HD 3.4.1, ARMv5 (`armeabi`) |
| Translated functions | 5,081 |
| Runtime ARM execution | 0 (`emu_starts=0`), no Unicorn DLL |
| Coverage in long race/pause test | 100.00%, gated=0 |
| Release | `dist/Asphalt5.exe`, pure x86-64, O1 |
| Build | 12 generated chunks, Ninja `--parallel 12`, ccache |

## Legal

Use these tools only with software you legally own. Do not redistribute
original APKs, `.so` files, assets, or derived binaries without permission.
Reverse-engineering and anti-circumvention rules vary by jurisdiction; this
documentation is not legal advice.
