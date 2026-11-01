/* Win32 window, WGL context, input and frame swap.
 * Shared GL state lives in gl_globals.c and gl_internal.h.
 */

#include "gl/gl_internal.h"
#include "audio.h"
#include "input_map.h"
#include <xinput.h>


void platform_crash_log(const char *msg)
{
    char dir[MAX_PATH];
    DWORD n = GetEnvironmentVariableA("LOCALAPPDATA", dir, MAX_PATH);
    if (n == 0 || n >= MAX_PATH) return;
    if (n > 0 && dir[n - 1] == '\\') dir[n - 1] = 0;
    if (strlen(dir) + 10 >= sizeof(dir)) return;
    strcat(dir, "\\Asphalt5");
    CreateDirectoryA(dir, NULL);
    char path[MAX_PATH + 32];
    snprintf(path, sizeof(path), "%s\\crash.log", dir);
    FILE *f = fopen(path, "a");
    if (!f) return;
    SYSTEMTIME st;
    GetLocalTime(&st);
    fprintf(f, "[%04d-%02d-%02d %02d:%02d:%02d] %s\n",
            st.wYear, st.wMonth, st.wDay, st.wHour, st.wMinute, st.wSecond, msg);
    fclose(f);
}

LONG WINAPI gl_crash_filter(EXCEPTION_POINTERS *ep)
{
    uintptr_t addr = (uintptr_t)ep->ExceptionRecord->ExceptionAddress;
    fprintf(stderr, "[crash] code=%08lx addr=%p last_gl=%s\n",
            (unsigned long)ep->ExceptionRecord->ExceptionCode,
            (void *)addr, g_last_gl);
    if (g_mem && addr >= (uintptr_t)g_mem && addr < (uintptr_t)g_mem + 0x100000000ull)
        fprintf(stderr, "[crash] addr is guest offset %08x\n",
                (unsigned)(addr - (uintptr_t)g_mem));
    else {
        HMODULE mod = NULL;
        char name[MAX_PATH] = "";
        if (GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
                               GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                               (LPCSTR)addr, &mod) && mod)
            GetModuleFileNameA(mod, name, sizeof(name));
        fprintf(stderr, "[crash] module=%s base=%p\n", name, (void *)mod);
    }
    if (ep->ExceptionRecord->ExceptionCode == 0xC0000005)
        fprintf(stderr, "[crash] access %s at %p (g_mem=%p)\n",
                ep->ExceptionRecord->ExceptionInformation[0] ? "write" : "read",
                (void *)(uintptr_t)ep->ExceptionRecord->ExceptionInformation[1],
                (void *)g_mem);
    if (g_cpu)
        fprintf(stderr, "[crash] guest pc=%08x lr=%08x sp=%08x r0=%08x r4=%08x r5=%08x\n",
                g_cpu->pc, g_cpu->r[14], g_cpu->r[13],
                g_cpu->r[0], g_cpu->r[4], g_cpu->r[5]);
    int pos = g_ring_pos;
    for (int i = 1; i <= 24; i++) {
        GLRec *r = &g_ring[(pos - i + GLR_MAX * 2) % GLR_MAX];
        if (!r->name) continue;
        fprintf(stderr, "[crash] -%d %s(%08x,%08x,%08x,%08x,%08x,%08x)\n", i, r->name,
                r->a[0], r->a[1], r->a[2], r->a[3], r->a[4], r->a[5]);
    }
    {
        char msg[512];
        snprintf(msg, sizeof(msg),
                 "APPCRASH code=%08lx addr=%p last_gl=%s guest_pc=%08x lr=%08x sp=%08x",
                 (unsigned long)ep->ExceptionRecord->ExceptionCode,
                 (void *)addr, g_last_gl,
                 g_cpu ? g_cpu->pc : 0, g_cpu ? g_cpu->r[14] : 0,
                 g_cpu ? g_cpu->r[13] : 0);
        platform_crash_log(msg);
    }
    fflush(stderr);
    return EXCEPTION_CONTINUE_SEARCH;
}


void *glproc(const char *name)
{
    void *p = (void *)wglGetProcAddress(name);
    if (p == NULL || p == (void *)1 || p == (void *)2 || p == (void *)3 || p == (void *)-1)
        return NULL;
    return p;
}


/* ---------------------------------------------------------------------- *
 * Game input
 *
 * Keyboard goes through the engine's own Android key path:
 *   notifyKeyPressed/Released(keycode) -> Game::InputKeyBoard -> GamePad
 * so the game's key handling, menus and remapping stay authoritative.
 *
 * The Android build's key table only covers the D-pad and a few buttons, so
 * mouse race zones inject the same GamePad bits the on-screen buttons use
 * (GamePad::KeyboardKeyPressed/Released).  Nitro is pressed through the live
 * HUD touch item because GS_Run clears host-side 0x4000 every frame.
 * ---------------------------------------------------------------------- */

enum {
    AKEY_BACK        = 4,
    AKEY_DPAD_UP     = 19,
    AKEY_DPAD_DOWN   = 20,
    AKEY_DPAD_LEFT   = 21,
    AKEY_DPAD_RIGHT  = 22,
    AKEY_DPAD_CENTER = 23
};

/* The game's "buttons" control mode enables D-pad steering.  Menus keep the
 * player's configured mode; during a race we temporarily select it.  The
 * setting moved between 3.2.4 and 3.3.7, so prefer the engine's own
 * CGameSettings accessors and keep the old address as a fallback. */
#define CONTROL_MODE_ADDR 0x24f0fcu

static uint32_t game_settings_addr(void)
{
    static uint32_t cached;
    if (cached) return cached;
    uint32_t fn = guest_symbol("_ZN10CSingletonI13CGameSettingsE11GetInstanceEv");
    if (!fn || !g_cpu) return 0;
    uint32_t old_lr = g_cpu->r[14];
    g_cpu->r[0] = 0;
    g_cpu->r[14] = 0;
    guest_call(g_cpu, fn);
    cached = g_cpu->r[0];
    g_cpu->r[14] = old_lr;
    return cached;
}

static int control_mode_get(void)
{
    uint32_t obj = game_settings_addr();
    uint32_t fn = guest_symbol("_ZN13CGameSettings14GetControlModeEv");
    if (obj && fn && g_cpu) {
        uint32_t old_lr = g_cpu->r[14];
        g_cpu->r[0] = obj;
        g_cpu->r[14] = 0;
        guest_call(g_cpu, fn);
        int v = (int)(g_cpu->r[0] & 0xffu);
        g_cpu->r[14] = old_lr;
        return v;
    }
    return (int)rd8(CONTROL_MODE_ADDR);
}

static int g_control_mode_bypass;

int platform_control_mode_bypass(void)
{
    return g_control_mode_bypass;
}

static void control_mode_set(int v)
{
    uint32_t obj = game_settings_addr();
    uint32_t fn = guest_symbol("_ZN13CGameSettings14SetControlModeEi");
    if (obj && fn && g_cpu) {
        uint32_t old_lr = g_cpu->r[14];
        g_cpu->r[0] = obj;
        g_cpu->r[1] = (uint32_t)v;
        g_cpu->r[14] = 0;
        g_control_mode_bypass = 1;
        guest_call(g_cpu, fn);
        g_control_mode_bypass = 0;
        g_cpu->r[14] = old_lr;
        return;
    }
    wr8(CONTROL_MODE_ADDR, (uint32_t)v);
}

void platform_note_click(int x, int y);
int platform_last_click(int *x, int *y);

static int g_race_now;
static int g_mouse_release_wait;
static int g_compact_wait;
static int g_saved_control_mode = -1;
static int g_control_entered;

void platform_set_logical_size(int w, int h)
{
    if (w >= 320 && h >= 200) { g_logical_w = w; g_logical_h = h; }
}
int platform_logical_width(void) { return g_logical_w; }
int platform_logical_height(void) { return g_logical_h; }

static int game_in_race(void)
{
    uint32_t gsym = guest_symbol("g_pMainGameClass");
    uint32_t vtab = guest_symbol("_ZTV6GS_Run");
    if (!gsym || !vtab) return 0;
    uint32_t game = rd32(gsym);
    if (!game) return 0;
    int32_t idx = (int32_t)rd32(game + 0x1d38);
    if (idx < 0) return 0;
    uint32_t st = rd32(game + (uint32_t)(idx + 0x74e) * 4 + 4);
    return st && rd32(st) == vtab + 8;   /* GS_Run vptr */
}

static void game_key(int code, int down)
{
    if (!g_cpu) return;
    uint32_t a = guest_symbol(down ? "notifyKeyPressed" : "notifyKeyReleased");
    if (!a) {
        static int warned;
        if (!warned) { fprintf(stderr, "[input] notifyKeyPressed missing\n"); warned = 1; }
        return;
    }
    g_cpu->r[0] = (uint32_t)code;
    g_cpu->r[14] = 0;
    guest_call(g_cpu, a);
    if (getenv("RECOMP_INPUT_LOG"))
        fprintf(stderr, "[input] key %s code=%d\n", down ? "down" : "up", code);
}

static void game_mask(uint32_t mask, int down)
{
    if (!g_cpu) return;
    uint32_t gsym = guest_symbol("g_pMainGameClass");
    uint32_t fn = guest_symbol(down ? "_ZN7GamePad18KeyboardKeyPressedEi"
                                    : "_ZN7GamePad19KeyboardKeyReleasedEi");
    if (!gsym || !fn) return;
    uint32_t game = rd32(gsym);
    if (!game) return;
    uint32_t mgr = rd32(game + 0x1bc0);
    if (!mgr) return;
    uint32_t pad = rd32(mgr + 4);
    if (!pad) return;
    g_cpu->r[0] = pad;
    g_cpu->r[1] = mask;
    g_cpu->r[14] = 0;
    guest_call(g_cpu, fn);
    if (getenv("RECOMP_INPUT_LOG"))
        fprintf(stderr, "[input] mask %s %x padkeys=%x pressed=%x\n",
                down ? "down" : "up", mask, rd32(pad + 0x10), rd32(pad + 8));
}

/* Camera button: advance the engine's in-game camera view.  The game's
 * options menu uses views 4..6; apply the change to the live camera and to
 * the saved setting, exactly like GS_IngameMenu does. */
static void cycle_camera(void)
{
    if (!g_cpu) return;
    uint32_t getinst = guest_symbol("_ZN10CSingletonI13CGameSettingsE11GetInstanceEv");
    uint32_t getview = guest_symbol("_ZN13CGameSettings19GetIngameCameraViewEv");
    uint32_t gsym = guest_symbol("g_pMainGameClass");
    uint32_t setview = guest_symbol("_ZN11CGameCamera7SetViewEi");
    if (!getinst || !getview || !gsym || !setview) return;
    g_cpu->r[0] = 0; g_cpu->r[14] = 0;
    guest_call(g_cpu, getinst);
    uint32_t obj = g_cpu->r[0];
    if (!obj) return;
    g_cpu->r[0] = obj; g_cpu->r[14] = 0;
    guest_call(g_cpu, getview);
    int view = (int)g_cpu->r[0];
    int next = view >= 6 ? 4 : view + 1;
    uint32_t game = rd32(gsym);
    uint32_t scene = game ? rd32(game + 0x1bc8) : 0;
    uint32_t cam = scene ? rd32(scene + 0x18818) : 0;
    if (cam) {
        g_cpu->r[0] = cam; g_cpu->r[1] = (uint32_t)next; g_cpu->r[14] = 0;
        guest_call(g_cpu, setview);
    }
    if (getenv("RECOMP_INPUT_LOG"))
        fprintf(stderr, "[input] camera view %d -> %d (cam=%x)\n", view, next, cam);
}

/* Keyboard actions.  Keycodes are chosen so the engine's own key table maps
 * them to the intended GamePad bit (steering needs control mode 2). */
enum { ACT_STEER_L, ACT_STEER_R, ACT_BRAKE, ACT_ACCEL, ACT_COUNT };
static const int act_code[ACT_COUNT] = {
    AKEY_DPAD_LEFT, AKEY_DPAD_RIGHT, AKEY_DPAD_DOWN, AKEY_DPAD_UP
};
#ifdef RECOMP_TARGET_337
/* 3.3.7's GetKeyMask() no longer maps the D-pad keycodes.  Feed the
 * GamePad's key mask directly instead. */
static const uint32_t act_mask[ACT_COUNT] = { 0x1u, 0x2u, 0x4u, 0x8u };
#define SEND_ACTION(act, down) game_mask(act_mask[act], down)
#else
#define SEND_ACTION(act, down) game_key(act_code[act], down)
#endif
#define ACT_SRC_KEY 1u
#define ACT_SRC_PAD 2u
#define ACT_SRC_MOUSE 4u
static unsigned act_src[ACT_COUNT];

/* Keyboard and gamepad must not cancel each other: a pad release used to
 * decrement the same refcount as a held keyboard brake/steer, which could
 * cancel a drift.  Keep one source bit per input device. */
static void action_down_src(int act, unsigned src)
{
    int opp = act == ACT_STEER_L ? ACT_STEER_R : act == ACT_STEER_R ? ACT_STEER_L : -1;
    if (opp >= 0 && act_src[opp]) {
        /* Latest steering direction wins, even when the previous one came
         * from another device (keyboard + gamepad).  Otherwise the engine
         * receives both D-pad bits and treats the steering as neutral. */
        act_src[opp] = 0;
        SEND_ACTION(opp, 0);
    }
    if (act_src[act] == 0)
        SEND_ACTION(act, 1);
    act_src[act] |= src;
}

static void action_up_src(int act, unsigned src)
{
    if (!(act_src[act] & src)) return;
    act_src[act] &= ~src;
    if (!act_src[act]) SEND_ACTION(act, 0);
}

static void action_down(int act) { action_down_src(act, ACT_SRC_KEY); }
static void action_up(int act) { action_up_src(act, ACT_SRC_KEY); }

static void action_release_all(void)
{
    for (int i = 0; i < ACT_COUNT; i++)
        if (act_src[i]) { act_src[i] = 0; SEND_ACTION(i, 0); }
}

static void release_race_inputs(void);

/* Pause/back is the Android Back key.  Game::InputKeyBoard only runs its
 * menu/back branch when the engine is not in the "buttons" control mode, so
 * dispatch it with mode 1 and restore the race mode afterwards. */
static void send_back_key(void)
{
    if (!g_cpu) return;
    /* Do not carry held steering/brake/nitro into the pause menu and back
     * into the race; the engine may not clear those bits while paused. */
    release_race_inputs();
    int prev = control_mode_get();
    control_mode_set(1);
    game_key(AKEY_BACK, 1);
    game_key(AKEY_BACK, 0);
    control_mode_set(g_control_entered ? 2 : prev);
    if (getenv("RECOMP_INPUT_LOG")) fprintf(stderr, "[input] back/pause\n");
}

/* The pause overlay is a separate game state (GS_IngameMenu) on top of
 * GS_Run.  A second Back would open its "quit to menu" confirmation, so
 * extra Back presses are turned into the menu's Resume action instead. */
static uint32_t current_game_state(void)
{
    uint32_t gsym = guest_symbol("g_pMainGameClass");
    if (!gsym) return 0;
    uint32_t game = rd32(gsym);
    if (!game) return 0;
    int32_t idx = (int32_t)rd32(game + 0x1d38);
    if (idx < 0) return 0;
    return rd32(game + (uint32_t)(idx + 0x74e) * 4 + 4);
}

static int pause_menu_active(void)
{
    uint32_t vtab = guest_symbol("_ZTV13GS_IngameMenu");
    uint32_t st = current_game_state();
    return st && vtab && rd32(st) == vtab + 8;
}

/* PC QoL: hide the phone's on-screen touch buttons.  The HUD items stay in
 * the game's array and keep their state; only their rectangles are moved
 * off-screen, so input through keyboard/mouse/GamePad is unaffected. */
static int g_touch_hidden;

static void hide_touch_buttons(void)
{
    uint32_t st, vtab, arr, n;
    int was_hidden = g_touch_hidden;
    if (!g_cpu || getenv("RECOMP_SHOW_TOUCH")) return;
    st = current_game_state();
    vtab = guest_symbol("_ZTV6GS_Run");
    if (!st || !vtab || rd32(st) != vtab + 8) return;
    arr = rd32(st + 0x10);
    n = rd32(st + 0x18);
    if (!arr || n > 32) return;
    for (uint32_t k = 0; k < n; k++) {
        uint32_t it = rd32(arr + k * 4);
        float x0, y0, x1, y1;
        int px, py;
        if (!it) continue;
        x0 = f32_from_bits(rd32(it + 0x00));
        y0 = f32_from_bits(rd32(it + 0x04));
        x1 = f32_from_bits(rd32(it + 0x08));
        y1 = f32_from_bits(rd32(it + 0x0c));
        px = (int)((x0 + x1) * 0.5f);
        py = (int)((y0 + y1) * 0.5f);
        if (px < 0 || px >= g_logical_w || py < 0 || py >= g_logical_h) continue;
        wr32(it + 0x00, 0xC61C4000u); /* -10000.0f */
        wr32(it + 0x04, 0xC61C4000u);
        wr32(it + 0x08, 0xC61C4000u);
        wr32(it + 0x0c, 0xC61C4000u);
    }
    g_touch_hidden = 1;
    if (!was_hidden && getenv("RECOMP_INPUT_LOG"))
        fprintf(stderr, "[input] touch buttons hidden\n");
}

static int pause_menu_resume(void)
{
    uint32_t st = current_game_state();
    uint32_t fn = guest_symbol("_ZN13GS_IngameMenu8DoActionEii");
    if (!st || !fn) return 0;
    /* Item 0 is Resume in every pause-menu layout.  This is the same entry
     * point a touch on that item uses; its normal Update then pops the
     * pause state and resumes the race. */
    release_race_inputs();
    g_cpu->r[0] = st;
    g_cpu->r[1] = 0;
    g_cpu->r[2] = 0;
    g_cpu->r[14] = 0;
    guest_call(g_cpu, fn);
    if (getenv("RECOMP_INPUT_LOG")) fprintf(stderr, "[input] pause resume\n");
    return 1;
}

static void pause_toggle(void)
{
    if (!g_cpu) return;
    if (pause_menu_active() && pause_menu_resume())
        return;
    send_back_key();
}

void platform_request_exit(void)
{
    if (g_cpu)
        fprintf(stderr, "[exit] Game::Exit pc=%08x lr=%08x sp=%08x\n",
                g_cpu->pc, g_cpu->r[14], g_cpu->r[13]);
    g_quit = 1;
    if (g_hwnd) PostMessageA(g_hwnd, WM_CLOSE, 0, 0);
}

/* Mouse race zones (game coordinates, 854x480). */
enum { ZONE_NONE, ZONE_STEER_L, ZONE_STEER_R, ZONE_BRAKE, ZONE_NITRO };
static int g_zone;
static int g_race_touch, g_race_tx, g_race_ty;

static const int zone_act[] = {
    -1, ACT_STEER_L, ACT_STEER_R, ACT_BRAKE, -1
};

static int zone_at(int x, int y)
{
    int w = g_logical_w, h = g_logical_h;
    /* Fractions of the original 854x480 HUD layout, so the 3.3.7 1024x600
     * canvas keeps the same button corners. */
    if (x >= w * 808 / 1000 && x <= w * 960 / 1000 &&
        y >= h * 625 / 1000 && y <= h * 917 / 1000) return ZONE_NITRO;
    if (y >= h * 829 / 1000 && (x < w * 199 / 1000 || x > w * 796 / 1000))
        return ZONE_BRAKE;
    if (x < w / 2) return ZONE_STEER_L;
    return ZONE_STEER_R;
}

/* The race HUD releases its own GamePad bits for every touch button that is
 * not being held, nitro (0x4000) included.  A host-side mask is therefore
 * cleared on the next frame; nitro has to go through the HUD's real touch
 * target.  Find the live rect of the item whose action type is 1 (the nitro
 * button) so in-game layout changes keep working. */
static int nitro_center(int *cx, int *cy)
{
    uint32_t gsym = guest_symbol("g_pMainGameClass");
    uint32_t vtab = guest_symbol("_ZTV6GS_Run");
    if (!gsym || !vtab) return 0;
    uint32_t game = rd32(gsym);
    if (!game) return 0;
    int32_t idx = (int32_t)rd32(game + 0x1d38);
    if (idx < 0) return 0;
    uint32_t st = rd32(game + (uint32_t)(idx + 0x74e) * 4 + 4);
    if (!st || rd32(st) != vtab + 8) return 0;
    uint32_t arr = rd32(st + 0x10);
    uint32_t n = rd32(st + 0x18);
    if (!arr || n > 32) return 0;
    for (uint32_t k = 0; k < n; k++) {
        uint32_t it = rd32(arr + k * 4);
        if (!it) continue;
        if (rd32(it + 0x24) != 1) continue;      /* action type 1 = nitro */
        float x0 = f32_from_bits(rd32(it + 0x00));
        float y0 = f32_from_bits(rd32(it + 0x04));
        float x1 = f32_from_bits(rd32(it + 0x08));
        float y1 = f32_from_bits(rd32(it + 0x0c));
        int px = (int)((x0 + x1) * 0.5f);
        int py = (int)((y0 + y1) * 0.5f);
        if (px < 0 || px >= g_logical_w || py < 0 || py >= g_logical_h) return 0;
        *cx = px; *cy = py;
        return 1;
    }
    return 0;
}

static int g_nitro_touch, g_nitro_x, g_nitro_y;
static int g_nitro_ticks;

static void nitro_down(void)
{
    if (g_nitro_touch || !g_cpu) return;
    if (g_touch_hidden) { g_nitro_ticks = 1; return; }
    int x, y;
    if (!nitro_center(&x, &y)) return;    /* no live HUD: nothing to press */
    touch("notifyTouchPress", x, y, 1);   /* id 1, separate from the mouse */
    g_nitro_touch = 1;
    g_nitro_ticks = 1;
    g_nitro_x = x; g_nitro_y = y;
    if (getenv("RECOMP_INPUT_LOG"))
        fprintf(stderr, "[input] nitro down %d,%d\n", x, y);
}

static void nitro_up(void)
{
    int was_down = g_nitro_touch;
    if (was_down) {
        touch("notifyTouchReleased", g_nitro_x, g_nitro_y, 1);
        g_nitro_touch = 0;
        /* Do not add another update here: if the press was already consumed
         * while held, the release must not advance a second stage. */
    }
    if (getenv("RECOMP_INPUT_LOG"))
        fprintf(stderr, "[input] nitro up %d,%d\n", g_nitro_x, g_nitro_y);
}

int host_game_in_race(void)
{
    return game_in_race();
}

int host_pause_context(void)
{
    return game_in_race() || pause_menu_active();
}

void host_input_action(int act, int down, unsigned src)
{
    switch (act) {
    case HACT_STEER_L:
        if (down) action_down_src(ACT_STEER_L, src);
        else action_up_src(ACT_STEER_L, src);
        break;
    case HACT_STEER_R:
        if (down) action_down_src(ACT_STEER_R, src);
        else action_up_src(ACT_STEER_R, src);
        break;
    case HACT_BRAKE:
        if (down) action_down_src(ACT_BRAKE, src);
        else action_up_src(ACT_BRAKE, src);
        break;
    case HACT_ACCEL:
        if (down) action_down_src(ACT_ACCEL, src);
        else action_up_src(ACT_ACCEL, src);
        break;
    case HACT_NITRO:
        if (down) nitro_down();
        else nitro_up();
        break;
    case HACT_CAMERA:
        if (down && game_in_race()) cycle_camera();
        break;
    case HACT_PAUSE:
        if (down) pause_toggle();
        break;
    default:
        break;
    }
}

int platform_buttons_mode(void)
{
    return g_control_entered;   /* the forced in-race buttons layout */
}

static uint32_t player_car_ptr(void)
{
    uint32_t gsym = guest_symbol("g_pMainGameClass");
    if (!gsym) return 0;
    uint32_t game = rd32(gsym);
    uint32_t scene = game ? rd32(game + 0x1bc8) : 0;
    if (!scene) return 0;
    uint32_t pa = rd32(scene + 0x18c50);
    uint32_t pi = pa ? rd32(pa + 8) : 0xffffffffu;
    if (!pa || (int32_t)pi < 0) return 0;
    return rd32(scene + (pi + 0x631e) * 4 + 4);
}

int platform_is_player_car(uint32_t car)
{
    return car && car == player_car_ptr();
}

/* True only for the player's CCar while the nitro button is down, or for the
 * first car update after release.  CCar::UpdateNitro tests this mask bit. */
int platform_nitro_held_for_car(uint32_t car)
{
    if (!car || !game_in_race()) return 0;
    if (!platform_is_player_car(car)) return 0;
    if (g_nitro_ticks > 0) {
        /* Consume exactly one car update per physical press.  Holding the
         * button does not keep advancing stages; spam press/release. */
        g_nitro_ticks = 0;
        return 1;
    }
    return 0;
}

/* ---- optional XInput gamepad ----------------------------------------- *
 * XInput is loaded dynamically so the portable/installer build has no extra
 * import dependency.  The mapping goes through the same engine key/GamePad
 * path as the keyboard; menus stay mouse/touch driven.
 * ---------------------------------------------------------------------- */
typedef DWORD (WINAPI *XInputGetStateFn)(DWORD, XINPUT_STATE *);
static XInputGetStateFn g_xinput_get_state;
static int g_xinput_loaded;
static int g_pad_was_connected;

static void gamepad_load(void)
{
    if (g_xinput_loaded) return;
    g_xinput_loaded = 1;
    if (getenv("RECOMP_GAMEPAD_DISABLE")) return;
    static const char *dlls[] = { "xinput1_4.dll", "xinput1_3.dll", "xinput9_1_0.dll" };
    for (int i = 0; i < 3; i++) {
        HMODULE h = LoadLibraryA(dlls[i]);
        if (!h) continue;
        g_xinput_get_state = (XInputGetStateFn)GetProcAddress(h, "XInputGetState");
        if (g_xinput_get_state) break;
        FreeLibrary(h);
    }
}

static void pad_action(int act, int on, int *prev)
{
    if (on == *prev) return;
    *prev = on;
    if (on) action_down_src(act, ACT_SRC_PAD);
    else action_up_src(act, ACT_SRC_PAD);
}

static void gamepad_poll(void)
{
    gamepad_load();
    if (!g_xinput_get_state) return;

    XINPUT_STATE st;
    int connected = (g_xinput_get_state(0, &st) == ERROR_SUCCESS);
    static int left, right, brake, accel, nitro, camera, back;
    if (!connected || !game_in_race()) {
        if (connected && pause_menu_active()) {
            /* The pause overlay is outside GS_Run, but Start/Back should
             * still resume it.  Edge-detect so the press that opened the
             * pause menu does not immediately close it. */
            int bk = (st.Gamepad.wButtons &
                      (XINPUT_GAMEPAD_START | XINPUT_GAMEPAD_BACK)) != 0;
            if (bk && !back) pause_toggle();
            back = bk;
        } else if (g_pad_was_connected) {
            pad_action(ACT_STEER_L, 0, &left);
            pad_action(ACT_STEER_R, 0, &right);
            pad_action(ACT_BRAKE, 0, &brake);
            pad_action(ACT_ACCEL, 0, &accel);
            if (nitro) { nitro_up(); nitro = 0; }
            camera = back = 0;
        }
        g_pad_was_connected = 0;
        return;
    }
    if (!g_pad_was_connected) {
        g_pad_was_connected = 1;
        if (getenv("RECOMP_INPUT_LOG")) fprintf(stderr, "[input] gamepad connected\n");
    }

    const XINPUT_GAMEPAD *g = &st.Gamepad;
    int l = (g->wButtons & XINPUT_GAMEPAD_DPAD_LEFT) ||
            g->sThumbLX < -XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE;
    int r = (g->wButtons & XINPUT_GAMEPAD_DPAD_RIGHT) ||
            g->sThumbLX > XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE;
    int b = (g->wButtons & XINPUT_GAMEPAD_DPAD_DOWN) ||
            (g->wButtons & XINPUT_GAMEPAD_B) || g->bLeftTrigger > 64;
    int a = (g->wButtons & XINPUT_GAMEPAD_DPAD_UP) || g->bRightTrigger > 64;
    pad_action(ACT_STEER_L, l, &left);
    pad_action(ACT_STEER_R, r, &right);
    pad_action(ACT_BRAKE, b, &brake);
    pad_action(ACT_ACCEL, a, &accel);

    int n = (g->wButtons & XINPUT_GAMEPAD_A) != 0;
    if (n != nitro) {
        nitro = n;
        if (n) nitro_down();
        else nitro_up();
    }
    int cam = (g->wButtons & XINPUT_GAMEPAD_Y) != 0;
    if (cam && !camera) cycle_camera();
    camera = cam;
    int bk = (g->wButtons & (XINPUT_GAMEPAD_START | XINPUT_GAMEPAD_BACK)) != 0;
    if (bk && !back) pause_toggle();
    back = bk;
}

static void race_touch_press(int x, int y)
{
    if (g_race_touch) return;
    touch("notifyTouchPress", x, y, 0);
    g_race_touch = 1; g_race_tx = x; g_race_ty = y;
}

static void race_touch_move(int x, int y)
{
    if (!g_race_touch) return;
    touch("notifyTouchMoved", x, y, 0);
    g_race_tx = x; g_race_ty = y;
}

static void race_touch_release(void)
{
    if (!g_race_touch) return;
    touch("notifyTouchReleased", g_race_tx, g_race_ty, 0);
    g_race_touch = 0;
}

static void zone_set(int z)
{
    if (z == g_zone) return;
    if (g_zone == ZONE_NITRO) nitro_up();
    else if (g_zone) action_up_src(zone_act[g_zone], ACT_SRC_MOUSE);
    if (z == ZONE_NITRO) race_touch_release();
    g_zone = z;
    if (z == ZONE_NITRO) nitro_down();
    else if (z) action_down_src(zone_act[z], ACT_SRC_MOUSE);
}

/* The engine's key state can be rebuilt by HUD/auto-drive code between
 * physics ticks.  Re-assert the bits this host owns each rendered frame, so
 * steering and brake remain held together in chords (notably drift). */
static uint32_t g_host_pad_mask;
static void host_pad_clear(void)
{
    if (!g_host_pad_mask) return;
    uint32_t gsym = guest_symbol("g_pMainGameClass");
    uint32_t game = gsym ? rd32(gsym) : 0;
    uint32_t mgr = game ? rd32(game + 0x1bc0) : 0;
    uint32_t pad = mgr ? rd32(mgr + 4) : 0;
    if (pad) wr32(pad + 0xc, rd32(pad + 0xc) & ~g_host_pad_mask);
    g_host_pad_mask = 0;
}

static void host_pad_sync(void)
{
    uint32_t mask = 0;
    if (act_src[ACT_STEER_L]) mask |= 0x1;
    if (act_src[ACT_STEER_R]) mask |= 0x2;
    if (act_src[ACT_BRAKE])   mask |= 0x4;
    uint32_t gsym = guest_symbol("g_pMainGameClass");
    uint32_t game = gsym ? rd32(gsym) : 0;
    uint32_t mgr = game ? rd32(game + 0x1bc0) : 0;
    uint32_t pad = mgr ? rd32(mgr + 4) : 0;
    if (!pad) return;
    uint32_t cur = rd32(pad + 0xc);
    uint32_t want = (cur & ~g_host_pad_mask) | mask;
    if (want != cur) wr32(pad + 0xc, want);
    g_host_pad_mask = mask;
}

static void release_race_inputs(void)
{
    action_release_all();
    host_pad_clear();
    race_touch_release();
    zone_set(ZONE_NONE);
    nitro_up();
    g_nitro_ticks = 0;   /* do not fire a pending tap after pause/resume */
}

LRESULT CALLBACK wndproc(HWND h, UINT msg, WPARAM wp, LPARAM lp)
{
    if (msg == WM_LBUTTONDOWN && !input_map_overlay_open())
        platform_note_click((int)(short)LOWORD(lp), (int)(short)HIWORD(lp));
    if (input_map_handle_message(h, msg, wp, lp))
        return 0;
    if ((msg == WM_KEYDOWN || msg == WM_SYSKEYDOWN) && wp == VK_F1 &&
        !(lp & (1 << 30))) {
        input_map_toggle();
        return 0;
    }
    switch (msg) {
    case WM_CLOSE:
        DestroyWindow(h);
        return 0;
    case WM_DESTROY:
        g_quit = 1;
        PostQuitMessage(0);
        return 0;
    case WM_SIZE:
        g_client_w = LOWORD(lp); g_client_h = HIWORD(lp);
        if (g_client_w < 1) g_client_w = 1;
        if (g_client_h < 1) g_client_h = 1;
        return 0;
    case WM_KEYDOWN:
    case WM_SYSKEYDOWN: {
        int repeat = (lp & (1 << 30)) != 0;
        if (repeat) return 0;
        if (wp == VK_F4 && (GetKeyState(VK_MENU) & 0x8000))
            return DefWindowProcA(h, msg, wp, lp);
        int ctrl = (GetKeyState(VK_CONTROL) & 0x8000) != 0;
        if (ctrl && wp == 'Q') { g_quit = 1; DestroyWindow(h); return 0; }
        /* Race bindings are polled by the input mapper; the menu is mouse
         * driven, so there are no fixed key actions left here. */
        return 0;
    }
    case WM_KEYUP:
    case WM_SYSKEYUP:
        return 0;
    case WM_KILLFOCUS:
        action_release_all();
        race_touch_release();
        if (g_zone) zone_set(ZONE_NONE);
        nitro_up();
        return 0;
    default:
        return DefWindowProcA(h, msg, wp, lp);
    }
}


int platform_init(int width, int height)
{
    /* Without this, Windows virtualises a 1920x1080 request down to the
     * desktop's logical size (e.g. 1536x864 at 125% scaling). */
    SetProcessDPIAware();

    WNDCLASSA wc;
    memset(&wc, 0, sizeof(wc));
    wc.style = CS_OWNDC | CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc = wndproc;
    wc.hInstance = GetModuleHandleA(NULL);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.lpszClassName = "Asphalt5Recomp";
    if (!RegisterClassA(&wc) && GetLastError() != ERROR_CLASS_ALREADY_EXISTS) {
        fprintf(stderr, "[win] RegisterClass failed %lu\n", (unsigned long)GetLastError());
        return -1;
    }
    /* A bordered 1920x1080 client does not fit on a 1080p desktop; use a
     * borderless top-left window when the requested client fills the screen. */
    int sw = GetSystemMetrics(SM_CXSCREEN), sh = GetSystemMetrics(SM_CYSCREEN);
    int borderless = (width >= sw || height >= sh);
    DWORD style = borderless ? WS_POPUP : WS_OVERLAPPEDWINDOW;
    int px = borderless ? 0 : CW_USEDEFAULT;
    int py = borderless ? 0 : CW_USEDEFAULT;
    RECT r = { 0, 0, width, height };
    AdjustWindowRect(&r, style, FALSE);
    g_win_w = r.right - r.left; g_win_h = r.bottom - r.top;
    if (borderless) { g_win_w = width; g_win_h = height; }
    g_hwnd = CreateWindowExA(0, "Asphalt5Recomp", "Asphalt 5",
                             style, px, py,
                             g_win_w, g_win_h, NULL, NULL, wc.hInstance, NULL);
    if (borderless)
        fprintf(stderr, "[win] borderless %dx%d (desktop %dx%d)\n",
                width, height, sw, sh);
    if (!g_hwnd) { fprintf(stderr, "[win] CreateWindow failed\n"); return -1; }
    SetUnhandledExceptionFilter(gl_crash_filter);
    g_hdc = GetDC(g_hwnd);

    PIXELFORMATDESCRIPTOR pfd;
    memset(&pfd, 0, sizeof(pfd));
    pfd.nSize = sizeof(pfd); pfd.nVersion = 1;
    pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;
    pfd.cColorBits = 32; pfd.cDepthBits = 24; pfd.cStencilBits = 8;
    pfd.iLayerType = PFD_MAIN_PLANE;
    int pf = ChoosePixelFormat(g_hdc, &pfd);
    if (!pf) { fprintf(stderr, "[win] ChoosePixelFormat failed\n"); return -1; }
    if (!SetPixelFormat(g_hdc, pf, &pfd)) { fprintf(stderr, "[win] SetPixelFormat failed\n"); return -1; }
    g_hrc = wglCreateContext(g_hdc);
    if (!g_hrc || !wglMakeCurrent(g_hdc, g_hrc)) { fprintf(stderr, "[win] WGL context failed\n"); return -1; }

    pglActiveTexture = (PFNGLACTIVETEXTURE)glproc("glActiveTexture");
    pglClientActiveTexture = (PFNGLCLIENTACTIVETEXTURE)glproc("glClientActiveTexture");
    pglBindBuffer = (PFNGLBINDBUFFER)glproc("glBindBuffer");
    pglCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2D)glproc("glCompressedTexImage2D");
    pwglSwapIntervalEXT = (PFNWGLSWAPINTERVALEXT)glproc("wglSwapIntervalEXT");
    if (pwglSwapIntervalEXT && !getenv("RECOMP_NO_VSYNC")) pwglSwapIntervalEXT(1);

    if (getenv("RECOMP_OFFSCREEN")) {
        SetWindowPos(g_hwnd, NULL, -3000, -3000, g_win_w, g_win_h,
                     SWP_NOZORDER | SWP_NOACTIVATE | SWP_NOSIZE);
        ShowWindow(g_hwnd, SW_SHOWNOACTIVATE);
    } else if (getenv("RECOMP_MINIMIZE")) {
        ShowWindow(g_hwnd, SW_SHOWMINNOACTIVE);
    } else {
        ShowWindow(g_hwnd, SW_SHOW);
        UpdateWindow(g_hwnd);
    }
    input_map_init(g_hwnd);
    fprintf(stderr, "[win] %dx%d client, GL %s\n", width, height,
            (const char *)glGetString(GL_VERSION));
    return 0;
}


/* ---- vox audio pump ----------------------------------------------------
 * The Android build's vox mixer normally writes into a Java AudioTrack.  We
 * bypass that driver and pull the mixed 44.1 kHz stereo PCM from the engine's
 * own DriverCallbackInterface::_FillBuffer(driver, out, frames), then feed it
 * to the WinMM sink in audio.c.  Runs on the game thread between frames, so
 * the voice state is not touched concurrently.
 * ---------------------------------------------------------------------- */
static int g_vox_audio_state;
static uint32_t g_vox_buf;
static uint32_t g_vox_sym;
static uint32_t g_vox_internal;

static void vox_audio_pump(void)
{
    if (!g_cpu) return;
    if (g_vox_audio_state == 0) {
        if (a5audio_init() != 0) { g_vox_audio_state = -1; return; }
        g_vox_audio_state = 1;
        g_vox_buf = guest_alloc(0x10000);
        if (!g_vox_buf) { g_vox_audio_state = -1; return; }
        { const char *rp = getenv("A5_SND_RECORD"); if (rp && *rp) a5audio_record(rp); }
        if (getenv("A5_SND_DEBUG")) fprintf(stderr, "[snd] vox pump ready\n");
    }
    if (g_vox_audio_state < 0) return;
    if (!g_vox_sym) g_vox_sym = guest_symbol("_ZN3vox9VoxEngine11s_voxEngineE");
    if (!g_vox_sym) return;
    static int init_tried;
    uint32_t vox = rd32(g_vox_sym);
    if (!vox) return;
    /* The driver belongs to the internal engine object.  The public
     * VoxEngine wrapper is a different, much smaller object, so resolve the
     * internal singleton once and keep it. */
    if (!g_vox_internal) {
        uint32_t oldsp = g_cpu->r[13];
        g_cpu->r[0] = 0; g_cpu->r[14] = 0;
        guest_call(g_cpu, 0x001e8380u);       /* VoxEngineInternal::GetVoxEngineInternal */
        g_vox_internal = g_cpu->r[0];
        g_cpu->r[13] = oldsp;
        if (!g_vox_internal) return;
    }
    uint32_t drv = rd32(g_vox_internal + 0x50c);
    if (!drv && !init_tried) {
        /* The Android build expects the Java AudioTrack to have created the
         * driver; we only need its mixer. */
        uint32_t oldsp = g_cpu->r[13];
        g_cpu->r[0] = g_vox_internal; g_cpu->r[14] = 0;
        guest_call(g_cpu, 0x001e387cu);       /* VoxEngineInternal::Initialize */
        g_cpu->r[13] = oldsp;
        drv = rd32(g_vox_internal + 0x50c);
        if (drv) {
            /* no Java AudioTrack: mark the callback driver as running so
             * CreateDriverSource accepts the engine's voices */
            wr32(drv + 8, 1);
            wr32(drv + 0x54, 1);
        }
        if (getenv("A5_SND_DEBUG"))
            fprintf(stderr, "[snd] vox init: internal=%08x drv=%08x\n",
                    g_vox_internal, drv);
        init_tried = 1;
    }
    if (!drv) return;
    /* No Java AudioTrack ever calls Init()/Start(), so mark the driver
     * running ourselves.  CreateDriverSource() refuses voices while +8 is 0,
     * and the mixer is silent until the driver is in the run state (+0x54). */
    if (rd8(drv + 8) == 0) wr8(drv + 8, 1);
    if (rd32(drv + 0x54) == 0) wr32(drv + 0x54, 1);

    /* The Android driver's callback thread also drives the vox engine's
     * per-frame update.  Without it, emitters stay in the created state and
     * their driver sources never start.  A negative dt asks vox to use its
     * own default tick (softfp: the float lives in r1, not s0). */
    {
        uint32_t oldsp = g_cpu->r[13];
        g_cpu->r[0] = g_vox_internal;
        g_cpu->r[1] = 0xbf800000u;             /* -1.0f */
        g_cpu->r[14] = 0;
        guest_call(g_cpu, 0x001ea904u);        /* VoxEngineInternal::UpdateEmitters */
        g_cpu->r[0] = g_vox_internal;
        g_cpu->r[14] = 0;
        guest_call(g_cpu, 0x001e4d98u);        /* VoxEngineInternal::UpdateSources */
        g_cpu->r[13] = oldsp;
    }
    if (a5audio_movie_queued() > 8192) return;
    const int frames = 2048;
    g_cpu->r[0] = drv;
    g_cpu->r[1] = g_vox_buf;
    g_cpu->r[2] = (uint32_t)frames;
    g_cpu->r[14] = 0;
    uint32_t oldsp = g_cpu->r[13];
    guest_call(g_cpu, 0x001dda70u);
    g_cpu->r[13] = oldsp;
    a5audio_movie_feed((const short *)G(g_vox_buf), frames);
    if (getenv("A5_SND_DEBUG")) {
        static int n, last_src = -1, last_peak;
        const short *pcm = (const short *)G(g_vox_buf);
        int peak = 0;
        for (int i = 0; i < frames * 2; i++) {
            int v = pcm[i] < 0 ? -pcm[i] : pcm[i];
            if (v > peak) peak = v;
        }
        int nsrc = (int)rd32(drv + 0xc);
        if (n < 3 || nsrc != last_src || (peak > 0 && last_peak == 0) ||
            (n % 600) == 0) {
            fprintf(stderr, "[snd] vox=%08x drv=%08x run=%x st=%x nsrc=%x "
                            "head=%08x peak=%d\n", vox, drv,
                    rd32(drv + 8), rd32(drv + 0x54), rd32(drv + 0xc),
                    rd32(drv + 0x10), peak);
            uint32_t sent = drv + 0x10, node = rd32(sent);
            for (int k = 0; k < 4 && node && node != sent; k++) {
                uint32_t src = rd32(node + 8);
                fprintf(stderr, "       src[%d]=%08x st=%x mode=%x fmt=%x "
                                "pos=%x end=%x delta=%x cur=%x buf=%x nbuf=%x "
                                "g0=%x g1=%x g2=%x\n", k, src,
                        rd32(src + 0x50), rd32(src + 0x10), rd32(src + 0x18),
                        rd32(src + 0x34), rd32(src + 0x38), rd32(src + 0x3c),
                        rd32(src + 0x4c), rd32(src + 0x60), rd32(src + 0x64),
                        rd32(src + 0x24), rd32(src + 0x28), rd32(src + 0x2c));
                node = rd32(node);
            }
            n++;
        }
        last_src = nsrc;
        last_peak = peak;
    }
}

void platform_set_cpu(CPU *cpu) { g_cpu = cpu; }


int platform_should_close(void) { return g_quit; }


/* While a race scene is loading, the engine briefly applies the road/grid
 * orientation to the player car before the start script runs.  The car is
 * already visible at the start line, so that intermediate value looks like
 * the car turning a few degrees.  Hold the orientation while the race-start
 * state is still idle and the car is stationary; the real grid orientation
 * is applied once the start state advances. */
static uint32_t g_start_car;
static int32_t g_start_rot[3];
static int32_t g_start_pos[3];

static int32_t angle_delta(int32_t a, int32_t b)
{
    int32_t d = a - b;
    if (d > 32768) d -= 65536;
    if (d < -32768) d += 65536;
    return d;
}

static void hold_start_orientation(void)
{
    uint32_t gsym = guest_symbol("g_pMainGameClass");
    uint32_t game = gsym ? rd32(gsym) : 0;
    uint32_t scene = game ? rd32(game + 0x1bc8) : 0;
    int32_t idx = game ? (int32_t)rd32(game + 0x1bd0) : -1;
    if (!scene || idx < 1 || idx > 12 || rd32(scene + 0x64334) != 0) {
        g_start_car = 0;
        return;
    }
    uint32_t car = player_car_ptr();
    if (!car || (int32_t)rd32(car + 0x364) != 0) {
        g_start_car = 0;
        return;
    }
    int32_t rot[3] = {
        (int32_t)rd32(car + 0x84),
        (int32_t)rd32(car + 0x88),
        (int32_t)rd32(car + 0x8c)
    };
    int32_t pos[3] = {
        (int32_t)rd32(car + 0x404),
        (int32_t)rd32(car + 0x408),
        (int32_t)rd32(car + 0x40c)
    };
    if (g_start_car != car) {
        g_start_car = car;
        memcpy(g_start_rot, rot, sizeof(rot));
        memcpy(g_start_pos, pos, sizeof(pos));
        return;
    }
    int same_pos = memcmp(g_start_pos, pos, sizeof(pos)) == 0;
    int32_t dy = angle_delta(rot[1], g_start_rot[1]);
    if (same_pos && dy != 0 && dy > -4096 && dy < 4096) {
        wr32(car + 0x84, (uint32_t)g_start_rot[0]);
        wr32(car + 0x88, (uint32_t)g_start_rot[1]);
        wr32(car + 0x8c, (uint32_t)g_start_rot[2]);
        if (getenv("RECOMP_START_LOG"))
            fprintf(stderr, "[start] hold rot=(%d,%d,%d) -> (%d,%d,%d)\n",
                    rot[0], rot[1], rot[2],
                    g_start_rot[0], g_start_rot[1], g_start_rot[2]);
    } else {
        memcpy(g_start_rot, rot, sizeof(rot));
        memcpy(g_start_pos, pos, sizeof(pos));
    }
}

static int host_window_active(void)
{
    HWND fg = GetForegroundWindow();
    if (!g_hwnd || !fg) return 0;
    if (fg == g_hwnd) return 1;
    return GetAncestor(fg, GA_ROOT) == GetAncestor(g_hwnd, GA_ROOT);
}

void platform_pump(void)
{
    MSG msg;
    while (PeekMessageA(&msg, NULL, 0, 0, PM_REMOVE)) {
        if (msg.message == WM_QUIT) g_quit = 1;
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
    if (!g_cpu) return;

    /* Never poll keyboard, gamepad, wheel or mouse input while another
     * application owns the foreground window.  Polling GetAsyncKeyState /
     * XInput globally would otherwise keep triggering menu clicks and
     * sounds in the background. */
    int active = host_window_active();
    input_map_set_active(active);
    if (!active) {
        action_release_all();
        race_touch_release();
        if (g_mouse_down) {
            touch("notifyTouchReleased", g_last_mx, g_last_my, 0);
            g_mouse_down = 0;
        }
        if (g_zone) zone_set(ZONE_NONE);
        nitro_up();
        g_mouse_release_wait = (GetAsyncKeyState(VK_LBUTTON) & 0x8000) != 0;
        host_pad_sync();
        vox_audio_pump();
        return;
    }

    input_map_pump();
    if (input_map_overlay_open())
        return;                 /* the mapper owns mouse and keyboard */
    vox_audio_pump();

    /* Race input: the game's own "buttons" control mode, restored outside a
     * race so menu key handling (Back/Menu) keeps working. */
    int race = game_in_race();
    if (race) {
        if (!g_control_entered) {
            g_saved_control_mode = control_mode_get();
            control_mode_set(2);
            g_control_entered = 1;
            jni_free_menu_deferred();
        }
    } else {
        hold_start_orientation();
        if (g_control_entered) {
            if (g_saved_control_mode >= 0)
                control_mode_set(g_saved_control_mode);
            g_control_entered = 0;
            release_race_inputs();
        }
        /* Mode 1 keeps the stock Auto Accelerate row available.  The race
         * path above still switches to the mode-2 button layout. */
        g_saved_control_mode = 1;
        {
            static unsigned force_tick;
            if ((force_tick++ % 30) == 0) {
                if (control_mode_get() != 1)
                    control_mode_set(1);
            }
        }
    }
    if (race != g_race_now) {
        g_race_now = race;
        if (!race) g_compact_wait = 120;
        /* Drop anything held through the menu transition so the car starts
         * centred; a menu-held steer/brake must not pull it off-line. */
        release_race_inputs();
        if (getenv("RECOMP_INPUT_LOG"))
            fprintf(stderr, "[input] %s\n", race ? "race entered" : "race left");
    }
    if (race)
        hide_touch_buttons();
    if (!race && g_compact_wait > 0 && --g_compact_wait == 0) {
        jni_free_race_deferred();
        if (!getenv("A5_NO_HEAP_SWEEP"))
            guest_heap_compact();
    }

    POINT p;
    int have = 0, gx = 0, gy = 0;
    if (GetCursorPos(&p) && ScreenToClient(g_hwnd, &p)) {
        gx = (int)((int64_t)p.x * g_logical_w / (g_client_w ? g_client_w : 1));
        gy = (int)((int64_t)p.y * g_logical_h / (g_client_h ? g_client_h : 1));
        have = 1;
    }

    int down = (GetAsyncKeyState(VK_LBUTTON) & 0x8000) != 0;

    if (g_mouse_release_wait) {
        g_mouse_down = 0;
        if (!down) g_mouse_release_wait = 0;
        if (race) host_pad_sync();
        return;
    }

    if (race) {
        int inside = have && gx >= 0 && gx < g_logical_w && gy >= 0 && gy < g_logical_h;
        int pause_top = g_logical_h * 20 / 100;
        int pause_left = g_logical_w * 12 / 100;
        int pause_right = g_logical_w * 75 / 100;
        if (down && !g_mouse_down && have && inside) {
            int pause_hit;
            g_mouse_down = 1;
            g_last_mx = gx; g_last_my = gy;
#ifdef RECOMP_TARGET_337
            /* 3.3.7 puts the pause button just right of the POS/LAP block,
             * still in the left half of the screen. */
            pause_hit = gy < g_logical_h * 20 / 100 &&
                        gx > g_logical_w * 12 / 100 &&
                        gx < g_logical_w * 32 / 100;
#else
            pause_hit = gy < pause_top &&
                        (gx < pause_left || gx > pause_right);
#endif
            if (pause_hit) {
                pause_toggle();          /* top-left alias / real top-right */
            } else {
                int z = zone_at(gx, gy);
                /* Also forward the real touch so the race intro and the
                 * controls tutorial can be dismissed with a click. */
                if (z != ZONE_NITRO) race_touch_press(gx, gy);
                zone_set(z);
                if (getenv("RECOMP_INPUT_LOG"))
                    fprintf(stderr, "[input] mouse zone %d at %d,%d\n",
                            g_zone, gx, gy);
            }
        } else if (down && g_mouse_down && inside) {
            if (gx != g_last_mx || gy != g_last_my) {
                g_last_mx = gx; g_last_my = gy;
                if (g_zone != ZONE_NITRO) race_touch_move(gx, gy);
                if (g_zone) zone_set(zone_at(gx, gy));
            }
        } else if (!down && g_mouse_down) {
            g_mouse_down = 0;
            race_touch_release();
            zone_set(ZONE_NONE);
        } else if (g_mouse_down && !inside) {
            race_touch_release();
            zone_set(ZONE_NONE);      /* dragged outside: release the button */
        }
        host_pad_sync();
        return;
    }

    /* Menus and HUD: ordinary touch. */
    if (g_mouse_down && have && (gx != g_last_mx || gy != g_last_my)) {
        touch("notifyTouchMoved", gx, gy, 0);
        g_last_mx = gx; g_last_my = gy;
    }
    if (down) {
        if (!g_mouse_down && have) {
            if (input_map_try_stock_click(gx, gy))
                return;
            g_last_mx = gx; g_last_my = gy;
            g_mouse_down = 1;
            touch("notifyTouchPress", gx, gy, 0);
        }
    } else if (g_mouse_down) {
        g_mouse_down = 0;
        touch("notifyTouchReleased", g_last_mx, g_last_my, 0);
    }
}


void platform_swap(void)
{
    g_draw_serial = 0;
    g_swap_count++;
    input_map_draw();
    capture_frame();
    scene_dump();
    if (g_hdc && g_hrc) SwapBuffers(g_hdc);
    if (gl_stats_env() && (g_swap_count % 120) == 0)
        fprintf(stderr,
                "[gl] swap=%d draws=%llu skinned=%llu oes(cur=%llu idx=%llu w=%llu) "
                "tex=%llu notex=%llu sample=%llu nrm=%llu col=%llu tc=%llu "
                "fixed=%llu vptype=%x nrmtype=%x coltype=%x tctype=%x tcsize=%d\n",
                g_swap_count, (unsigned long long)g_draw_calls,
                (unsigned long long)g_skinned_draws, (unsigned long long)g_oes_current,
                (unsigned long long)g_oes_index, (unsigned long long)g_oes_weight,
                (unsigned long long)g_draw_tex, (unsigned long long)g_draw_notex,
                (unsigned long long)g_draw_sampled, (unsigned long long)g_draw_nrm,
                (unsigned long long)g_draw_col, (unsigned long long)g_draw_tc,
                (unsigned long long)g_fixed_ptrs, (unsigned)g_vp_type, (unsigned)g_nrm_type,
                (unsigned)g_col_type, (unsigned)g_tc_type, (int)g_tc_size);
}


/* Movie playback owns the window for its duration.  Pump messages and swap
 * the GL back buffer, but consume mouse/keyboard events so a skip does not
 * also become a delayed touch or key in the game.  Returns bit 0 for close,
 * bit 1 for a click on our window and bit 2 for Esc. */
int platform_movie_pump(void)
{
    MSG msg;
    int clicked = 0, escape = 0;
    while (PeekMessageA(&msg, NULL, 0, 0, PM_REMOVE)) {
        if (msg.message == WM_QUIT) { g_quit = 1; continue; }
        if (msg.message == WM_LBUTTONDOWN || msg.message == WM_RBUTTONDOWN ||
            msg.message == WM_LBUTTONDBLCLK || msg.message == WM_RBUTTONDBLCLK) {
            clicked = 1;
            if (g_hwnd) SetFocus(g_hwnd);
            continue;
        }
        if (msg.message == WM_LBUTTONUP || msg.message == WM_RBUTTONUP ||
            msg.message == WM_MOUSEMOVE || msg.message == WM_MOUSEWHEEL)
            continue;
        if (msg.message == WM_KEYDOWN || msg.message == WM_SYSKEYDOWN) {
            if (msg.wParam == VK_ESCAPE) escape = 1;
            continue;
        }
        if (msg.message == WM_KEYUP || msg.message == WM_SYSKEYUP ||
            msg.message == WM_CHAR || msg.message == WM_SYSCHAR)
            continue;
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
    if (g_hdc && g_hrc) SwapBuffers(g_hdc);
    return (g_quit ? 1 : 0) | (clicked ? 2 : 0) | (escape ? 4 : 0);
}


int platform_client_width(void) { return g_client_w; }


int platform_client_height(void) { return g_client_h; }


static int g_last_touch_x, g_last_touch_y, g_last_touch_valid;

void platform_cancel_mouse(void)
{
    g_mouse_down = 0;
    g_mouse_release_wait = 1;
}

void platform_note_touch(int x, int y)
{
    g_last_touch_x = x;
    g_last_touch_y = y;
    g_last_touch_valid = 1;
}

static int g_last_click_x, g_last_click_y, g_last_click_valid;
static DWORD g_last_click_tick;

void platform_note_click(int x, int y)
{
    g_last_click_x = x;
    g_last_click_y = y;
    g_last_click_valid = 1;
    g_last_click_tick = GetTickCount();
}

int platform_last_click(int *x, int *y)
{
    if (!g_last_click_valid) return 0;
    if (GetTickCount() - g_last_click_tick > 500) return 0;
    if (x) *x = g_last_click_x;
    if (y) *y = g_last_click_y;
    return 1;
}

int platform_last_touch(int *x, int *y)
{
    if (!g_last_touch_valid) return 0;
    if (x) *x = g_last_touch_x;
    if (y) *y = g_last_touch_y;
    return 1;
}

void touch(const char *sym, int x, int y, int id)
{
    if (!g_cpu) return;
    platform_note_touch(x, y);
    uint32_t a = guest_symbol(sym);
    if (!a) return;
    g_cpu->r[0] = (uint32_t)x; g_cpu->r[1] = (uint32_t)y; g_cpu->r[2] = (uint32_t)id;
    g_cpu->r[14] = 0;
    guest_call(g_cpu, a);
}
