# Engine version profiles

The host, the post-generation patches and the hand-written engine hooks were
written against **Asphalt 5 HD 3.4.1** (`lib/armeabi/libasphalt5.so`, sha256
`2966c986...b78206`). Everything in this directory makes the same pipeline
work for other builds of the same engine by mapping **symbol names** instead of
addresses.

| File | Purpose |
|---|---|
| `symbols-3.4.1.txt` | Reference symbol table (`address kind size mangled-name`). Interoperability metadata only: no code. Used to find the reference symbol that owns a host address. |
| `profile-3.3.7.json` | Complete build profile for the 3.3.7 engine: engine sha256, the 432 host address remappings, 5,287 translated function addresses, postgen anchors, the tolerant data-check mode, the PVRT default, the 1024×600 logical layout and the splash auto-taps. |

## Verified 3.3.7 status

The 3.3.7 port was built and run against the official Galaxy Tab PVRT
resources (`AndroidResources_PVRT.zip` from the APK's `GameInstaller` URL,
138.8 MB zlib master file → 220.98 MB / 345 files):

* engine boot, 84 static initializers, GL/audio/JNI init: OK
* 5,270 functions translated, no untranslated code reached
* `GS_Splash` → `GS_TrailerMovie` → `GS_MainMenu` transitions: OK
  (the 3.3.7 splash waits for a tap; the profile defines `A5_AUTO_START_CLICK`,
  which sends two taps at frames 250/500 — override with `A5_TEST_CLICK`)
* main menu renders the car, UI and animated background at 1024×600,
  including the full right-hand SINGLE RACE / CAREER / OPTIONS / MULTI-PLAYER /
  QUIT column.  The 3.3.7 build is a **1024×600 tablet layout**; the old host
  default (854×480, the 3.4.1 phone layout) pushed that column off-screen.
  The profile also defaults the window to **1920×1080 borderless full screen**;
  `Play windowed.bat` (1280×720) is included for smaller desktops.
* `GS_LoadGame` (Quick Race) starts; the race load is functional but slow in
  the O1 console build
* audio effects that the engine requests as `raw_*.glsnd` from the Java
  resource layer are silent because the 3.3.x master pack stores its Ogg data
  inside the `package_general` shards instead of separate files

The 3.3.7 APK's `GameInstaller.<init>` contains the exact 345-entry file
manifest (a `String[]` of names and a `fill-array-data` `int[]` of sizes).
That manifest is also the layout of the downloaded master file: concatenating
the entries in order reproduces the inflated stream byte-for-byte. This is why
the official 3.3.3 Galaxy Tab pack works with the 3.3.7 engine.


## Build a version that has a profile

```bat
python build_from_apk.py "Asphalt 5 HD 3.3.7.apk"
```

The builder detects the engine hash, creates `build/a5host_<hash8>` from
`port/a5host`, rewrites the engine addresses in that copy, translates the
target engine's functions, applies the target anchors, and compiles. The
result is staged as `build/Asphalt5-3.3.7-native/`. `--allow-unknown` is not
needed for a profile build.

## Install a data pack

The 3.3.7 APK's `GameInstaller` downloads a single zlib master file (the URL
is in `classes.dex`; for the Galaxy Tab build it is
`AndroidResources_PVRT.zip`). The manifest of that stream is checked in as
`data-3.3.7.json` (345 names + sizes, total 220,975,120 bytes):

```bat
python analysis/tools/unpack_master.py ^
  AndroidResources_PVRT.zip ^
  analysis/version/data-3.3.7.json ^
  build\data-3.3.7

python build_from_apk.py "Asphalt 5 HD 3.3.7.apk" ^
  --installed-data build\data-3.3.7
```

The tool validates the inflated size, splits the stream in manifest order and
reports any mismatch. The output folder can also be copied to
`sdcard\gameloft\games\asphalt5` next to an existing `Asphalt5.exe`.

## Add another build

You need the reference 3.4.1 engine once (from your own APK) to compute the
address map and instruction fingerprints:

```bat
:: 1. extract the target + reference .so (any unzip does this)
::    lib/armeabi/libasphalt5.so

:: 2. generate a profile
python analysis/tools/vermap.py genprofile ^
  analysis/version/symbols-3.4.1.txt target-libasphalt5.so ^
  port/a5host/src analysis/autogen/list.txt ^
  analysis/version/profile-<version>.json ^
  --ref-so reference-3.4.1-libasphalt5.so ^
  --label <version> --tolerant-data --default-pvrt ^
  --auto-start-click --logical-screen 1024x600 --default-window 1920x1080

:: 3. build it
python build_from_apk.py "Asphalt 5 <version>.apk"
```

Add `--default-pvrt` when the target ships a PVRTC data pack (most tablet
builds); the host then defaults to the PVRT path and `A5_ATC=1` forces ATC.
For 3.3.7 the profile already carries it, so no `A5_PVRT=1` is needed.

To include data you already installed:

```bat
python build_from_apk.py "Asphalt 5 HD 3.3.7.apk" ^
  --installed-data "D:\backup\sdcard\gameloft\games\asphalt5"
```

`genprofile` refuses if a host address has no symbol in the target or an
intra-function hook point cannot be located. The profile stores the resolved
addresses, so the reference `.so` is not needed again for that build.

Without a profile, `--allow-unknown --ref-so <3.4.1 .so>` (or `--ref-apk`)
derives the same information on the fly.

## How the mapping works

* **Function/object addresses used by the host** (boot JNI entries, hooks,
  vtables, engine globals) are recorded as owning symbol + offset. The target
  address is `target_symbol + offset`.
* **Intra-function hook points** (for example `Scene::UpdateCars+716`) are
  fingerprinted with the reference instruction bytes and searched inside the
  target function. If the function changed, the build log prints
  `moved`/`same offset assumed` so every assumption is visible.
* **JNI exports** whose Java package was renamed between releases are matched
  by the trailing `Class_method` part (e.g.
  `..._Asphalt5Renderer_nativeInit`).
* **The gate list** is rebuilt from the reference list by symbol name and then
  extended with every target ARM function. All translated functions are
  enabled; the strict backend still reports any address it cannot execute.

## Known differences of the 3.3.7 build

* Java package: `com.gameloft.android.ANMP.GloftAsphalt5.asphalt5` (3.4.1 uses
  `com.gameloft.android.GAND.GloftA5HD`). Handled by the JNI suffix match.
* Import `__android_log_write` exists only in 3.3.7; the host has a shim for
  it.
* 17 translator refusals are expected and mirror 3.4.1: JPEG2000 encoder
  (`ldrd`/`adc`), multiplayer `Scene::MP_RecomputePrevPositions` (`ldmda`),
  online `GLXPlayerUser*` (`ldrd`), C++ `stlp_priv` throw helpers, and
  `CMatrix::Mult/PreMult/SetMult` (`vmsr` — these are replaced by the
  hand-written natives anyway). 5,270 functions are translated.
* The Java installer/data manifest is different. The profile uses a tolerant
  data check (`textures`, `gamecfg.bar`, `ia.bar`, `strings.bar`) and
  `--installed-data` is the reliable way to use a 3.3.7 data folder. Data
  packs are version-specific: a 3.4.x pack is not guaranteed to match a 3.3.7
  engine.
* The first-run installer artwork is extracted from the selected APK, but the
  font atlas index map (`analysis/autogen/font_map.h`) is the 3.4.1 map. Text
  in the installer can be misaligned on other builds; gameplay is unaffected.

## Limits

* A profile maps **code and global-data addresses**, not class field offsets.
  The host reads a few engine object fields by offset (`Game+0x1bc8` scene,
  `Game+0x1d38` state stack, `Scene+0x6432c` race gate, camera/car fields).
  These matched 3.3.7; if a future build changes a class layout, verify them
  before trusting gameplay.
* The Java shell is stubbed. Version-specific Java downloads, billing, online
  and social features are not recreated.
* The first-run installer artwork comes from the selected APK, but
  `analysis/autogen/font_map.h` is the 3.4.1 atlas map. The installer text can
  be misaligned on other builds; the game itself is unaffected.
* Audio assets that the engine requests from the Java resource layer as
  `raw_*.glsnd` are only played when they exist as separate files. The 3.3.x
  master pack keeps its Ogg data inside `package_general` shards, so those
  effects are silent.

## Verifying a port

Build the console host (`--console`) so stdout is visible, then run it with
`A5_INSTALL_SKIP=1` and no data. A healthy port reaches the engine's own
`package_general.bar_001.cnk` load and reports the missing data package; it
must not print `untranslated` addresses. With data installed, check the intro
movie, main menu, a race, pause/options, and save/reload.

Useful diagnostics:

```bat
set A5_NATIVE_REPORT=1
set A5_AUTO_VERIFY=1
set A5_USE_UNICORN=1      :: legacy oracle (needs unicorn.dll)
```
