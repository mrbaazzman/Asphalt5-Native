/* Host-side PC input mapper and in-game controls page.
 *
 * The engine still owns the OPTIONS frame and the right-side tabs.  When its
 * controls page renders, this module draws a replacement content panel with
 * one row per race action.  Bindings are captured live from the keyboard,
 * XInput pads and DirectInput devices, stored in
 * %LOCALAPPDATA%\Asphalt5\input.ini, and fed into the game through the same
 * action layer used by the old fixed keyboard/gamepad mapping.
 */

#include "input_map.h"
#include "gl/gl_internal.h"

#include <windowsx.h>
#include <xinput.h>
#include <dinput.h>
#include <objbase.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

extern void fn_000ffd24(CPU *cpu);

#define ACT_COUNT 7
#define MAX_BIND  8
#define MAX_DEV   8

enum { KIND_KEY, KIND_XBTN, KIND_XAXIS, KIND_DIBTN, KIND_DIAXIS, KIND_DIPOV };
enum {
    XA_LX_NEG, XA_LX_POS, XA_LY_NEG, XA_LY_POS,
    XA_RX_NEG, XA_RX_POS, XA_RY_NEG, XA_RY_POS, XA_LT, XA_RT
};

typedef struct {
    int kind;
    int slot;       /* XInput slot, -1 = any */
    int code;       /* VK, XInput mask/axis, DI button/axis/POV */
    int sign;       /* DI axis direction, POV direction */
    char guid[40];  /* DirectInput instance GUID */
} Bind;

typedef struct { Bind b[MAX_BIND]; int n; } BList;

static BList g_bind[ACT_COUNT][2];  /* 0 = keyboard, 1 = controller */

static const char *const act_name[ACT_COUNT] = {
    "STEER LEFT", "STEER RIGHT", "ACCELERATE", "BRAKE",
    "NITRO", "CAMERA", "PAUSE"
};
static const char *const act_section[ACT_COUNT] = {
    "steer_left", "steer_right", "accelerate", "brake",
    "nitro", "camera", "pause"
};

static HWND g_host;
static int g_open, g_open_requested;
static int g_embedded, g_controls_seen, g_controls_active;
static int g_remap_page, g_remap_action;
static int g_controls_label;
static int g_auto_accelerate = 1;
static int g_capture, g_cap_act, g_cap_cat, g_cap_wait_release;
static uint32_t g_label_guest[3];
static int g_selected, g_col;
static int g_hover_row = -1, g_hover_col = -1;
static int g_hover_done, g_hover_reset, g_hover_aa;
static int g_input_armed = 1;

static int g_prev[ACT_COUNT][2];
static int g_cap_prev_key;

/* Surface + placement. */
static int g_sw, g_sh;              /* DIB size */
static int g_tx, g_ty;              /* draw origin in client space */
static int g_draw_w, g_draw_h;
static HBITMAP g_bmp;
static HDC g_memdc;
static void *g_pixels;
static int g_dirty = 1;
static GLuint g_tex;
static int g_tex_dirty = 1;

static RECT g_row[ACT_COUNT];
static RECT g_cell_kb[ACT_COUNT], g_cell_pad[ACT_COUNT];
static RECT g_reset, g_done, g_aa_rect;
static int g_capture_rect_valid;
static RECT g_capture_rect;

/* ------------------------------------------------------------------ */
/* Small helpers                                                      */
/* ------------------------------------------------------------------ */

static int eqi(const char *a, const char *b)
{
    while (*a && *b) {
        unsigned char ca = (unsigned char)*a++;
        unsigned char cb = (unsigned char)*b++;
        if (ca >= 'A' && ca <= 'Z') ca = (unsigned char)(ca - 'A' + 'a');
        if (cb >= 'A' && cb <= 'Z') cb = (unsigned char)(cb - 'A' + 'a');
        if (ca != cb) return 0;
    }
    return *a == 0 && *b == 0;
}

static char *trim(char *s)
{
    char *p = s;
    char *e;
    while (*p == ' ' || *p == '\t' || *p == '\r' || *p == '\n') p++;
    e = p + strlen(p);
    while (e > p && (e[-1] == ' ' || e[-1] == '\t' || e[-1] == '\r' || e[-1] == '\n'))
        *--e = 0;
    return p;
}

static void menu_log(const char *fmt, ...)
{
    char path[MAX_PATH];
    const char *la = getenv("LOCALAPPDATA");
    FILE *f;
    va_list ap;
    if (!getenv("RECOMP_INPUT_LOG") || !la || !*la) return;
    snprintf(path, sizeof(path), "%s\\Asphalt5\\menu.log", la);
    f = fopen(path, "a");
    if (!f) return;
    va_start(ap, fmt);
    vfprintf(f, fmt, ap);
    va_end(ap);
    fputc('\n', f);
    fclose(f);
}

/* ------------------------------------------------------------------ */
/* Binding list / config                                              */
/* ------------------------------------------------------------------ */

static void list_clear(BList *l)
{
    l->n = 0;
}

static int list_add(BList *l, Bind b)
{
    if (l->n >= MAX_BIND) return 0;
    l->b[l->n++] = b;
    return 1;
}

static void add_key(int act, int vk)
{
    Bind b;
    memset(&b, 0, sizeof(b));
    b.kind = KIND_KEY;
    b.slot = -1;
    b.code = vk;
    list_add(&g_bind[act][0], b);
}

static void add_x(int act, int slot, int kind, int code)
{
    Bind b;
    memset(&b, 0, sizeof(b));
    b.kind = kind;
    b.slot = slot;
    b.code = code;
    list_add(&g_bind[act][1], b);
}

static void defaults(void)
{
    int i;
    for (i = 0; i < ACT_COUNT; i++) {
        list_clear(&g_bind[i][0]);
        list_clear(&g_bind[i][1]);
    }

    add_key(0, VK_LEFT);  add_key(0, 'A');
    add_key(1, VK_RIGHT); add_key(1, 'D');
    add_key(2, VK_UP);    add_key(2, 'W');
    add_key(3, VK_DOWN);  add_key(3, 'S');
    add_key(4, VK_SPACE);
    add_key(5, 'C');
    add_key(6, VK_ESCAPE);

    add_x(0, -1, KIND_XBTN, XINPUT_GAMEPAD_DPAD_LEFT);
    add_x(0, -1, KIND_XAXIS, XA_LX_NEG);
    add_x(1, -1, KIND_XBTN, XINPUT_GAMEPAD_DPAD_RIGHT);
    add_x(1, -1, KIND_XAXIS, XA_LX_POS);
    add_x(2, -1, KIND_XAXIS, XA_RT);
    add_x(2, -1, KIND_XBTN, XINPUT_GAMEPAD_DPAD_UP);
    add_x(3, -1, KIND_XAXIS, XA_LT);
    add_x(3, -1, KIND_XBTN, XINPUT_GAMEPAD_DPAD_DOWN);
    add_x(3, -1, KIND_XBTN, XINPUT_GAMEPAD_B);
    add_x(4, -1, KIND_XBTN, XINPUT_GAMEPAD_A);
    add_x(5, -1, KIND_XBTN, XINPUT_GAMEPAD_Y);
    add_x(6, -1, KIND_XBTN, XINPUT_GAMEPAD_START);
    add_x(6, -1, KIND_XBTN, XINPUT_GAMEPAD_BACK);
}

static const struct { const char *name; int vk; } g_key_names[] = {
    { "Backspace", VK_BACK }, { "Tab", VK_TAB }, { "Enter", VK_RETURN },
    { "Shift", VK_SHIFT }, { "Ctrl", VK_CONTROL }, { "Alt", VK_MENU },
    { "Pause", VK_PAUSE }, { "CapsLock", VK_CAPITAL }, { "Esc", VK_ESCAPE },
    { "Space", VK_SPACE }, { "PageUp", VK_PRIOR }, { "PageDown", VK_NEXT },
    { "End", VK_END }, { "Home", VK_HOME }, { "Left", VK_LEFT },
    { "Up", VK_UP }, { "Right", VK_RIGHT }, { "Down", VK_DOWN },
    { "Insert", VK_INSERT }, { "Delete", VK_DELETE },
    { "Minus", VK_OEM_MINUS }, { "Equals", VK_OEM_PLUS },
    { "LBracket", VK_OEM_4 }, { "RBracket", VK_OEM_6 },
    { "Semicolon", VK_OEM_1 }, { "Quote", VK_OEM_7 },
    { "Comma", VK_OEM_COMMA }, { "Period", VK_OEM_PERIOD },
    { "Slash", VK_OEM_2 }, { "Backslash", VK_OEM_5 }, { "Tilde", VK_OEM_3 },
    { "Num0", VK_NUMPAD0 }, { "Num1", VK_NUMPAD1 }, { "Num2", VK_NUMPAD2 },
    { "Num3", VK_NUMPAD3 }, { "Num4", VK_NUMPAD4 }, { "Num5", VK_NUMPAD5 },
    { "Num6", VK_NUMPAD6 }, { "Num7", VK_NUMPAD7 }, { "Num8", VK_NUMPAD8 },
    { "Num9", VK_NUMPAD9 }, { "Multiply", VK_MULTIPLY }, { "Add", VK_ADD },
    { "Subtract", VK_SUBTRACT }, { "Decimal", VK_DECIMAL }, { "Divide", VK_DIVIDE },
    { "F1", VK_F1 }, { "F2", VK_F2 }, { "F3", VK_F3 }, { "F4", VK_F4 },
    { "F5", VK_F5 }, { "F6", VK_F6 }, { "F7", VK_F7 }, { "F8", VK_F8 },
    { "F9", VK_F9 }, { "F10", VK_F10 }, { "F11", VK_F11 }, { "F12", VK_F12 }
};

static int key_from_name(const char *s)
{
    int i;
    if (!s || !*s) return 0;
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        return (int)strtol(s + 2, NULL, 16);
    if (s[1] == 0 && ((s[0] >= 'A' && s[0] <= 'Z') ||
                      (s[0] >= 'a' && s[0] <= 'z') ||
                      (s[0] >= '0' && s[0] <= '9')))
        return (s[0] >= 'a' && s[0] <= 'z') ? s[0] - 'a' + 'A' : s[0];
    for (i = 0; i < (int)(sizeof(g_key_names) / sizeof(g_key_names[0])); i++)
        if (eqi(s, g_key_names[i].name)) return g_key_names[i].vk;
    return 0;
}

static const char *key_name(int vk)
{
    static char buf[32];
    int i;
    if ((vk >= 'A' && vk <= 'Z') || (vk >= '0' && vk <= '9')) {
        buf[0] = (char)vk; buf[1] = 0; return buf;
    }
    for (i = 0; i < (int)(sizeof(g_key_names) / sizeof(g_key_names[0])); i++)
        if (g_key_names[i].vk == vk) return g_key_names[i].name;
    snprintf(buf, sizeof(buf), "0x%02X", vk);
    return buf;
}

static const struct { const char *name; int kind; int code; } g_x_names[] = {
    { "A", KIND_XBTN, XINPUT_GAMEPAD_A },
    { "B", KIND_XBTN, XINPUT_GAMEPAD_B },
    { "X", KIND_XBTN, XINPUT_GAMEPAD_X },
    { "Y", KIND_XBTN, XINPUT_GAMEPAD_Y },
    { "LB", KIND_XBTN, XINPUT_GAMEPAD_LEFT_SHOULDER },
    { "RB", KIND_XBTN, XINPUT_GAMEPAD_RIGHT_SHOULDER },
    { "Back", KIND_XBTN, XINPUT_GAMEPAD_BACK },
    { "Start", KIND_XBTN, XINPUT_GAMEPAD_START },
    { "LS", KIND_XBTN, XINPUT_GAMEPAD_LEFT_THUMB },
    { "RS", KIND_XBTN, XINPUT_GAMEPAD_RIGHT_THUMB },
    { "DPadUp", KIND_XBTN, XINPUT_GAMEPAD_DPAD_UP },
    { "DPadDown", KIND_XBTN, XINPUT_GAMEPAD_DPAD_DOWN },
    { "DPadLeft", KIND_XBTN, XINPUT_GAMEPAD_DPAD_LEFT },
    { "DPadRight", KIND_XBTN, XINPUT_GAMEPAD_DPAD_RIGHT },
    { "LT", KIND_XAXIS, XA_LT },
    { "RT", KIND_XAXIS, XA_RT },
    { "LX-", KIND_XAXIS, XA_LX_NEG },
    { "LX+", KIND_XAXIS, XA_LX_POS },
    { "LY-", KIND_XAXIS, XA_LY_NEG },
    { "LY+", KIND_XAXIS, XA_LY_POS },
    { "RX-", KIND_XAXIS, XA_RX_NEG },
    { "RX+", KIND_XAXIS, XA_RX_POS },
    { "RY-", KIND_XAXIS, XA_RY_NEG },
    { "RY+", KIND_XAXIS, XA_RY_POS }
};

static int x_from_name(const char *s, int *kind, int *code)
{
    int i;
    for (i = 0; i < (int)(sizeof(g_x_names) / sizeof(g_x_names[0])); i++) {
        if (eqi(s, g_x_names[i].name)) {
            *kind = g_x_names[i].kind;
            *code = g_x_names[i].code;
            return 1;
        }
    }
    return 0;
}

static const char *x_name(int kind, int code)
{
    static char buf[24];
    int i;
    for (i = 0; i < (int)(sizeof(g_x_names) / sizeof(g_x_names[0])); i++)
        if (g_x_names[i].kind == kind && g_x_names[i].code == code)
            return g_x_names[i].name;
    snprintf(buf, sizeof(buf), "X%02X", code);
    return buf;
}

static void config_path(char *path, size_t n)
{
    const char *la = getenv("LOCALAPPDATA");
    char dir[MAX_PATH];
    if (!la || !*la) la = ".";
    snprintf(dir, sizeof(dir), "%s\\Asphalt5", la);
    CreateDirectoryA(dir, NULL);
    snprintf(path, n, "%s\\input.ini", dir);
}

static int parse_xinput(const char *s, Bind *b)
{
    char tmp[128];
    char *colon;
    const char *slot;
    int kind, code;
    snprintf(tmp, sizeof(tmp), "%s", s);
    colon = strchr(tmp, ':');
    if (!colon) { slot = "any"; colon = tmp - 1; }
    else { *colon = 0; slot = tmp; }
    if (!x_from_name(colon + 1, &kind, &code)) return 0;
    memset(b, 0, sizeof(*b));
    b->kind = kind;
    b->code = code;
    b->sign = 1;
    b->slot = eqi(slot, "any") ? -1 : atoi(slot);
    if (b->slot < -1 || b->slot > 3) b->slot = -1;
    return 1;
}

static int parse_dinput(const char *s, Bind *b)
{
    char tmp[256], *p, *q;
    char *guid;
    char *what;
    char *arg;
    snprintf(tmp, sizeof(tmp), "%s", s);
    p = tmp;
    if (*p == '{') {
        q = strchr(p, '}');
        if (!q) return 0;
        q++;
        if (*q != ':') return 0;
        *q = 0;
        guid = p;
        what = q + 1;
    } else {
        return 0;
    }
    arg = strchr(what, ':');
    if (arg) { *arg++ = 0; }
    memset(b, 0, sizeof(*b));
    snprintf(b->guid, sizeof(b->guid), "%s", guid);
    b->slot = 0;
    b->sign = 1;
    if (eqi(what, "button") && arg) {
        b->kind = KIND_DIBTN;
        b->code = atoi(arg);
        return 1;
    }
    if (eqi(what, "axis") && arg) {
        int len = (int)strlen(arg);
        b->kind = KIND_DIAXIS;
        b->sign = (len > 0 && arg[len - 1] == '-') ? -1 : 1;
        b->code = atoi(arg);
        return 1;
    }
    if (eqi(what, "pov") && arg) {
        char *dir = strchr(arg, ':');
        b->kind = KIND_DIPOV;
        if (dir) *dir++ = 0;
        b->code = atoi(arg);
        if (!dir) b->sign = 0;
        else if (eqi(dir, "up")) b->sign = 0;
        else if (eqi(dir, "right")) b->sign = 1;
        else if (eqi(dir, "down")) b->sign = 2;
        else if (eqi(dir, "left")) b->sign = 3;
        else b->sign = 0;
        return 1;
    }
    return 0;
}

static void load_config(void)
{
    char path[MAX_PATH];
    char line[512];
    FILE *f;
    int section = -1;
    int total = 0;

    defaults();
    config_path(path, sizeof(path));
    f = fopen(path, "r");
    if (!f) { return; }
    for (int i = 0; i < ACT_COUNT; i++) {
        list_clear(&g_bind[i][0]);
        list_clear(&g_bind[i][1]);
    }
    while (fgets(line, sizeof(line), f)) {
        char *s = trim(line);
        char *hash = strchr(s, '#');
        char *val;
        if (hash) *hash = 0;
        s = trim(s);
        if (!*s) continue;
        if (*s == '[') {
            char *end = strchr(s, ']');
            section = -1;
            if (end) {
                *end = 0;
                for (int i = 0; i < ACT_COUNT; i++)
                    if (eqi(s + 1, act_section[i])) { section = i; break; }
            }
            continue;
        }
        if (strncmp(s, "auto_accelerate=", 16) == 0) {
            g_auto_accelerate = atoi(s + 16) ? 1 : 0;
            continue;
        }
        if (section < 0) continue;
        val = strchr(s, '=');
        if (!val) continue;
        *val++ = 0;
        s = trim(s);
        val = trim(val);
        if (!*val) continue;
        if (eqi(s, "key")) {
            int vk = key_from_name(val);
            if (vk) { Bind b; memset(&b, 0, sizeof(b)); b.kind = KIND_KEY; b.slot = -1; b.code = vk; list_add(&g_bind[section][0], b); total++; }
        } else if (eqi(s, "xinput")) {
            Bind b;
            if (parse_xinput(val, &b)) { list_add(&g_bind[section][1], b); total++; }
        } else if (eqi(s, "dinput")) {
            Bind b;
            if (parse_dinput(val, &b)) { list_add(&g_bind[section][1], b); total++; }
        }
    }
    fclose(f);
    if (total == 0) defaults();
}

static const char *bind_text(const Bind *b, char *buf, size_t n)
{
    buf[0] = 0;
    switch (b->kind) {
    case KIND_KEY:
        snprintf(buf, n, "%s", key_name(b->code));
        break;
    case KIND_XBTN:
    case KIND_XAXIS:
        snprintf(buf, n, "%s", x_name(b->kind, b->code));
        break;
    case KIND_DIBTN:
        snprintf(buf, n, "DI B%d", b->code);
        break;
    case KIND_DIAXIS:
        snprintf(buf, n, "DI A%d%c", b->code, b->sign < 0 ? '-' : '+');
        break;
    case KIND_DIPOV:
        snprintf(buf, n, "DI POV%d", b->sign);
        break;
    default:
        break;
    }
    return buf;
}

static const char *list_text(const BList *l, char *buf, size_t n)
{
    int i;
    size_t used = 0;
    buf[0] = 0;
    if (l->n == 0) { snprintf(buf, n, "UNBOUND"); return buf; }
    for (i = 0; i < l->n && i < 2; i++) {
        char one[64];
        int w;
        bind_text(&l->b[i], one, sizeof(one));
        w = snprintf(buf + used, n - used, "%s%s", used ? " / " : "", one);
        if (w < 0) break;
        used += (size_t)w;
        if (used >= n) break;
    }
    if (l->n > 2 && used + 5 < n)
        snprintf(buf + used, n - used, " +%d", l->n - 2);
    return buf;
}

static void save_config(void)
{
    char path[MAX_PATH], tmp[MAX_PATH];
    FILE *f;
    config_path(path, sizeof(path));
    snprintf(tmp, sizeof(tmp), "%s.tmp", path);
    f = fopen(tmp, "w");
    if (!f) return;
    fprintf(f, "# Asphalt 5 Native input mapping\n");
    fprintf(f, "# key=..., xinput=any:Name, dinput={GUID}:button:N\n");
    fprintf(f, "auto_accelerate=%d\n\n", g_auto_accelerate);
    for (int a = 0; a < ACT_COUNT; a++) {
        fprintf(f, "[%s]\n", act_section[a]);
        for (int cat = 0; cat < 2; cat++) {
            for (int i = 0; i < g_bind[a][cat].n; i++) {
                const Bind *b = &g_bind[a][cat].b[i];
                char name[64];
                if (b->kind == KIND_KEY) {
                    fprintf(f, "key=%s\n", key_name(b->code));
                } else if (b->kind == KIND_XBTN || b->kind == KIND_XAXIS) {
                    snprintf(name, sizeof(name), "%s",
                             x_name(b->kind, b->code));
                    if (b->slot < 0) fprintf(f, "xinput=any:%s\n", name);
                    else fprintf(f, "xinput=%d:%s\n", b->slot, name);
                } else if (b->kind == KIND_DIBTN) {
                    fprintf(f, "dinput=%s:button:%d\n", b->guid, b->code);
                } else if (b->kind == KIND_DIAXIS) {
                    fprintf(f, "dinput=%s:axis:%d%c\n", b->guid, b->code,
                            b->sign < 0 ? '-' : '+');
                } else if (b->kind == KIND_DIPOV) {
                    static const char *dirs[] = { "up", "right", "down", "left" };
                    fprintf(f, "dinput=%s:pov:%d:%s\n", b->guid, b->code,
                            dirs[(b->sign & 3)]);
                }
            }
        }
        fputc('\n', f);
    }
    fclose(f);
    MoveFileExA(tmp, path, MOVEFILE_REPLACE_EXISTING);
}

/* ------------------------------------------------------------------ */
/* Devices                                                            */
/* ------------------------------------------------------------------ */

typedef DWORD (WINAPI *XInputGetStateFn)(DWORD, XINPUT_STATE *);
static XInputGetStateFn g_xget;
static int g_xloaded;
static XINPUT_STATE g_xs[4];
static int g_xok[4];

static void xinput_load(void)
{
    static const char *dlls[] = { "xinput1_4.dll", "xinput1_3.dll", "xinput9_1_0.dll" };
    if (g_xloaded) return;
    g_xloaded = 1;
    if (getenv("RECOMP_GAMEPAD_DISABLE")) return;
    for (int i = 0; i < 3; i++) {
        HMODULE h = LoadLibraryA(dlls[i]);
        if (!h) continue;
        g_xget = (XInputGetStateFn)(void *)GetProcAddress(h, "XInputGetState");
        if (g_xget) return;
        FreeLibrary(h);
    }
}

static void read_xinput(void)
{
    xinput_load();
    for (int i = 0; i < 4; i++) {
        g_xok[i] = g_xget && g_xget((DWORD)i, &g_xs[i]) == ERROR_SUCCESS;
        if (!g_xok[i]) memset(&g_xs[i], 0, sizeof(g_xs[i]));
    }
}

typedef struct {
    GUID guid;
    char guid_text[40];
    char name[128];
    LPDIRECTINPUTDEVICE8A dev;
    DIJOYSTATE2 js;
    int ok;
} DDevice;

static IDirectInput8A *g_di;
static DDevice g_dev[MAX_DEV];
static int g_ndev;
static int g_di_tried;
static HMODULE g_di_dll;

/* Load DirectInput dynamically so the host does not import the
 * DirectInput8Create function; the joystick data format symbol still comes
 * from the dinput8 import library. */
typedef HRESULT (WINAPI *DirectInput8CreateFn)(HINSTANCE, DWORD, REFIID,
                                               LPVOID *, LPUNKNOWN);
static const GUID g_iid_directinput8a =
    { 0xBF798030, 0x483A, 0x4DA2,
      { 0xAA, 0x99, 0x5D, 0x64, 0xED, 0x36, 0x97, 0x00 } };

static void guid_text(REFGUID g, char *out, size_t n)
{
    wchar_t w[64];
    if (StringFromGUID2(g, w, 64) > 0)
        WideCharToMultiByte(CP_ACP, 0, w, -1, out, (int)n, NULL, NULL);
    else
        snprintf(out, n, "{00000000-0000-0000-0000-000000000000}");
}

static BOOL CALLBACK enum_dev(LPCDIDEVICEINSTANCEA inst, LPVOID ctx)
{
    DDevice *d;
    (void)ctx;
    if (!g_di || g_ndev >= MAX_DEV) return DIENUM_STOP;
    d = &g_dev[g_ndev];
    memset(d, 0, sizeof(*d));
    d->guid = inst->guidInstance;
    guid_text(&inst->guidInstance, d->guid_text, sizeof(d->guid_text));
    snprintf(d->name, sizeof(d->name), "%s", inst->tszProductName);
    if (FAILED(g_di->lpVtbl->CreateDevice(g_di, &inst->guidInstance, &d->dev, NULL)))
        return DIENUM_CONTINUE;
    if (FAILED(d->dev->lpVtbl->SetDataFormat(d->dev, &c_dfDIJoystick2)) ||
        FAILED(d->dev->lpVtbl->SetCooperativeLevel(d->dev, g_host,
                 DISCL_BACKGROUND | DISCL_NONEXCLUSIVE)) ||
        FAILED(d->dev->lpVtbl->Acquire(d->dev))) {
        d->dev->lpVtbl->Release(d->dev);
        d->dev = NULL;
        return DIENUM_CONTINUE;
    }
    g_ndev++;
    return DIENUM_CONTINUE;
}

static void di_init(void)
{
    if (g_di_tried) return;
    g_di_tried = 1;
    if (getenv("RECOMP_GAMEPAD_DISABLE")) return;
    CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
    if (!g_di_dll) g_di_dll = LoadLibraryA("dinput8.dll");
    if (!g_di_dll) return;
    {
        DirectInput8CreateFn create = (DirectInput8CreateFn)(void *)
            GetProcAddress(g_di_dll, "DirectInput8Create");
        if (!create) return;
        if (FAILED(create(GetModuleHandleA(NULL), DIRECTINPUT_VERSION,
                          &g_iid_directinput8a, (void **)&g_di, NULL)))
            return;
    }
    g_di->lpVtbl->EnumDevices(g_di, DI8DEVCLASS_GAMECTRL, enum_dev, NULL,
                              DIEDFL_ATTACHEDONLY);
}

static void di_poll(void)
{
    for (int i = 0; i < g_ndev; i++) {
        DDevice *d = &g_dev[i];
        HRESULT hr;
        if (!d->dev) continue;
        hr = d->dev->lpVtbl->GetDeviceState(d->dev, sizeof(DIJOYSTATE2), &d->js);
        if (FAILED(hr)) {
            d->dev->lpVtbl->Acquire(d->dev);
            hr = d->dev->lpVtbl->GetDeviceState(d->dev, sizeof(DIJOYSTATE2), &d->js);
        }
        d->ok = SUCCEEDED(hr);
        if (!d->ok) memset(&d->js, 0, sizeof(d->js));
    }
}

static DDevice *di_find(const char *guid)
{
    for (int i = 0; i < g_ndev; i++)
        if (eqi(g_dev[i].guid_text, guid)) return &g_dev[i];
    return NULL;
}

static float di_axis(const DIJOYSTATE2 *js, int code)
{
    LONG v = 0;
    switch (code) {
    case 0: v = js->lX; break;
    case 1: v = js->lY; break;
    case 2: v = js->lZ; break;
    case 3: v = js->lRx; break;
    case 4: v = js->lRy; break;
    case 5: v = js->lRz; break;
    case 6: v = js->rglSlider[0]; break;
    case 7: v = js->rglSlider[1]; break;
    default: return 0.0f;
    }
    {
        float f = (float)v / 1000.0f;
        if (f > 1.0f) f = 1.0f;
        if (f < -1.0f) f = -1.0f;
        return f;
    }
}

static int di_pov(const DIJOYSTATE2 *js, int code)
{
    DWORD p;
    if (code < 0 || code > 3) return -1;
    p = js->rgdwPOV[code];
    if (p == 0xFFFFFFFFu) return -1;
    return (int)(((p + 4500u) / 9000u) & 3u);
}

/* ------------------------------------------------------------------ */
/* Action polling                                                     */
/* ------------------------------------------------------------------ */

static int xaxis_down(int code, const XINPUT_GAMEPAD *g)
{
    switch (code) {
    case XA_LX_NEG: return g->sThumbLX < -XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE;
    case XA_LX_POS: return g->sThumbLX >  XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE;
    case XA_LY_NEG: return g->sThumbLY < -XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE;
    case XA_LY_POS: return g->sThumbLY >  XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE;
    case XA_RX_NEG: return g->sThumbRX < -XINPUT_GAMEPAD_RIGHT_THUMB_DEADZONE;
    case XA_RX_POS: return g->sThumbRX >  XINPUT_GAMEPAD_RIGHT_THUMB_DEADZONE;
    case XA_RY_NEG: return g->sThumbRY < -XINPUT_GAMEPAD_RIGHT_THUMB_DEADZONE;
    case XA_RY_POS: return g->sThumbRY >  XINPUT_GAMEPAD_RIGHT_THUMB_DEADZONE;
    case XA_LT: return g->bLeftTrigger > 64;
    case XA_RT: return g->bRightTrigger > 64;
    default: return 0;
    }
}

static int bind_down(const Bind *b)
{
    if (b->kind == KIND_KEY)
        return (GetAsyncKeyState(b->code) & 0x8000) != 0;

    if (b->kind == KIND_XBTN || b->kind == KIND_XAXIS) {
        for (int i = 0; i < 4; i++) {
            if (!g_xok[i]) continue;
            if (b->slot >= 0 && b->slot != i) continue;
            if (b->kind == KIND_XBTN) {
                if (g_xs[i].Gamepad.wButtons & (WORD)b->code) return 1;
            } else if (xaxis_down(b->code, &g_xs[i].Gamepad)) {
                return 1;
            }
        }
        return 0;
    }

    {
        DDevice *d = di_find(b->guid);
        if (!d || !d->ok) return 0;
        if (b->kind == KIND_DIBTN)
            return b->code >= 0 && b->code < 128 &&
                   (d->js.rgbButtons[b->code] & 0x80) != 0;
        if (b->kind == KIND_DIAXIS) {
            float v = di_axis(&d->js, b->code);
            return b->sign < 0 ? (v < -0.5f) : (v > 0.5f);
        }
        if (b->kind == KIND_DIPOV)
            return di_pov(&d->js, b->code) == b->sign;
    }
    return 0;
}

static int any_bind_down(void)
{
    for (int a = 0; a < ACT_COUNT; a++)
        for (int c = 0; c < 2; c++)
            for (int i = 0; i < g_bind[a][c].n; i++)
                if (bind_down(&g_bind[a][c].b[i])) return 1;
    return 0;
}

static void release_actions(void)
{
    for (int a = 0; a < ACT_COUNT; a++) {
        if (g_prev[a][0]) { g_prev[a][0] = 0; host_input_action(a, 0, HOST_SRC_KEY); }
        if (g_prev[a][1]) { g_prev[a][1] = 0; host_input_action(a, 0, HOST_SRC_PAD); }
    }
}

static int ui_active(void)
{
    return g_open || g_embedded || g_remap_page || g_capture;
}

static void process_actions(void)
{
    int race = host_game_in_race();
    int pause = host_pause_context();
    int enabled = !ui_active();

    if (!enabled) {
        release_actions();
        return;
    }
    if (!g_input_armed) {
        if (any_bind_down()) { release_actions(); return; }
        g_input_armed = 1;
    }

    for (int a = 0; a < ACT_COUNT; a++) {
        int kb = 0, pad = 0;
        int allowed = race || (a == HACT_PAUSE && pause);
        if (allowed) {
            for (int i = 0; i < g_bind[a][0].n; i++)
                if (bind_down(&g_bind[a][0].b[i])) { kb = 1; break; }
            for (int i = 0; i < g_bind[a][1].n; i++)
                if (bind_down(&g_bind[a][1].b[i])) { pad = 1; break; }
        }
        if (kb != g_prev[a][0]) {
            g_prev[a][0] = kb;
            host_input_action(a, kb, HOST_SRC_KEY);
        }
        if (pad != g_prev[a][1]) {
            g_prev[a][1] = pad;
            host_input_action(a, pad, HOST_SRC_PAD);
        }
    }
}

/* ------------------------------------------------------------------ */
/* Capture                                                            */
/* ------------------------------------------------------------------ */

static void finish_capture(Bind b)
{
    BList *l = &g_bind[g_cap_act][g_cap_cat];
    menu_log("[cap] finish act=%d cat=%d kind=%d code=%d", g_cap_act, g_cap_cat, b.kind, b.code);
    list_clear(l);
    list_add(l, b);
    save_config();
    g_capture = 0;
    g_input_armed = 0;
    release_actions();
    g_dirty = 1;
}

static void begin_capture(int act, int cat)
{
    menu_log("[cap] begin act=%d cat=%d pads=%d%d%d%d", act, cat,
             g_xok[0], g_xok[1], g_xok[2], g_xok[3]);
    g_capture = 1;
    g_cap_act = act;
    g_cap_cat = cat;
    g_cap_wait_release = (cat == 1);
    g_cap_prev_key = 0;
    release_actions();
    g_input_armed = 0;
    g_dirty = 1;
}

static void cancel_capture(void)
{
    g_capture = 0;
    g_input_armed = 0;
    release_actions();
    g_dirty = 1;
}

static int controller_any_down(void)
{
    for (int i = 0; i < 4; i++) {
        if (!g_xok[i]) continue;
        if (g_xs[i].Gamepad.wButtons || g_xs[i].Gamepad.bLeftTrigger > 32 ||
            g_xs[i].Gamepad.bRightTrigger > 32) return 1;
    }
    for (int i = 0; i < g_ndev; i++) {
        DDevice *d = &g_dev[i];
        if (!d->ok) continue;
        for (int j = 0; j < 128; j++)
            if (d->js.rgbButtons[j] & 0x80) return 1;
        for (int j = 0; j < 8; j++)
            if (di_axis(&d->js, j) > 0.4f || di_axis(&d->js, j) < -0.4f) return 1;
    }
    return 0;
}

static void finish_controller(Bind b)
{
    g_cap_cat = 1;
    finish_capture(b);
}

static int capture_poll(void)
{
    if (!g_capture) return 0;
    if (g_cap_wait_release) {
        if (!controller_any_down()) g_cap_wait_release = 0;
        return 0;
    }

    for (int i = 0; i < 4; i++) {
        const XINPUT_GAMEPAD *g = &g_xs[i].Gamepad;
        static const struct { WORD mask; } btns[] = {
            { XINPUT_GAMEPAD_A }, { XINPUT_GAMEPAD_B }, { XINPUT_GAMEPAD_X },
            { XINPUT_GAMEPAD_Y }, { XINPUT_GAMEPAD_LEFT_SHOULDER },
            { XINPUT_GAMEPAD_RIGHT_SHOULDER }, { XINPUT_GAMEPAD_BACK },
            { XINPUT_GAMEPAD_START }, { XINPUT_GAMEPAD_LEFT_THUMB },
            { XINPUT_GAMEPAD_RIGHT_THUMB }, { XINPUT_GAMEPAD_DPAD_UP },
            { XINPUT_GAMEPAD_DPAD_DOWN }, { XINPUT_GAMEPAD_DPAD_LEFT },
            { XINPUT_GAMEPAD_DPAD_RIGHT }
        };
        if (!g_xok[i]) continue;
        for (unsigned k = 0; k < sizeof(btns) / sizeof(btns[0]); k++) {
            if (g->wButtons & btns[k].mask) {
                Bind b; memset(&b, 0, sizeof(b));
                b.kind = KIND_XBTN; b.slot = -1; b.code = btns[k].mask;
                finish_controller(b);
                return 1;
            }
        }
        if (g->bLeftTrigger > 128) {
            Bind b; memset(&b, 0, sizeof(b));
            b.kind = KIND_XAXIS; b.slot = -1; b.code = XA_LT;
            finish_controller(b); return 1;
        }
        if (g->bRightTrigger > 128) {
            Bind b; memset(&b, 0, sizeof(b));
            b.kind = KIND_XAXIS; b.slot = -1; b.code = XA_RT;
            finish_controller(b); return 1;
        }
        if (g->sThumbLX < -20000) { Bind b; memset(&b, 0, sizeof(b)); b.kind = KIND_XAXIS; b.slot = -1; b.code = XA_LX_NEG; finish_controller(b); return 1; }
        if (g->sThumbLX >  20000) { Bind b; memset(&b, 0, sizeof(b)); b.kind = KIND_XAXIS; b.slot = -1; b.code = XA_LX_POS; finish_controller(b); return 1; }
        if (g->sThumbLY < -20000) { Bind b; memset(&b, 0, sizeof(b)); b.kind = KIND_XAXIS; b.slot = -1; b.code = XA_LY_NEG; finish_controller(b); return 1; }
        if (g->sThumbLY >  20000) { Bind b; memset(&b, 0, sizeof(b)); b.kind = KIND_XAXIS; b.slot = -1; b.code = XA_LY_POS; finish_controller(b); return 1; }
        if (g->sThumbRX < -20000) { Bind b; memset(&b, 0, sizeof(b)); b.kind = KIND_XAXIS; b.slot = -1; b.code = XA_RX_NEG; finish_controller(b); return 1; }
        if (g->sThumbRX >  20000) { Bind b; memset(&b, 0, sizeof(b)); b.kind = KIND_XAXIS; b.slot = -1; b.code = XA_RX_POS; finish_controller(b); return 1; }
        if (g->sThumbRY < -20000) { Bind b; memset(&b, 0, sizeof(b)); b.kind = KIND_XAXIS; b.slot = -1; b.code = XA_RY_NEG; finish_controller(b); return 1; }
        if (g->sThumbRY >  20000) { Bind b; memset(&b, 0, sizeof(b)); b.kind = KIND_XAXIS; b.slot = -1; b.code = XA_RY_POS; finish_controller(b); return 1; }
    }

    for (int i = 0; i < g_ndev; i++) {
        DDevice *d = &g_dev[i];
        if (!d->ok) continue;
        for (int j = 0; j < 128; j++) {
            if (d->js.rgbButtons[j] & 0x80) {
                Bind b; memset(&b, 0, sizeof(b));
                b.kind = KIND_DIBTN; b.slot = i; b.code = j;
                snprintf(b.guid, sizeof(b.guid), "%s", d->guid_text);
                finish_controller(b); return 1;
            }
        }
        for (int j = 0; j < 8; j++) {
            float v = di_axis(&d->js, j);
            if (v > 0.6f || v < -0.6f) {
                Bind b; memset(&b, 0, sizeof(b));
                b.kind = KIND_DIAXIS; b.slot = i; b.code = j;
                b.sign = v < 0 ? -1 : 1;
                snprintf(b.guid, sizeof(b.guid), "%s", d->guid_text);
                finish_controller(b); return 1;
            }
        }
        for (int j = 0; j < 4; j++) {
            int p = di_pov(&d->js, j);
            if (p >= 0) {
                Bind b; memset(&b, 0, sizeof(b));
                b.kind = KIND_DIPOV; b.slot = i; b.code = j; b.sign = p;
                snprintf(b.guid, sizeof(b.guid), "%s", d->guid_text);
                finish_controller(b); return 1;
            }
        }
    }
    return 0;
}

/* ------------------------------------------------------------------ */
/* Engine page hook                                                   */
/* ------------------------------------------------------------------ */

void guest_controls_page_tick(void)
{
    g_controls_seen = 1;
}

void guest_log_menu(CPU *cpu)
{
    static int done;
    uint32_t self = cpu->r[0], p = cpu->r[2];
    if (done || !self || !p) return;
    done = 1;
    menu_log("[menu] scan self=%08x p=%08x", self, p);
    for (uint32_t off = 0; off < 0x2000; off += 4) {
        uint32_t v = rd32(self + off);
        if (v >= p - 0x1000 && v <= p + 0x1000)
            menu_log("[menu] self+%x = %08x", off, v);
    }
}

void guest_clear_controls_page(CPU *cpu)
{
    uint32_t self = cpu->r[0];
    if (!self) return;
    /* Remove every stock row from the controls page.  The right-side
     * OPTIONS tabs are a separate menu and stay untouched. */
    wr32(self + 0x8f4, 0);
    wr32(self + 0x8e0, 0);
}

static uint32_t label_slot(int slot, const char *s)
{
    uint16_t *w;
    if (slot < 0 || slot > 2) return 0;
    if (!g_label_guest[slot]) g_label_guest[slot] = guest_alloc_zero(192);
    if (!g_label_guest[slot]) return 0;
    w = (uint16_t *)G(g_label_guest[slot]);
    while (*s) *w++ = (uint16_t)(unsigned char)*s++;
    *w = 0;
    return g_label_guest[slot];
}

static int wstr_contains(uint32_t p, const char *needle)
{
    const uint16_t *w;
    if (!p || !needle || !*needle) return 0;
    w = (const uint16_t *)G(p);
    for (int i = 0; i < 128 && w[i]; i++) {
        int j = 0;
        while (needle[j] && w[i + j]) {
            unsigned char a = (unsigned char)w[i + j];
            unsigned char b = (unsigned char)needle[j];
            if (a >= 'a' && a <= 'z') a = (unsigned char)(a - 'a' + 'A');
            if (b >= 'a' && b <= 'z') b = (unsigned char)(b - 'a' + 'A');
            if (a != b) break;
            j++;
        }
        if (!needle[j]) return 1;
    }
    return 0;
}

static void first_bind(int cat, char *buf, size_t n)
{
    const BList *l = &g_bind[g_remap_action][cat];
    if (l->n <= 0) snprintf(buf, n, "UNBOUND");
    else bind_text(&l->b[0], buf, n);
}

int guest_control_menu_label(CPU *cpu)
{
    char buf[192];
    uint32_t id = cpu->r[1];
    if (id == 0x4e8u) g_controls_label = 1;
    else if (id != 0x4ecu) g_controls_label = 0;
    if (getenv("RECOMP_REMAP_TEST")) g_remap_page = 1;
    menu_log("[menu] label id=%x remap=%d cap=%d", id, g_remap_page,
             g_capture ? g_cap_cat + 1 : 0);
    if (!g_remap_page) {
        if (id == 0x4e8u) {
            uint32_t p = label_slot(1, "CONFIGURE INPUT");
            if (p) { cpu->r[0] = p; return 1; }
        }
        return 0;
    }
    if (id == 0x4ecu) {
        snprintf(buf, sizeof(buf), "ACTION: %s", act_name[g_remap_action]);
        cpu->r[0] = label_slot(0, buf);
        return 1;
    }
    if (id == 0x4e8u) {
        if (g_capture && g_cap_cat == 0)
            snprintf(buf, sizeof(buf), "PRESS A KEY...");
        else {
            char t[64];
            first_bind(0, t, sizeof(t));
            snprintf(buf, sizeof(buf), "KEY: %s", t);
        }
        cpu->r[0] = label_slot(1, buf);
        return 1;
    }
    return 0;
}

void guest_string_override(CPU *cpu)
{
    char buf[192];
    if (!g_remap_page || !cpu->r[0]) return;
    if (!wstr_contains(cpu->r[0], "SENSITIVITY")) return;
    if (g_capture && g_cap_cat == 1) {
        snprintf(buf, sizeof(buf), "PRESS A PAD BUTTON");
    } else {
        char t[64];
        first_bind(1, t, sizeof(t));
        snprintf(buf, sizeof(buf), "PAD: %s", t);
    }
    cpu->r[0] = label_slot(2, buf);
    menu_log("[menu] sensitivity row -> %s", buf);
}

static void request_open(void);

int platform_control_mode_bypass(void);

int input_map_auto_accelerate(void)
{
    return g_auto_accelerate;
}

int guest_force_control_mode(CPU *cpu)
{
    if (platform_control_mode_bypass()) return 0;
    cpu->r[1] = 2;   /* accelerometer */
    return 0;
}

int guest_control_menu_action(CPU *cpu)
{
    menu_log("[menu] do r1=%x r2=%x open=%d req=%d label=%d",
             cpu->r[1], cpu->r[2], g_open, g_open_requested, g_controls_label);
    /* Index 6 is the Controls row (five OPTIONS tabs plus Auto
     * Accelerate).  This row is now the mapper entry, so never let the
     * stock action cycle ACCELEROMETER/BUTTONS.  Opening here as well as
     * in the mouse-down hook makes the button reliable on the first,
     * second and later presses. */
    if (g_controls_label && cpu->r[1] == 6) {
        menu_log("[menu] mapper action replaces Controls row action");
        request_open();
        return 1;
    }
    return 0;
}

int guest_control_menu_bar_action(CPU *cpu)
{
    menu_log("[menu] bar r1=%x r2=%x", cpu->r[1], cpu->r[2]);
    return 0;
}

int platform_last_touch(int *x, int *y);
int platform_last_click(int *x, int *y);
int platform_set_auto_accelerate(int v);
void platform_cancel_mouse(void);

static int menu_row_at(void)
{
    POINT p;
    RECT rc;
    int w, h, lw, lh, lx = -1, ly = -1;
    lw = platform_logical_width();
    lh = platform_logical_height();
    if (lw < 1 || lh < 1) return -1;
    if ((GetAsyncKeyState(VK_LBUTTON) & 0x8000) != 0) {
        /* A real mouse click can arrive before the window is focused, so
         * WM_LBUTTONDOWN may not have reached us yet.  The cursor is the
         * click position either way. */
        if (!g_host || !GetCursorPos(&p) || !ScreenToClient(g_host, &p)) return -1;
        if (!GetClientRect(g_host, &rc)) return -1;
        w = rc.right - rc.left;
        h = rc.bottom - rc.top;
        if (w < 1 || h < 1) return -1;
        lx = p.x * lw / w;
        ly = p.y * lh / h;
    } else if (platform_last_click(&lx, &ly)) {
        if (!g_host || !GetClientRect(g_host, &rc)) return -1;
        w = rc.right - rc.left;
        h = rc.bottom - rc.top;
        if (w < 1 || h < 1) return -1;
        lx = lx * lw / w;
        ly = ly * lh / h;
    } else if (platform_last_touch(&lx, &ly)) {
        /* RECOMP_TAP / synthetic touch path. */
    } else {
        if (!g_host || !GetCursorPos(&p) || !ScreenToClient(g_host, &p)) return -1;
        if (!GetClientRect(g_host, &rc)) return -1;
        w = rc.right - rc.left;
        h = rc.bottom - rc.top;
        if (w < 1 || h < 1) return -1;
        lx = p.x * lw / w;
        ly = p.y * lh / h;
    }
    if (lh <= 500) {
        /* 3.2.4 / 3.4.1 use the 854x480 UI.  The three Controls rows sit at
         * roughly 30%, 50% and 70% of the logical height there, not at the
         * 3.3.7 percentages. */
        if (lx < lw * 15 / 100 || lx > lw * 70 / 100) return -1;
        if (ly >= lh * 20 / 100 && ly < lh * 38 / 100) return 0;
        if (ly >= lh * 40 / 100 && ly < lh * 60 / 100) return 1;
        if (ly >= lh * 62 / 100 && ly < lh * 80 / 100) return 2;
        return -1;
    }
    if (lx < lw * 22 / 100 || lx > lw * 66 / 100) return -1;
    if (ly >= lh * 18 / 100 && ly < lh * 30 / 100) return 0;
    if (ly >= lh * 31 / 100 && ly < lh * 45 / 100) return 1;
    if (ly >= lh * 46 / 100 && ly < lh * 60 / 100) return 2;
    return -1;
}

static void request_open(void);

int guest_control_menu_click(CPU *cpu)
{
    int row, tx = -1, ty = -1;
    (void)cpu;
    platform_last_touch(&tx, &ty);
    row = menu_row_at();
    menu_log("[hook] touch=%d,%d row=%d label=%d open=%d req=%d", tx, ty, row,
             g_controls_label, g_open, g_open_requested);
    if (row == 0 && g_controls_label) {
        g_auto_accelerate = !g_auto_accelerate;
        platform_set_auto_accelerate(g_auto_accelerate);
        save_config();
        return 1;
    }
    if (row == 1 && g_controls_label) {
        request_open();
        return 1;
    }
    return 0;
}

void guest_debug_menu(CPU *cpu)
{
    static int done;
    uint32_t self = cpu->r[0];
    uint32_t count, arr;
    if (done || !self) return;
    done = 1;
    {
        uint32_t tbl = rd32(self + 0x8ec);
        count = tbl ? rd32(tbl) : 0;
        arr = rd32(self + 0x8f0);
        menu_log("[menu] self=%08x table=%08x count=%d arr=%08x",
                 self, tbl, (int)count, arr);
        for (int i = 0; i < 16; i++)
            menu_log("[menu] self[%03x]=%08x", 0x8d0 + i * 4,
                     rd32(self + 0x8d0 + (uint32_t)i * 4));
        if (tbl) {
            for (int i = 0; i < 6; i++)
                menu_log("[menu] table[%d] %08x %08x %08x %08x",
                         i, rd32(tbl + 4 + i * 16), rd32(tbl + 8 + i * 16),
                         rd32(tbl + 12 + i * 16), rd32(tbl + 16 + i * 16));
        }
        if (arr && count < 32) {
            for (uint32_t i = 0; i < count && i < 10; i++) {
                uint32_t p = arr + i * 0x18;
                menu_log("[menu] item[%u] @%08x: %08x %08x %08x %08x %08x %08x",
                         i, p, rd32(p), rd32(p + 4), rd32(p + 8),
                         rd32(p + 12), rd32(p + 16), rd32(p + 20));
            }
            if (count >= 4) {
                uint32_t a = arr + 0x18;
                uint32_t b = arr + 0x54;   /* item[3] */
                memcpy(G(b), G(a), 0x18);
                wr32(b + 0, 3);
                wr32(b + 4, 0x9001);
                wr32(b + 16, 0x168);      /* row 4 */
                wr32(self + 0x8f4, 4);    /* visible rows */
                menu_log("[menu] cloned full button into item[3] id=9001");
            }
        }
    }
}

void input_map_init(HWND hwnd)
{
    g_host = hwnd;
    load_config();
    di_init();
}

/* ------------------------------------------------------------------ */
/* Layout / drawing                                                   */
/* ------------------------------------------------------------------ */

static int ui_rect(RECT *r)
{
    int cw = platform_client_width();
    int ch = platform_client_height();
    if (g_open) {
        r->left = 0; r->top = 0;
        r->right = cw; r->bottom = ch;
        return 1;
    }
    if (g_embedded) {
        r->left = cw * 18 / 1000;
        r->top = ch * 92 / 1000;
        r->right = cw * 858 / 1000;
        r->bottom = ch * 928 / 1000;
        return 1;
    }
    return 0;
}

static void destroy_surface(void)
{
    if (g_tex) { glDeleteTextures(1, &g_tex); g_tex = 0; }
    if (g_memdc) { DeleteDC(g_memdc); g_memdc = NULL; }
    if (g_bmp) { DeleteObject(g_bmp); g_bmp = NULL; }
    g_pixels = NULL;
    g_sw = g_sh = 0;
}

static int create_surface(int w, int h)
{
    BITMAPINFO bmi;
    if (w < 2 || h < 2) return 0;
    destroy_surface();
    memset(&bmi, 0, sizeof(bmi));
    bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bmi.bmiHeader.biWidth = w;
    bmi.bmiHeader.biHeight = -h;
    bmi.bmiHeader.biPlanes = 1;
    bmi.bmiHeader.biBitCount = 32;
    bmi.bmiHeader.biCompression = BI_RGB;
    g_bmp = CreateDIBSection(NULL, &bmi, DIB_RGB_COLORS, &g_pixels, NULL, 0);
    if (!g_bmp || !g_pixels) { destroy_surface(); return 0; }
    g_memdc = CreateCompatibleDC(NULL);
    if (!g_memdc) { destroy_surface(); return 0; }
    SelectObject(g_memdc, g_bmp);
    g_sw = w;
    g_sh = h;
    g_dirty = 1;
    g_tex_dirty = 1;
    return 1;
}

static void fill_rect(HDC dc, int x, int y, int w, int h, COLORREF c)
{
    RECT r;
    HBRUSH b;
    if (w <= 0 || h <= 0) return;
    r.left = x; r.top = y; r.right = x + w; r.bottom = y + h;
    b = CreateSolidBrush(c);
    FillRect(dc, &r, b);
    DeleteObject(b);
}

static void frame_rect(HDC dc, int x, int y, int w, int h, COLORREF c, int thick)
{
    HPEN p = CreatePen(PS_SOLID, thick, c);
    HGDIOBJ op = SelectObject(dc, p);
    HGDIOBJ ob = SelectObject(dc, GetStockObject(NULL_BRUSH));
    Rectangle(dc, x, y, x + w + 1, y + h + 1);
    SelectObject(dc, ob);
    SelectObject(dc, op);
    DeleteObject(p);
}

static void line(HDC dc, int x0, int y0, int x1, int y1, COLORREF c, int thick)
{
    HPEN p = CreatePen(PS_SOLID, thick, c);
    HGDIOBJ o = SelectObject(dc, p);
    MoveToEx(dc, x0, y0, NULL);
    LineTo(dc, x1, y1);
    SelectObject(dc, o);
    DeleteObject(p);
}

static HFONT make_font(int px, int italic)
{
    return CreateFontA(-px, 0, 0, 0, FW_BOLD, italic, FALSE, FALSE,
                       DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
                       ANTIALIASED_QUALITY, DEFAULT_PITCH | FF_SWISS,
                       "Bahnschrift");
}

static int text_width(HDC dc, const char *s)
{
    SIZE z;
    if (!s || !*s) return 0;
    GetTextExtentPoint32A(dc, s, (int)strlen(s), &z);
    return z.cx;
}

static void draw_text(HDC dc, const char *s, int x, int y, int px, int italic,
                      COLORREF color, int center_x, int max_w, int shadow)
{
    HFONT f = make_font(px, italic);
    HGDIOBJ of;
    COLORREF oc;
    int ob;
    int w;
    if (!f) return;
    of = SelectObject(dc, f);
    oc = SetTextColor(dc, color);
    ob = SetBkMode(dc, TRANSPARENT);
    SetTextCharacterExtra(dc, px / 18);
    w = text_width(dc, s);
    if (max_w > 0 && w > max_w) {
        int smaller = px * max_w / (w > 0 ? w : 1);
        if (smaller < px / 2) smaller = px / 2;
        SelectObject(dc, of);
        DeleteObject(f);
        f = make_font(smaller, italic);
        SelectObject(dc, f);
        w = text_width(dc, s);
    }
    if (center_x >= 0) x -= w / 2;
    if (shadow) {
        SetTextColor(dc, RGB(0, 0, 0));
        TextOutA(dc, x + 2, y + 2, s, (int)strlen(s));
        SetTextColor(dc, color);
    }
    TextOutA(dc, x, y, s, (int)strlen(s));
    SetBkMode(dc, ob);
    SetTextColor(dc, oc);
    SelectObject(dc, of);
    DeleteObject(f);
}

static void draw_centered(HDC dc, const char *s, int y, int px, int italic,
                          COLORREF color, int width, int shadow)
{
    HFONT f = make_font(px, italic);
    HGDIOBJ of;
    COLORREF oc;
    int ob;
    RECT r;
    if (!f) return;
    of = SelectObject(dc, f);
    oc = SetTextColor(dc, color);
    ob = SetBkMode(dc, TRANSPARENT);
    SetTextCharacterExtra(dc, px / 18);
    if (shadow) {
        RECT rs = { 2, y + 2, width + 2, y + px + 10 };
        SetTextColor(dc, RGB(0, 0, 0));
        DrawTextA(dc, s, -1, &rs, DT_CENTER | DT_SINGLELINE | DT_NOPREFIX);
        SetTextColor(dc, color);
    }
    r.left = 0; r.top = y; r.right = width; r.bottom = y + px + 10;
    DrawTextA(dc, s, -1, &r, DT_CENTER | DT_SINGLELINE | DT_NOPREFIX);
    SetBkMode(dc, ob);
    SetTextColor(dc, oc);
    SelectObject(dc, of);
    DeleteObject(f);
}

static void compose(void)
{
    HDC dc = g_memdc;
    int w = g_sw, h = g_sh;
    int mx, table_y, row_h, action_x, kb_x, pad_x;
    int title_px, head_px, row_px, small_px;
    int panel = g_embedded && !g_open;

    if (!dc || !g_pixels) return;

    /* Background. */
    for (int y = 0; y < h; y += 3) {
        float t = (float)y / (float)(h > 0 ? h : 1);
        int r = (int)(4 + t * 5);
        int g = (int)(18 + t * 17);
        int b = (int)(33 + t * 30);
        fill_rect(dc, 0, y, w, 3, RGB(r, g, b));
    }
    for (int i = 1; i < 12; i++)
        line(dc, w * i / 12, 0, w * i / 12, h, RGB(8, 45, 65), 1);
    for (int i = 1; i < 9; i++)
        line(dc, 0, h * i / 9, w, h * i / 9, RGB(8, 45, 65), 1);
    for (int i = -4; i < 14; i++) {
        int x = w * i / 10;
        line(dc, x, 0, x + h / 3, h, RGB(10, 56, 82), 2);
    }

    {
        int m = panel ? 2 : 16;
        frame_rect(dc, m, m, w - m * 2 - 1, h - m * 2 - 1, RGB(31, 182, 222), 2);
        frame_rect(dc, m + 6, m + 6, w - m * 2 - 13, h - m * 2 - 13, RGB(8, 72, 96), 1);
        line(dc, m, m, m + w / 10, m, RGB(74, 238, 255), 4);
        line(dc, m, m, m, m + h / 10, RGB(74, 238, 255), 4);
        line(dc, w - m, m, w - m - w / 10, m, RGB(74, 238, 255), 4);
        line(dc, w - m, m, w - m, m + h / 10, RGB(74, 238, 255), 4);
    }

    small_px = h * 17 / 1000;
    head_px = h * 22 / 1000;
    row_px = h * 27 / 1000;
    title_px = h * 52 / 1000;

    if (!panel)
        draw_text(dc, "ASPHALT 5 HD  /  OPTIONS", 48, 40, small_px, 1,
                  RGB(80, 200, 220), -1, 0, 0);
    draw_centered(dc, "INPUT MAPPING",
                  panel ? h * 30 / 1000 : h * 68 / 1000,
                  title_px, 1, RGB(245, 250, 255), w, 1);
    draw_centered(dc, "KEYBOARD + CONTROLLER",
                  panel ? h * 96 / 1000 : h * 133 / 1000, head_px, 1,
                  RGB(232, 78, 201), w, 1);

    mx = w * 34 / 1000;
    table_y = h * (panel ? 205 : 225) / 1000;
    row_h = h * 68 / 1000;
    action_x = mx + 18;
    kb_x = w * 455 / 1000;
    pad_x = w * 708 / 1000;

    draw_text(dc, "ACTION", action_x, table_y - h * 32 / 1000, small_px, 1,
              RGB(90, 190, 210), -1, 0, 0);
    draw_text(dc, "KEYBOARD", kb_x, table_y - h * 32 / 1000, small_px, 1,
              RGB(90, 190, 210), -1, 0, 0);
    draw_text(dc, "CONTROLLER", pad_x, table_y - h * 32 / 1000, small_px, 1,
              RGB(90, 190, 210), -1, 0, 0);

    for (int i = 0; i < ACT_COUNT; i++) {
        int y = table_y + i * row_h;
        int rh = row_h - h * 9 / 1000;
        int selected = (i == g_selected);
        int hovered = (i == g_hover_row);
        COLORREF fill = selected ? RGB(23, 52, 82) : RGB(10, 32, 52);
        COLORREF edge = selected ? RGB(236, 72, 200) :
                        (hovered ? RGB(54, 180, 210) : RGB(18, 80, 108));
        char kb[128], pad[128];
        if (hovered && !selected) fill = RGB(15, 41, 65);
        fill_rect(dc, mx, y, w - mx * 2, rh, fill);
        frame_rect(dc, mx, y, w - mx * 2, rh, edge, selected ? 3 : 1);
        if (selected) fill_rect(dc, mx, y, 5, rh, RGB(74, 238, 255));

        g_row[i].left = mx; g_row[i].top = y;
        g_row[i].right = w - mx; g_row[i].bottom = y + rh;

        draw_text(dc, act_name[i], action_x, y + rh / 2 - row_px / 2, row_px, 1,
                  selected ? RGB(255, 255, 255) : RGB(198, 224, 236),
                  -1, w * 28 / 1000, selected);

        g_cell_kb[i].left = kb_x - 14; g_cell_kb[i].top = y;
        g_cell_kb[i].right = w * 67 / 1000; g_cell_kb[i].bottom = y + rh;
        g_cell_pad[i].left = pad_x - 14; g_cell_pad[i].top = y;
        g_cell_pad[i].right = w - mx; g_cell_pad[i].bottom = y + rh;

        list_text(&g_bind[i][0], kb, sizeof(kb));
        list_text(&g_bind[i][1], pad, sizeof(pad));
        draw_text(dc, kb, kb_x, y + rh / 2 - row_px / 2, row_px, 0,
                  (selected && g_col == 0) ? RGB(255, 255, 255) : RGB(178, 219, 232),
                  -1, w * 20 / 1000, 0);
        draw_text(dc, pad, pad_x, y + rh / 2 - row_px / 2, row_px, 0,
                  (selected && g_col == 1) ? RGB(255, 255, 255) : RGB(178, 219, 232),
                  -1, w * 26 / 1000, 0);

        line(dc, kb_x - 23, y + 8, kb_x - 23, y + rh - 8, RGB(23, 75, 98), 1);
        line(dc, pad_x - 23, y + 8, pad_x - 23, y + rh - 8, RGB(23, 75, 98), 1);
    }

    {
        int bw = w * 42 / 100;
        int bh = h * 58 / 1000;
        int bx = (w - bw) / 2;
        int by = h * 710 / 1000;
        char aa[64];
        g_aa_rect.left = bx; g_aa_rect.top = by;
        g_aa_rect.right = bx + bw; g_aa_rect.bottom = by + bh;
        snprintf(aa, sizeof(aa), "AUTO ACCELERATE: %s",
                 g_auto_accelerate ? "ON" : "OFF");
        fill_rect(dc, bx, by, bw, bh,
                  g_hover_aa ? RGB(29, 67, 96) : RGB(13, 38, 59));
        frame_rect(dc, bx, by, bw, bh,
                   g_hover_aa ? RGB(74, 238, 255) : RGB(31, 112, 140), 2);
        draw_centered(dc, aa, by + bh / 2 - row_px / 2, row_px, 0,
                      RGB(220, 238, 246), w, 0);
    }

    if (g_capture) {
        const char *msg = g_cap_cat == 0 ?
            "PRESS A KEY, BUTTON OR AXIS  -  ESC CANCELS  -  DELETE CLEARS" :
            "PRESS A BUTTON, AXIS OR KEY  -  ESC CANCELS";
        int bw = w * 62 / 100;
        int bh = h * 11 / 100;
        int bx = (w - bw) / 2;
        int by = h * 80 / 100;
        fill_rect(dc, bx, by, bw, bh, RGB(8, 24, 42));
        frame_rect(dc, bx, by, bw, bh, RGB(255, 120, 224), 2);
        draw_centered(dc, msg, by + bh / 2 - head_px / 2, head_px, 0,
                      RGB(255, 255, 255), w, 0);
        g_capture_rect.left = bx; g_capture_rect.top = by;
        g_capture_rect.right = bx + bw; g_capture_rect.bottom = by + bh;
        g_capture_rect_valid = 1;
    } else {
        g_capture_rect_valid = 0;
        draw_centered(dc, panel ?
                  "CLICK A BINDING TO CHANGE IT   -   USE THE SIDE TABS TO LEAVE" :
                  "CLICK A BINDING TO CHANGE IT   -   ESC or F1 CLOSES",
                  h * 875 / 1000, small_px, 0, RGB(104, 181, 201), w, 0);
    }

    {
        int by = h * 905 / 1000;
        int bw = w * 180 / 1000;
        int bh = h * 52 / 1000;
        g_reset.left = panel ? w * 38 / 100 : w * 52 / 100;
        g_reset.top = by;
        g_reset.right = g_reset.left + bw; g_reset.bottom = by + bh;
        fill_rect(dc, g_reset.left, g_reset.top, bw, bh,
                  g_hover_reset ? RGB(29, 67, 96) : RGB(13, 38, 59));
        frame_rect(dc, g_reset.left, g_reset.top, bw, bh,
                   g_hover_reset ? RGB(74, 238, 255) : RGB(31, 112, 140), 2);
        draw_text(dc, "RESET DEFAULTS",
                  (g_reset.left + g_reset.right) / 2,
                  by + bh / 2 - head_px / 2, head_px, 0, RGB(220, 238, 246),
                  (g_reset.left + g_reset.right) / 2, 0, 0);

        if (!panel) {
            g_done.left = w * 76 / 100; g_done.top = by;
            g_done.right = g_done.left + bw; g_done.bottom = by + bh;
            fill_rect(dc, g_done.left, g_done.top, bw, bh,
                      g_hover_done ? RGB(48, 92, 122) : RGB(21, 53, 78));
            frame_rect(dc, g_done.left, g_done.top, bw, bh,
                       g_hover_done ? RGB(255, 120, 224) : RGB(54, 190, 218), 2);
            draw_text(dc, "DONE",
                      (g_done.left + g_done.right) / 2,
                      by + bh / 2 - head_px / 2,
                      head_px, 0, RGB(255, 255, 255),
                      (g_done.left + g_done.right) / 2, 0, 0);
        } else {
            memset(&g_done, 0, sizeof(g_done));
        }
    }
}

static void draw_quad(int x, int y, int w, int h)
{
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, g_tex);
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
    glColor4f(1, 1, 1, 1);
    glBegin(GL_QUADS);
    glTexCoord2f(0, 0); glVertex2i(x, y + h);
    glTexCoord2f(1, 0); glVertex2i(x + w, y + h);
    glTexCoord2f(1, 1); glVertex2i(x + w, y);
    glTexCoord2f(0, 1); glVertex2i(x, y);
    glEnd();
}

void input_map_draw(void)
{
    RECT r;
    if (!ui_rect(&r)) return;
    if (r.right <= r.left || r.bottom <= r.top) return;

    if (!g_bmp || g_sw != r.right - r.left || g_sh != r.bottom - r.top) {
        if (!create_surface(r.right - r.left, r.bottom - r.top)) return;
    }
    if (g_dirty) {
        compose();
        g_dirty = 0;
        g_tex_dirty = 1;
    }
    {
        static int shot_done;
        const char *shot = getenv("RECOMP_INPUT_MAP_SHOT");
        if (shot && *shot && !shot_done) {
            FILE *f = fopen(shot, "wb");
            if (f) {
                fprintf(f, "P6\n%d %d\n255\n", g_sw, g_sh);
                for (int y = 0; y < g_sh; y++) {
                    const unsigned char *p = (const unsigned char *)g_pixels +
                        (size_t)y * (size_t)g_sw * 4u;
                    for (int x = 0; x < g_sw; x++) {
                        unsigned char v[3];
                        v[0] = p[x * 4 + 2];
                        v[1] = p[x * 4 + 1];
                        v[2] = p[x * 4 + 0];
                        fwrite(v, 1, 3, f);
                    }
                }
                fclose(f);
                shot_done = 1;
            }
        }
    }

    glPushAttrib(GL_ENABLE_BIT | GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT |
                 GL_VIEWPORT_BIT | GL_TRANSFORM_BIT | GL_TEXTURE_BIT |
                 GL_SCISSOR_BIT | GL_CURRENT_BIT);
    glPushClientAttrib(GL_CLIENT_PIXEL_STORE_BIT);
    if (!g_tex) glGenTextures(1, &g_tex);
    if (g_tex_dirty && g_tex) {
        glBindTexture(GL_TEXTURE_2D, g_tex);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, g_sw, g_sh, 0,
                     GL_BGRA_EXT, GL_UNSIGNED_BYTE, g_pixels);
        g_tex_dirty = 0;
    }
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_CULL_FACE);
    glDisable(GL_BLEND);
    glDisable(GL_ALPHA_TEST);
    glDisable(GL_LIGHTING);
    glDisable(GL_FOG);
    glDisable(GL_SCISSOR_TEST);
    glDisable(GL_COLOR_LOGIC_OP);
    glColorMask(1, 1, 1, 1);
    glDepthMask(GL_FALSE);
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    glOrtho(0, platform_client_width(), 0, platform_client_height(), -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();
    draw_quad(r.left, platform_client_height() - r.bottom,
              r.right - r.left, r.bottom - r.top);
    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPopClientAttrib();
    glPopAttrib();
}

/* ------------------------------------------------------------------ */
/* Overlay state / navigation                                         */
/* ------------------------------------------------------------------ */

static void request_open(void)
{
    g_open_requested = 1;
}

int input_map_overlay_open(void)
{
    return g_open;
}

static void overlay_open(void)
{
    if (g_open) return;
    g_open_requested = 0;
    g_open = 1;
    g_selected = 0;
    g_col = 0;
    g_hover_row = -1;
    g_hover_col = -1;
    g_hover_done = g_hover_reset = g_hover_aa = 0;
    g_dirty = 1;
    create_surface(platform_client_width(), platform_client_height());
    menu_log("[overlay] open client=%dx%d surface=%dx%d", platform_client_width(), platform_client_height(), g_sw, g_sh);
    g_input_armed = 0;
    release_actions();
    menu_log("[overlay] opened");
}

static void overlay_close(void)
{
    if (!g_open) return;
    g_open = 0;
    if (g_capture) cancel_capture();
    release_actions();
    g_input_armed = 0;
    g_dirty = 1;
    destroy_surface();
    platform_cancel_mouse();
    menu_log("[overlay] closed");
}

void input_map_toggle(void)
{
    if (g_open) overlay_close();
    else request_open();
}

static int point_in(const RECT *r, int x, int y)
{
    return x >= r->left && x < r->right && y >= r->top && y < r->bottom;
}

static int hit_row(int x, int y, int *col)
{
    for (int i = 0; i < ACT_COUNT; i++) {
        if (point_in(&g_row[i], x, y)) {
            if (point_in(&g_cell_kb[i], x, y)) *col = 0;
            else if (point_in(&g_cell_pad[i], x, y)) *col = 1;
            else *col = -1;
            return i;
        }
    }
    return -1;
}

static void update_hover(int x, int y)
{
    int col = -1;
    int row = hit_row(x, y, &col);
    int done = point_in(&g_done, x, y);
    int reset = point_in(&g_reset, x, y);
    int aa = point_in(&g_aa_rect, x, y);
    if (row != g_hover_row || col != g_hover_col ||
        done != g_hover_done || reset != g_hover_reset || aa != g_hover_aa) {
        g_hover_row = row;
        g_hover_col = col;
        g_hover_done = done;
        g_hover_reset = reset;
        g_hover_aa = aa;
        g_dirty = 1;
    }
}

void input_map_pump(void)
{
    if (g_open_requested && !g_open) overlay_open();
    read_xinput();
    di_poll();

    if (g_open) {
        static int nav_up, nav_down, nav_left, nav_right, nav_a, nav_b;
        if (g_capture && g_cap_cat == 1) capture_poll();
        if (!g_capture) {
            int up = 0, down = 0, left = 0, right = 0, a = 0, b = 0;
            for (int i = 0; i < 4; i++) {
                if (!g_xok[i]) continue;
                const XINPUT_GAMEPAD *g = &g_xs[i].Gamepad;
                up |= (g->wButtons & XINPUT_GAMEPAD_DPAD_UP) != 0 || g->sThumbLY > 20000;
                down |= (g->wButtons & XINPUT_GAMEPAD_DPAD_DOWN) != 0 || g->sThumbLY < -20000;
                left |= (g->wButtons & XINPUT_GAMEPAD_DPAD_LEFT) != 0 || g->sThumbLX < -20000;
                right |= (g->wButtons & XINPUT_GAMEPAD_DPAD_RIGHT) != 0 || g->sThumbLX > 20000;
                a |= (g->wButtons & XINPUT_GAMEPAD_A) != 0;
                b |= (g->wButtons & (XINPUT_GAMEPAD_B | XINPUT_GAMEPAD_START)) != 0;
            }
            if (up && !nav_up) { if (--g_selected < 0) g_selected = ACT_COUNT - 1; g_dirty = 1; }
            if (down && !nav_down) { if (++g_selected >= ACT_COUNT) g_selected = 0; g_dirty = 1; }
            if (left && !nav_left) { g_col = 0; g_dirty = 1; }
            if (right && !nav_right) { g_col = 1; g_dirty = 1; }
            if (a && !nav_a) begin_capture(g_selected, g_col);
            if (b && !nav_b) overlay_close();
            nav_up = up; nav_down = down; nav_left = left; nav_right = right;
            nav_a = a; nav_b = b;
        }
        release_actions();
        return;
    }

    process_actions();
}

int input_map_handle_message(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp)
{
    int x, y, col = -1, row;
    (void)hwnd;

    if (msg == WM_KILLFOCUS) {
        release_actions();
        g_input_armed = 0;
        return 0;
    }
    if (!g_open) return 0;

    switch (msg) {
    case WM_KEYDOWN:
    case WM_SYSKEYDOWN:
        if (lp & (1 << 30)) return 1;
        if (g_capture) {
            if (wp == VK_ESCAPE) {
                cancel_capture();
            } else if (wp == VK_DELETE || wp == VK_BACK) {
                list_clear(&g_bind[g_cap_act][g_cap_cat]);
                save_config();
                g_capture = 0;
                g_input_armed = 0;
                g_dirty = 1;
            } else {
                Bind b;
                memset(&b, 0, sizeof(b));
                b.kind = KIND_KEY; b.slot = -1; b.code = (int)wp;
                g_cap_cat = 0;
                finish_capture(b);
            }
            return 1;
        }
        if (wp == VK_ESCAPE || wp == VK_F1) { overlay_close(); return 1; }
        if (wp == VK_UP) { if (--g_selected < 0) g_selected = ACT_COUNT - 1; g_dirty = 1; }
        else if (wp == VK_DOWN) { if (++g_selected >= ACT_COUNT) g_selected = 0; g_dirty = 1; }
        else if (wp == VK_LEFT) { g_col = 0; g_dirty = 1; }
        else if (wp == VK_RIGHT) { g_col = 1; g_dirty = 1; }
        else if (wp == VK_RETURN || wp == VK_SPACE) begin_capture(g_selected, g_col);
        else if (wp == VK_DELETE || wp == VK_BACK) {
            list_clear(&g_bind[g_selected][g_col]);
            save_config();
            g_dirty = 1;
        }
        return 1;
    case WM_KEYUP:
    case WM_SYSKEYUP:
    case WM_CHAR:
    case WM_SYSCHAR:
    case WM_MOUSEWHEEL:
        return 1;
    case WM_MOUSEMOVE:
        if (!g_capture) update_hover(GET_X_LPARAM(lp), GET_Y_LPARAM(lp));
        return 1;
    case WM_LBUTTONDOWN:
        x = GET_X_LPARAM(lp); y = GET_Y_LPARAM(lp);
        row = hit_row(x, y, &col);
        menu_log("[overlay] click %d,%d row=%d col=%d cap=%d", x, y, row, col, g_capture);
        if (g_capture) { cancel_capture(); return 1; }
        if (point_in(&g_done, x, y)) { overlay_close(); return 1; }
        if (point_in(&g_reset, x, y)) {
            defaults();
            save_config();
            g_dirty = 1;
            return 1;
        }
        if (point_in(&g_aa_rect, x, y)) {
            g_auto_accelerate = !g_auto_accelerate;
            platform_set_auto_accelerate(g_auto_accelerate);
            save_config();
            g_dirty = 1;
            return 1;
        }
        if (row >= 0) {
            g_selected = row;
            if (col < 0)
                col = (x >= g_cell_pad[row].left) ? 1 : 0;
            g_col = col;
            begin_capture(row, col);
            g_dirty = 1;
        }
        return 1;
    case WM_LBUTTONUP:
    case WM_RBUTTONDOWN:
    case WM_RBUTTONUP:
        return 1;
    default:
        return 0;
    }
}
