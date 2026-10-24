# Asphalt 5 — Native x86-64 PC Port

A **pure native x86-64 recompilation** of *Asphalt 5 HD* (Gameloft, 2010,
Android `armeabi`), built from **your own APK**. The pipeline is verified on
the **3.4.1** engine (5,081 translated functions) and the **3.3.7** engine
(5,270 translated functions).

The game's ARM engine is statically translated to C, compiled for x86-64,
and runs against a PC platform layer (JNI/libc/C++ shims, desktop OpenGL,
audio, input, files). In the verified build:

- **5,081 functions translated**, full symbolized inventory.
- **0 ARM instructions executed at runtime**, no Unicorn DLL loaded.
- **100% native dispatch, gated = 0**, no emulator starts.
- 60 / 120 / uncapped FPS, mouse + keyboard + touch, movies and audio.
- Saves, career, pause/options, results and reward flow tested.

This is not an emulator wrapper: the shipped executable runs the game's own
logic as compiled x86-64 code. The ARM instruction bytes are stripped; only
the engine's data (strings, globals, vtables, literal pools) is embedded in
the exe.

> **Unofficial.** Not affiliated with Gameloft. No game code, assets or APK
> are distributed in this repository. You must legally own the game. See
> [NOTICE.md](NOTICE.md).

---

## One-click installer (no build tools needed)

Download **`Asphalt5-Setup.exe`** from the GitHub **Releases** page and run it.
It is a self-contained Windows executable: it embeds Python/Tkinter/Pillow and
the prebuilt native hosts, so users do **not** need Python, CMake, Ninja, GCC,
MinGW or any other build tools.

1. Select your legally owned Asphalt 5 **3.4.1** or **3.3.7** APK.
2. Choose an install folder and click **Install**.
3. Launch the game.

The setup reads the APK, detects the engine version, picks the matching native
host, strips the ARM instruction bytes and embeds the remaining engine data
image inside `Asphalt5.exe`. The installed folder has **no `.so`, no APK files
and no installer assets**. The game is a Windows GUI application, so it runs
without a console window (diagnostics go to `%TEMP%\Asphalt5.log`).

The setup does **not** download game data. On first launch, the game's original
Gameloft installer downloads the data pack (about 100–220 MB depending on the
build) and installs it into `sdcard\gameloft\games\asphalt5\` itself.

The release executable is supplied as a separate GitHub Release asset; it is
not committed to this source repository. The source builder below is for
developers who want to rebuild everything from the APK.

---

## Build from source (clean install from your APK)

### Requirements

- Windows 10/11 x64
- Python 3.10+ (`python` on `PATH`)
- CMake, Ninja and MinGW-w64 GCC (`gcc`) on `PATH`
- A legally owned **Asphalt 5 HD 3.4.1** APK
- Optional: your own game data packs or a previously installed game data
  folder (see below)

```bat
git clone https://github.com/mrbaazzman/Asphalt5-Native.git
cd Asphalt5-Native
python -m pip install -r requirements.txt

python build_from_apk.py "path\to\Asphalt 5 3.4.1.apk" --out Asphalt5
```

The builder:

1. verifies and extracts `lib/armeabi/libasphalt5.so`;
2. strips the ARM instruction bytes and extracts the installer UI assets;
3. generates the x86-64 translations and applies the pipeline patches;
4. builds the GUI-subsystem host using all CPU cores;
5. embeds the remaining data image in `Asphalt5.exe` and writes a clean
   `Asphalt5\` folder with the exe, optional data, an empty `saves\` and a
   player README.

The output has no `.so`, APK, engine code or installer assets, and the game
runs without a console window.

Then run `Asphalt5\Asphalt5.exe` directly; it is a GUI application with no console window.

### Game data (important)

The APK is only ~5 MB. It contains the engine and the installer, **not** the
~100 MB game data. The original game downloads/installs that data separately.
The native host reproduces that first-run flow:

- **3.3.7**: downloads the APK's own Galaxy Tab PVRT master
  (`AndroidResources_PVRT.zip`, 138.8 MB → 345 files) and installs it.
- **3.4.1**: downloads the ATC/PVRT 3.4.2 pack from its `datalink.txt`.

You can also provide data yourself:

Choose one:

```bat
:: Use data packs you already own (Asphalt5_Android_FULL_*.zip)
python build_from_apk.py "Asphalt 5 3.4.1.apk" --packs "D:\data\packs" --out Asphalt5

:: Or use an already-installed game data folder from your device/backup
python build_from_apk.py "Asphalt 5 3.4.1.apk" --installed-data ^
  "D:\phone-backup\sdcard\gameloft\games\asphalt5" --out Asphalt5
```

Without either, the original first-run installer runs and downloads the data
from Gameloft's servers itself (verified live at the time of writing). The
builder never downloads, bundles, or redistributes game data.

### Options

| Option | Meaning |
|---|---|
| `--out DIR` | clean output folder (default `build/Asphalt5-3.4.1-native`) |
| `--packs DIR` | directory containing `Asphalt5_Android_FULL_*.zip` |
| `--installed-data DIR` | an existing `.../sdcard/gameloft/games/asphalt5` folder |
| `--console` | build the console diagnostic host instead of the GUI host |
| `--release` | console build: O2 instead of the fast O1 build |
| `--jobs N` | parallel compile jobs (default: all cores) |
| `--exe PATH` | reuse a prebuilt host and skip translation/build (dev) |
| `--skip-translate` | reuse existing generated chunks (dev) |
| `--zip` | also produce `<out>.zip` |
| `--force` | replace an existing output folder |
| `--allow-unknown` | allow an engine hash other than the known 3.4.1 build |

---

## Other engine versions (3.3.7 and similar builds)

The pipeline is not limited to 3.4.1. The host and its hooks address the engine
through **symbol names**, so another build of the same engine can be mapped by
name and rebuilt:

```bat
python build_from_apk.py "Asphalt 5 HD 3.3.7.apk"
```

A checked-in **profile** (`analysis/version/profile-3.3.7.json`) supplies the
432 host address remappings, 5,287 translated function addresses and the
post-generation anchors for 3.3.7. The builder creates
`build/a5host_<hash8>/`, rewrites the engine addresses in that copy, translates
the target engine (5,270 functions), and stages
`build/Asphalt5-3.3.7-native/`. No extra flags are needed.

For a build with no profile, add one (requires the 3.4.1 engine as the address
reference):

```bat
python analysis/tools/vermap.py genprofile ^
  analysis/version/symbols-3.4.1.txt target-libasphalt5.so ^
  port/a5host/src analysis/autogen/list.txt ^
  analysis/version/profile-<version>.json ^
  --ref-so reference-3.4.1-libasphalt5.so ^
  --label <version> --tolerant-data --default-pvrt
python build_from_apk.py "Asphalt 5 <version>.apk"
```

`--default-pvrt` is for PVRTC tablet builds (3.3.7 already has it in its
profile); `A5_ATC=1` forces the ATC texture path instead.

**Verified for 3.3.7:** the port boots the engine, reaches the full 1024×600
tablet main menu (car, UI, animated background and the right-hand
SINGLE RACE / CAREER / OPTIONS / MULTI-PLAYER / QUIT column), starts Quick Race
and renders the race HUD and tutorial with the official Galaxy Tab PVRT
resource pack. 5,270 functions are translated; no untranslated code is reached.
The profile sets the 1024×600 logical layout automatically (`A5_SCREEN`
overrides it).

See [`analysis/version/README.md`](analysis/version/README.md) for the mapping
rules, the 3.3.7 differences (renamed Java package, `__android_log_write`, the
345-entry data manifest) and verification steps. In short:

- JNI exports are matched by their trailing `Class_method` name, so the Java
  package rename between releases is handled automatically.
- The gate list is rebuilt by symbol name and extended with every target ARM
  function; the strict backend still reports anything it cannot translate.
- **Game data is version-specific.** The 3.3.7 build's first-run installer
  downloads the PVRT master from the APK's own `GameInstaller` URL and splits
  it with the 345-file manifest; `--installed-data` skips the download when you
  already have the folder. The 3.4.1 build downloads the ATC/PVRT 3.4.2 packs
  from its `datalink.txt`. `analysis/tools/unpack_master.py` +
  `analysis/version/data-*.json` install either master offline.
- 17 translator refusals remain in 3.3.7 (JPEG2000 encoder, multiplayer,
  online, C++ throw helpers) and mirror the 3.4.1 set; the offline single-player
  path is covered.

---

## Controls

| Input | Action |
|---|---|
| Mouse / touch | menus and HUD; hold left/right half to steer; pedals brake; right button nitro; top-left pause |
| Arrow keys / A-D | steer left / right |
| Space | nitro |
| C | camera |
| Esc | pause / back |

The keyboard path goes through the engine's own key system
(`Game::InputKeyBoard`), so in-game remapping and menus work.

**3.3.7 controls:** that build's `Game::GetKeyMask` only recognizes
Back/Camera/Space, so the host feeds the engine's own GamePad masks directly
(`1` left, `2` right, `4` brake, `0x4000` nitro) for driving. Menus are
mouse-driven; Esc opens/closes the pause menu. Diagnostics:
`A5_KEY_DEBUG=1` logs key edges, `A5_PAD_DEBUG=1` logs the injected pad state.

**Click the mouse or press Esc to skip the intro/reward video.** Clicks in the
first 500 ms are ignored so focusing the game window does not skip it.

On the 3.3.7 build the splash screen waits for a tap; its profile enables
`A5_AUTO_START_CLICK`, which sends two taps after the intro so the main menu
appears on its own. Set `A5_TEST_CLICK="frame:x:y;..."` to override the taps.

## Resolution

The default render size is **1920×1080 physical pixels**, borderless (the
3.3.7 profile uses the same 1080p default). The process is DPI-aware, so
Windows display scaling does not blur or virtualize the game. If the window is
too large for your desktop, run `Play windowed.bat` (1280×720 bordered) or set
`A5_WINDOW=1280x720` and `A5_WINDOWED=1`.

The engine's original **854×480 logical layout** is preserved and scaled to
the render resolution. The GL bridge scales `glViewport`/`glScissor` and input
coordinates; 3D is rasterized at the real window size and the 2D UI/HUD is
composited over it.

Level-0 textures are resampled at upload time with a Catmull-Rom filter to the
render-scale density (2.25× at 1080p), and forced to a complete single mip
level so the upscaled image is sampled correctly. This applies to both UI
atlases and 3D textures. It increases texel density; it does not invent new
art detail. Set `A5_TEXSCALE=off` to keep original texture resolution.

| Variable | Effect |
|---|---|
| `A5_WINDOW=WxH` | render/window size (default 1920×1080 or desktop) |
| `A5_WINDOWED=1` | force a bordered window instead of borderless |
| `A5_BORDERLESS=1` | force borderless even below desktop size |
| `A5_ASPECT=fit` | preserve 16:9 with letterbox/pillarbox (default) |
| `A5_ASPECT=stretch` | fill the whole window (legacy behavior) |
| `A5_SCREEN=WxH` | override the logical layout resolution (advanced/legacy) |
| `A5_TEXSCALE=auto` | upscale level-0 textures to render density (default) |
| `A5_TEXSCALE=off` | keep original texture resolution |

For example:

```bat
set A5_WINDOW=1600x900
set A5_WINDOWED=1
Asphalt5.exe
```

---

## How it works

```
APK ──► libasphalt5.so (ARM) ──► autotrans.py ──► C (5k functions)
                                                   │
                                                   ▼
                                      clang/gcc x86-64 compile
                                                   │
APK res/raw ──► installer assets ──► host platform layer (JNI/libc/GL/audio/input)
                                                   │
                                                   ▼
                                   clean native installation
```

The project started with an emulator as an oracle. Functions were translated
to C and validated one at a time against the interpreter (write-log
differential). Once every reached target was native, the emulator API was
replaced with a small native memory/register backend and the strict
"untranslated code = fatal" check closed the long tail.

Read the full method in **[docs/RECOMPILATION_METHOD.md](docs/RECOMPILATION_METHOD.md)**,
the per-target checklist in **[docs/NEW_TARGET_CHECKLIST.md](docs/NEW_TARGET_CHECKLIST.md)**,
and the concrete pipeline/tooling in **[docs/PIPELINE.md](docs/PIPELINE.md)**.

---

## Build from source (development)

If you already have the generated translation chunks (developer checkout):

```bat
cd port\a5host
build_cmake.bat            :: O1 dev build, all CPU cores
build_cmake.bat release    :: O2 shipping build
```

A clean rebuild with warm ccache is ~1 s; the generated game code is split
into 12 `autogen_part_*.c` chunks so Ninja compiles them in parallel.

Regeneration after changing the gate list:

```bat
python analysis\tools\autotrans.py --gen ^
  "path\to\libasphalt5.so" ^
  analysis\autogen\list.txt ^
  port\a5host\src\host\autogens.inc
python analysis\tools\postgen.py
python analysis\tools\split_autogens.py
build_cmake.bat
```

`build_from_apk.py` automates exactly this pipeline from the APK.

### Diagnostics

| Env | Effect |
|---|---|
| `A5_NATIVE_REPORT=1` | native/gated dispatch counts + top gated functions |
| `A5_HOST_REPORT=1` | host-entry native/ARM counts, `emu_starts`, fallback targets |
| `A5_USE_UNICORN=1` | legacy emulator backend for differential diagnosis |
| `A5_NATIVE_ALLOW=0xADDR,...` | force-enable a translation without rebuilding |
| `A5_NATIVE_DENY=0xADDR,...` | force-disable / bisect |
| `A5_AUTO_VERIFY=1` | per-call native vs interpreter differential |
| `A5_FPS=<n>` | frame cap (default = desktop refresh; `0` = uncapped) |
| `A5_KEYTAPS`, `A5_TEST_CLICK`, `A5_NITRO_DEBUG` | input QA / traces |

A clean pure run prints:

```
[host] calls native=... arm=0 targets=0 emu_starts=0
```

If an untranslated address is reached, the game logs it and appends it to
`untranslated.txt` next to the executable.

---

## Repository layout

```
build_from_apk.py          APK -> clean install builder
analysis/tools/            translator, postgen, splitter, asset/symbol tools
analysis/autogen/          gate list + font map (interoperability metadata)
port/a5host/               native host (C11) + 12-chunk generated game code
docs/                      method, checklist, pipeline, Gameloft notes
requirements.txt           Python dependencies
LICENSE / NOTICE.md        code license and game-content disclaimer
```

Generated translations, assets, APKs, data packs, saves and builds are
git-ignored and must never be committed.

---

## Status and limitations

- Verified on the full career-profile race, pause/options, reward video,
  intro movie, mouse and keyboard nitro, save/relaunch.
- 5,081 functions; 24 translator refusals remain (mostly JPEG encoder
  `ldrd`/`adc`, multiplayer `ldmda`, online `ldrdeq`). If one is reached, the
  strict backend logs it.
- 32-bit ARM only. ARM64 games need a separate AArch64 translator/runtime.
- Java/Kotlin-heavy apps are out of scope; this pipeline targets native-heavy
  games with a thin Java shell.
- Online services are not recreated; offline single-player is the target.
- The embedded engine data and downloaded assets are copyrighted. Do not
  share the built installation folder.

---

## Documentation

- [docs/README.md](docs/README.md) — documentation index
- [docs/RECOMPILATION_METHOD.md](docs/RECOMPILATION_METHOD.md) — general
  ARM32 Android → native x86-64 method
- [docs/NEW_TARGET_CHECKLIST.md](docs/NEW_TARGET_CHECKLIST.md) — new game
  checklist
- [docs/PIPELINE.md](docs/PIPELINE.md) — Asphalt 5 commands and internals
- [docs/RELEASE.md](docs/RELEASE.md) — end-user setup and release packaging
- [docs/GAMELOFT_NOTES.md](docs/GAMELOFT_NOTES.md) — reuse for other Gameloft
  titles
- [docs/engine-map.md](docs/engine-map.md), [docs/formats.md](docs/formats.md)
  — A5 reverse-engineering notes

---

## Credits

- Original game: **Gameloft** (Asphalt 5, 2010). All rights reserved.
- Host/runtime, translator, tooling and documentation: the Asphalt 5 native
  port contributors.
- Built with Capstone, Unicorn (development oracle only), CMake, Ninja,
  MinGW-w64, and the original game engine as the behavioral oracle.

## License

The original host code, tools and documentation are MIT-licensed
([LICENSE](LICENSE)). That license does **not** cover the game, its engine or
assets. See [NOTICE.md](NOTICE.md).
