# Asphalt 5 Native Pipeline — Concrete Operations

This is the worked-example companion to `RECOMPILATION_METHOD.md`: the actual
files, commands, knobs and gotchas of the Asphalt 5 project.

## Current status

| Item | Value |
|---|---|
| Translated functions | **5,081** (full symbolized inventory + one hidden entry) |
| Runtime ARM execution | **0** (`emu_starts=0`), no `unicorn.dll` |
| Coverage in long race/pause test | 100.00%, gated=0 |
| Platform | Windows x86-64 |
| Graphics | real desktop GL via the engine's GLES1 path |
| Shipped build | `dist\Asphalt5.exe`, O1, 74,017,280 bytes (2026-10-23 07:56) |
| Build | 12 generated chunks, Ninja `--parallel 12`, ccache |

The final `dist\Asphalt5.exe` is a **pure native** process. The original
`libasphalt5.so` is still mapped for its data (strings, globals, vtables), but
no ARM instruction executes and the emulator DLL is not loaded.

---

## 1. Repository map

```
analysis/
  apk/lib/armeabi/libasphalt5.so   original ARM game library (data image)
  rea/symbols_demangled.txt        symbol inventory used by the translator
  autogen/list.txt                 translation candidates + gate markers
  autogen/list_all.txt             full symbolized inventory snapshot
  autogen/gen_all.log              full-generation log
  backup_split/                    pre-refactor source backups
  tools/autotrans.py               ARM/ELF -> C translator
  tools/postgen.py                 post-generation patches (must run after --gen)
  tools/split_autogens.py          split generated C into 12 chunks
  tools/autogen_api_template.h     shared chunk header (memory/VFP helpers)
  tools/make_dist.py               release build + dist
  notes_vfp_session.md             chronological engineering log

port/a5host/
  CMakeLists.txt
  build_cmake.bat                  dev (O1) / release (O2) build
  src/host/a5host.c                loader, heap, call gates, main loop
  src/host/hooks.inc               probes, gate/verify, JNI/PLT, coverage
  src/host/natives.inc             hand-written native probes
  src/host/jni.inc                 fake JNI environment/table
  src/host/uc_lite.inc             native memory/register backend (no Unicorn)
  src/host/autogens.inc            generated dispatch/tables (footer only)
  src/host/autogen_api.h           generated shared header + 5k prototypes
  src/host/autogen_part_00..11.c   generated function chunks
  src/gl/                          EGL/GLES bridge, state shadow, UI thread
  src/audio/                       mixer, OpenSL/AudioTrack/MediaPlayer, resample
  src/codec/                       PVRTC/ATC decoders
  src/installer/                   first-run data installer

dist/
  Asphalt5.exe                     shipped pure-x86 build
  libasphalt5.so                   data image supplied by the player's files
  data/, sdcard/, saves/           user data / extracted game data
  untranslated.txt                 created if pure runtime hits missing code
```

---

## 2. Build

```bat
cd port\a5host
build_cmake.bat            :: dev build, O1, fastest iteration
build_cmake.bat release    :: O2 shipping build (slower)
```

Internals:

- CMake + Ninja, `--parallel 12`.
- ccache is detected automatically.
- The game functions live in 12 `autogen_part_XX.c` chunks; `a5host.c` only
  includes the dispatch/tables footer. This is what lets 12 cores work.
- A warm rebuild after a small change is typically ~1 s; a full cold build
  parallelizes across chunks instead of one 56-minute TU.

Install the dev binary without rebuilding O2:

```powershell
Copy-Item port\a5host\a5host.exe dist\Asphalt5.exe -Force
```

`make_dist.py` builds the O2 release and refreshes the dist; use it only when
the behavior is validated.

---

## 3. Regeneration pipeline

After adding/changing a gate-list entry:

```bat
python analysis\tools\autotrans.py --gen ^
  analysis\apk\lib\armeabi\libasphalt5.so ^
  analysis\autogen\list.txt ^
  port\a5host\src\host\autogens.inc
python analysis\tools\postgen.py
python analysis\tools\split_autogens.py
build_cmake.bat
```

**Order matters:**

1. `autotrans.py` writes a **monolithic** `autogens.inc` (all functions).
2. `postgen.py` patches that monolithic file (12 operations: coverage counter,
   LZMA output cache, logic-tick/latch, direct decoder helper calls, ...).
3. `split_autogens.py` creates `autogen_api.h`, the 12 chunks and the
   footer-only `autogens.inc`.
4. Build.

Do not run `postgen.py` after the split; its function-body anchors live in the
chunks. Always regenerate from `autotrans` first.

If `split_autogens.py` changes the number of chunks, update the explicit list
in `port/a5host/CMakeLists.txt`.

### Gate markers (`analysis/autogen/list.txt`)

- `0xADDR! name` — validated/enabled.
- `0xADDR~ name` — trusted (validated earlier, may have emulated callees).
- `0xADDR name` or `0xADDR^ name` — translated but gated (interpreter/deny).

The pure build cannot interpret, so a reached gated function is a hard
`[uc-lite] FATAL`. Add it and rebuild.

### Full inventory

`analysis/autogen/list_all.txt` is the snapshot of all symbolized functions.
`autogens_all.inc` and `gen_all.log` are the corresponding generation outputs.
The live `list.txt` is the full list plus the hidden `0x16814c` entry.

---

## 4. Gate/verification controls

| Env | Effect |
|---|---|
| `A5_NATIVE_REPORT=1` | On exit: native/gated dispatch counts, top gated functions. |
| `A5_HOST_REPORT=1` | On exit: host-entry native/ARM counts, top fallback targets, `emu_starts`. |
| `A5_NATIVE_ALLOW=0xADDR,...` | Force-enable translations for a test, no rebuild. |
| `A5_NATIVE_DENY=0xADDR,...` | Force-disable / bisect. |
| `A5_NATIVE_HUD=1` | Live coverage % in the window title. |
| `A5_USE_UNICORN=1` | Legacy DLL backend (oracle/differential only). |
| `A5_AUTO_VERIFY=1` | Per-call native vs interpreter differential. |
| `A5_VERIFY_GATED=0xADDR,...` | Verify gated functions during a run. |
| `A5_VERIFY_N=<n>` | Sampled verify calls per function. |
| `A5_AUTO_SKIP=0xADDR,...` | Run a function in the interpreter. |
| `A5_SKIP_ENABLED=1` | Force enabled functions through the interpreter during verify. |

`A5_HOST_REPORT` is the fastest check for the pure build:

```
[host] calls native=2040 arm=0 targets=0 emu_starts=0
```

`arm != 0`/`emu_starts != 0` means an untranslated address was reached; the
same address is appended to `untranslated.txt`:

```
addr=0x1016814c off=0x16814c lr=0x300f0000 sp=...
```

Add `0x16814c` to `list.txt` and run the regeneration pipeline.

---

## 5. Input, FPS and movie diagnostics

| Env | Effect |
|---|---|
| `A5_FPS=<n>` | Frame cap; default = desktop refresh; `0` = uncapped. |
| `A5_WINDOW=WxH` | Real window/render size; default 1920×1080 or desktop. |
| `A5_SCREEN=WxH` | Logical UI/layout size; default 854×480. |
| `A5_WINDOWED=1` | Force a bordered window (default is borderless at display size). |
| `A5_ASPECT=fit` | Preserve 16:9 with letterbox/pillarbox (default). |
| `A5_ASPECT=stretch` | Fill the window (legacy behavior). |
| `A5_TEXSCALE=auto` | Resample level-0 textures to render density (default). |
| `A5_TEXSCALE=off` | Keep original texture resolution. |
| `A5_FPS_HUD` | (if enabled in the host) live FPS/cap readout. |
| `A5_KEYDOWN="frame:key[:hold]"` | Inject one engine key press. |
| `A5_KEYTAPS="f:key:hold;..."` | Multiple short taps (nitro/input QA). |
| `A5_TEST_CLICK="f:x:y;..."` | Scripted mouse/touch taps. |
| `A5_NITRO_DEBUG=1` | Pad pressed/held/latch + nitro decision traces. |
| `A5_INPUT_TRACE=1` | Log touch events and state. |
| `A5BOOT_FRAMES=<n>` | Run N frames then exit. |
| `A5BOOT_HIDDEN=1` | Hidden window (scripted tests). |
| `A5_ALLOW_MULTI=1` | Hidden diagnostic instance alongside the player's game. |
| `A5_TEST_EXIT` / `A5_QUITMENU` / `A5_AUTOPAUSE` / `A5_IGM_DO` | Exit/pause scenario hooks. |

Input lessons baked into the host:

- The engine logic runs at its own tick rate (~60 Hz); render can be 120+.
- A one-frame tap at 300 FPS is ~3 ms. Touch downs in a race are held until
  at least one logic tick (wall-clock, 150 ms cap).
- The keyboard/pad "pressed" edge is latched after
  `GamePadManager::UpdateKeys` and consumed at the car tick; this used to be a
  code hook inside `Game::TimerCallback`, which stopped firing when that
  function became native.
- `A5_KEYTAPS` reproduces "sometimes Space does nothing" reliably.

---

## 6. Test recipes

Boot/menu/race with nitro and pause (hidden):

```powershell
$env:A5BOOT_FRAMES="1600"; $env:A5_NO_MOVIE="1"; $env:A5BOOT_HIDDEN="1"
$env:A5_TEST_CLICK="300:429:402;470:435:433;550:429:402;700:735:370;760:735:370"
$env:A5_QUITMENU="1550"; $env:A5_NITRO_DEBUG="1"
$env:A5_KEYTAPS="820:23:1;860:23:1;950:4:2;1050:4:2"
$env:A5_NATIVE_REPORT="1"; $env:A5_HOST_REPORT="1"
.\port\a5host\a5host.exe
```

Quick release smoke:

```powershell
$env:A5BOOT_FRAMES="700"; $env:A5_NO_MOVIE="1"; $env:A5BOOT_HIDDEN="1"
$env:A5_TEST_CLICK="300:429:402;470:435:433;550:429:402"
$env:A5_QUITMENU="650"; $env:A5_NATIVE_REPORT="1"; $env:A5_HOST_REPORT="1"
.\dist\Asphalt5.exe
```

Intro/movie path: omit `A5_NO_MOVIE` and run ~500 frames; check
`[movie] playing ...`, audio feeding, and `emu_starts=0`.

Expected clean result:

```
[native] dispatches=... native=... gated=0 coverage=100.00%
[host]   calls native=... arm=0 targets=0 emu_starts=0
errors=0
```

---

## 7. Known refusals / limitations

The full generation refuses 24 functions, mostly:

- JPEG encoder internals using `ldrd` / `adc`
  (`dwt_getnorm`, `mct_encode_real`, `tcd_*`, `t1_encode_cblks`, ...).
- `Scene::MP_RecomputePrevPositions` (`ldmda`, multiplayer).
- Online/GLX functions using `ldrdeq`.
- `CMatrix::Mult/PreMult/SetMult` (`vmsr`) — these are covered by
  hand-written probes, so the refusal does not matter.

If a refused function is reached, `untranslated.txt` records it. Implement the
missing instruction (LDRD/ADC/...) or a targeted native shim, then regenerate.

Other limits:

- 32-bit ARM only. ARM64 would need an AArch64 translator/runtime.
- Java/Kotlin app logic is not translated; the game must be native-heavy.
- Online services are not recreated; offline modes only.
- The original `.so`/assets remain copyrighted; public distribution should
  require the user's own files.

---

## 8. Architecture invariants (do not break)

1. **Guest pointers are 32-bit.** Never silently widen a field in a guest
   structure.
2. **Guest memory is host-backed.** `mem_host` is the fast path; `p_uc_*` is
   the fallback. A missing mapping must be loud, not silently zero.
3. **The write log must see every native write** used by the differential
   (`uw8/uw16/uw32` all log). Direct `memcpy` into guest memory bypasses it.
4. **Pure mode has no interpreter.** `uc_emu_start` failing is the discovery
   mechanism; never swallow it.
5. **Generated `autogens.inc` is not hand-edited.** Use `list.txt` +
   `autotrans` + `postgen` + `split`.
6. **`a5_updatecars_entry` / press-latch semantics** are host-side work that
   used to live in emulator entry hooks; keep them in the native dispatch.
7. **VFP NaN semantics** use the `arm_vfp_nan*` wrappers; do not use raw x86
   results where the engine compares bits.
8. **GL state shadow** must be restored after raw-GL screens (movies,
   installer) via `a5gl_state_restore`.
9. **Input is frame-rate independent**: latch edges and hold touches across
   logic ticks.

---

## 9. History / backups

- `analysis/backup_split/` — monolithic-source snapshot before the 12-chunk
  refactor (`a5host.c`, `hooks.inc`, `autogens.inc`, `CMakeLists.txt`,
  `uc_lite.inc`, `a5host_tested.exe`).
- `port/a5host/src/host/autogens_1k.inc` — the 1,807-function monolithic
  translation (before the full inventory).
- `analysis/autogen/list_before_all.txt` — gate list before the full inventory.
- `analysis/autogen/autogens_all.inc` — 5k monolithic generation snapshot.

For a new target, keep the same discipline: snapshot each working build and
each generation input, and never overwrite a tested binary with an unverified
one.
