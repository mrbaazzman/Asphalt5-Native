// input.c - PC input for the Asphalt 5 recomp.
//
// Two input sources, both feeding the ENGINE's own paths:
//
//   Keyboard -> Game::InputKeyBoard(game, keyCode, action)  @0x6bec0
//               (engine maps key codes to its virtual keys / GamePad masks)
//
//   Mouse    -> notifyTouchPress/Moved/Released @0x5d5c4/0x5d61c/0x5d5b4
//               (real touches: menus and race HUD)
//
// Default bindings (remappable, see below):
//   Left / A        -> steer left     Right / D     -> steer right
//   Down / Ctrl     -> brake          Space         -> nitro
//   C               -> camera         Esc           -> pause menu
//
// A5_KEYMAP remaps the PC side per action, e.g.
//   set A5_KEYMAP=left=0x25,0x41;right=0x27,0x44;brake=0x28,0x11;nitro=0x20
// (VK codes decimal or 0x-hex; actions: left right brake nitro camera pause).
// A gamepad will feed the same action layer later.
//
// The engine key codes per action can be overridden with A5_CODE_L/R/BRAKE/
// NITRO/CAM/BACK (normally not needed).
//
// A5_NO_KEYBOARD=1 disables the engine key path (mouse/touch only).
// A5_KEY_DEBUG=1   logs every engine key edge.
// A5_INPUT_TRACE=1 logs touch events and the engine key state.
//
// The engine's key/touch state is hard-reset on race<->menu transitions: the
// states read the GamePadManager copies at [game+0x1bc0]+8/0xc/0x10, the pad
// itself, the latched CKeyQueue mask and the CTouchScreen active-touch list.
// Any of those surviving a transition makes the pause menu scroll/fire nitro
// with no input at all.

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include "a5gl.h"
#include "input.h"

#define A5_BASE 0x10000000u

#define FN_INPUT_KEYBOARD 0x6bec0u
#define FN_TOUCH_DOWN     0x5d5c4u
#define FN_TOUCH_UP       0x5d5b4u
#define FN_TOUCH_MOVE     0x5d61cu
// 3.4.1 reference addresses; the version profile rewrites them for 3.3.7.
#define FN_GET_PAD        0x178f60u
#define FN_PAD_PRESS      0x1791fcu
#define FN_PAD_RELEASE    0x179258u
#define ADDR_GAME         0x1fa798u
#define ADDR_CTRL_MODE    0x1f85f0u   // CGameSettings::controlMode (byte)
#define ADDR_ACC_Y        0xafe27cu   // mAccelerometerY (device tilt axis)
#define ADDR_ACC_X        0xafe280u   // mAccelerometerX (gravity)
#define ADDR_ACC_Z        0xafe290u

static a5_call_fn  s_call;
static a5_rd32_fn  s_rd32;
static a5_wr32_fn  s_wr32;
static a5_poll_fn  s_poll;
static a5_size_fn  s_size;
static a5_state_fn s_state;
static a5_state_ptr_fn s_state_ptr;
static uint32_t    s_env;
static int         s_scr_w, s_scr_h;

// ---- key bindings --------------------------------------------------------
enum { A_L, A_R, A_BRK, A_NIT, A_CAM, A_BACK, A_COUNT };

typedef struct {
    int code;         // engine (Android) key code
    int down;         // aggregate state last frame
    int tap_only;     // the engine turns ONE press into a full tap (it also
                      // releases internally); a release call would fire the
                      // action a second time (BACK looped pause/exit).
    const char* name;
} Action;

static Action s_act[A_COUNT] = {
    { 21, 0, 0, "steer left"  },
    { 22, 0, 0, "steer right" },
    { 20, 0, 0, "brake"       },
    { 23, 0, 0, "nitro"       },
    { 31, 0, 0, "camera"      },   // 31 -> mask 0x400; 32 would be 0x4000 (nitro!)
    {  4, 0, 1, "pause/back"  },
};
static int s_swallow[A_COUNT];   // drop the release of keys held when a menu opened

// Every PC key that feeds an action.  Several keys may feed the same action;
// the engine key is pressed while ANY of them is held (aggregate + edge).
// The live table is built at startup so it can be remapped at runtime with
// A5_KEYMAP="left=0x25,0x41;right=0x27,0x44;brake=0x28,0x11;nitro=0x20"
// (VK codes are decimal or 0x-hex; action names: left right brake nitro
//  camera pause).  This is also the layer a gamepad will feed later.
typedef struct { int vk; int act; } Bind;
static Bind s_binds[64];
static int s_nbinds = 0;

static void add_bind(int vk, int act) {
    if (s_nbinds < (int)(sizeof(s_binds) / sizeof(s_binds[0]))) {
        s_binds[s_nbinds].vk = vk;
        s_binds[s_nbinds].act = act;
        s_nbinds++;
    }
}

static const Bind s_default_binds[] = {
    { VK_LEFT,     A_L   },
    { 'A',         A_L   },
    { VK_RIGHT,    A_R   },
    { 'D',         A_R   },
    { VK_DOWN,     A_BRK },
    { VK_CONTROL,  A_BRK },
    { VK_LCONTROL, A_BRK },
    { VK_RCONTROL, A_BRK },
    { VK_SPACE,    A_NIT },
    { 'C',         A_CAM },
    { VK_ESCAPE,   A_BACK },
};

extern uint64_t g_tick_count;    // Scene::UpdateCars logic ticks
static int s_key_debug = 0;
static int s_trace = 0;
static int s_touch_in_race = 0;
static int s_keyboard = 1;     // engine key path ON; A5_NO_KEYBOARD=1 disables
static int s_mouse_move = 0;   // A5_MOUSE_MOVE=1: forward hover moves (menus)
static int s_acc_warned = 0;
static int   s_no_acc = 0;                    // A5_NO_ACC=1: never write the accelerometer
static float s_acc_x = 9.8f, s_acc_y = 0.0f, s_acc_z = 0.0f;  // A5_ACC=x,y,z
static int   s_acc_override = 0;

// Live current-state object, exactly like Game::CurrentState() @0xc0004:
//   idx = *(int*)(game + 0x1d38); state = *(game + 0x1d3c + idx*4)
// Using the object's vtable is robust against stale cached state names (the
// host cache is only refreshed on Push/ChangeState, not on PopState).
static uint32_t cur_state(void) {
    uint32_t game = s_rd32(A5_BASE + ADDR_GAME);
    if (!game) return 0;
    int32_t idx = (int32_t)s_rd32(game + 0x1d38);
    if (idx < 0) return 0;
    return s_rd32(game + 0x1d3c + (uint32_t)idx * 4);
}

static int s_paused = 0;
static int s_pause_latch = 0;   // Esc that opened the pause is still held
static int s_race_frame = -1;   // host frame when GS_Run was entered
static int s_auto_done = 0;     // A5_AUTOPAUSE already fired this race

int a5input_paused(void) { return s_paused; }

static int in_race(void) {
    uint32_t sp = cur_state();
    return sp && s_rd32(sp) == A5_BASE + 0x1efaa8u;   // GS_Run vtable
}

#ifdef A5_DIRECT_PAD
// 3.3.7's Game::GetKeyMask only recognizes Back/Camera/Space; it returns 0 for
// the Android driving keys (19-23).  The engine's own on-screen buttons use
// these pad masks, so feed them straight into GamePad for keyboard/PC input.
static void pad_key(int code, int down) {
    uint32_t mask = 0;
    switch (code) {
        case 21: mask = 1u;      break;   // steer left
        case 22: mask = 2u;      break;   // steer right
        case 20: mask = 4u;      break;   // brake / reverse
        case 23: mask = 0x4000u; break;   // nitro
        default: return;
    }
    uint32_t game = s_rd32(A5_BASE + ADDR_GAME);
    if (!game) return;
    uint32_t mgr = s_rd32(game + 0x1bc0);
    if (!mgr) return;
    uint32_t pad = s_call(A5_BASE + FN_GET_PAD, (uint32_t[]){ mgr, 0 }, 2);
    if (!pad) return;
    s_call(A5_BASE + (down ? FN_PAD_PRESS : FN_PAD_RELEASE),
           (uint32_t[]){ pad, mask }, 2);
    if (getenv("A5_PAD_DEBUG"))
        printf("[pad] %s mask=%#x pad=%#x pressed=%#x\n",
               down ? "down" : "up", mask, pad, s_rd32(pad + 0x10));
}
#endif

static void key_to_engine(int code, int down, const char* why) {
    uint32_t game = s_rd32(A5_BASE + ADDR_GAME);
    if (!game) return;
#ifdef A5_DIRECT_PAD
    if (code == 21 || code == 22 || code == 20 || code == 23) {
        pad_key(code, down);
        if (s_key_debug)
            printf("[input] %-11s mask-key=%2d %s\n", why, code, down ? "down" : "up");
        return;
    }
#endif
    // The engine follows Android's KeyEvent action convention: 0 = down,
    // 1 = up.  Passing the opposite silently drops every press.
    uint32_t args[3] = { game, (uint32_t)code, (uint32_t)(down ? 0 : 1) };
    s_call(A5_BASE + FN_INPUT_KEYBOARD, args, 3);
    if (s_key_debug)
        printf("[input] %-11s key=%2d %s\n", why, code, down ? "down" : "up");
}

static void keyboard_frame(int frame) {
    int raw[A_COUNT];
    // While the in-game menu is open only Esc/BACK is forwarded: the race keys
    // (steer/brake/nitro/camera) must never drive menu items.  The menu itself
    // is navigated with the mouse (real touches).
    uint32_t sp = cur_state();
    int menu = sp && s_rd32(sp) == A5_BASE + 0x1f0e78u;
    for (int i = 0; i < A_COUNT; i++) raw[i] = 0;
    for (int i = 0; i < s_nbinds; i++)
        if (GetAsyncKeyState(s_binds[i].vk) & 0x8000)
            raw[s_binds[i].act] = 1;
    for (int i = 0; i < A_COUNT; i++) {
        if (raw[i] == s_act[i].down) continue;
        s_act[i].down = raw[i];
        if (menu && i != A_BACK) continue;            // track only, never inject
        if (s_act[i].tap_only && !raw[i]) continue;   // engine released it already
        if (i == A_BACK && raw[i]) {
            // Engine pause (GS_Run::OpenIGM) with the live state object.
            uint32_t sp = cur_state();
            if (sp && s_rd32(sp) == A5_BASE + 0x1efaa8u) {   // GS_Run
                uint32_t a1[1] = { sp };
                s_call(A5_BASE + 0xb6b30, a1, 1);
                if (s_key_debug) printf("[input] pause (OpenIGM)\n");
                continue;
            }
        }
        if (!raw[i] && s_swallow[i]) { s_swallow[i] = 0; continue; }
        key_to_engine(s_act[i].code, raw[i], s_act[i].name);
    }
    (void)frame;
}

// ---- accelerometer -------------------------------------------------------
// The engine reads the device accelerometer; in accelerometer control mode it
// feeds the camera/steering directly.  Keep a valid "landscape phone held
// level" vector (gravity on X = +9.8, tilt on Y) even when the mode is not
// active, so a mode switch can never integrate garbage.
static void accel_frame(int frame) {
    if (s_no_acc) return;
    uint8_t mode = (uint8_t)(s_rd32(A5_BASE + ADDR_CTRL_MODE) & 0xFF);
    float ax = s_acc_x, ay = s_acc_y, az = s_acc_z;
    if (mode == 1 && !s_acc_override) {
        // keyboard tilt fallback while in accelerometer mode (uses the same
        // remappable action bindings as the race controls)
        int kl = 0, kr = 0;
        for (int i = 0; i < s_nbinds; i++) {
            if (!(GetAsyncKeyState(s_binds[i].vk) & 0x8000)) continue;
            if (s_binds[i].act == A_L) kl = 1;
            if (s_binds[i].act == A_R) kr = 1;
        }
        static float tilt = 0.0f;
        float tgt = (kr ? 9.8f : 0.0f) - (kl ? 9.8f : 0.0f);
        tilt += (tgt - tilt) * 0.22f;
        ay = tilt;
    }
    uint32_t u;
    memcpy(&u, &ax, 4); s_wr32(A5_BASE + ADDR_ACC_X, u);
    memcpy(&u, &ay, 4); s_wr32(A5_BASE + ADDR_ACC_Y, u);
    memcpy(&u, &az, 4); s_wr32(A5_BASE + ADDR_ACC_Z, u);
    if (s_trace && mode == 1 && !s_acc_warned) {
        s_acc_warned = 1;
        printf("[input] accelerometer control mode: feeding tilt (x=%.1f y=%.1f z=%.1f)\n", ax, ay, az);
    }
    (void)frame;
}

// ---- mouse -> real touch (menus only) ------------------------------------
static void touch_event(int type, int x, int y);
static void release_camera_mask(void);

static int s_last_x = 0, s_last_y = 0;
static int s_have_pos = 0;

// A click must span at least one engine frame: CTouchScreen::ProcessMouseEventQueue
// consumes the whole queue inside one update, so a down+up delivered in the same
// host frame is over before any menu Update can look at the touch (the UI sees
// "no touch" and the click is lost).  Keep the finger down and release it two
// frames later.
static int s_touch_down = 0;
static int s_up_pending = 0;
static int s_up_frame = 0;
static int s_up_x = 0, s_up_y = 0;
static int s_down_frame = 0;
static uint64_t s_down_tick = 0;
static int s_down_race = 0;
static ULONGLONG s_down_ms = 0;

static void touch_flush_pending(int frame) {
    if (!s_up_pending) return;
    int elapsed = frame - s_down_frame;
    int can_release = (frame >= s_up_frame);
    // In a race a tap must span at least one logic tick.  This is
    // deliberately wall-clock based, not frame based: at 120/300 FPS a
    // five-frame hold is shorter than a tick, so the HUD's virtual nitro
    // key would still be lost.  Hold until the tick counter advances (or
    // 150 ms as a safety cap while paused).
    if (can_release && s_down_race) {
        ULONGLONG held_ms = GetTickCount64() - s_down_ms;
        can_release = (elapsed >= 2) &&
                      (g_tick_count != s_down_tick || held_ms >= 150);
    }
    if (can_release) {
        touch_event(1, s_up_x, s_up_y);
        s_up_pending = 0;
        s_touch_down = 0;
        if (in_race()) release_camera_mask();
    }
}

static void touch_release_now(void) {
    if (s_touch_down) {
        touch_event(1, s_up_pending ? s_up_x : s_last_x,
                       s_up_pending ? s_up_y : s_last_y);
        s_touch_down = 0;
        s_up_pending = 0;
    }
}

static void scaled(int* x, int* y) {
    int vx = 0, vy = 0, vw = 0, vh = 0;
    a5gl_view_rect(&vx, &vy, &vw, &vh);
    if (vw > 0 && vh > 0) {
        *x = (int)((long long)(*x - vx) * s_scr_w / vw);
        *y = (int)((long long)(*y - vy) * s_scr_h / vh);
        if (*x < 0) *x = 0;
        if (*y < 0) *y = 0;
        if (*x >= s_scr_w) *x = s_scr_w - 1;
        if (*y >= s_scr_h) *y = s_scr_h - 1;
        return;
    }
    int cw = s_scr_w, ch = s_scr_h;
    if (s_size) { s_size(&cw, &ch); }
    if (cw > 0 && ch > 0 && (cw != s_scr_w || ch != s_scr_h)) {
        *x = (int)((long long)*x * s_scr_w / cw);
        *y = (int)((long long)*y * s_scr_h / ch);
    }
}

static void touch_event(int type, int x, int y) {
    uint32_t fn = (type == 0) ? FN_TOUCH_DOWN : (type == 1) ? FN_TOUCH_UP : FN_TOUCH_MOVE;
    uint32_t args[5] = { s_env, 0, (uint32_t)x, (uint32_t)y, 0 };
    s_call(A5_BASE + fn, args, 5);
    s_last_x = x; s_last_y = y; s_have_pos = 1;
    if (s_trace)
        printf("[input] touch %s (%d,%d)\n",
               type == 0 ? "down" : type == 1 ? "up" : "move", x, y);
}

static uint32_t game_mgr(void) {
    uint32_t game = s_rd32(A5_BASE + ADDR_GAME);
    uint32_t mgr = game ? s_rd32(game + 0x1bc0) : 0;
    if (!mgr) mgr = s_rd32(A5_BASE + 0xafe0ecu);
    return mgr;
}

extern uint32_t g_press_latch;   // hooks.inc high-FPS press latch

// A touch on the 3D view presses the engine's camera action (mask 0x400, the
// "C"/camera key).  When the finger is released, the HUD fails to deliver the
// release for that virtual key and the mask keeps pulsing every frame - the
// camera then changes non-stop.  Clear that one bit from every place that can
// re-apply it (pad pending/held, manager copies, the high-FPS latch and the
// CKeyQueue latched-button mask) when a touch ends in a race.
static void release_camera_mask(void) {
    uint32_t mgr = game_mgr();
    if (mgr) {
        uint32_t pad = s_call(A5_BASE + 0x178f60, (uint32_t[]){ mgr, 0 }, 2);
        if (pad && pad != 0xFFFFFFFFu) {
            s_wr32(pad + 0x0c, s_rd32(pad + 0x0c) & ~0x400u);   // held
            s_wr32(pad + 0x10, s_rd32(pad + 0x10) & ~0x400u);   // pending press
            s_wr32(pad + 0x14, s_rd32(pad + 0x14) & ~0x400u);   // pending release
        }
        s_wr32(mgr + 0x08, s_rd32(mgr + 0x08) & ~0x400u);       // pressed pulse
        s_wr32(mgr + 0x10, s_rd32(mgr + 0x10) & ~0x400u);       // held copy
    }
    g_press_latch &= ~0x400u;
    uint32_t kq = s_call(A5_BASE + 0x63b6c, NULL, 0);            // CKeyQueue
    if (kq && kq != 0xFFFFFFFFu)
        s_wr32(kq + 0x1b8, s_rd32(kq + 0x1b8) & ~0x400u);        // latched buttons
}

static void reset_pad(void) {
    uint32_t mgr = game_mgr();
    if (!mgr) return;
    uint32_t a[2] = { mgr, 0 };
    uint32_t pad = s_call(A5_BASE + 0x178f60, a, 2);
    if (pad && pad != 0xFFFFFFFF) {
        // Hard reset of every key register (held, pressed/released edges and
        // the pending press/release accumulators).  The race loop presses its
        // own virtual keys; if one is still latched when the pause menu opens,
        // the menu scrolls by itself / fires the nitro.  Do not touch +4/+8:
        // those are the pad's own pointers.
        static const uint32_t offs[] = { 0x00, 0x0c, 0x10, 0x14, 0x18, 0x1c, 0x20 };
        for (unsigned i = 0; i < sizeof(offs) / sizeof(offs[0]); i++)
            s_wr32(pad + offs[i], 0);
        uint32_t p[1] = { pad };
        s_call(A5_BASE + 0x178f88, p, 1);   // GamePad::ResetKeys()
    }
}

// The states do NOT read the GamePad object directly: they read the per-pad
// copies in GamePadManager ([game+0x1bc0] + {8,0xc,0x10}).  GS_IngameMenu::
// CheckClearKey, for example, tests [[game+0x1bc0]+8] & 0x200000.  Those
// copies are only refreshed by GamePadManager::UpdateKeys, so a key pulse can
// survive a state change and re-trigger the menu.  Clear them together with the
// pad itself.
//
// CKeyQueue also latches every virtual button it ever saw in [queue+0x1b8]
// (AddKeyToQueue ORs it, and nothing in the engine calls ResetKeyPressedMask),
// then ApplyKeyPressedMask re-presses that whole mask.  Reset it as well.
// The engine keeps its own view of the finger (CTouchScreen statics).  A touch
// that was down when the pause opened (HUD button / steering) stays in that
// list and the menu polls it as a held finger - the list then scrolls "by
// itself".  Drop the active touches, the per-frame deltas and the pinch state.
static void reset_touch(void) {
    s_wr32(A5_BASE + 0xafd12c, 0);   // s_mouseCount + s_tMouseX
    s_wr32(A5_BASE + 0xafd130, 0);   // s_tMouseY + s_tCrtMouse
    s_wr32(A5_BASE + 0xafd134, 0);   // s_tMouseCount + s_tMouseDX
    s_wr32(A5_BASE + 0xafd138, 0);   // s_tMouseDY + s_tMouseTotalDX
    s_wr32(A5_BASE + 0xafd13c, 0);   // s_tMouseTotalDY + s_tMousePinch
    s_wr32(A5_BASE + 0xafd140, 0);   // s_tOldPinchdist
    s_call(A5_BASE + 0x1473c8, NULL, 0);   // CTouchScreen::ClearEvents()
}

static void reset_engine_keys(int reset_queue) {
    reset_pad();
    reset_touch();
    uint32_t mgr = game_mgr();
    if (mgr) {
        s_wr32(mgr + 0x08, 0);   // pressed pulse
        s_wr32(mgr + 0x0c, 0);   // released pulse
        s_wr32(mgr + 0x10, 0);   // held
    }
    if (reset_queue) {
        uint32_t kq = s_call(A5_BASE + 0x63b6c, NULL, 0);   // CKeyQueue::GetInstance()
        if (kq && kq != 0xFFFFFFFFu) {
            uint32_t a[1] = { kq };
            s_call(A5_BASE + 0x147094, a, 1);               // ResetKeyPressedMask()
        }
    }
}

static void mouse_frame(int frame) {
    int race = in_race();
    int t, x, y;
    touch_flush_pending(frame);
    // Touches are enabled EVERYWHERE (mouse-only controls).  A button - menu or
    // race HUD - is polled once per engine update, so a down+up delivered in
    // the same host frame would be gone before the poll (the click is lost).
    // The down therefore lives for one engine update and is released on the
    // next frame.  Holding the mouse simply keeps it down for longer.
    (void)race;
    while (s_poll(&t, &x, &y)) {
        scaled(&x, &y);
        if (t == 2 && !s_mouse_move && !s_touch_down) continue;   // clicks/drags only
        if (t == 0) {                    // button down
            if (s_touch_down) {
                touch_event(2, x, y);    // second down without an up: drag
            } else {
                touch_event(0, x, y);
                s_touch_down = 1;
                s_down_frame = frame;
                s_down_tick = g_tick_count;
                s_down_race = in_race();
                s_down_ms = GetTickCount64();
            }
            s_up_pending = 0;
        } else if (t == 1) {             // button up
            if (s_touch_down && !s_up_pending) {
                s_up_pending = 1;
                s_up_frame = frame + 1;
                s_up_x = x;
                s_up_y = y;
            }
            // The camera action (mask 0x400) latches when a touch on the 3D
            // view is released; clear it so the camera cannot keep changing.
            if (in_race()) release_camera_mask();
        } else {                         // move
            if (s_touch_down) touch_event(2, x, y);
        }
    }
    // A5_TEST_CLICK="frame:x:y;frame:x:y" - test-only direct taps (bypasses
    // the race guard) so the race-time behaviour can be reproduced headlessly.
    {
        static int tc_n = -1, tc_f[16], tc_x[16], tc_y[16];
        const char* tc = getenv("A5_TEST_CLICK");
#ifdef A5_AUTO_START_CLICK
        // This engine's splash waits for a tap before advancing to the menu.
        // Two taps after the intro movie/logo mimic the phone's "touch to
        // continue"; A5_TEST_CLICK overrides the sequence.
        if (!tc) tc = "250:427:240;500:427:240";
#endif
        if (tc && tc_n < 0) {
            tc_n = 0;
            const char* p = tc;
            while (*p && tc_n < 16) {
                int f, x2, y2;
                if (sscanf(p, "%d:%d:%d", &f, &x2, &y2) != 3) break;
                tc_f[tc_n] = f; tc_x[tc_n] = x2; tc_y[tc_n] = y2; tc_n++;
                const char* semi = strchr(p, ';');
                if (!semi) break;
                p = semi + 1;
            }
            printf("a5host: test clicks: %d\n", tc_n);
        }
        for (int i = 0; i < tc_n; i++)
            if (tc_f[i] == frame) {
                // Same timing as a real click: down now, released next frame.
                if (!s_touch_down) {
                    touch_event(0, tc_x[i], tc_y[i]);
                    s_touch_down = 1;
                    s_down_frame = frame;
                    s_down_tick = g_tick_count;
                    s_down_race = in_race();
                    s_down_ms = GetTickCount64();
                    s_up_pending = 1;
                    s_up_frame = frame + 1;
                    s_up_x = tc_x[i];
                    s_up_y = tc_y[i];
                }
                printf("[testclick] f%d (%d,%d) race=%d state=%s\n", frame, tc_x[i], tc_y[i],
                       in_race(), s_state ? s_state() : "?");
            }
    }
}

void a5input_init(a5_call_fn call, a5_rd32_fn rd32, a5_wr32_fn wr32,
                  a5_poll_fn poll, a5_size_fn size, a5_state_fn state,
                  a5_state_ptr_fn state_ptr,
                  uint32_t env_table, int screen_w, int screen_h) {
    s_call = call;
    s_rd32 = rd32;
    s_wr32 = wr32;
    s_poll = poll;
    s_size = size;
    s_state = state;
    s_state_ptr = state_ptr;
    s_env = env_table;
    s_scr_w = screen_w;
    s_scr_h = screen_h;
    s_key_debug = getenv("A5_KEY_DEBUG") ? 1 : 0;
    s_trace = getenv("A5_INPUT_TRACE") ? 1 : 0;
    s_touch_in_race = getenv("A5_TOUCH_IN_RACE") ? 1 : 0;
    s_keyboard = getenv("A5_NO_KEYBOARD") ? 0 : 1;   // engine key path ON by default
    s_mouse_move = getenv("A5_MOUSE_MOVE") ? 1 : 0;
    s_no_acc = getenv("A5_ACC_FEED") ? 0 : 1;   // OFF by default: writing the
    // accelerometer globals every frame made the camera drift in accelerometer
    // mode; the engine's own zero-initialised values are used unless the user
    // explicitly opts in with A5_ACC_FEED=1.
    {
        const char* ac = getenv("A5_ACC");
        if (ac && sscanf(ac, "%f,%f,%f", &s_acc_x, &s_acc_y, &s_acc_z) == 3)
            s_acc_override = 1;
        if (s_no_acc)
            printf("a5host: accelerometer feed disabled (A5_NO_ACC)\n");
        else
            printf("a5host: accelerometer rest = %.2f,%.2f,%.2f%s\n",
                   s_acc_x, s_acc_y, s_acc_z, s_acc_override ? " (A5_ACC)" : "");
    }

    const char* e;
    if ((e = getenv("A5_CODE_L")))     s_act[A_L].code   = atoi(e);
    if ((e = getenv("A5_CODE_R")))     s_act[A_R].code   = atoi(e);
    if ((e = getenv("A5_CODE_BRAKE"))) s_act[A_BRK].code = atoi(e);
    if ((e = getenv("A5_CODE_NITRO"))) s_act[A_NIT].code = atoi(e);
    if ((e = getenv("A5_CODE_CAM")))   s_act[A_CAM].code = atoi(e);
    if ((e = getenv("A5_CODE_BACK")))  s_act[A_BACK].code = atoi(e);

    // PC key bindings: defaults plus optional per-action replacement through
    // A5_KEYMAP="left=0x25,0x41;right=0x27,0x44;brake=0x28,0x11;nitro=0x20"
    // (VK codes in decimal or 0x-hex; actions left/right/brake/nitro/camera/pause).
    // This is the abstraction a gamepad will feed later - the engine still gets
    // its own virtual keys through Game::InputKeyBoard.
    {
        int mentioned[A_COUNT] = {0};
        const char* km = getenv("A5_KEYMAP");
        if (km) {
            char buf[1024];
            snprintf(buf, sizeof(buf), "%s", km);
            char* p = buf;
            while (p && *p) {
                char* semi = strchr(p, ';');
                if (semi) *semi = 0;
                char* eq = strchr(p, '=');
                if (eq) {
                    *eq = 0;
                    int act = -1;
                    if      (!strcmp(p, "left"))   act = A_L;
                    else if (!strcmp(p, "right"))  act = A_R;
                    else if (!strcmp(p, "brake"))  act = A_BRK;
                    else if (!strcmp(p, "nitro"))  act = A_NIT;
                    else if (!strcmp(p, "camera")) act = A_CAM;
                    else if (!strcmp(p, "pause"))  act = A_BACK;
                    if (act >= 0) {
                        mentioned[act] = 1;
                        char* q = eq + 1;
                        while (q && *q) {
                            char* comma = strchr(q, ',');
                            if (comma) *comma = 0;
                            char* endp = NULL;
                            long vk = strtol(q, &endp, 0);
                            if (endp != q && vk > 0) add_bind((int)vk, act);
                            if (!comma) break;
                            q = comma + 1;
                        }
                    }
                }
                if (!semi) break;
                p = semi + 1;
            }
        }
        for (unsigned i = 0; i < sizeof(s_default_binds) / sizeof(s_default_binds[0]); i++)
            if (!mentioned[s_default_binds[i].act])
                add_bind(s_default_binds[i].vk, s_default_binds[i].act);

        static const char* an[A_COUNT] = { "left", "right", "brake", "nitro", "camera", "pause" };
        printf("a5host: keymap:");
        for (int i = 0; i < A_COUNT; i++) {
            printf(" %s=", an[i]);
            int first = 1;
            for (int j = 0; j < s_nbinds; j++)
                if (s_binds[j].act == i) {
                    printf("%s0x%02x", first ? "" : ",", s_binds[j].vk);
                    first = 0;
                }
        }
        printf("\n");
    }

    // neutral accelerometer once at start-up (only when the feed is enabled)
    if (!s_no_acc) {
        float ax = 9.8f, ay = 0.0f, az = 0.0f;
        uint32_t u;
        memcpy(&u, &ax, 4); s_wr32(A5_BASE + ADDR_ACC_X, u);
        memcpy(&u, &ay, 4); s_wr32(A5_BASE + ADDR_ACC_Y, u);
        memcpy(&u, &az, 4); s_wr32(A5_BASE + ADDR_ACC_Z, u);
    }

    printf("a5host: input ready (mouse/touch%s; engine key path %s)\n",
           s_mouse_move ? ", hover moves" : "",
           s_keyboard ? "ENABLED" : "disabled (A5_NO_KEYBOARD)");
}

static void pause_frame(void) {
    // Mouse-only build: right click opens the engine's own in-game menu (left
    // click is the touch finger, so it cannot double as pause).
    static int rmb_prev = 0;
    int rmb = (GetAsyncKeyState(VK_RBUTTON) & 0x8000) ? 1 : 0;
    if (rmb && !rmb_prev) {
        uint32_t sp = cur_state();
        if (sp && s_rd32(sp) == A5_BASE + 0x1efaa8u) {   // GS_Run
            uint32_t a1[1] = { sp };
            s_call(A5_BASE + 0xb6b30, a1, 1);            // GS_Run::OpenIGM
            printf("[input] pause (right click)\n");
            fflush(stdout);
        }
    }
    rmb_prev = rmb;
}

void a5input_frame(int frame) {
    if (s_paused) {
        // Frozen: resume on a FRESH Esc press or a click.  The Esc that opened
        // the pause is latched so holding it does not instantly resume.
        static int esc_prev = 0;
        if (s_pause_latch) { esc_prev = 1; s_pause_latch = 0; }
        int esc = (GetAsyncKeyState(VK_ESCAPE) & 0x8000) ? 1 : 0;
        int clk = (GetAsyncKeyState(VK_LBUTTON) & 0x8000) ? 1 : 0;
        if ((esc && !esc_prev) || clk) {
            s_paused = 0;
            printf("[input] RESUMED\n");
        }
        esc_prev = esc;
        int t, x, y;
        while (s_poll(&t, &x, &y)) { }
        return;
    }
    // Race <-> menu transitions: hard-reset the engine's key state.  The states
    // read the per-pad copies inside GamePadManager ([game+0x1bc0]+8/0xc/0x10),
    // not the GamePad object, and CKeyQueue permanently latches every virtual
    // button mask it has seen.  Either can re-trigger the in-game menu / fire
    // nitro with no input at all, so clear all of it on every transition.
    static uint32_t last_st = 0;
    uint32_t st = cur_state();
    if (st != last_st) {
        int was_race = last_st && s_rd32(last_st) == A5_BASE + 0x1efaa8u;
        int is_race  = st && s_rd32(st) == A5_BASE + 0x1efaa8u;
        int was_igm  = last_st && s_rd32(last_st) == A5_BASE + 0x1f0e78u;
        int is_igm   = st && s_rd32(st) == A5_BASE + 0x1f0e78u;
        if (was_race != is_race || was_igm != is_igm) {
            touch_release_now();   // never carry a finger across a state change
            reset_engine_keys(1);
            if (is_race) {
                // The pad was just cleared; forget our cached edges too so keys
                // the player is already holding are pressed again immediately.
                for (int i = 0; i < A_COUNT; i++) {
                    s_act[i].down = 0;
                    s_swallow[i] = 0;
                }
            }
        }
        if (is_race && !was_race) {
            s_race_frame = frame;
            s_auto_done = 0;
        }
        // Entering the in-game menu: swallow the RELEASE of any key still held
        // from the race.  A release edge is a full click for the menu UI, which
        // is what activated items / fired nitro by itself.
        if (st && s_rd32(st) == A5_BASE + 0x1f0e78u) {
            for (int i = 0; i < A_COUNT; i++)
                if (s_act[i].down) s_swallow[i] = 1;
        }
        if (s_trace)
            printf("[input] state %#x (race=%d)\n", st ? s_rd32(st) : 0, is_race);
        last_st = st;
    }
    // A5_PAD8=<frame>: diagnostic - press engine key 19 (mask 0x8, the "menu
    // up" bit) once during the race and never release it.  Reproduces a HUD
    // button mask latched across the pause.
    {
        const char* p8 = getenv("A5_PAD8");
        if (p8 && frame == atoi(p8)) {
            key_to_engine(19, 1, "test pad8");
            printf("[input] forced pad mask 8 at f%d\n", frame);
            fflush(stdout);
        }
    }
    // A5_KEYDOWN=<frame>:<engineKeyCode>[:<holdFrames>]: press an engine key at
    // that frame (and release it holdFrames later) - verifies the key path.
    {
        static int kd_f = -1, kd_code = 0, kd_rel = -1;
        const char* kd = getenv("A5_KEYDOWN");
        if (kd && kd_f == -1) {
            int f = 0, c = 0, n = 0;
            if (sscanf(kd, "%d:%d:%d", &f, &c, &n) >= 2) {
                kd_f = f; kd_code = c; kd_rel = (n > 0) ? f + n : -1;
            } else {
                kd_f = -2;
            }
        }
        if (kd_f > 0 && frame == kd_f) {
            key_to_engine(kd_code, 1, "test key");
            printf("[input] keydown %d at f%d\n", kd_code, frame);
            fflush(stdout);
        }
        if (kd_rel > 0 && frame == kd_rel) {
            key_to_engine(kd_code, 0, "test key");
            printf("[input] keyup %d at f%d\n", kd_code, frame);
            fflush(stdout);
        }
    }
    // A5_KEYTAPS="frame:engineKey:hold;..." - several short key taps (the
    // keyboard equivalent of repeated nitro presses).  Each entry presses at
    // <frame> and releases <hold> frames later.
    {
        static int kt_n = -1, kt_f[32], kt_c[32], kt_h[32];
        const char* kt = getenv("A5_KEYTAPS");
        if (kt && kt_n < 0) {
            kt_n = 0;
            const char* p = kt;
            while (*p && kt_n < 32) {
                int f = 0, c = 0, h = 0;
                if (sscanf(p, "%d:%d:%d", &f, &c, &h) < 2) break;
                kt_f[kt_n] = f; kt_c[kt_n] = c; kt_h[kt_n] = h > 0 ? h : 1;
                kt_n++;
                const char* semi = strchr(p, ';');
                if (!semi) break;
                p = semi + 1;
            }
            printf("a5host: key taps: %d\n", kt_n);
        }
        for (int i = 0; i < kt_n; i++) {
            if (frame == kt_f[i]) {
                key_to_engine(kt_c[i], 1, "test tap");
                printf("[input] keytap down %d at f%d\n", kt_c[i], frame);
            }
            if (frame == kt_f[i] + kt_h[i]) {
                key_to_engine(kt_c[i], 0, "test tap");
                printf("[input] keytap up %d at f%d\n", kt_c[i], frame);
            }
        }
    }
    // A5_AUTOPAUSE=<frames>: open the engine pause automatically N frames
    // after GS_Run starts.  Diagnostic only - it removes the need to hit a key
    // or an on-screen button at the right moment.
    if (!s_auto_done && s_race_frame >= 0) {
        const char* ap = getenv("A5_AUTOPAUSE");
        int n = ap ? atoi(ap) : 0;
        uint32_t sp = cur_state();
        int race = sp && s_rd32(sp) == A5_BASE + 0x1efaa8u;
        if (n > 0 && race && frame - s_race_frame >= n) {
            uint32_t a1[1] = { sp };
            s_call(A5_BASE + 0xb6b30, a1, 1);
            printf("[input] autopause at f%d (%d frames into the race)\n",
                   frame, frame - s_race_frame);
            fflush(stdout);
            s_auto_done = 1;
        }
        if (!race) s_auto_done = 1;   // left the race: never fire again
    }
    // A5_MENU_DBG=1: periodic snapshot of the pause state (selection index and
    // the GamePadManager pressed/held words).  Cheap and off by default.
    if (st && s_rd32(st) == A5_BASE + 0x1f0e78u) {
        static int dbg = -1;
        if (dbg < 0) dbg = getenv("A5_MENU_DBG") ? 1 : 0;
        if (dbg && (frame % 60) == 0) {
            uint32_t mgr = game_mgr();
            uint32_t pad = mgr ? s_call(A5_BASE + 0x178f60, (uint32_t[]){ mgr, 0 }, 2) : 0;
            printf("[igmd] f%d item=%d mgr p=%#x h=%#x pad=%#x/%#x/%#x\n",
                   frame, (int)s_rd32(st + 0x78),
                   mgr ? s_rd32(mgr + 8) : 0, mgr ? s_rd32(mgr + 0x10) : 0,
                   pad ? s_rd32(pad) : 0, pad ? s_rd32(pad + 0xc) : 0, pad ? s_rd32(pad + 0x10) : 0);
            fflush(stdout);
        }
    }
    // A5_TOUCH_DBG=<frame>: dump the engine's raw touch state every frame from
    // that frame on (s_mouseCount, X/Y, per-frame DX/DY, accumulated totals).
    {
        const char* td = getenv("A5_TOUCH_DBG");
        if (td && frame >= atoi(td)) {
            uint32_t mgr = game_mgr();
            uint32_t pad = mgr ? s_rd32(mgr + 4) : 0;
            printf("[tstat] f%d cnt=%u crt=%u x=%d y=%d dx=%d dy=%d tdx=%d tdy=%d pinch=%d ph=%#x | p=%#x r=%#x h=%#x | pad %#x %#x %#x %#x %#x %#x %#x\n",
                   frame,
                   (unsigned)(s_rd32(A5_BASE + 0xafd12c) & 0xffff),
                   (unsigned)(s_rd32(A5_BASE + 0xafd132) & 0xff),
                   (int16_t)(s_rd32(A5_BASE + 0xafd12e) & 0xffff),
                   (int16_t)(s_rd32(A5_BASE + 0xafd130) & 0xffff),
                   (int16_t)(s_rd32(A5_BASE + 0xafd136) & 0xffff),
                   (int16_t)(s_rd32(A5_BASE + 0xafd138) & 0xffff),
                   (int16_t)(s_rd32(A5_BASE + 0xafd13a) & 0xffff),
                   (int16_t)(s_rd32(A5_BASE + 0xafd13c) & 0xffff),
                   (int16_t)(s_rd32(A5_BASE + 0xafd13e) & 0xffff),
                   (unsigned)(s_rd32(s_rd32(s_rd32(A5_BASE + ADDR_GAME) + 0x1bc8) + 0x64328) & 0xffffffff),
                   mgr ? s_rd32(mgr + 8) : 0, mgr ? s_rd32(mgr + 0xc) : 0, mgr ? s_rd32(mgr + 0x10) : 0,
                   pad ? s_rd32(pad) : 0, pad ? s_rd32(pad + 0xc) : 0, pad ? s_rd32(pad + 0x10) : 0,
                   pad ? s_rd32(pad + 0x14) : 0, pad ? s_rd32(pad + 0x18) : 0,
                   pad ? s_rd32(pad + 0x1c) : 0, pad ? s_rd32(pad + 0x20) : 0);
        }
    }
    // A5_CAM_DBG=<frame>: per-frame diff of the scene camera controller object
    // ([scene+0x18818], first 256 words).  A camera that keeps moving shows up
    // as words changing every frame; the offsets tell us which state it is.
    {
        const char* cd = getenv("A5_CAM_DBG");
        if (cd && frame >= atoi(cd)) {
            uint32_t g = s_rd32(A5_BASE + ADDR_GAME);
            uint32_t sc = g ? s_rd32(g + 0x1bc8) : 0;
            uint32_t cam = sc ? s_rd32(sc + 0x18818) : 0;
            static uint32_t prev[256];
            static int have = 0;
            if (cam) {
                if (!have) {
                    for (int i = 0; i < 256; i++) prev[i] = s_rd32(cam + (uint32_t)i * 4);
                    have = 1;
                    printf("[camd] base=%#x\n", cam);
                } else {
                    int n = 0;
                    for (int i = 0; i < 256; i++) {
                        uint32_t v = s_rd32(cam + (uint32_t)i * 4);
                        if (v != prev[i]) {
                            if (n == 0) printf("[camd] f%d", frame);
                            printf(" +%x:%08x>%08x", i * 4, prev[i], v);
                            prev[i] = v;
                            if (++n >= 16) { printf(" ..."); break; }
                        }
                    }
                    if (n) printf("\n");
                }
            }
        }
    }
    // A5_CAM_MODE=1: log the camera mode index ([scene+0x18c74]) and the race
    // phase whenever they change.  A click that flips the camera into a
    // continuously-animating mode shows up here immediately.
    {
        const char* cm = getenv("A5_CAM_MODE");
        if (cm) {
            uint32_t g = s_rd32(A5_BASE + ADDR_GAME);
            uint32_t sc = g ? s_rd32(g + 0x1bc8) : 0;
            static uint32_t lm = ~0u, lp = ~0u;
            uint32_t mode = sc ? s_rd32(sc + 0x18c74) : 0;
            uint32_t ph = sc ? s_rd32(sc + 0x64328) : 0;
            if (mode != lm || ph != lp) {
                printf("[camm] f%d mode=%d phase=%d\n", frame, (int)mode, (int)ph);
                lm = mode; lp = ph;
            }
        }
    }
    // A5_IGM_DO=<frame>:<actionId>: invoke GS_IngameMenu::DoAction on the live
    // menu (replays a pause-menu action, e.g. 0x408 = back to main menu).
    {
        const char* md = getenv("A5_IGM_DO");
        static int done = 0;
        if (md && !done) {
            int f = 0, act = 0;
            if (sscanf(md, "%d:%d", &f, &act) == 2 && frame == f) {
                uint32_t sp = cur_state();
                if (sp && s_rd32(sp) == A5_BASE + 0x1f0e78u) {
                    uint32_t a[2] = { sp, (uint32_t)act };
                    s_call(A5_BASE + 0xf6fe8, a, 2);   // DoAction
                    printf("[input] IGM DoAction(%#x) at f%d\n", act, frame);
                    fflush(stdout);
                    done = 1;
                }
            }
        }
    }
    // A5_QUITMENU=<frame>: call Game::quitToMainMenu directly (reproduces the
    // pause-menu "back to main menu" path without the confirmation panel).
    {
        const char* qm = getenv("A5_QUITMENU");
        static int qdone = 0;
        if (qm && !qdone && frame == atoi(qm)) {
            uint32_t g = s_rd32(A5_BASE + ADDR_GAME);
            if (g) {
                uint32_t a[4] = { g, 0, 0, 1 };
                printf("[input] quitToMainMenu at f%d\n", frame);
                fflush(stdout);
                s_call(A5_BASE + 0x66018, a, 4);
                qdone = 1;
            }
        }
    }
    // Trace the live pad while the in-game menu is open: if the race keeps
    // pressing its virtual keys, they show up here.
    if (s_trace && st && s_rd32(st) == A5_BASE + 0x1f0e78u && (frame % 30) == 0) {
        uint32_t mgr = game_mgr();
        uint32_t pad = mgr ? s_call(A5_BASE + 0x178f60, (uint32_t[]){ mgr, 0 }, 2) : 0;
        if (pad && pad != 0xFFFFFFFF)
            printf("[pad] f%d pulse=%#x held=%#x pend=%#x relpulse=%#x pendrel=%#x | mgr pressed=%#x rel=%#x held=%#x\n",
                   frame, s_rd32(pad), s_rd32(pad + 0xc), s_rd32(pad + 0x10),
                   s_rd32(pad + 0x18), s_rd32(pad + 0x14),
                   mgr ? s_rd32(mgr + 8) : 0, mgr ? s_rd32(mgr + 0xc) : 0,
                   mgr ? s_rd32(mgr + 0x10) : 0);
    }
    // A5_TEST_PAUSE=<frame>: open the engine's pause once (diagnostics).
    {
        const char* tp = getenv("A5_TEST_PAUSE");
        if (tp && frame == atoi(tp)) {
            uint32_t sp = cur_state();
            printf("[testpause] f%d state=%s ptr=%#x vt=%#x\n", frame,
                   s_state ? s_state() : "?", sp, sp ? s_rd32(sp) : 0);
            if (sp) { uint32_t a1[1] = { sp }; s_call(A5_BASE + 0xb6b30, a1, 1); }
        }
        if (tp && frame == atoi(tp) + 1) {
            uint32_t sp = cur_state();
            printf("[testpause] after: state=%s ptr=%#x vt=%#x\n",
                   s_state ? s_state() : "?", sp, sp ? s_rd32(sp) : 0);
        }
    }
    // Mouse/touch only: the keyboard path is disabled by default (A5_KEYBOARD=1
    // re-enables it for diagnostics).  Everything the player does - menus and
    // driving - goes through the engine's real touch system.
    if (s_keyboard) keyboard_frame(frame);
    accel_frame(frame);
    pause_frame();
    mouse_frame(frame);
}
