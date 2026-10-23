# Asphalt 5 HD — Native PC Recomp/Port Project

**Goal:** turn `Asphalt 5 HD 3.4.1` (Android, 2010, ARMv5) into a **native PC build** that:
- runs as x86-64 native code on our hardware (no emulator in the final artifact),
- renders through a PC graphics backend we control,
- reads the game data the player provides (we ship **code and tools only, never game assets**).

This is not the N64Recomp story: there is no existing recompiler, runtime or renderer for
2010-era Android ARM. **We build the pipeline.** The upside: the target is unusually small.

**Reusable documentation:** [`docs/RECOMPILATION_METHOD.md`](docs/RECOMPILATION_METHOD.md)
is the generalized field manual, [`docs/NEW_TARGET_CHECKLIST.md`](docs/NEW_TARGET_CHECKLIST.md)
is the per-target checklist, and [`docs/PIPELINE.md`](docs/PIPELINE.md) documents this
project's concrete tooling and commands.

## What we know (from the RE phase)

| Fact | Value |
| --- | --- |
| Game engine | `libasphalt5.so`, ARMv5 32-bit, ET_DYN, ~1.4 MB `.text` (Lib3D + GLX/Live) |
| JNI surface | 23 exports (`Asphalt5_*`, `Asphalt5Renderer_*`, `GLMediaPlayer_*`, `GLResLoader_*`) |
| Graphics API | OpenGL ES **1.x fixed-function** (`libGLESv1_CM`) |
| Audio | Java `SoundPool` + native mixer (`GLMediaPlayer`), `.glsnd` banks |
| Other deps | libc, libstdc++, libm, libdl, liblog |
| Data | `package_general.bar` split into 93 `.cnk` chunks (proprietary archive), plus loose files |
| Textures | PVRTC (PowerVR pack) / ATITC (Adreno pack) compressed, inside containers |
| Java side | thin shell: installer, billing, Gameloft Live, portal (IGP) |
| Handedness | `armeabi` (ARMv5) — same code Houdini translated in BlueStacks |

**Oracle:** the patched APK (see `analysis/tools/patch_compat.py`) running in BlueStacks +
the real data packs. This is our behavior reference and current playable build.

## Tracks

- **T1 — Data & tooling (`a5tool`)**: reverse `.bar`/`.cnk` container, `textures` blob,
  `.bsprite`, `.glsnd`; build a lossless list/extract/rebuild tool; include PVRTC/ATC → RGBA
  decoders (also the port's texture pipeline / offline asset conversion).
- **T2 — Static RE (Ghidra + REA)**: full function inventory; classify platform vs engine;
  map JNI entries → boot → main loop → renderer → asset IO → audio; document each.
- **T3 — Runtime shims**: GLES1 fixed-function → desktop GL (candidate: GL4ES or a small
  custom shim; Mesa as fallback), file IO over unpacked data dir, audio (miniaudio),
  input, threads, logging.
- **T4 — Recompiler prototype**: ARMv5(+Thumb interop?) → C AOT emitter scoped to what the
  engine actually uses; differential testing vs the oracle.
- **T5 — Port integration**: nativeInit → first frame → menu → race; PC enhancements
  (internal resolution, unlocked FPS, controller) behind config, like the recomp scene does.
- **T6 — Publish**: docs, tools, patches. Code only; users bring their own copy of the game.

## Milestones

- **M0 (done)**: assets preserved (PVRT+ATC), app understood, patched oracle running on PC.
- **M1** *(assets): **COMPLETE** — containers ✅, textures ✅ (1,116 PVRTC→PNG), strings/audio ✅, **all 44 cars → OBJ + flat-shaded 3D render** (first real render from pure decode); texture-ID map for cars solved; **car UV mapping SOLVED** (engine-validated record layout, see `docs/engine-map.md`; textured renders + native textured car).*
- **M2** *(done-ish — see `docs/engine-map.md`: boot chain, platform layer, 16-lib map, id spaces, object/scene/audio pipelines; remainder = AniObj_v4 field-level decode)*: next = mesh decoder campaign.
- **M3** *(started — `port/a5view.exe`: first native PC executable; C + Win32 + OpenGL 1.1, zero deps; builds with MinGW; renders decoded cars on the RX 9060 XT including turntable captures. **`port/a5engine/a5engine.exe`: native engine seed that reads the raw package (`package_general.bar_*.cnk`) directly — lib5 object lookup (class 0x65 AniObj_v4 + class 0x61 CAniObjDLists), display-list decode, lib8 RGBA textures → GL, **lib9 scene records → full track rendering** (Monaco circuit: road, buildings, street furniture, harbor). Camera modes: car turntable, scene orbit/free positioning. Next: drivable car on the track, materials/tint fidelity, lightmaps, wheels from animation)*: runtime shims + native engine.
- **M4** *(PROVEN — differential recompilation harness works: `CMatrix::SetTranslation` 4000/4000 and `SetQuaternion` 3983/3983 bit-exact vs the emulated ARM original, via Unicorn oracle + translated C. See `port/recomp/README.md`)*: next = automate translation (Ghidra→C), scale function coverage, platform shims.
- **M5** *(real-engine milestone reached — `port/a5host/a5host.exe` (C, Unicorn C
  API) runs the ACTUAL `libasphalt5.so`: full shim/JNI/resource/GL platform
  layer in C, real GPU rendering, boot ~0.5 s, ~200 FPS in the menu, ~45 FPS in
  the race (still interpreted ARM). **FULL FLOW: boot → loading → attract →
  splash → INTERACTIVE `GS_MainMenu` (9 touch rects, real actions) → QUICK RACE
  → `GS_LoadGame` (progress 0..1407) → `GS_Run`: the actual race with AI
  opponents and changing track environments.** Fixed on the way: the 800x480
  design resolution (the showroom now fills the screen), GLES1 per-unit
  texcoord arrays (showroom lightmaps), a real heap allocator (the bump
  allocator exhausted during the race load), the menu item-rect registration
  ordering bug, sound-manager stubs, ATC decode (explicit-alpha + row order),
  the **window client-area bug** (CreateWindowEx outer size 800x480 →
  client 800x452 → the top 28 px of everything was clipped: the MAIN MENU
  title bar, the race HUD's POS/LAP row, popup tops; fixed with
  AdjustWindowRect), the **corner menu button layout** (quick race/info/quit
  repositioned to the real game's arrangement), the **per-client-unit
  texcoord array bug** (the bridge bound every unit's texcoords on the same
  client unit, so car bodies sampled their atlas with the lightmap's UVs —
  the cars were flat/"unpainted"; fixed with glClientActiveTexture per unit:
  the cars now render fully textured) and the **fast-inverse-sqrt seed bug**
  (InvSqrt reads its Newton seed from an unwritten caller scratch slot —
  garbage under emulation poisoned the car bodies' spherical-reflection UVs;
  the host now seeds it, so the bodies show their proper reflection shading).
  **Final texture root-cause: the PVRTC format constants were swapped** -
  `GL_COMPRESSED_RGBA_PVRTC_4BPPV1`/`GL_COMPRESSED_RGB_PVRTC_2BPPV1` held
  each other's values, so the engine's dominant `0x8C02` (RGBA 4bpp: rims,
  license plates, glass, reflections) was decoded with the 2bpp path - a
  plausible but scrambled image ("cut in half" wheels, "A5P" instead of the
  full "ASPHALT" plate). Proven by diffing the in-game decode against an
  independent PVRTC decoder on the same raw bytes (0/255 diff via the
  standalone harness), then fixed by correcting the two constants. The
  wheels and plates now render correctly (`fix_3000.png`,
  `fix_plate_ASPHALT.png`).
  **Audio is real now too**: the host implements the Java `GLMediaPlayer`
  side natively (Ogg Vorbis via stb_vorbis + a WinMM waveOut mixer driven by
  the engine's own `loadSound/playSound/setVolume/setPitch` JNI calls; the
  assets are 22050 Hz mono - sfx decode on a gentle background worker, music
  streamed + resampled live in the mixer, per-voice fades, `TIME_CRITICAL`
  mixer). Menu music, UI sfx and the race sounds (including the engine's
  pitch-shifted RPM) all play; `A5_STUB_SOUND=1` restores the old silent
  stubs for debugging.
  **The realtime clock bug** (the "race starts with no track" one): the
  `gettimeofday`/`clock` shims returned `time(NULL) * 1000` - whole seconds
  scaled - so every frame delta was 0 and the engine's world streaming never
  ran (the car floated over the backdrop with no road, and timed animations
  froze). They now return real milliseconds (`GetTickCount64()`); the
  realtime race renders the full track (`fixed_1400.png`).
  **Fast load**: the engine advances the loading screen one step per frame
  (1407 steps); the host runs extra `GS_LoadGame::Update` calls per frame
  (~12x), so the loading screen passes in a fraction of the time. `A5_NO_FASTLOAD=1`
  disables. A single-instance guard + hard `ExitProcess` prevent lingering
  processes (a leftover instance halves the CPU and stalls the next launch);
  every run also writes `a5host_status.txt` (frame/state/load/audio) so a
  stall is diagnosable.
  Graphics now complete for the main flow: loading, splash, menu (title bar +
  items + icons + Gameloft button + painted showroom car with chrome wheels
  and floor reflections), garage/career/events/options/info/multiplayer
  screens, race (full HUD, event banners, tutorial popup, city + snow
  environments, textured player + traffic cars). Screens:
  `port/turntable/FINAL5_menu_full.png`, `FINAL6_*.png`,
  `ab_inv_on.png` (InvSqrt fix comparison). Next: translate functions to C
  and swap them into a5host (the convergence to native))*: `nativeInit`
  executes natively; first engine frame drawn from real game code; the real
  race runs.
  **Performance, the big one: the per-draw vertex copy was O(shared vertex
  buffer), not O(draw).** The engine's `glDrawElements` indices point into
  large shared vertex buffers (a 300-vertex draw can reference vertex #20000),
  and the bridge copied the whole `max(index)+1` span + de-interleaved it per
  draw — ~150 us of memcpy per draw, 160k draws per race ≈ 20 s of the run.
  Now: a generation-stamped dense remap + an indexed gather with word-wise
  fast paths + a streamed `GL_STREAM_DRAW` VBO (`A5_NO_VBO=1` keeps the old
  path). **Race: ~35 s → ~16 s; frame time 28 ms → ~11 ms (~90-100 FPS);
  GL bridge 760 ns/call.** (the ~14.8 s "best" runs = machine variance; the
  A/B native-rotation check is the reliable measurement.)
  **Convergence to native started: recompiled engine functions run in the
  live game.** `CMatrix::Mult/PreMult/SetMult` + `RotateX/Y/Z` +
  `SetTranslation` are bit-exact C translations (`src/host/natives.inc`),
  validated by `analysis/tools/recomp_mult_test.py` (1969/1969) and
  `recomp_rot_test.py` (1989/1989). The multiplies use the VFP vector mode
  (FPSCR.LEN=3, FZ+DN semantics replicated with the SSE FTZ/DAZ + default
  NaN); the oracle runs with the Cortex-A8 CPU model (`uc_ctl`), the only
  Unicorn model that executes the vector mode. `A5_NO_NATIVE_ROT=1` reverts
  the rotations to the interpreter.
- **M6** *(in progress — **native boot flow**: `a5install.exe` = the game's installer
  natively (validates, downloads from dl.gameloft.com, inflates with a built-in
  zlib, installs all 324 files byte-exact, game-art UI); `a5engine --menu` =
  main menu natively (car turntable, boot status, selectable items) → SINGLE
  RACE/QUICK RACE start the Monaco race. Track rendering + drive mode: lib 9
  scenes, lib 4 lightmaps, lib 12 road network (autopilot drives the full
  circuit), engine-truth wheel pivots, ground following.
  Next: traffic cars on the lanes, lap/checkpoint logic, then the recompiled
  engine functions driving the real flow)*: menu interactive → race loads.
- **M7**: playable build + enhancements + release packaging.

## Risks / unknowns

- ARMv5 code quirks: conditionals, PC-relative literal pools, GOT/PIC addressing, interworking.
- GLES1 fixed-function completeness (tex-env combine, fog, alpha test) — shim maturity.
- Container format idiosyncrasies (chunked archives, per-file compression/encryption?).
- Texture decode quality (PVRTC) — pick a proven open decoder.
- Scope realism: this is a **long-haul** project; milestones are individually valuable.

## Legal

No game assets are ever distributed by this project. Tools operate on data the user
supplies (their own APK + downloaded packs). Patches are interoperability fixes for
code the user owns.
