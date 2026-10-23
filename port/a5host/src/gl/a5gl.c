// a5gl.c - GLES1 -> desktop OpenGL bridge (Win32 + WGL), C port of a5gl.py.
// Client arrays are copied out of the emulated ARM memory at draw time;
// PVRTC/paletted/16-bit textures are decoded/converted before upload.
#include "a5gl.h"
#include "pvrtc.h"
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdarg.h>
#include <time.h>

#define GL_TEXTURE_2D 0x0DE1
#define GL_TEXTURE0 0x84C0
#define GL_VERTEX_ARRAY 0x8074
#define GL_NORMAL_ARRAY 0x8075
#define GL_COLOR_ARRAY 0x8076
#define GL_TEXTURE_COORD_ARRAY 0x8078
#define GL_FLOAT 0x1406
#define GL_BYTE 0x1400
#define GL_UNSIGNED_BYTE 0x1401
#define GL_SHORT 0x1402
#define GL_UNSIGNED_SHORT 0x1403
#define GL_FIXED 0x140C
#define GL_UNSIGNED_SHORT_4_4_4_4 0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1 0x8034
#define GL_UNSIGNED_SHORT_5_6_5 0x8363
#define GL_RGB 0x1907
#define GL_RGBA 0x1908
#define GL_ALPHA 0x1906
#define GL_LUMINANCE 0x1909
#define GL_LUMINANCE_ALPHA 0x190A
#define GL_COMPRESSED_RGB_PVRTC_4BPPV1 0x8C00
#define GL_COMPRESSED_RGB_PVRTC_2BPPV1 0x8C01
#define GL_COMPRESSED_RGBA_PVRTC_4BPPV1 0x8C02
#define GL_COMPRESSED_RGBA_PVRTC_2BPPV1 0x8C03
#define GL_PALETTE4_RGB8 0x8B90
#define GL_PALETTE4_RGBA8 0x8B91
#define GL_PALETTE4_R5_G6_B5 0x8B92
#define GL_PALETTE4_RGBA4 0x8B93
#define GL_PALETTE4_RGB5_A1 0x8B94
#define GL_PALETTE8_RGB8 0x8B95
#define GL_PALETTE8_RGBA8 0x8B96
#define GL_PALETTE8_R5_G6_B5 0x8B97
#define GL_PALETTE8_RGBA4 0x8B98
#define GL_PALETTE8_RGB5_A1 0x8B99

#define GL_SCRATCH 0x40030000u

static uc_engine* GL_UC = NULL;
static int GL_DEBUG = 0;

// ---------------------------------------------------------------- GL load
static HMODULE gl_dll;
static HGLRC (*wglCreateContext_f)(HDC);
static BOOL (*wglMakeCurrent_f)(HDC, HGLRC);
static PROC (*wglGetProcAddress_f)(LPCSTR);

typedef struct {
    const char* name;
    const char* spec;   // i=int f=float p=pointer
    void* fn;
} GLFunc;
static GLFunc glf[96];
static int glf_count = 0;

static void* gl_load(const char* name) {
    void* f = (void*)GetProcAddress(gl_dll, name);
    if (!f) f = (void*)wglGetProcAddress_f(name);
    return f;
}

static void gl_add(const char* name, const char* spec) {
    void* f = gl_load(name);
    if (f) {
        glf[glf_count].name = name;
        glf[glf_count].spec = spec;
        glf[glf_count].fn = f;
        glf_count++;
    }
}

static GLFunc* gl_find(const char* name) {
    for (int i = 0; i < glf_count; i++)
        if (strcmp(glf[i].name, name) == 0) return &glf[i];
    return NULL;
}

// ---------------------------------------------------------------- window
static HWND hwnd; static HDC hdc; static HGLRC hglrc;
static int win_w, win_h;
// The engine's UI/layout coordinate space.  The window can be larger; the
// viewport/scissor bridge scales between the two, preserving the 854x480 UI
// layout while rasterizing at the real window resolution.
static int gl_logical_w = 854, gl_logical_h = 480;
// Level-0 texture upload scale.  At 1080p this is 1920/854 ~= 2.25: UI atlases
// and 3D textures are resampled so their texel density matches the frame.
static float gl_tex_scale = 1.0f;
static volatile LONG win_closed = 0;
// The window and its message queue live on a dedicated UI thread.  The main
// thread runs the engine/GL; that way Windows keeps the window responsive
// (drag/close/title) even while a long loading step occupies the emulator.
static HANDLE ui_thread = NULL;
static volatile LONG ui_ready = 0;
static int ui_w = 0, ui_h = 0, ui_hidden = 0;
static char ui_title[256] = "Asphalt 5";

// ---------------------------------------------------------------- input
typedef struct { int type; int x, y; } InputEvent;  // type: 0=down 1=up 2=move
static InputEvent inq[256]; static int inq_head = 0, inq_tail = 0;
static int mouse_down = 0;
static int last_mx = 0, last_my = 0;
static CRITICAL_SECTION inq_cs;
static int inq_cs_ready = 0;

static void push_input(int type, int x, int y) {
    if (inq_cs_ready) EnterCriticalSection(&inq_cs);
    int next = (inq_tail + 1) % 256;
    if (next != inq_head) {
        inq[inq_tail].type = type; inq[inq_tail].x = x; inq[inq_tail].y = y;
        inq_tail = next;
    }
    if (inq_cs_ready) LeaveCriticalSection(&inq_cs);
}

void a5gl_client_size(int* w, int* h) { *w = win_w; *h = win_h; }

// Service the window message queue between emulator slices of a long load
// call.  Without this the OS marks the window "Not Responding" while the
// engine decodes textures, even though the game is making progress.
void a5gl_pump(void) {
    // The window has its own message-pump thread now; nothing to do here.
}

void a5gl_set_title_progress(int pct) {
    if (!hwnd) return;
    if (pct < 0) { SetWindowTextA(hwnd, ui_title); return; }
    wchar_t buf[128];
    swprintf(buf, 128, L"Asphalt 5 - loading %d%%", pct);
    SetWindowTextW(hwnd, buf);
}

void a5gl_set_title_text(const char* s) {
    if (hwnd && s) SetWindowTextA(hwnd, s);
}

// Host-side pause overlay: drawn with GDI over the frozen GL frame.
void a5gl_pause_overlay(int on) {
    if (!hwnd) return;
    HDC dc = GetDC(hwnd);
    if (on) {
        RECT rc; GetClientRect(hwnd, &rc);
        HBRUSH b = CreateSolidBrush(RGB(0, 0, 0));
        FillRect(dc, &rc, b);
        DeleteObject(b);
        SetBkMode(dc, TRANSPARENT);
        SetTextColor(dc, RGB(255, 255, 255));
        HFONT f = CreateFontA(56, 0, 0, 0, FW_BOLD, 0, 0, 0, ANSI_CHARSET, 0, 0, 0, 0, "Arial");
        HFONT old = (HFONT)SelectObject(dc, f);
        RECT r1 = rc;
        DrawTextA(dc, "PAUSED", -1, &r1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        HFONT f2 = CreateFontA(20, 0, 0, 0, FW_NORMAL, 0, 0, 0, ANSI_CHARSET, 0, 0, 0, 0, "Arial");
        SelectObject(dc, f2);
        RECT r2 = rc; r2.top += 110;
        DrawTextA(dc, "Esc or click to resume", -1, &r2, DT_CENTER | DT_TOP | DT_SINGLELINE);
        SelectObject(dc, old);
        DeleteObject(f);
        DeleteObject(f2);
    }
    ReleaseDC(hwnd, dc);
}

int a5gl_poll_input(int* type, int* x, int* y) {
    if (inq_cs_ready) EnterCriticalSection(&inq_cs);
    int have = (inq_head != inq_tail);
    if (have) {
        *type = inq[inq_head].type; *x = inq[inq_head].x; *y = inq[inq_head].y;
        inq_head = (inq_head + 1) % 256;
    }
    if (inq_cs_ready) LeaveCriticalSection(&inq_cs);
    return have;
}

static LRESULT CALLBACK wndproc(HWND h, UINT m, WPARAM w, LPARAM l) {
    if (m == WM_CLOSE || m == WM_DESTROY) { win_closed = 1; return 0; }
    // GL owns the client area; GDI must not paint over it (the UI thread now
    // pumps these messages while the main thread renders).
    if (m == WM_ERASEBKGND) return 1;
    if (m == WM_PAINT) { PAINTSTRUCT ps; BeginPaint(h, &ps); EndPaint(h, &ps); return 0; }
    // capture the mouse while a touch is down so a release outside the window
    // is still delivered (otherwise the engine's touch stays stuck down)
    if (m == WM_LBUTTONDOWN) {
        SetCapture(h);
        mouse_down = 1;
        last_mx = (int)(short)LOWORD(l); last_my = (int)(short)HIWORD(l);
        push_input(0, last_mx, last_my);
        return 0;
    }
    if (m == WM_LBUTTONUP) {
        ReleaseCapture();
        mouse_down = 0;
        push_input(1, (int)(short)LOWORD(l), (int)(short)HIWORD(l));
        return 0;
    }
    // Only forward REAL movement: Windows sends spurious WM_MOUSEMOVE events
    // (button-down jitter, capture changes) and every one of them was injected
    // as a touch-move - the engine re-processed them as extra taps (the
    // "it keeps tapping itself" bug).
    if (m == WM_MOUSEMOVE && mouse_down) {
        int mx = (int)(short)LOWORD(l), my = (int)(short)HIWORD(l);
        if (mx != last_mx || my != last_my) {
            last_mx = mx; last_my = my;
            push_input(2, mx, my);
        }
        return 0;
    }
    // Losing focus/capture while the button is down used to leave the engine's
    // touch stuck down (it then saw a held finger forever).  Release it.
    if ((m == WM_KILLFOCUS || m == WM_CAPTURECHANGED) && mouse_down) {
        mouse_down = 0;
        push_input(1, last_mx, last_my);
        return 0;
    }
    return DefWindowProcW(h, m, w, l);
}

static DWORD WINAPI ui_thread_proc(LPVOID param) {
    (void)param;
    HINSTANCE hi = GetModuleHandleW(NULL);
    WNDCLASSEXW wc; memset(&wc, 0, sizeof(wc));
    wc.cbSize = sizeof(wc);
    wc.lpfnWndProc = wndproc;
    wc.hInstance = hi;
    wc.hCursor = LoadCursorW(NULL, (LPCWSTR)32512);
    wc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wc.lpszClassName = L"a5hostGL";
    if (!RegisterClassExW(&wc)) {
        fprintf(stderr, "a5gl: RegisterClass failed\n");
        ui_ready = 1;
        return 1;
    }
    wchar_t wtitle[256];
    MultiByteToWideChar(CP_UTF8, 0, ui_title, -1, wtitle, 256);
    int dw = GetSystemMetrics(SM_CXSCREEN);
    int dh = GetSystemMetrics(SM_CYSCREEN);
    int borderless = !ui_hidden && !getenv("A5_WINDOWED") &&
                     (getenv("A5_BORDERLESS") || (ui_w >= dw && ui_h >= dh));
    RECT wr = {0, 0, ui_w, ui_h};
    DWORD style = (ui_hidden || borderless) ? WS_POPUP : WS_OVERLAPPEDWINDOW;
    if (!ui_hidden && !borderless) AdjustWindowRect(&wr, style, FALSE);
    hwnd = CreateWindowExW(0, L"a5hostGL", wtitle, style,
                           ui_hidden ? -4000 : 0, ui_hidden ? -4000 : 0,
                           wr.right - wr.left, wr.bottom - wr.top, NULL, NULL, hi, NULL);
    if (!hwnd) {
        fprintf(stderr, "a5gl: CreateWindow failed\n");
        ui_ready = 1;
        return 1;
    }
    if (!ui_hidden) {
        ShowWindow(hwnd, getenv("A5BOOT_SHOW") ? SW_SHOWNOACTIVATE : SW_SHOW);
        UpdateWindow(hwnd);
    }
    ui_ready = 1;
    // This thread owns the window: it keeps servicing input/paint/close while
    // the main thread is busy inside a long engine call (loading screen).
    MSG msg;
    while (!win_closed && GetMessageW(&msg, NULL, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }
    return 0;
}

int a5gl_init(uc_engine* uc, int w, int h,
              int logical_w, int logical_h, const char* title) {
    if (ucapi_load() != 0) return -1;
    g_uc = uc;          // this TU's copy of the header's engine handle
    GL_UC = uc;
    win_w = w; win_h = h;
    gl_logical_w = logical_w > 0 ? logical_w : w;
    gl_logical_h = logical_h > 0 ? logical_h : h;
    // Texture density follows the smaller axis ratio (preserves aspect for
    // non-16:9 windows).  A5_TEXSCALE=off/1..4 overrides.
    {
        float ts = 1.0f;
        const char* tse = getenv("A5_TEXSCALE");
        if (tse && (!strcmp(tse, "off") || !strcmp(tse, "0"))) {
            ts = 1.0f;
        } else if (tse && strcmp(tse, "auto") != 0) {
            ts = (float)atof(tse);
        } else if (win_w > 0 && win_h > 0 && gl_logical_w > 0 && gl_logical_h > 0) {
            float fx = (float)win_w / (float)gl_logical_w;
            float fy = (float)win_h / (float)gl_logical_h;
            ts = fx < fy ? fx : fy;
        }
        if (ts < 1.0f) ts = 1.0f;
        if (ts > 4.0f) ts = 4.0f;
        gl_tex_scale = ts;
        printf("[gl] texture scale %.3fx\n", gl_tex_scale);
    }
    GL_DEBUG = getenv("A5GL_DEBUG") != NULL;

    // The window is created and pumped on a dedicated UI thread; the main
    // thread keeps the GL context and runs the engine.  The OS therefore never
    // considers the window hung, even during a multi-second loading step.
    ui_w = w; ui_h = h;
    ui_hidden = getenv("A5BOOT_HIDDEN") != NULL;
    snprintf(ui_title, sizeof(ui_title), "%s", title);
    if (!inq_cs_ready) { InitializeCriticalSection(&inq_cs); inq_cs_ready = 1; }
    ui_thread = CreateThread(NULL, 0, ui_thread_proc, NULL, 0, NULL);
    for (int i = 0; i < 500 && !ui_ready; i++) Sleep(10);
    if (!hwnd) { fprintf(stderr, "a5gl: window thread failed\n"); return -1; }
    hdc = GetDC(hwnd);

    PIXELFORMATDESCRIPTOR pfd; memset(&pfd, 0, sizeof(pfd));
    pfd.nSize = sizeof(pfd); pfd.nVersion = 1;
    pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;
    pfd.cColorBits = 32; pfd.cDepthBits = 24; pfd.cStencilBits = 8;
    int pf = ChoosePixelFormat(hdc, &pfd);
    if (!SetPixelFormat(hdc, pf, &pfd)) { fprintf(stderr, "a5gl: SetPixelFormat failed\n"); return -1; }

    gl_dll = LoadLibraryA("opengl32.dll");
    wglCreateContext_f = (HGLRC(*)(HDC))GetProcAddress(gl_dll, "wglCreateContext");
    wglMakeCurrent_f = (BOOL(*)(HDC,HGLRC))GetProcAddress(gl_dll, "wglMakeCurrent");
    wglGetProcAddress_f = (PROC(*)(LPCSTR))GetProcAddress(gl_dll, "wglGetProcAddress");
    hglrc = wglCreateContext_f(hdc);
    if (!hglrc || !wglMakeCurrent_f(hdc, hglrc)) { fprintf(stderr, "a5gl: context failed\n"); return -1; }

    // function table (GLES1 imports)
    gl_add("glActiveTexture", "i");
    gl_add("glAlphaFunc", "if");
    gl_add("glBindBuffer", "ii");
    gl_add("glBindTexture", "ii");
    gl_add("glBlendFunc", "ii");
    gl_add("glClear", "i");
    gl_add("glClearColor", "ffff");
    gl_add("glClearDepthf", "f");
    gl_add("glClientActiveTexture", "i");
    gl_add("glColor4f", "ffff");
    gl_add("glColor4ub", "iiii");
    gl_add("glColorMask", "iiii");
    gl_add("glColorPointer", "iiip");
    gl_add("glCompressedTexImage2D", "iiiiiiip");
    gl_add("glCopyTexImage2D", "iiiiiii");
    gl_add("glCullFace", "i");
    gl_add("glCurrentPaletteMatrixOES", "i");
    gl_add("glDeleteTextures", "ip");
    gl_add("glDepthFunc", "i");
    gl_add("glDepthMask", "i");
    gl_add("glDisable", "i");
    gl_add("glDisableClientState", "i");
    gl_add("glDrawArrays", "iii");
    gl_add("glDrawElements", "iiip");
    gl_add("glEnable", "i");
    gl_add("glEnableClientState", "i");
    gl_add("glFinish", "");
    gl_add("glFogf", "if");
    gl_add("glFogfv", "ip");
    gl_add("glFrontFace", "i");
    gl_add("glGenTextures", "ip");
    gl_add("glGetError", "");
    gl_add("glGetFloatv", "ip");
    gl_add("glGetString", "i");
    gl_add("glHint", "ii");
    gl_add("glLightModelfv", "ip");
    gl_add("glLightf", "iif");
    gl_add("glLightfv", "iip");
    gl_add("glLoadIdentity", "");
    gl_add("glLoadMatrixf", "p");
    gl_add("glMaterialf", "iif");
    gl_add("glMaterialfv", "iip");
    gl_add("glMatrixIndexPointerOES", "iiip");
    gl_add("glMatrixMode", "i");
    gl_add("glNormalPointer", "iip");
    gl_add("glPixelStorei", "ii");
    gl_add("glPopMatrix", "");
    gl_add("glPushMatrix", "");
    gl_add("glRotatef", "ffff");
    gl_add("glScissor", "iiii");
    gl_add("glShadeModel", "i");
    gl_add("glTexCoordPointer", "iiip");
    gl_add("glTexEnvfv", "iip");
    gl_add("glTexEnvi", "iii");
    gl_add("glTexImage2D", "iiiiiiiip");
    gl_add("glTexParameterf", "iif");
    gl_add("glTexParameteri", "iii");
    gl_add("glTexSubImage2D", "iiiiiiiip");
    gl_add("glTranslatef", "fff");
    gl_add("glVertexPointer", "iiip");
    gl_add("glViewport", "iiii");
    gl_add("glWeightPointerOES", "iiip");

    // real renderer string
    {
        typedef const char* (*gs_t)(unsigned);
        gs_t gs = (gs_t)gl_load("glGetString");
        if (gs) {
            const char* r = gs(0x1F01); const char* v = gs(0x1F02);
            printf("[gl] real renderer: %s | version: %s\n", r ? r : "?", v ? v : "?");
        }
    }
    // minimal texture bind sanity test
    {
        typedef void (*gt_t)(int, unsigned*);
        typedef void (*bt_t)(unsigned, unsigned);
        typedef void (*gi_t)(unsigned, int*);
        gt_t gt = (gt_t)gl_load("glGenTextures");
        bt_t bt = (bt_t)gl_load("glBindTexture");
        gi_t gi = (gi_t)gl_load("glGetIntegerv");
        unsigned id = 0;
        gt(1, &id);
        bt(0x0DE1, id);
        int b = -1; gi(0x8069, &b);  // GL_TEXTURE_BINDING_2D
        unsigned e = ((unsigned(*)())gl_load("glGetError"))();
        printf("[gl] sanity: glGenTextures -> %u, bind -> binding=%d err=%#x\n", id, b, e);
    }
    printf("[gl] window %dx%d, %d GL entry points\n", w, h, glf_count);
    return 0;
}

// ---------------------------------------------------------------- state
static int server_unit = GL_TEXTURE0;
static int client_unit = 0;
static unsigned enabled_arrays = 0;  // bitmask by GL enum value hashed below

static int arr_enabled(int e) { return (enabled_arrays >> (e & 31)) & 1; }
static void arr_set(int e, int on) {
    if (on) enabled_arrays |= (1u << (e & 31));
    else enabled_arrays &= ~(1u << (e & 31));
}

typedef struct { int size, type, stride; uint32_t ptr; } ArrSpec;
static ArrSpec varr, narr, carr;
static ArrSpec tarr[4];  // per client unit
static int tarr_valid[4];
static int tc_enabled[4];  // GLES1: texcoord array enable is per client texture unit
static int ui_post_probe = 0;
static int ui_post_text = 0;
static int ui_tc_debug = 0;
static int gl_matrix_mode = 0;

// ---- real-GL state shadow: skip driver state calls that change nothing ----
// The engine is very chatty (~1.2k GL calls per frame) and most state calls
// are redundant; the driver-side call costs several microseconds each.
static int srv_unit_real = -1;                 // unit last sent to the driver
static int mmode_real = -1;                    // matrix mode last sent
static unsigned caps_real = 0;                 // enabled caps (bit per cap id)
static const unsigned cap_ids[32] = {
    0x0B44, 0x0B71, 0x0BE2, 0x0DE1, 0x0BC0, 0x0B60, 0x0B50, 0x4000, // cull/depth/blend/tex2d/alpha/fog/lighting/light0
    0x4001, 0x4002, 0x4003, 0x4004, 0x4005, 0x4006, 0x4007,          // light1..7
    0x0C11, 0x0BA1, 0x0B57, 0x3000, 0x3001, 0x3002, 0x3003,          // scissor/normalize/colmat/clip0..3
    0x3004, 0x3005, 0x8037, 0x0B90, 0x0BD0, 0x809E, 0x0B70, 0x0BF2,  // clip4..5/polyoffset/stencil/dither/samplealpha/...
};
static int cap_bit(unsigned cap) {
    for (int i = 0; i < 32; i++) if (cap_ids[i] == cap) return i;
    return -1;
}
static unsigned bound_tex_real[4] = {0, 0, 0, 0};   // per server unit (GL_TEXTURE_2D)
static unsigned blend_src_real = 0x1, blend_dst_real = 0x0;   // GL_ONE, GL_ZERO

// precise wall-time profiling (A5_PROF=1)
static long long qpc_freq_gl = 0;
static inline long long qpc_gl(void) {
    LARGE_INTEGER t; QueryPerformanceCounter(&t); return t.QuadPart;
}

#define MAX_KEEP 32
static void* keep[MAX_KEEP]; static int keep_n = 0;
static void keep_add(void* p) { if (keep_n < MAX_KEEP) keep[keep_n++] = p; }
static void keep_flush(void) { for (int i = 0; i < keep_n; i++) free(keep[i]); keep_n = 0; }

// texture id map
static struct { uint32_t emu; unsigned real; } texmap[512];
static int texmap_n = 0;
static uint32_t tex_next = 1;
static unsigned last_bound_real = 0;
static uint32_t last_bound_emu = 0;

// The installer UI and the movie player draw with raw GL, outside this
// bridge's state tracking. Reset the shadow to the state they leave behind
// (texture 2D on unit 0, blend/depth/scissor off, modelview) so the engine's
// next state calls are issued instead of skipped.
void a5gl_state_invalidate(void) {
    srv_unit_real = GL_TEXTURE0;
    mmode_real = 0x1700;                // GL_MODELVIEW
    client_unit = 0;
    caps_real = 0;
    int b = cap_bit(0x0DE1);            // GL_TEXTURE_2D enabled
    if (b >= 0) caps_real |= (1u << b);
    for (int i = 0; i < 4; i++) bound_tex_real[i] = 0xFFFFFFFFu;  // force the next bind
    last_bound_real = 0xFFFFFFFFu;
    last_bound_emu = 0;
}

// Restore the REAL GL state to what the engine's cache believes it is.  Used
// after an in-game movie (raw GL) instead of invalidating: the engine keeps its
// own state cache across the movie, so resetting the shadow made it skip
// glEnable(GL_BLEND) and UI text drew as white quads.
void a5gl_state_restore(void) {
    if (!hwnd) return;
    typedef void (*e_t)(unsigned);
    e_t en = (e_t)gl_load("glEnable");
    e_t dis = (e_t)gl_load("glDisable");
    if (en && dis) {
        for (int i = 0; i < 32; i++) {
            if (!cap_ids[i]) continue;
            if (caps_real & (1u << i)) en(cap_ids[i]);
            else dis(cap_ids[i]);
        }
    }
    void (*bf)(unsigned, unsigned) = (void(*)(unsigned, unsigned))gl_load("glBlendFunc");
    if (bf) bf(blend_src_real, blend_dst_real);
    for (int i = 0; i < 4; i++) bound_tex_real[i] = 0xFFFFFFFFu;  // movie bound 0
    last_bound_real = 0xFFFFFFFFu;
    mmode_real = -1;        // movie changed the matrix mode; force the next call
    srv_unit_real = -1;     // active texture unit may have changed
}

// scratch allocator for glGetString
static uint32_t scratch_next = GL_SCRATCH;
static uint32_t alloc_str(const char* s) {
    uint32_t p = scratch_next;
    size_t n = strlen(s) + 1;
    p_uc_mem_write(GL_UC, p, s, n);
    scratch_next = (uint32_t)((scratch_next + n + 7) & ~7u);
    return p;
}

// ---------------------------------------------------------------- helpers
static void read_mem(uint32_t addr, void* out, size_t n) {
    if (a5gl_mem_direct) {
        uint8_t* p = a5gl_mem_direct(addr);
        if (p) { memcpy(out, p, n); return; }
    }
    if (p_uc_mem_read(GL_UC, addr, out, n) != 0) memset(out, 0, n);
}
uint8_t* (*a5gl_mem_direct)(uint64_t addr) = NULL;
int a5gl_ui_dump_frame = -1;
static int ui_frame = 0;
static float uf32m(uint32_t a);
static uint16_t ur16m(uint32_t a);
void a5gl_set_frame(int f) { ui_frame = f; }
// recent-call ring buffer for debugging UI state sequences
#define CALLRING 48
static char callring[CALLRING][128];
static int callring_n = 0;
static void callring_add(const char* fmt, ...) {
    char buf[128];
    va_list ap; va_start(ap, fmt);
    vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);
    strncpy(callring[callring_n % CALLRING], buf, 127);
    callring[callring_n % CALLRING][127] = 0;
    callring_n++;
}
static void callring_dump(const char* tag) {
    printf("[ring:%s] dumping last %d calls:\n", tag, callring_n < CALLRING ? callring_n : CALLRING);
    int start = callring_n > CALLRING ? callring_n - CALLRING : 0;
    for (int i = start; i < callring_n; i++)
        printf("[ring] %s\n", callring[i % CALLRING]);
}

// ---- crash diagnostics: ring of the last GL calls (name + raw args) ----
#define GLRING 24
uint32_t g_glring[GLRING][9];
const char* g_glring_name[GLRING];
int g_glring_n = 0;
static void glring_add(const char* name, const uint32_t* raw) {
    int i = g_glring_n % GLRING;
    g_glring_name[i] = name;
    for (int k = 0; k < 9; k++) g_glring[i][k] = raw[k];
    g_glring_n++;
}
void a5gl_ring_dump(void) {
    int cnt = g_glring_n < GLRING ? g_glring_n : GLRING;
    printf("[glring] last %d GL calls:\n", cnt);
    int start = g_glring_n > GLRING ? g_glring_n - GLRING : 0;
    for (int i = start; i < g_glring_n; i++) {
        const uint32_t* a = g_glring[i % GLRING];
        printf("[glring] %s(%08x %08x %08x %08x %08x %08x %08x %08x %08x)\n",
               g_glring_name[i % GLRING] ? g_glring_name[i % GLRING] : "?",
               a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8]);
    }
}
#include "ui.inc"

static float uf32m(uint32_t a) { float v = 0; read_mem(a, &v, 4); return v; }
static uint16_t ur16m(uint32_t a) { uint16_t v = 0; read_mem(a, &v, 2); return v; }

typedef struct { void* buf; int size, type, stride; size_t nbytes; } CopyResult;

// Bump arena for the client-array copies (reset at each bind_arrays). It is
// allocated ONCE and never moved: the GL keeps the client-array pointers and
// the driver may read them until the next draw, so the memory must stay put.
static unsigned char* scratch = NULL;
static size_t scratch_cap = 0, scratch_used = 0;
static void* scratch_alloc(size_t n) {
    n = (n + 15) & ~(size_t)15;
    if (!scratch) {
        scratch_cap = (size_t)(16 << 20);
        scratch = (unsigned char*)malloc(scratch_cap);
        if (!scratch) scratch_cap = 0;
    }
    if (!scratch || scratch_used + n > scratch_cap)
        return malloc(n ? n : 16);   // oversized: per-array malloc (rare)
    void* p = scratch + scratch_used;
    scratch_used += n;
    return p;
}

// Vertex remap for indexed draws: the engine's indices point into big shared
// vertex buffers (maxidx ~20k for ~300-vertex draws), so a dense remap lets
// every array be gathered tight (the old span copy cost ~150us per draw).
static uint32_t* vmap_tab = NULL;      // vertex -> dense index
static uint32_t* vgen_tab = NULL;      // generation stamps (avoids clearing)
static uint32_t vmap_cap = 0, vmap_gen = 0;
static unsigned char* remap_ib = NULL; // dense index list (same element type)
static size_t remap_ib_cap = 0;

// Copy the client array into a tight host buffer. ib selects the source
// indices (NULL = `first` consecutive vertices); dib selects the destination
// record for each element (NULL = same as the source position); the output
// holds nv records.
static CopyResult copy_array(ArrSpec s, const unsigned char* ib, const unsigned char* dib,
                             int isz, int count, int first, int nv) {
    CopyResult r; r.size = s.size; r.type = s.type; r.stride = 0; r.buf = NULL; r.nbytes = 0;
    if (count <= 0 || nv <= 0) return r;
    int esz = 4;
    switch (s.type) {
        case GL_BYTE: case GL_UNSIGNED_BYTE: esz = 1; break;
        case GL_SHORT: case GL_UNSIGNED_SHORT: esz = 2; break;
        default: esz = 4; break;
    }
    int stride = s.stride ? s.stride : s.size * esz;
    #define SINDEX(i) (ib ? ((isz == 2) ? ((const unsigned short*)ib)[i] : ib[i]) : (first + (i)))
    #define DINDEX(i) (dib ? ((isz == 2) ? ((const unsigned short*)dib)[i] : dib[i]) : (i))
    if (s.type == GL_FIXED) {
        float* out = (float*)scratch_alloc((size_t)nv * s.size * 4);
        unsigned char raw[64];
        for (int i = 0; i < count; i++) {
            read_mem(s.ptr + (uint32_t)SINDEX(i) * stride, raw, s.size * 4);
            const int* v = (const int*)raw;
            float* dst = out + (size_t)DINDEX(i) * s.size;
            for (int k = 0; k < s.size; k++) dst[k] = (float)v[k] / 65536.0f;
        }
        r.buf = out; r.type = GL_FLOAT; r.nbytes = (size_t)nv * s.size * 4;
        return r;
    }
    int rec = s.size * esz;
    size_t out_span = (size_t)nv * rec;
    unsigned char* tight = (unsigned char*)scratch_alloc(out_span ? out_span : 4);
    const uint8_t* base = a5gl_mem_direct ? a5gl_mem_direct(s.ptr) : NULL;
    if (base && !ib) {
        memcpy(tight, base + (size_t)first * stride, out_span);   // consecutive
    } else if (base) {
        // destination record: the remap when given, else the value-indexed order
        #define DSTIDX(i) (dib ? DINDEX(i) : SINDEX(i))
        switch (rec) {
        case 4:
            for (int i = 0; i < count; i++)
                *(uint32_t*)(tight + (size_t)DSTIDX(i) * 4) = *(const uint32_t*)(base + (size_t)SINDEX(i) * stride);
            break;
        case 8:
            for (int i = 0; i < count; i++) {
                const uint32_t* src = (const uint32_t*)(base + (size_t)SINDEX(i) * stride);
                uint32_t* dst = (uint32_t*)(tight + (size_t)DSTIDX(i) * 8);
                dst[0] = src[0]; dst[1] = src[1];
            }
            break;
        case 12:
            for (int i = 0; i < count; i++) {
                const uint32_t* src = (const uint32_t*)(base + (size_t)SINDEX(i) * stride);
                uint32_t* dst = (uint32_t*)(tight + (size_t)DSTIDX(i) * 12);
                dst[0] = src[0]; dst[1] = src[1]; dst[2] = src[2];
            }
            break;
        case 16:
            for (int i = 0; i < count; i++) {
                const uint32_t* src = (const uint32_t*)(base + (size_t)SINDEX(i) * stride);
                uint32_t* dst = (uint32_t*)(tight + (size_t)DSTIDX(i) * 16);
                dst[0] = src[0]; dst[1] = src[1]; dst[2] = src[2]; dst[3] = src[3];
            }
            break;
        case 2:
            for (int i = 0; i < count; i++)
                *(uint16_t*)(tight + (size_t)DSTIDX(i) * 2) = *(const uint16_t*)(base + (size_t)SINDEX(i) * stride);
            break;
        default:
            for (int i = 0; i < count; i++)
                memcpy(tight + (size_t)DSTIDX(i) * rec, base + (size_t)SINDEX(i) * stride, rec);
            break;
        }
        #undef DSTIDX
    } else {
        for (int i = 0; i < count; i++)
            read_mem(s.ptr + (uint32_t)SINDEX(i) * stride, tight + (size_t)(dib ? DINDEX(i) : SINDEX(i)) * rec, rec);
    }
    #undef SINDEX
    #undef DINDEX
    r.buf = tight; r.nbytes = out_span;
    return r;
}

// cached GL entry points for the per-draw path (was ~10 string searches/draw)
typedef struct {
    void (*VertexPointer)(int,int,int,const void*);
    void (*NormalPointer)(int,int,const void*);
    void (*ColorPointer)(int,int,int,const void*);
    void (*TexCoordPointer)(int,int,int,const void*);
    void (*EnableCS)(unsigned);
    void (*DisableCS)(unsigned);
    void (*ClientActiveTexture)(int);
    void (*BindBuffer)(unsigned,unsigned);
    int ready;
} BindFns;
static BindFns bf;
static void bind_fns_init(void) {
    if (bf.ready) return;
    GLFunc* f;
    f = gl_find("glVertexPointer");     bf.VertexPointer = f ? (void(*)(int,int,int,const void*))f->fn : NULL;
    f = gl_find("glNormalPointer");     bf.NormalPointer = f ? (void(*)(int,int,const void*))f->fn : NULL;
    f = gl_find("glColorPointer");      bf.ColorPointer = f ? (void(*)(int,int,int,const void*))f->fn : NULL;
    f = gl_find("glTexCoordPointer");   bf.TexCoordPointer = f ? (void(*)(int,int,int,const void*))f->fn : NULL;
    f = gl_find("glEnableClientState"); bf.EnableCS = f ? (void(*)(unsigned))f->fn : NULL;
    f = gl_find("glDisableClientState");bf.DisableCS = f ? (void(*)(unsigned))f->fn : NULL;
    f = gl_find("glClientActiveTexture");bf.ClientActiveTexture = f ? (void(*)(int))f->fn : NULL;
    f = gl_find("glBindBuffer");        bf.BindBuffer = f ? (void(*)(unsigned,unsigned))f->fn : NULL;
    bf.ready = 1;
}

// Streamed VBOs for the per-draw arrays. The AMD driver's client-array path is
// its slow path (~127us per glDrawElements measured here); uploading into a
// streamed VBO once per draw takes the driver's fast path. A5_NO_VBO=1 falls
// back to the client-array path.
static unsigned vbo_arr = 0, vbo_idx = 0;
static void (*vbo_BindBuffer)(unsigned, unsigned) = NULL;
static void (*vbo_BufferData)(unsigned, size_t, const void*, unsigned) = NULL;
static void (*vbo_BufferSubData)(unsigned, size_t, size_t, const void*) = NULL;
static void (*vbo_GenBuffers)(int, unsigned*) = NULL;
static int vbo_ok = 0;
static void vbo_init(void) {
    if (vbo_BindBuffer) return;
    vbo_BindBuffer = (void(*)(unsigned,unsigned))gl_load("glBindBuffer");
    vbo_BufferData = (void(*)(unsigned,size_t,const void*,unsigned))gl_load("glBufferData");
    vbo_BufferSubData = (void(*)(unsigned,size_t,size_t,const void*))gl_load("glBufferSubData");
    vbo_GenBuffers = (void(*)(int,unsigned*))gl_load("glGenBuffers");
    vbo_ok = vbo_BindBuffer && vbo_BufferData && vbo_BufferSubData && vbo_GenBuffers &&
             !getenv("A5_NO_VBO");
}

static void bind_arrays(const unsigned char* ib, const unsigned char* dib, int isz,
                        int count, int first, int nv) {
    bind_fns_init();
    keep_flush();
    scratch_used = 0;   // reset the arena too
    vbo_init();
    if (vbo_ok) {
        if (!vbo_arr) vbo_GenBuffers(1, &vbo_arr);
        vbo_BindBuffer(0x8892, vbo_arr);   // GL_ARRAY_BUFFER
    } else if (bf.BindBuffer && !getenv("A5_NO_VBO_RESET")) {
        // client-array path: make sure no VBO is bound (the pointers would be
        // interpreted as byte offsets into the buffer instead of pointers)
        bf.BindBuffer(0x8892, 0);  // GL_ARRAY_BUFFER
        bf.BindBuffer(0x8893, 0);  // GL_ELEMENT_ARRAY_BUFFER
    }
    // collect the arrays (gather the used vertices to host memory) in a fixed order
    struct { CopyResult c; int kind, unit; } A[8];
    int na = 0, has_v = 0, has_n = 0, has_c = 0, ntc = 0;
    if (varr.size && arr_enabled(GL_VERTEX_ARRAY) && bf.VertexPointer) {
        A[na].c = copy_array(varr, ib, dib, isz, count, first, nv); A[na].kind = 1; A[na].unit = 0; na++; has_v = 1;
    }
    if (narr.size && arr_enabled(GL_NORMAL_ARRAY) && bf.NormalPointer) {
        ArrSpec ns = narr; ns.size = 3;
        A[na].c = copy_array(ns, ib, dib, isz, count, first, nv); A[na].kind = 2; A[na].unit = 0; na++; has_n = 1;
    }
    if (carr.size && arr_enabled(GL_COLOR_ARRAY) && bf.ColorPointer) {
        A[na].c = copy_array(carr, ib, dib, isz, count, first, nv); A[na].kind = 3; A[na].unit = 0; na++; has_c = 1;
    }
    for (int u = 0; u < 4; u++) {
        if (tarr_valid[u] && tc_enabled[u]) {
            A[na].c = copy_array(tarr[u], ib, dib, isz, count, first, nv); A[na].kind = 4; A[na].unit = u; na++;
            ntc++;
        }
    }
    void (*cact)(int) = bf.ClientActiveTexture;
    if (vbo_ok && na) {
        // stream everything into the VBO; the pointers become byte offsets
        size_t total = 0; uint32_t off[8];
        for (int i = 0; i < na; i++) { off[i] = (uint32_t)total; total += A[i].c.nbytes; }
        vbo_BufferData(0x8892, total, NULL, 0x88E0);   // orphan + allocate (GL_STREAM_DRAW)
        for (int i = 0; i < na; i++)
            if (A[i].c.nbytes) vbo_BufferSubData(0x8892, off[i], A[i].c.nbytes, A[i].c.buf);
        int i = 0;
        if (has_v) {
            bf.VertexPointer(A[i].c.size, A[i].c.type, A[i].c.stride, (const void*)(uintptr_t)off[i]);
            if (bf.EnableCS) bf.EnableCS(GL_VERTEX_ARRAY);
            i++;
        }
        if (has_n) { bf.NormalPointer(A[i].c.type, A[i].c.stride, (const void*)(uintptr_t)off[i]); i++; }
        if (has_c) {
            bf.ColorPointer(A[i].c.size, A[i].c.type, A[i].c.stride, (const void*)(uintptr_t)off[i]);
            if (bf.EnableCS) bf.EnableCS(GL_COLOR_ARRAY);
            i++;
        }
        for (; i < na; i++) {
            if (cact) cact(GL_TEXTURE0 + A[i].unit);
            bf.TexCoordPointer(A[i].c.size, A[i].c.type, A[i].c.stride, (const void*)(uintptr_t)off[i]);
            if (bf.EnableCS) bf.EnableCS(GL_TEXTURE_COORD_ARRAY);
        }
        // disable the texcoord arrays for the units without data
        for (int u = 0; u < 4; u++) {
            int en = 0;
            for (int k = 0; k < na; k++) if (A[k].kind == 4 && A[k].unit == u) en = 1;
            if (!en) {
                if (cact) cact(GL_TEXTURE0 + u);
                if (bf.DisableCS) bf.DisableCS(GL_TEXTURE_COORD_ARRAY);
            }
        }
        if (cact) cact(GL_TEXTURE0 + (client_unit & 3));   // restore the engine's client unit
        ui_tc_debug = 0;
        return;
    }
    // ---- client-array path ----
    int i = 0;
    if (has_v) {
        bf.VertexPointer(A[i].c.size, A[i].c.type, A[i].c.stride, A[i].c.buf);
        if (bf.EnableCS) bf.EnableCS(GL_VERTEX_ARRAY);
        i++;
    }
    if (has_n) { bf.NormalPointer(A[i].c.type, A[i].c.stride, A[i].c.buf); i++; }
    if (has_c) {
        bf.ColorPointer(A[i].c.size, A[i].c.type, A[i].c.stride, A[i].c.buf);
        if (bf.EnableCS) bf.EnableCS(GL_COLOR_ARRAY);
        i++;
    }
    void (*tcp)(int,int,int,const void*) = bf.TexCoordPointer;
    void (*ecs)(unsigned) = bf.EnableCS;
    void (*dcs)(unsigned) = bf.DisableCS;
    // GLES1 keeps one texcoord client array PER texture unit, selected with
    // glClientActiveTexture. Desktop GL works the same way - but the pointer
    // must be set while the *client* unit is selected (glClientActiveTexture,
    // NOT glActiveTexture, which only changes the server-side unit). The old
    // code set every enabled unit's array on the same client unit, so the
    // LAST unit's coordinates won - e.g. the car body sampled its texture
    // atlas with the lightmap's (unit1) UVs. Bind each unit's array on its
    // own client unit and mirror the engine's per-unit enable state.
    for (int u = 0; u < 4; u++) {
        if (cact) cact(GL_TEXTURE0 + u);
        int found = -1;
        for (int k = 0; k < na; k++) if (A[k].kind == 4 && A[k].unit == u) found = k;
        if (found >= 0) {
            if (GL_DEBUG && ui_tc_debug) {
                int au0 = 0; ((void(*)(unsigned,int*))gl_load("glGetIntegerv"))(0x84E0, &au0);
                printf("[tcdebug] u=%d valid=1 en=%d active_now=%#x\n", u, tc_enabled[u], au0);
            }
            tcp(A[found].c.size, A[found].c.type, A[found].c.stride, A[found].c.buf);
            if (ecs) ecs(GL_TEXTURE_COORD_ARRAY);
        } else {
            if (dcs) dcs(GL_TEXTURE_COORD_ARRAY);
        }
    }
    if (cact) cact(GL_TEXTURE0 + (client_unit & 3));   // restore the engine's client unit
    ui_tc_debug = 0;
}

#include "tex.inc"

#include "draw.inc"

#include "dispatch.inc"

// ---------------------------------------------------------------- window io
static void draw_test_quads(void) {
    // A5GL_TESTQUAD: draw known textures through the pipeline to sanity-check decode+state
    if (!getenv("A5GL_TESTQUAD")) return;
    {
        typedef void (*e_t)(unsigned); typedef void (*b_t)(unsigned);
        typedef void (*c4f_t)(float,float,float,float);
        typedef void (*v2f_t)(float,float); typedef void (*t2f_t)(float,float);
        typedef void (*bt_t)(unsigned,unsigned); typedef void (*bf_t)(unsigned,unsigned);
        typedef void (*ge_t)(void);
        e_t dis = (e_t)gl_load("glDisable"); b_t beg = (b_t)gl_load("glBegin");
        ge_t glend_fn = (ge_t)gl_load("glEnd"); c4f_t c4f = (c4f_t)gl_load("glColor4f");
        v2f_t v2f = (v2f_t)gl_load("glVertex2f"); t2f_t t2f = (t2f_t)gl_load("glTexCoord2f");
        bt_t bt = (bt_t)gl_load("glBindTexture"); bf_t bf = (bf_t)gl_load("glBlendFunc");
        e_t en = (e_t)gl_load("glEnable");
        // force a known 2D projection/modelview (leftover 3D matrices would eat our coords)
        ((void(*)(unsigned))gl_load("glMatrixMode"))(0x1701);
        ((void(*)(void))gl_load("glLoadIdentity"))();
        ((void(*)(double,double,double,double,double,double))gl_load("glOrtho"))(0, 800, 480, 0, -1, 1);
        ((void(*)(unsigned))gl_load("glMatrixMode"))(0x1700);
        ((void(*)(void))gl_load("glLoadIdentity"))();
        // setup a clean 2D state like the engine's UI pass
        dis(0x0B71); dis(0x0BC0); dis(0x0C11); dis(0x0B44);
        en(0x0BE2); bf(0x0302, 0x0303); en(0x0DE1);
        ((void(*)(unsigned,unsigned,int))gl_load("glTexEnvi"))(0x2300, 0x2200, 0x2100);
        // draw three labeled quads: tex9 button region, tex10 panel region, tex6 glyph region
        struct { unsigned tex; float u0,v0,u1,v1; float x,y,w,h; } q[3] = {
            { 9,  0.581f,0.964f,0.635f,0.930f,  10, 10, 110, 70 },
            { 10, 0.581f,0.964f,0.635f,0.930f,  130, 10, 110, 70 },
            { 6,  0.270f,0.570f,0.414f,0.594f,  250, 10, 220, 30 },
        };
        for (int i = 0; i < 3; i++) {
            bt(0x0DE1, q[i].tex);
            c4f(1,1,1,1);
            beg(0x0007);
            t2f(q[i].u0, q[i].v0); v2f(q[i].x, q[i].y);
            t2f(q[i].u1, q[i].v0); v2f(q[i].x+q[i].w, q[i].y);
            t2f(q[i].u1, q[i].v1); v2f(q[i].x+q[i].w, q[i].y+q[i].h);
            t2f(q[i].u0, q[i].v1); v2f(q[i].x, q[i].y+q[i].h);
            glend_fn();
        }
    }
}

void a5gl_swap(void) {
    draw_test_quads();
    SwapBuffers(hdc);   // gdi32 (linked); NOT exported by opengl32
}

int a5gl_poll(void) {
    // The window's messages are pumped by the dedicated UI thread; the main
    // thread only checks whether the user closed it.
    return !win_closed;
}

void a5gl_request_close(void) {
    win_closed = 1;
    if (hwnd) PostMessageW(hwnd, WM_CLOSE, 0, 0);
}

static void write_bmp(const char* path, int w, int h, const unsigned char* rgba) {
    int row = (w * 3 + 3) & ~3;
    int size = 54 + row * h;
    unsigned char hdr[54]; memset(hdr, 0, 54);
    hdr[0]='B'; hdr[1]='M';
    *(int*)(hdr+2)=size; *(int*)(hdr+10)=54; *(int*)(hdr+14)=40;
    *(int*)(hdr+18)=w; *(int*)(hdr+22)=h; *(short*)(hdr+26)=1; *(short*)(hdr+28)=24;
    FILE* f = fopen(path, "wb");
    if (!f) return;
    fwrite(hdr, 1, 54, f);
    unsigned char* line = (unsigned char*)malloc(row);
    for (int y = h - 1; y >= 0; y--) {
        for (int x = 0; x < w; x++) {
            const unsigned char* p = rgba + (y * w + x) * 4;
            line[x*3+0] = p[2]; line[x*3+1] = p[1]; line[x*3+2] = p[0];
        }
        fwrite(line, 1, row, f);
    }
    free(line);
    fclose(f);
    printf("[gl] screenshot saved: %s\n", path);
}

void a5gl_probe_pixels(void) {
    typedef void (*rp_t)(int,int,int,int,unsigned,unsigned,void*);
    rp_t rp = (rp_t)gl_load("glReadPixels");
    if (!rp) return;
    static const int pts[][2] = {
        {1160, 408}, {1180, 300}, {1200, 200}, {1240, 100},
        {30, 20}, {640, 240}, {100, 360},
    };
    for (size_t i = 0; i < sizeof(pts)/sizeof(pts[0]); i++) {
        unsigned char px[4] = {0,0,0,0};
        rp(pts[i][0], pts[i][1], 1, 1, GL_RGBA, GL_UNSIGNED_BYTE, px);
        printf("[probe] (%d,%d) = %u,%u,%u,%u\n", pts[i][0], pts[i][1], px[0], px[1], px[2], px[3]);
    }
}

void a5gl_screenshot_bmp(const char* path) {
    draw_test_quads();
    typedef void (*rp_t)(int,int,int,int,unsigned,unsigned,void*);
    rp_t rp = (rp_t)gl_load("glReadPixels");
    if (!rp) return;
    unsigned char* buf = (unsigned char*)malloc((size_t)win_w * win_h * 4);
    rp(0, 0, win_w, win_h, GL_RGBA, GL_UNSIGNED_BYTE, buf);
    // flip vertically (GL is bottom-up)
    unsigned char* flipped = (unsigned char*)malloc((size_t)win_w * win_h * 4);
    for (int y = 0; y < win_h; y++)
        memcpy(flipped + (size_t)y * win_w * 4, buf + (size_t)(win_h - 1 - y) * win_w * 4, (size_t)win_w * 4);
    write_bmp(path, win_w, win_h, flipped);
    free(flipped); free(buf);
}
