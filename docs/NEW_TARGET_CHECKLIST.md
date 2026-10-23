# New-Target Checklist

A practical, phase-by-phase checklist for recompiling another Android ARM
native game or app. Copy this file into the new project and tick items as they
are proven. Details live in `RECOMPILATION_METHOD.md`.

> Only use software you legally own. Do not redistribute original code,
> assets, or derived binaries without permission.

---

## 0. Feasibility gate

- [ ] APK obtained legally; build version/ABI recorded.
- [ ] Native `.so` contains most of the game/app logic (Java is a thin shell).
- [ ] ABI is 32-bit ARM (`armeabi` / `armeabi-v7a`); ARM64 plan noted if not.
- [ ] Graphics path identified (GLES1/2/3, custom GPU extensions).
- [ ] Audio/input/network/movie dependencies identified.
- [ ] Data containers/assets are readable or reverse-engineerable.
- [ ] Offline single-player path exists; DRM/online is not mandatory.
- [ ] No anti-tamper/obfuscation that makes static translation impractical.
- [ ] Legal basis for reverse engineering and distribution checked.

**Decision:** go / no-go / needs a different approach (source port, engine
reimplementation, emulator wrapper).

---

## 1. Recon

- [ ] `unzip game.apk -d analysis/apk`.
- [ ] List `lib/<abi>/*.so`; identify the main engine library.
- [ ] `readelf -h -S -s -r` on the main `.so`; save output.
- [ ] Record `.text` range, `.data/.bss`, `.init_array`, `.got`, imports.
- [ ] Extract function symbols (`.symtab`/`.dynsym`); count them.
- [ ] List JNI exports (`JNI_OnLoad`, `Java_*`).
- [ ] List imported libraries (`liblog`, `libGLES*`, `libEGL`, `libOpenSLES`,
      `libandroid`, `libstdc++`, `libm`, `libdl`).
- [ ] Inspect `classes.dex`: identify Java/native boundary; note JNI calls the
      Java side makes (init, assets, movies, exit, saves).
- [ ] Inventory assets/OBB/custom containers; extract a few and identify
      formats.
- [ ] Identify the engine/middleware if possible (strings, symbols, assets).
- [ ] Write a one-page architecture note: boot path, render loop, input,
      audio, files.

**Acceptance:** you can explain how the game starts, loads data, renders and
reads input, and which libraries must be shimmed.

---

## 2. Oracle host (emulator bootstrap)

- [ ] ELF loader maps PT_LOAD segments at guest addresses.
- [ ] REL relocations applied to GOT/PLT.
- [ ] Guest memory read/write helpers implemented.
- [ ] Fake JNIEnv/JavaVM; `JNI_OnLoad` reached.
- [ ] JNI class/method/field IDs return stable handles.
- [ ] JNI strings/arrays and `Call*` methods work.
- [ ] libc/libm shims: memory, strings, stdio, math, time, random, threads.
- [ ] C++ runtime: `new/delete`, init arrays, atexit, RTTI/exception stubs.
- [ ] Android logging and `__aeabi_*` helpers.
- [ ] EGL/GLES bridge creates a window/context and presents a frame.
- [ ] Input events (mouse/touch/keyboard) reach the engine.
- [ ] Audio output works (at least a click/music).
- [ ] File paths redirected to host data directory.
- [ ] First logo/splash renders.
- [ ] Menu accepts a click.
- [ ] One gameplay frame renders.

**Acceptance:** boot → splash → menu → gameplay under the emulator, with logs
of JNI and PLT calls. This is the behavioral oracle.

---

## 3. Static translation

- [ ] ARM/Thumb mode per symbol determined (low bit/ELF flags).
- [ ] Translator decodes the instruction subset used by the game.
- [ ] Register locals (`r0..r12/sp/lr`) and VFP `S[]` model implemented.
- [ ] Condition flags model (snapshots + condition expressions) implemented.
- [ ] Branches/labels/jump tables emitted.
- [ ] Direct calls emitted (translated callee / PLT shim / indirect).
- [ ] PLT/GOT relocations resolved to host shims.
- [ ] Noreturn imports marked (avoid walking into literal pools).
- [ ] Refusals are explicit and logged, not silently miscompiled.
- [ ] Generation writes a gate list (`!`, `~`, unmarked/`^`).
- [ ] Generated C compiles for x86-64 with the host toolchain.

**Acceptance:** hot functions translate and compile; a gated build boots with
the interpreter still handling untranslated code.

---

## 4. Differential validation and gating

- [ ] Write log records address/size/old bytes for every guest write.
- [ ] Entry register/VFP snapshot and restore implemented.
- [ ] Native run followed by interpreter re-run from the same entry.
- [ ] Compare registers, VFP and written memory; report first divergence.
- [ ] Nested shim writes included in the log/order.
- [ ] Per-function coverage counts and gated-top report.
- [ ] Allow/deny/verify knobs exist (no rebuild for A/B).
- [ ] Functions enabled in small batches with real gameplay scenarios.
- [ ] Regressions bisected with deny lists.
- [ ] Known verifier artifacts documented separately from real bugs.

**Acceptance:** a growing set of functions runs natively with zero real diffs
across boot/menu/race/pause.

---

## 5. Full coverage

- [ ] Strict backend: any untranslated execution is fatal and logged.
- [ ] Persistent `untranslated.txt` with address/offset/LR/SP.
- [ ] Runtime targets added and translated iteratively.
- [ ] Full symbolized function inventory translated, not just hot samples.
- [ ] Indirect/virtual call targets covered.
- [ ] Hidden interior entries/thunks covered (runtime discovery).
- [ ] JNI stubs fast-pathed (do not emulate tiny `BX LR` stubs).
- [ ] Host entry points (JNI/init/input) native.
- [ ] Translator refusals triaged: implement or document.
- [ ] `host arm=0 targets=0 emu_starts=0` on a long session.
- [ ] No `untranslated.txt` entries after the full scenario.

**Acceptance:** zero ARM execution across all reachable modes.

---

## 6. Remove the emulator

- [ ] Native memory/register backend implemented (map/read/write, regs, VFP).
- [ ] `uc_emu_start` fails loudly.
- [ ] Backend selected by default; legacy DLL path optional for diagnostics.
- [ ] Shared API/state across all translation units.
- [ ] Host-call report shows `native>0, arm=0, emu_starts=0`.
- [ ] Menu/frame A/B between native backend and emulator is pixel-identical.
- [ ] No emulator DLL is loaded in the shipped path.
- [ ] `.so` remains only as a data image (or data extracted).

**Acceptance:** pure native process, no ARM instruction execution.

---

## 7. Platform completeness

- [ ] JNI: strings/arrays/classes/methods, `Call*`, exceptions, exit.
- [ ] libc/libm: all imports resolved; no missing symbols at runtime.
- [ ] C++: constructors, vtables, exceptions/RTTI behavior verified.
- [ ] GLES: state shadow, matrices, client arrays, texture formats, FBOs.
- [ ] Raw-GL screens (movies/installer) restore engine GL state.
- [ ] Audio: music/sfx/movies; sample-rate conversion; no pitch/speed bug.
- [ ] Input: touch scaling, mouse, keyboard engine path, gamepad/tilt.
- [ ] Files: APK/OBB/custom containers; saves persist across relaunch.
- [ ] Installer/first-run flow works locally (no mandatory network).
- [ ] Window/message pump responsive during long load steps.

**Acceptance:** every mode that the user can reach is usable, with audio and
input, and saves survive a restart.

---

## 8. Performance

- [ ] Guest page table (O(1) address translation); fallback for unaligned.
- [ ] Inline memory/VFP helpers; hot decoder/loader paths native.
- [ ] Decoded-asset caches where the same data is decoded repeatedly.
- [ ] Frame cap to desktop refresh (60/120/144); `A5_FPS=0` optional.
- [ ] Input edges latched until a logic tick; touch holds span a tick.
- [ ] Generated C split into parallel chunks; Ninja `--parallel` + ccache.
- [ ] No single 50-minute translation unit; warm rebuild fast.
- [ ] Profile loading and frame time; no unexplained multi-second holds.

**Acceptance:** stable 60/120 FPS, responsive input, reasonable rebuild times.

---

## 9. QA and release

- [ ] Scripted boot/menu/race/pause/results/reward/exit scenarios.
- [ ] Mid-race exit, window close, relaunch with saves.
- [ ] Movies with audio; no white/broken UI afterwards.
- [ ] Keyboard remapping and mouse/touch both work.
- [ ] 60/120/uncapped input tests (repeated taps).
- [ ] Screenshot A/B against the oracle for static screens.
- [ ] Crash/diagnostic logs collected and clean.
- [ ] Release build at chosen optimization; size/time recorded.
- [ ] Dist contains host code/tools/instructions, **not** unlicensed assets.
- [ ] First-run instructions for the user's own game data.
- [ ] Known limitations documented.

**Acceptance:** a user can install, provide their own data, play through the
supported modes, save/quit/relaunch, and report issues with logs.

---

## Per-function enable workflow

1. `A5_NATIVE_REPORT=1` → pick the hottest gated function.
2. Run with `A5_NATIVE_ALLOW=0xADDR` through boot/menu/race/pause.
3. If verifiable, run `A5_VERIFY_GATED=0xADDR A5_AUTO_VERIFY=1` and inspect
   the first real diff.
4. If clean, add `!` to the gate list.
5. Regenerate → postgen → split → build.
6. Smoke test; if regressed, bisect with `A5_NATIVE_DENY`.
7. Keep the function gated until the behavior is understood.

---

## Red flags

- A function "verifies clean" but visibly breaks the game later: the
  differential missed a side effect or a path.
- A batch of individually-clean functions breaks only together: interaction
  or timing bug; bisect and test in smaller groups.
- Freezes exactly at a logic tick: an entry hook or input latch stopped
  running when the function became native.
- Render rate changes input behavior: edge/tick synchronization issue.
- Coverage says 100% but the game still stutters/breaks: untranslated code is
  outside the candidate list; use the strict backend log.
- A "translated" function has no symbol and starts mid-function: verify it is
  a real entry (prologue/returns) before enabling.
- A noreturn import was not marked: the translator walked into a literal pool
  and produced garbage instructions.
- Conditional flag setter after a different flag kind: refuses or needs a
  merge model; do not force it.
