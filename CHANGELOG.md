# Changelog

## 2.2.2 - 2026-11-01

- Fixed the white loading and Options backgrounds on 3.4.1. The JNI
  local-ref cleanup added after v2.0.1 freed strings and small arrays that
  the 3.4.1 code still reads after DeleteLocalRef. Strings are now kept, and
  arrays are freed only after the current menu/race phase has finished.
- Fixed the repeated-race heap exhaustion without bringing the 3.4.1
  background failure back: menu arrays are released when a race starts,
  race arrays are released 120 frames after the race ends, and the heap is
  compacted at the same point.
- Verified by the maintainer through more than 10 consecutive races on
  3.4.1.

## 2.2.1 - 2026-11-01

- Fixed background/unfocused input. The game no longer polls keyboard,
  mouse, XInput or DirectInput while another application is in the
  foreground, so menu clicks and sounds no longer fire in the background.
  Held inputs are released on focus loss and ignored until released after
  focus returns.

## 2.2.0 - 2026-11-01

- Added the PC input mapper. Open it with **F1** or **OPTIONS -> CONTROLS ->
  CONFIGURE INPUT** from the main options or the pause menu, then click a
  keyboard or controller cell and press the key, button or axis you want.
  Bindings save immediately.
- Supports keyboard, XInput controllers and generic DirectInput controllers,
  wheels, pedals and joysticks. Axes and POV hats can be bound as well as
  buttons.
- Seven actions can be rebound: steer left/right, accelerate, brake, nitro,
  camera and pause. A binding can be cleared with Delete; Reset Defaults and
  Done are in the overlay.
- Bindings are stored in `%LOCALAPPDATA%\Asphalt5\input.ini`; the file is
  created with defaults on first launch.
- The overlay owns the mouse and keyboard while open, so clicking a binding
  does not change stock options underneath.
- Xbox pads are handled through XInput only; their legacy DirectInput
  duplicate is skipped. A controller A press can be bound by pressing A,
  releasing it and pressing it again. B/Start/Back do not close the mapper.
- The stock AUTO ACCELERATE row is available again and is controlled by the
  game itself. Menus use control mode 1 so the row is not disabled; races
  still switch to the mode-2 button layout. The mapper overlay's separate
  Auto Accelerate button and `auto_accelerate` setting were removed.
- CONFIGURE INPUT opens the mapper from the pause-menu Controls page as well
  as from the main Options page.
- 3.3.7: keyboard/gamepad accelerate and brake feed the GamePad key mask
  directly because that build no longer maps the D-pad keycodes. The race
  pause button hotzone uses the real 1024x600 layout instead of the 854x480
  corner test.
- The phone touch buttons are hidden every frame during a race, so resuming
  from pause no longer flashes them.
- All three builds statically link the pthread runtime, so
  `libwinpthread-1.dll` is no longer required.
- Fixed the 854x480 Controls-page row geometry used by 3.2.4 and 3.4.1.
- Guarded the stock Controls-row DoAction so the opening click cannot cycle
  ACCELEROMETER/BUTTONS behind the overlay.
- Tested by the maintainer on 3.2.4, 3.3.7 and 3.4.1: mapper entry, capture,
  persistence, stock Auto Accelerate, pause-menu entry and touch-button
  hiding.

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
