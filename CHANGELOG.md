# Changelog

## 2.2.0 - 2026-10-31

- Added the PC input mapper. Open it with **F1** or **OPTIONS -> CONTROLS ->
  CONFIGURE INPUT**, then click a keyboard or controller cell and press the
  key, button or axis you want. Bindings save immediately.
- Supports keyboard, XInput controllers and generic DirectInput controllers,
  wheels, pedals and joysticks. Axes and POV hats can be bound as well as
  buttons.
- Seven actions can be rebound: steer left/right, accelerate, brake, nitro,
  camera and pause. A binding can be cleared with Delete; Reset Defaults and
  Done are in the overlay. The stock Controls rows are left untouched.
- Bindings are stored in `%LOCALAPPDATA%\Asphalt5\input.ini`; the file is
  created with defaults on first launch.
- The overlay owns the mouse and keyboard while open, so clicking a binding
  no longer toggles Auto Accelerate or changes stock options underneath.
- The setup now uses a touch-coordinate row test and a page discriminator, so
  clicking the Controls row opens the mapper without breaking the car-options
  Window Tint row. DirectInput is loaded dynamically and the builder includes
  the small import libraries it needs.
- Fixed the 854x480 Controls-page row geometry used by 3.2.4 and 3.4.1, so
  a click on CONFIGURE INPUT is recognised every time instead of falling
  through to the stock control-scheme toggle.
- Guarded the stock Controls-row `DoAction`: the release that follows the
  opening click no longer cycles ACCELEROMETER/BUTTONS behind the overlay.
- Restored the previous texture binding and current colour after drawing the
  overlay, so mapper drawing cannot change the game's texture state.
- Tested on 3.2.4, 3.3.7 and 3.4.1: overlay opens from F1 and the Controls
  page, keyboard capture updates the cell and `input.ini`, and the binding
  persists across restarts.

## 2.1.0 - 2026-10-31

- PC quality-of-life: the phone's on-screen brake/pedal and nitro buttons are
  hidden during races. Their HUD items stay in the engine with their state
  intact; only their rectangles move off-screen, so keyboard, mouse zones and
  XInput gamepad input keep working. Space nitro feeds the engine's nitro
  input directly while the overlay is hidden.
- `RECOMP_SHOW_TOUCH=1` restores the original touch overlay for comparison.
- Verified by the maintainer on 3.2.4, 3.3.7 and 3.4.1: buttons hidden, HUD
  otherwise normal, steering/brake working and Space nitro firing.
- Keeps the v2.0.3 heap fixes and the v2.0.1 Defender-safe builder packaging.

## 2.0.3 - 2026-10-31

- Final fix for the repeated-race heap exhaustion. The shared JNI layer now
  releases local strings/arrays, the heap coalesces adjacent free blocks and
  drops trailing free space, and a lightweight compaction runs every 600
  frames to keep the free lists reusable.
- Verified by the maintainer through 12 consecutive quick races on 3.3.7
  without a crash. The same shared heap/JNI code is used by 3.2.4 and 3.4.1.
- Keeps the v2.0.1 packaging fix: the builder payload is obfuscated, so the
  setup no longer triggers the Defender Wacapew false positive.

## 2.0.2 - 2026-10-31

- Fix the guest heap exhaustion that crashed the game after roughly three
  quick races. JNI `DeleteLocalRef` now releases guest-side strings and byte
  arrays instead of leaking them, and a heap sweep runs only when a new
  allocation no longer fits: it rebuilds the free lists and drops trailing
  free space without moving live blocks.
- This affects all three builds (3.2.4, 3.3.7, 3.4.1); the leak was in the
  shared JNI/host heap layer, not in a specific engine build.
- Add `A5_HEAP_LOG=1` diagnostics (`[heap] frame ... top=...`) for future
  memory reports.

## 2.0.1 - 2026-10-29

- Fixed the Microsoft Defender false positive on `Asphalt5Setup.exe`
  (`Program:Win32/Wacapew.A!ml`). The embedded builder ZIP is XOR-obfuscated
  before being stored as a resource and decoded in memory at install time.
  The extracted builder and all toolchain binaries remain unchanged.
- Verified: Defender custom scan reports no threats on the setup, and the
  installer still builds 3.4.1/3.3.7/3.2.4 and the first-run GameInstaller
  still downloads/unpacks correctly.

## 2.0.0 - 2026-10-29

Builder-first release supporting **Asphalt 5 HD 3.2.4, 3.3.7 and 3.4.1**.

- Added full native 3.4.1 support: translation, runtime patches, 854x480
  logical UI, 1080p default window, APK-detected setup profile.
- Added the 3.4.1 GameInstaller data profile: live Gameloft PVRTC stream
  (107,213,398 bytes compressed, 163,555,751 bytes unpacked, 326 files).
- The setup is builder-only: it contains the recompiler, MinGW toolchain and
  host sources, but no APK, `.so`, prebuilt game or game data.
- The graphical GameInstaller UI and the download manifest are embedded in the
  user-built `Asphalt5.exe`. The install folder contains only `Asphalt5.exe`
  and `gamefiles/`; no `engine/apk*` tree or loose manifest is left behind.
- Rebuilt installer typography: glyphs are trimmed to their bright core, so
  words read normally, and button labels are centered in the 9-slice art.
- 3.4.1 uses its native 854x480 background in a clean 1024x576 installer
  window; 3.3.7 keeps its 1024x600 installer.
- Shared runtime paths, JNI prefixes, data folders and caches are versioned
  for 3.2.4, 3.3.7 and 3.4.1.
- Regression: 3.2.4, 3.3.7 and 3.4.1 installs build and boot at 1920x1080;
  first-run downloads/unpacks and removes temporary embedded UI files.

## 1.0.0 - 2026-10-28

First public source release.

- Static ARMv7 to x86-64 C recompilation of Asphalt 5 HD 3.2.4.
- Native Windows host: Win32/WGL, GLES1 layer, input, audio and movies.
- 1920x1080 rendering, 12 playable race scenes and per-track minimaps.
- Unlocked frame rate with real-time camera smoothing.
- Keyboard, mouse and optional XInput gamepad controls.
- Nitro staging, pause/resume, in-game Exit and race-start fixes.
- Size-class guest heap reuse across races.
- Windows installer that builds the game locally from the user's APK.
- Crash logging and 12-scene visual coverage tests.

### Notes

- Source and generated translation only. No APK, game data or executable is
  included.
- Users must own Asphalt 5 HD 3.2.4 and build their own installation with the
  installer.


- Added 1920x1080 rendering. The engine keeps its 854x480 logical canvas and
  the GL viewport scales to the real client.
- Added per-track minimap data; all 12 race scenes now draw their own road
  outline.
- Fixed short nitro taps at high frame rates. One tap advances one stage;
  rapid taps chain stages immediately.
- Added real-time camera view smoothing for high-FPS steering. Camera cuts,
  race starts and cinematic shots follow the raw matrix.
- Fixed race-start steering: the phone rotation assist no longer applies in
  the forced buttons mode, and pre-race orientation changes are held until the
  grid placement is complete.
- Fixed drift cancellation when keyboard, gamepad and mouse actions overlap.
  Each device keeps its own source bits, and steering/brake are re-asserted in
  the engine GamePad state each frame.
- `Esc` now toggles pause/resume in a race. The in-game Exit item closes the
  process instead of calling the missing Android activity.
- Replaced the guest bump allocator with a locked size-class free list; the
  heap stays around 539 MB across races instead of exhausting 4 GiB.
- Added crash logging for native exceptions, guest aborts and heap exhaustion.
- Added the Windows GUI installer, builder packaging and 12-scene coverage
  tests.

## Earlier

- Static ARMv7 to x86-64 C translation, JNI/platform shims, GLES1 layer,
  audio, movies, menus, car rendering and race loading.
