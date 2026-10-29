# Changelog

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
