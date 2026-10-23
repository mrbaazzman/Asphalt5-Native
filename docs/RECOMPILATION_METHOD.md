# Recompiling Android ARM Games and Apps to Native x86-64

A field manual distilled from the Asphalt 5 port. It describes a repeatable
method for taking a 32-bit ARM Android native binary (`.so`), translating its
code to C, compiling that C for x86-64, and replacing the Android platform
with a PC host layer — until the emulator is no longer needed at runtime.

The worked example is **Asphalt 5 HD 3.4.1 (Gameloft, 2010, `armeabi`)**:
5,081 translated functions, 100% native execution, no Unicorn execution and
no `unicorn.dll` at runtime.

> **Legal / ethical note.** Only do this with software you legally own. Do not
> redistribute the original APK, `.so`, assets, or a recompiled binary unless
> you have the rights to do so. Reverse-engineering and anti-circumvention
> rules differ by country. A clean public release usually ships **tools and
> host code only**, and asks the user to provide their own legally obtained
> game files. This document is engineering methodology, not legal advice.

---

## 1. What this method is (and is not)

**It is:**

- **Static recompilation**: disassemble ARM/Thumb machine code and emit
  equivalent C, one guest instruction at a time, then compile that C with a
  normal x86-64 compiler.
- **A platform replacement**: fake the Android/JNI/libc/EGL/GLES/audio/input
  surface with a PC host layer.
- **Progressive**: start with an emulator as the oracle and fallback, validate
  translations one function at a time, and only then remove the emulator.
- **Bit-faithful where it matters**: guest memory layout, integer flags, VFP
  semantics, call ABI and data structures are preserved.

**It is not:**

- A source port. There is no original source; the binary is the specification.
- A Java/Kotlin decompiler. Java app logic still needs a JVM/ART or a rewrite.
- A universal ARM64 solution out of the box. The reference pipeline targets
  **32-bit ARM** (`armeabi` / `armeabi-v7a`). ARM64 needs an AArch64 translator
  and runtime; the same architecture applies, but the decoder and ABI differ.
- A way to avoid engine/asset work. Custom containers, shaders and audio
  formats still need reverse engineering or shims.
- A license to distribute someone else's game.

### When this method works well

| Target property | Good fit | Hard / poor fit |
|---|---|---|
| App logic location | Native `.so` does the real work; Java is a thin shell | Most logic is Java/Kotlin or managed IL |
| ABI | ARM32 `armeabi`/`armeabi-v7a` | ARM64-only, exotic ABIs |
| Graphics | GLES1/GLES2/GLES3 with a manageable call surface | Deep custom GPU/driver dependencies |
| Engine | In-house/C++ engine with symbols | Huge IL2CPP/Unity or Unreal title with millions of functions |
| Data | Readable containers or standard formats | Server-streamed/DRM-only content |
| Dependencies | libc/libm/libstdc++/EGL/GLES/OpenSL | Vendor SDKs, proprietary DRM, anti-tamper |
| Symbols | Present (even mangled) | Stripped and heavily obfuscated |
| Online | Optional/offline | Mandatory server authentication |

A game like Asphalt 5 is close to ideal: ARMv5, symbols, GLES1 fixed function,
a thin Java shell, and native code that owns the game.

---

## 2. Architecture

```
┌────────────────────────────── Android APK ──────────────────────────────┐
│ lib/armeabi/libgame.so   assets/   res/   classes.dex   lib/*.so deps   │
└───────────────────────────────────┬─────────────────────────────────────┘
                                    │
                     ┌──────────────▼──────────────┐
                     │  Guest image (ELF)           │
                     │  mapped into host memory     │
                     │  code + .data/.bss + GOT     │
                     └───────┬──────────────┬───────┘
                             │              │
             ┌───────────────▼───┐   ┌──────▼───────────────────────────┐
             │ Translated C       │   │ Host platform layer              │
             │ 1 C function per   │   │ JNI, libc/C++ shims, EGL/GLES,   │
             │ guest function     │   │ audio, input, files, saves       │
             │ compiled x86-64    │   │ (the "Android" the game sees)    │
             └───────────────┬────┘   └──────┬───────────────────────────┘
                             │               │
                     ┌───────▼───────────────▼───────┐
                     │ Native x86-64 process          │
                     │ (optional emulator = oracle)   │
                     └────────────────────────────────┘
```

Two execution modes are useful:

1. **Hybrid/oracle mode**: a real ARM emulator (Unicorn) runs any function not
   yet translated and provides the reference behavior for differential tests.
2. **Pure native mode**: every reached function is translated; the emulator
   API is replaced by a tiny native memory/register backend (no ARM execution).

The transition between them is the core of the method.

---

## 3. Phase 0 — Reconnaissance and feasibility

### 3.1 Extract and inventory

```bash
unzip -o game.apk -d analysis/apk
find analysis/apk/lib -maxdepth 2 -type f -name '*.so'
file analysis/apk/lib/armeabi*/libgame.so
readelf -h -S -s -r analysis/apk/lib/armeabi*/libgame.so
```

Record:

- **ABI**: `armeabi` (ARMv5), `armeabi-v7a` (ARMv7), `arm64-v8a`, `x86`, etc.
- **ELF type**: `ET_DYN` shared object, usually PIC.
- **Sections**: `.text`, `.rodata`, `.data`, `.bss`, `.got`, `.init_array`,
  `.ARM.exidx`.
- **Imports**: `liblog`, `libGLESv1_CM`, `libEGL`, `libOpenSLES`,
  `libandroid`, `libstdc++`, `libm`, `libdl`.
- **Exports**: `JNI_OnLoad`, `Java_*` native methods, C++ entry points.
- **Symbols**: `.symtab` if present; otherwise `.dynsym`; Ghidra/REA can
  reconstruct more.
- **Data**: assets, OBB, custom containers (`package_general.bar`, `.cnk`,
  `.glsnd`, `.bsprite`, etc.).
- **Java surface**: `classes.dex` — how much game logic is Java? Use
  `jadx`/`baksmali` or strings; identify the JNI calls the Java layer makes.

### 3.2 Feasibility questions

1. Is the real game in the `.so`? If most logic is Java, this pipeline is the
   wrong tool.
2. Is the ABI 32-bit ARM? If ARM64, plan an AArch64 backend.
3. What graphics API and version? GLES1 fixed function is more shim work than
   GLES2/3 but very doable; custom GPU extensions are harder.
4. What audio path? OpenSL ES / AudioTrack / MediaPlayer / custom mixer.
5. What file paths and containers? Reverse the package format early; without
   data the engine cannot boot.
6. What online/DRM checks exist? Offline single-player is the realistic target.
7. Are there anti-tamper/obfuscation layers? These can make static translation
   impractical.

### 3.3 Build the oracle first

Before translating anything, get the original ARM binary to **boot, render
and accept input** under a controlled host:

- Unicorn (or QEMU) for ARM execution.
- A fake JNI environment and shim table.
- Loader for the ELF segments and relocations.
- Minimal libc/libm/C++ shims.
- EGL/GLES bridge (or a GLES implementation such as GL4ES).
- Audio and input stubs.

The oracle gives you a working reference and a place to hang diagnostics. It
also lets you discover behavior without translating everything up front.

**Acceptance:** logo/splash appears, menu accepts a click, one frame of
gameplay renders, logs show the JNI and PLT call surface.

---

## 4. Phase 1 — Host bootstrap (the platform layer)

The game expects Android. Implement just enough of it to reach the first frame.

### 4.1 ELF loading and guest memory

- Map the ELF's PT_LOAD segments at their virtual addresses into host-backed
  memory. Preserve alignment and permissions conceptually; the host can use
  RWX or separate mappings.
- Apply REL relocations (ARM32) to the GOT/PLT slots.
- Keep a **guest address → host pointer** map. For speed, use a page table
  (see §9), with a linear fallback for unaligned/rare mappings.
- A 32-bit guest uses 32-bit pointers; do not "fix" pointer sizes in guest
  data structures.

### 4.2 JNI

The game sees `JNIEnv*` as a pointer to a table of function pointers. Build:

- A `JNIEnv` function table with the JNI calls the game imports.
- A `JavaVM` with `GetEnv`/`AttachCurrentThread`/`DetachCurrentThread`.
- `JNI_OnLoad` call, and `RegisterNatives` handling if used.
- Class/method/field ID stubs that return stable handles.
- String/array conversion between guest UTF-8/UTF-16 and host.
- `CallStatic*`/`Call*` for the thin Java shell. A common trick for a mobile
  game's "Exit" is to intercept the specific `CallStaticVoidMethod` name and
  close the host.
- JNI native method entries (`Java_com_...`) are game functions; their ARM
  code is translated like any other function, or you provide hand-written
  host implementations for boot/entry points.

**Log every JNI call** with arguments at first. The Java surface tells you
what the game expects (file paths, device info, billing, online, movie
loading, exit).

### 4.3 libc / libm / libstdc++ / libdl

The `.so` imports libc through the PLT/GOT. For each imported symbol, provide
a host shim and relocate the PLT/GOT slot to it. Typical set:

- memory: `malloc/free/calloc/realloc`, `memcpy/memmove/memset/memcmp`
- strings: `strlen/strcmp/strcpy/strncpy/strcat/strstr/strchr`, `atoi`,
  `strtol`, `strtod`, `sprintf/snprintf`
- stdio: `fopen/fclose/fread/fwrite/fseek/ftell/fflush`, `printf/fprintf`
- math: `sinf/cosf/tanf/atan2f/sqrtf/powf/floorf/ceilf`, double variants
- time/random: `time`, `gettimeofday`, `clock`, `lrand48/srand48`
- threading: `pthread_create/join/mutex_*`, `sem_*` (often stub or map to host)
- dl: `dlopen/dlsym/dlclose` (often stubbed; the game usually does not load
  arbitrary libs)
- Android logging: `__android_log_print`
- ARM runtime helpers: `__aeabi_idiv`, `__aeabi_uidiv`, `__aeabi_idivmod`,
  `__aeabi_uidivmod`, `__aeabi_memcpy`, etc.
- stack protector: `__stack_chk_fail` (noreturn)

The shim table is also the place for **PLT fast paths**: division/memcmp in
hot loops should not bounce through the interpreter.

### 4.4 C++ runtime

- `operator new/delete`, array variants.
- Static constructors/destructors in `.init_array`/`.fini_array`: call them at
  boot, and model `__cxa_atexit`.
- `__cxa_pure_virtual`, RTTI/exception helpers: many games never throw; if
  they do, either map to host C++ or stub with a clear failure.
- Vtables and typeinfo live in `.data.rel.ro`; they are just guest data. Do
  not rewrite them unless the ABI truly differs.

### 4.5 EGL / GLES

- Create a real window/GL context on the host (or an offscreen context for
  headless tests).
- Translate GLES calls to desktop GL. For GLES1 fixed-function, this means:
  - matrix stacks (`glMatrixMode`, `glLoadMatrixf`, `glMultMatrixf`, ...)
  - client arrays and immediate mode
  - lighting/fog/alpha test/texture env
  - a compatible shader or fixed-function path
- For GLES2/3, map shader source/GLSL versions and uniforms.
- Track GL state in a **shadow** so redundant calls can be skipped, and so
  state can be restored after a raw-GL video or installer screen.
- Texture formats: PVRTC/ETC1/ETC2/ATC/ASTC. If the host GPU cannot sample
  them, decode on upload. Beware: a host decoder must match the engine's
  decoder bit-for-bit if the game compares pixels; otherwise prefer the
  engine's own decoder or a validated port.
- Framebuffer objects, render targets, `glReadPixels`, screenshots.
- A dedicated UI thread can own the window/message pump; the main thread can
  keep the GL context and run the engine. This avoids frozen windows during
  atomic load steps.

### 4.6 Audio

- OpenSL ES / AudioTrack / MediaPlayer shims.
- A mixer with the game's expected sample rate/channels; resample when the
  source rate differs (e.g., 22.05 kHz movie audio → 44.1 kHz output).
- Predecode/cache sound banks if the game decodes the same data every time.
- Movie audio must be fed in sync with video; a ring buffer helps.

### 4.7 Input

- Touch coordinates: scale window pixels to the game's screen coordinate
  system; keep the same origin/handedness.
- Mouse down/up/move → touch events. A tap must span at least one engine
  update; at high render rates hold it until a logic tick (see §9).
- Keyboard: prefer the engine's own key path (`Game::InputKeyBoard` or
  equivalent) so the game's bindings/menus work, not a host-side overlay.
- Gamepad/accelerometer: feed the same action layer if present.
- A press latch may be needed: some engines compute a one-frame "pressed"
  edge that is consumed by a lower-rate logic tick. Latch it until the tick.

### 4.8 Files, assets, saves

- Redirect absolute Android paths (`/sdcard/...`, `/data/...`) to host
  directories.
- APK assets are a ZIP; support `AAssetManager` or direct extraction.
- OBB and custom containers need their own readers.
- Implement `fopen/fread/...`, `stat`, `mkdir`, `opendir/readdir` as needed.
- Saves often go through Java `SharedPreferences` or native files; preserve
  the same paths/format so progress survives.
- Installer flows: the game may try to download data from the vendor. For a
  port, either support the bundled data or replace the installer with a local
  first-run copy.

**Acceptance for Phase 1:** boot → splash → menu → first gameplay frame under
the emulator, with input and audio, stable enough to run scripted tests.

---

## 5. Phase 2 — Static ARM → C translation

### 5.1 Function discovery

Sources of function starts:

- ELF symbols (`.symtab`/`.dynsym`, `STT_FUNC`).
- JNI exports and `.init_array` entries.
- Direct `BL` targets from translated code.
- Indirect call targets observed at runtime (function pointers, vtables).
- Jump-table destinations and tail-call labels.
- Runtime "untranslated code reached" logs (see §7).

A symbol table is not the whole story: compilers emit **local functions with
no symbol**, **thunks**, **partial functions**, and **interior entries**.
Asphalt 5 had a hidden collision helper at `0x16814c`, 40 bytes into a
symbolized function. Always trust runtime discovery as the final authority.

### 5.2 The translator

`analysis/tools/autotrans.py` is a Capstone-based ARM→C emitter. Its shape is
reusable:

1. Parse the ELF and symbols.
2. Decode ARM (and, if needed, Thumb) instructions.
3. Track guest registers as C locals (`r0..r12`, `sp`, `lr`), VFP `S[]`.
4. Emit labels for branch targets and one C statement per instruction.
5. Model condition flags with snapshots (`_fa/_fb/_fd`) and condition
   expressions, so a later `beq` tests the values the flags were computed
   from even after registers change.
6. Emit calls:
   - direct translated callee → direct C call (with fallback if disabled)
   - PLT/import → host shim call
   - indirect/unknown → native dispatch or emulator fallback
7. Refuse instructions/patterns it cannot prove; a refusal is safer than
   wrong code.

Important fidelity details:

- **ARM conditions and flags**: carry/overflow/zero/sign must be exact.
  Conditional flag setters (`cmpne`, `andseq`, ...) need a merge model, not a
  naive "last cmp wins".
- **VFP**: single/double registers share bits; FPSCR (DN/FZ), NaN
  canonicalization, conversions (round toward zero, saturating) and vector
  mode can differ from x86 defaults. Wrap results where the engine depends
  on ARM NaN behavior.
- **Unaligned accesses, LDRD/STRD, LDM/STM variants, USAT, ADC/SBC, RRX**:
  each is a potential refusal. Implement them only with tests.
- **PC-relative loads**: literal pools and jump tables; distinguish code from
  data.
- **Tail calls and `bx lr`**: preserve the caller's return address; a
  `LR_SENTINEL` convention is useful for host-initiated calls.
- **Noreturn imports** (`abort`, `__stack_chk_fail`, `exit`): the bytes after
  the call are often a literal pool, not code. Mark them noreturn so the
  translator does not walk into data.
- **ARM/Thumb interworking**: check the symbol's low bit. Do not decode Thumb
  as ARM.

### 5.3 Translation output and gating

Keep a **gate list** (e.g., `analysis/autogen/list.txt`):

- `!` = validated/enabled
- `~` = trusted (validated earlier / hand-written)
- no marker / `^` = translated but gated (interpreter only)

Never enable an unvalidated function by default. The gate is both a safety
mechanism and a debugging tool.

---

## 6. Phase 3 — Differential validation

The key idea: for a candidate function, run the **native translation** and
the **interpreter** from the same entry state, then compare.

A practical verifier:

1. Snapshot guest registers and VFP state at entry.
2. Run the native function.
3. Record every guest memory write (address, size, old bytes) in a global
   log, including nested host-shim writes.
4. Restore the entry state (registers + memory writes in reverse order).
5. Run the interpreter from the same entry.
6. Compare registers, VFP, and all memory the native run wrote.
7. Restore again and continue with the native result.

Asphalt 5 used this to validate hundreds of functions per run. Practical
rules:

- Only verify at a safe call depth; a native caller changes the nested call
  behavior. A `SKIP_ENABLED` mode can force callers through the interpreter
  during verification.
- Treat the differential as a **detector**, not a proof: it can miss
  side-effects outside the logged memory or paths not exercised.
- Some diffs are verifier artifacts (stack frame leftovers, lazy flag
  materialization, shim logging asymmetry). Investigate the *first* real
  divergence, not the count.
- Keep side-effecting functions gated until tested in real scenarios.

Enable functions in small batches, then run boot/menu/race/pause/results.
When a batch regresses, bisect with a deny list.

---

## 7. Phase 4 — Full coverage and the long tail

The native coverage report counts only **translated** entries. It cannot see
untranslated code. Add a strict backend that makes `uc_emu_start` fail and
logs every target:

```
[uc-lite] FATAL: untranslated code reached (0x... off 0x... lr 0x...)
```

Also append unique addresses to `untranslated.txt` next to the executable.

Then:

1. Add the target address to the gate list as a translation candidate.
2. Regenerate → post-process → build.
3. Re-run the scenario; repeat until no targets.

Asphalt 5's discovery sequence went from **2.5 million** nested starts to
**0** through:

- a fast path for JNI stubs (the JNI table entries are tiny `BX LR` stubs)
- translating host-entry points (JNI, init arrays, input)
- translating indirect/virtual call targets
- translating CPanel/pause/menu layers
- a full symbol inventory (4,923 function symbols → 5,081 translations)
- one hidden interior entry found by a player race

**Do not stop at "100% coverage" of the current list.** The real acceptance
criterion is `emu_starts == 0` in a long session covering every mode.

---

## 8. Phase 5 — Removing the emulator

At zero starts, the emulator is only providing:

- guest memory read/write
- the ARM register file (for hand-written probes/shims)
- map/open/hook/ctl calls

Replace that API with a small native backend (`uc_lite.inc`):

- guest memory map/read/write over the same host-backed regions/page table
- a register file: r0–r15, CPSR/FPSCR/FPEXC/CPACR, VFP S0–S31
- map/open/hook/ctl stubs
- `uc_emu_start` = hard failure

Then:

1. Default to the native backend; keep the DLL path behind
   `A5_USE_UNICORN=1` for differential diagnostics.
2. Run the same scenarios with a host-call report:
   `native=... arm=0 targets=0 emu_starts=0`.
3. Compare a rendered frame / menu between the two backends; they should be
   pixel-identical.
4. Ship without the emulator DLL.

The original `.so` can remain as a **data image** (strings, globals, vtables).
Extracting that data and dropping the ELF is possible but mostly cosmetic;
the important property is that no ARM instruction executes.

---

## 9. Performance and correctness at high frame rates

- **Guest address translation**: a 64 KB page table over the 32-bit guest
  space gives O(1) `guest → host` pointers. Keep a linear fallback for
  unaligned/rare mappings. Inline the accessors (`rd32`, `uw32`, ...) so hot
  translated code does not call a helper per memory access.
- **Hot helpers**: inline division, memcmp, and the decoder's inner helpers
  at the call site; avoid a dispatcher round-trip per pixel.
- **Output caches**: if the same compressed asset is decoded on every load,
  cache the decoded result by content hash. Preserve exact pixels.
- **Frame pacing**: cap presentation to the desktop refresh rate (60/120/144)
  with QPC; logic remains time-based. Uncapped is possible but usually adds
  heat with no visual benefit.
- **Input edges vs logic ticks**: at high render rates a one-frame tap can
  fall between two logic ticks. Latch the pressed edge until a tick, and hold
  touch downs across at least one tick. This is the known "nitro doesn't
  work at 60/120 FPS" class of bug.
- **Build parallelism**: split the generated C into N chunks (one function
  per guest function, grouped) with a shared header that exposes helpers and
  state. Ninja `--parallel` + ccache then uses all cores. Our 5k-function
  single TU (56 min, 8 GB) became 12 chunks with a 0.9 s warm rebuild.

---

## 10. QA and packaging

### 10.1 Automated scenarios

Drive the real engine with scripted input:

- boot → splash → menu
- menu → race → pause → options → resume
- race → results → reward → next event
- save → quit → relaunch → progress persists
- mid-race exit
- window close
- movies (intro/reward) with audio

Add hooks for screenshots at fixed logical ticks, not wall-clock frames.
Render-vs-state A/B is more reliable than "looks fine".

### 10.2 Instrumentation

Useful environment knobs (all optional in release):

- `A5_NATIVE_REPORT=1`: native/gated dispatch counts, top gated functions.
- `A5_HOST_REPORT=1`: host-entry native/ARM counts and top fallbacks.
- `A5_NATIVE_ALLOW` / `A5_NATIVE_DENY`: runtime A/B without rebuilding.
- `A5_USE_UNICORN=1`: legacy oracle backend.
- `A5_NITRO_DEBUG` / `A5_KEYTAPS` / `A5_TEST_CLICK`: input injection and
  traces.
- `A5_FPS`: frame cap (0 = uncapped).

### 10.3 Distribution

- Ship host code/tools and instructions; require the user's own game data.
- Do **not** bundle the original APK/`.so`/assets in a public release unless
  licensed.
- Keep a first-run installer that copies the user's data into the expected
  layout.
- Document controls, save location, and known limitations.

---

## 11. Case study: Asphalt 5 in numbers

| Metric | Value |
|---|---|
| Original binary | ARMv5 `armeabi`, ~1.4 MB `.text` |
| Java role | thin shell; game is native |
| Graphics | GLES1 fixed-function → desktop GL |
| Translated functions | **5,081** |
| Runtime ARM execution | **0**, no `unicorn.dll` |
| Menu A/B vs emulator backend | pixel-identical |
| Release size | ~74 MB (O1, 12 chunks) |
| Warm rebuild | ~0.9 s (ccache) |
| Cold build | 12 parallel `cc1` processes (was 56 min single-TU) |

Lessons that cost the most time:

1. **Never trust "100% coverage" from a gated report**; it only counts
   translated candidates. Use a strict backend and log untranslated targets.
2. **Conditional flag setters** (cmpne/andseq) need a merge model; a naive
   last-setter model silently corrupts branches.
3. **Tail calls and entry side effects**: host hooks at function entries
   (tick counters, input latches) disappear when the function becomes native.
   Move that work into the native dispatch path.
4. **VFP/FPSCR/NaN semantics** differ from x86; wrapper helpers keep the game
   bit-exact.
5. **A one-frame tap at 300 FPS is ~3 ms** — shorter than a 60 Hz logic tick.
   Latch input across ticks.
6. **Raw-GL screens (movies/installer) leave the engine's GL shadow stale**;
   re-apply the engine's cached state afterwards.
7. **Sound sample rates** differ by source (22.05 vs 44.1 kHz); resample.
8. **Hidden interior functions** and thunks exist; runtime discovery is the
   final authority.

---

## 12. Reusable tool map (Asphalt 5 repo)

| Path | Purpose |
|---|---|
| `analysis/tools/autotrans.py` | ARM/ELF → C translator, gate-list generator |
| `analysis/tools/postgen.py` | hand patches after generation (report, cache, helper calls, tick/latch) |
| `analysis/tools/split_autogens.py` | split generated C into 12 parallel chunks |
| `analysis/tools/make_dist.py` | release build + dist layout |
| `analysis/autogen/list.txt` | translation candidates and `!`/`~` markers |
| `port/a5host/src/host/a5host.c` | loader, memory, heap, call gates, main loop |
| `port/a5host/src/host/hooks.inc` | probes, gating, coverage, differential, JNI/PLT |
| `port/a5host/src/host/uc_lite.inc` | native memory/register backend (no Unicorn) |
| `port/a5host/src/gl/` | EGL/GLES bridge, state shadow, UI thread |
| `port/a5host/src/audio/` | mixer, OpenSL/AudioTrack/MediaPlayer shims, resampling |
| `port/a5host/src/codec/` | PVRTC/ATC decoders |
| `port/a5host/src/installer/` | first-run data installer |
| `docs/` | A5 engine map, formats, this method |

For a new target, fork the **host skeleton** and the **translator**, not the
game-specific A5 code. Keep the gate/verification runtime; it is the safety
net that makes progressive translation practical.

---

## 13. A minimal new-target plan

1. **Day 1–2**: extract APK, inventory `.so`/assets/Java, identify engine and
   graphics/audio paths; decide feasibility.
2. **Week 1**: ELF loader + memory + JNI/libc shims under an emulator; reach
   the first logo/frame.
3. **Week 2**: GLES/EGL bridge, input, audio; reach menu and one gameplay
   frame.
4. **Week 3+**: translator, gate list, differential verifier; translate the
   hot functions and enable them in batches.
5. **Long tail**: strict backend logs, translate every reached target
   (including indirect/virtual and hidden entries).
6. **Final**: native backend, remove the emulator, performance and QA,
   package tools + instructions.

This is engineering, not magic: expect the platform layer to be as much work
as the translator, and the QA long tail to be longer than either.
