# Controls

The port uses the game's own input system. Mouse clicks become touch events;
keyboard events go through `Game::InputKeyBoard`.

## Menus

Click or tap at the original 854x480 position. Menus, options, car selection
and the pause menu behave like the Android build.

## Race

| Input | Action |
|---|---|
| Left / `A` | steer left |
| Right / `D` | steer right |
| Up / `W` | accelerate |
| Down / `S` | brake |
| `Space` | nitro |
| `C` | camera view |
| `Esc` | pause / resume; back in menus |
| `Ctrl+Q`, Alt+F4, window close | quit |
| Pause menu **Exit** | quit the game |

Mouse:

| Input | Action |
|---|---|
| Left half / right half | steer |
| Bottom-left / bottom-right pedal | brake |
| Blue **N** | nitro |
| Top-left / top-right corner | pause |
| Other clicks | touch (hints and tutorials) |

Gamepad (XInput, optional):

| Input | Action |
|---|---|
| Left stick / D-pad left-right | steer |
| Left trigger / D-pad down / B | brake |
| Right trigger / D-pad up | accelerate |
| A | nitro |
| Y | camera |
| Start / Back | pause / resume |

`RECOMP_GAMEPAD_DISABLE=1` disables XInput polling.

## Notes

- The bottom pedals both brake. Acceleration is automatic in the Android race
  mode.
- Keyboard, gamepad and mouse actions are tracked separately, so releasing one
  device does not cancel a brake or steer held on another. Steering and brake
  are re-asserted in the engine's current GamePad state each rendered frame.
- `Esc` opens the pause menu. A second `Esc` invokes its Resume item; it does
  not open the quit-to-menu confirmation.
- The port forces the in-race buttons layout. The phone-rotation steering
  assist is disabled while that layout is active.
- Mouse input stays in the 854x480 logical canvas at any window size.

## Runtime switches

These are intended for testing, not normal play.

| Variable | Meaning |
|---|---|
| `RECOMP_RES=1280x720` | window size (`1920x1080` by default) |
| `RECOMP_FPS=60` | optional frame cap |
| `RECOMP_OFFSCREEN=1` | hide the window for captures |
| `RECOMP_FORCE_SCENE=2` | boot directly into a race scene |
| `RECOMP_KEYS=frame:keycode:down;...` | inject engine key events |
| `RECOMP_MASKS=frame:mask:down;...` | inject GamePad bits |
| `RECOMP_TAP=x,y,frame;...` | inject touch presses |
| `RECOMP_HOLDS=x,y,start,end[,id];...` | hold a touch |
| `RECOMP_CAPTURE=path` | write a PPM capture |
| `RECOMP_CAPTURE_FRAME=n` | capture frame |
| `RECOMP_NITRO_LOG=n` | dump car input/nitro state every n frames |
| `RECOMP_INPUT_LOG=1` | log key/action transitions |
| `RECOMP_CAM_LOG=1` | log camera cuts and smoothing |
| `RECOMP_START_LOG=1` | log pre-race orientation holds |
| `RECOMP_EXIT_FRAME=n` | invoke `Game::Exit` at frame n |
