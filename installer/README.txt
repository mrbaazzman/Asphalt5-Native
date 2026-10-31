Asphalt 5 - Windows installer
=============================

Requirements
------------
- Windows 10 or 11 x64
- Your own Asphalt 5 APK (3.2.4 Sony Ericsson, 3.3.7 Galaxy Tab or
  3.4.1 Android Market/Motorola)
- For 3.2.4: the matching GloftA5HD game data folder
- For 3.3.7 / 3.4.1: internet access for the official data pack

Install
-------
1. Run Asphalt5Setup.exe.
2. Select the APK and an install folder.
3. Click Install. The setup translates and compiles the game locally.
4. Start the game from the shortcut or <install>\Asphalt5.exe.

The setup detects the APK version, picks the matching library and patch set,
and contains the recompiler, MinGW toolchain and host sources. It does not
contain game code or assets; the executable is produced from your own APK.
Temporary files are removed after the build.

3.3.7 / 3.4.1 first launch
--------------------------
The game executable itself contains the Android GameInstaller port. On the
first launch it:

1. shows the Gameloft logo with installer_000.ogg playing;
2. shows the installer's graphical prompt (DOWNLOAD/CANCEL panels);
3. downloads the official Gameloft PVRTC stream from the live server;
4. verifies the SHA-256, inflates and splits it into gamefiles\GloftA5HD337
   (3.3.7) or gamefiles\GloftA5HD341 (3.4.1);
5. continues into the game.

The download phase runs from 0% to 80%; unpacking runs from 80% to 100%.
The installer always contacts the live server by default. To reuse an
already downloaded pack without contacting the server, set A5_USE_CACHE=1;
the cached files are:

  3.3.7: %LOCALAPPDATA%\Asphalt5\AndroidResources_PVRT.zip
  3.4.1: %LOCALAPPDATA%\Asphalt5\AndroidResources_PVRT_341.zip

Deleting the relevant file forces a fresh server download.

There is no separate installer executable and no generic download dialog:
the logo, panel, buttons, progress bar and font are the ported GameInstaller
UI from the APK.

Notes
-----
- The installer windows are 1024x600 (3.3.7) and 1024x576 (3.4.1). The
  3.3.7 game runs at 1920x1080 by default when the desktop supports it
  (otherwise 1536x900), with the original 1024x600 logical UI. The 3.4.1
  game uses its original 854x480 logical UI and also defaults to 1920x1080.
- Set RECOMP_RES=1920x1080 to force 1080p, or another size such as
  RECOMP_RES=1536x900.
- Esc pauses and resumes; the pause menu Exit item quits.
- The 3.4.1 intro movie plays on first launch (its 854x480 variant is used).
  Click or press Esc to skip it.
- Only Asphalt5.exe and gamefiles/ remain after installation. The first-run
  installer unpacks its embedded UI to %LOCALAPPDATA%\Asphalt5\ui337 or
  ui341 and deletes it when the installer closes.
- Logs: %LOCALAPPDATA%\Asphalt5\asphalt5.log, installer.log and install.log.
- Remove the game by deleting the install folder and shortcuts.

Controls
--------
Menus       mouse click
Race        left/right mouse halves steer; pedals brake; N fires nitro
Keyboard    arrows or A/D steer, W/S accelerate/brake, Space nitro,
            C camera, Esc pause/resume, Ctrl+Q quit
Movies      click or Esc to skip

The phone's on-screen touch buttons are hidden during races. Mouse zones,
keyboard and gamepad controls above still work. Set RECOMP_SHOW_TOUCH=1 to
show the original touch overlay.

Silent mode
-----------
  Asphalt5Setup.exe --silent --apk <file.apk> --dir <dir>
                    [--shortcut] [--force] [--keep-build] [--log <file>]

The setup does not download or copy game data. For 3.3.7 and 3.4.1 the game
downloads its official pack from the live server on first launch; for 3.2.4
copy your own GloftA5HD folder into <install>\gamefiles\GloftA5HD.

Troubleshooting
---------------
- Unsupported APK: this build targets the 3.2.4 SE, 3.3.7 Galaxy Tab and
  3.4.1 Android Market libraries. Other builds will crash.
- Build failed: open install.log.
- Game exits immediately: check gamefiles\GloftA5HD (3.2.4),
  gamefiles\GloftA5HD337 (3.3.7) or gamefiles\GloftA5HD341 (3.4.1), then
  asphalt5.log.
- No videos: the MP4 files must exist in the game data folder.
- Installer network error: see installer.log. The URL and SHA-256 are
  embedded in Asphalt5.exe with the installer UI.
