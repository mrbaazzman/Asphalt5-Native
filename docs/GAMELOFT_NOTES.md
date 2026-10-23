# Gameloft Android Titles — Reuse Notes

Gameloft's Android games from roughly 2009–2012 share enough engine and
tooling DNA that the Asphalt 5 pipeline is a useful starting point for other
titles. They are **not** identical: treat every game as a new target and
re-verify, but expect to reuse large parts of the host and translator.

> Legal: only work with games you own. Do not redistribute original APKs,
> `.so` files, assets, or derived binaries without permission.

## Common stack to look for

| Area | Typical Gameloft pattern |
|---|---|
| Native library | `lib/<abi>/lib<game>.so`, ARM, C++ engine |
| Engine symbols | `Lib3D`, `gx*` (`gxAniGroup`, `gxMesh`), `GLX*`, `Scene`, `CCar*` |
| Java shell | `com.gameloft.android...`; thin installer/portal/billing |
| JNI surface | `nativeInit`, `nativeRender`, `nativeTouch*`, `nativeKey*`, `GLResLoader_*`, `GLMediaPlayer_*`, `Gloft*` |
| Graphics | GLES1 fixed-function (early titles), later GLES2 |
| Textures | PVRTC (PowerVR), ATITC (Adreno), ETC1 |
| Containers | `.bar` / `.cnk` packages, `.glsnd` sound banks, `.bsprite` |
| Compression | LZMA / custom range coding inside packages |
| Audio | Java `SoundPool`/`AudioTrack` + native mixer; `MediaPlayer` movies |
| Saves | Java preferences and/or native files under the app data dir |

Asphalt 5's map is in [`engine-map.md`](engine-map.md), formats in
[`formats.md`](formats.md), and the concrete host in
[`PIPELINE.md`](PIPELINE.md).

## What transfers directly

- The **development method** in [`RECOMPILATION_METHOD.md`](RECOMPILATION_METHOD.md)
  and the checklist in [`NEW_TARGET_CHECKLIST.md`](NEW_TARGET_CHECKLIST.md).
- The **translator architecture** (`autotrans.py`): ELF → Capstone → C,
  register locals, flags model, direct/indirect calls, gate list.
- The **gate/verification runtime**: coverage report, allow/deny, write-log
  differential, strict "untranslated code" logging.
- The **host skeleton**: ELF loader, guest memory/page table, JNI/libc/C++
  shims, GLES bridge, audio mixer, input path, file redirection, saves.
- The **build pipeline**: post-generation patches, chunked generated C,
  Ninja `--parallel`, ccache.
- The **pure-native endpoint**: memory/register backend, no emulator
  execution, `.so` as data image.
- Data tools where the formats match: `bar_extract`, `bar_probe`,
  `texture_extract`, `pvrtc2png`, `unpack_pack`, `strings_extract`, etc.

## What is game-specific

- The **translation candidate list** and gate markers (symbol addresses are
  different).
- JNI class/method names and native method signatures.
- Engine-version differences (GLES1 vs GLES2, shader paths, animation/mesh
  layouts).
- Asset container versions and compression.
- Save format and installer/portal flow.
- Online/DRM/billing and any anti-tamper.
- Any Java-side game logic; if the game is Java-heavy, this pipeline is not
  enough.

## Suggested reuse workflow

1. **Identify the engine generation.** Search symbols/strings for `Lib3D`,
   `gx`, `GLX`, `Gloft`, `com.gameloft`. Check GLES imports (`libGLESv1_CM`
   vs `libGLESv2`).
2. **Start from the A5 host skeleton**, not the A5 game-specific code:
   keep the loader, memory, JNI/libc/C++ shims, GL/audio/input infrastructure;
   replace the gate list, JNI names, data paths and game-specific probes.
3. **Build the oracle** with an emulator and get to the first frame. Log JNI
   and PLT calls; this defines the shim surface.
4. **Reverse the data containers.** Reuse the `.bar`/`.cnk` reader if the
   magic/version matches; otherwise write a new one. Verify textures/audio
   extract correctly before touching the renderer.
5. **Translate hot functions**, verify/gate, then expand to the full symbol
   inventory. Use the strict backend and `untranslated.txt` to find the long
   tail.
6. **Implement GLES/audio differences** (e.g., GLES2 shader translation,
   different sample rates, movie audio).
7. **Pure native**: native backend, strip the emulator, QA all modes, package
   tools + instructions with the user's own data.

## Differences that commonly bite

- **ARMv7/NEON**: the A5 translator is ARMv5-oriented. ARMv7 adds NEON,
  Thumb-2/IT blocks, and more VFP forms; extend the decoder and tests.
- **GLES2**: you need a shader path and uniform/attribute mapping, not the
  fixed-function emulation that GLES1 uses.
- **Different containers**: `.bar` versions differ; never assume the A5
  chunk layout.
- **Audio rates**: verify movie and music rates; resample to the host output.
- **Input model**: some titles use virtual sticks/gestures instead of the A5
  HUD; feed the engine's own touch/key paths, not a host overlay.
- **Online/portal**: offline single-player is the realistic target.
- **Obfuscation/packing**: some releases have protected `.so`s; static
  translation may be impractical without unpacking.

## Reuse decision table

| Situation | Reuse level |
|---|---|
| Same engine generation, similar containers | Host + translator + data tools, new gate list |
| Same engine, GLES2 | Host + translator, new GL shader bridge |
| Different engine, native C++ | Host skeleton + translator; new platform probes |
| Java-heavy or Unity/Unreal | Different approach; this pipeline is not the right tool |
| ARM64-only | New AArch64 translator/runtime; method still applies |

The most valuable reusable asset is not a particular translation — it is the
**progressive translation + differential + strict fallback loop**. That is what
makes a 5,000-function binary tractable without losing correctness.
