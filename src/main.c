#define _CRT_SECURE_NO_WARNINGS
#include "guest.h"
#include "platform/movie.h"
#include "platform/data_install.h"

#include <windows.h>
#include <mmsystem.h>
#include <math.h>
#include <stdlib.h>

int guest_range_ok(uint32_t addr, uint64_t len);
void jni_dump_methods(void);

static uint32_t ref_crc32(uint32_t crc, const uint8_t *p, size_t n)
{
    crc = ~crc;
    for (size_t i = 0; i < n; i++) {
        crc ^= p[i];
        for (int k = 0; k < 8; k++)
            crc = (crc >> 1) ^ (0xEDB88320u & (uint32_t)(-(int32_t)(crc & 1)));
    }
    return ~crc;
}

static void dump_regs(CPU *c)
{
    fprintf(stderr, "pc=%08x lr=%08x sp=%08x cpsr=%08x\n", c->pc, c->r[14], c->r[13], c->cpsr);
    for (int i = 0; i < 13; i++) fprintf(stderr, "r%-2d=%08x%s", i, c->r[i], (i % 4 == 3) ? "\n" : " ");
    fprintf(stderr, "\n");
}

static uint32_t sym(const char *name)
{
    uint32_t a = guest_symbol(name);
    if (!a) fprintf(stderr, "[boot] missing symbol %s\n", name);
    return a;
}

/* The 3.2.4 and 3.3.7 builds use different Java package names for their JNI
 * entry points.  Resolve the suffix against both prefixes so one runtime can
 * boot either library. */
static const char *g_native_prefix;

static uint32_t native_sym(const char *suffix)
{
    static const char *prefixes[] = {
        "Java_com_gameloft_android_HEP_GloftA5HD_ML_",
        "Java_com_gameloft_android_ANMP_GloftAsphalt5_asphalt5_",
        "Java_com_gameloft_android_GAND_GloftA5HD_",
    };
    char name[512];
    if (g_native_prefix) {
        snprintf(name, sizeof(name), "%s%s", g_native_prefix, suffix);
        return guest_symbol(name);
    }
    for (size_t i = 0; i < sizeof(prefixes) / sizeof(prefixes[0]); i++) {
        snprintf(name, sizeof(name), "%s%s", prefixes[i], suffix);
        uint32_t a = guest_symbol(name);
        if (a) { g_native_prefix = prefixes[i]; return a; }
    }
    return 0;
}

static void call_native(CPU *c, const char *suffix, uint32_t r2, uint32_t r3,
                        const uint32_t *stack, int nstack)
{
    uint32_t a = native_sym(suffix);
    if (!a) { fprintf(stderr, "[boot] missing native %s\n", suffix); return; }
    if (g_verbose) fprintf(stderr, "[boot] -> %s\n", suffix);
    c->r[0] = jni_env_addr();
    c->r[1] = 0x2001;
    c->r[2] = r2;
    c->r[3] = r3;
    c->r[14] = 0;
    uint32_t oldsp = c->r[13];
    if (nstack) {
        c->r[13] = (c->r[13] - (uint32_t)(nstack * 4)) & ~7u;
        for (int i = 0; i < nstack; i++) wr32(c->r[13] + (uint32_t)(i * 4), stack[i]);
    }
    guest_call(c, a);
    c->r[13] = oldsp;
    if (g_verbose) fprintf(stderr, "[boot] <- %s r0=%08x\n", suffix, c->r[0]);
}

static void call_wrapper(CPU *c, const char *name, uint32_t r2, uint32_t r3,
                         const uint32_t *stack, int nstack)
{
    uint32_t a = sym(name);
    if (!a) return;
    if (g_verbose) fprintf(stderr, "[boot] -> %s\n", name);
    c->r[0] = jni_env_addr();
    c->r[1] = 0x2001;
    c->r[2] = r2;
    c->r[3] = r3;
    c->r[14] = 0;
    uint32_t oldsp = c->r[13];
    if (nstack) {
        c->r[13] = (c->r[13] - (uint32_t)(nstack * 4)) & ~7u;
        for (int i = 0; i < nstack; i++) wr32(c->r[13] + (uint32_t)(i * 4), stack[i]);
    }
    guest_call(c, a);
    c->r[13] = oldsp;
    if (g_verbose) fprintf(stderr, "[boot] <- %s r0=%08x\n", name, c->r[0]);
}

/* The original engine advances its per-frame steering/camera smoothing at a
 * low fixed rate and assumes presentation is similarly paced.  Running the
 * whole loop at 300+ FPS makes those per-frame corrections visibly jitter.
 * Cap the interactive loop to 60 FPS by default; RECOMP_FPS overrides it and
 * RECOMP_FPS=0 keeps the old unlimited behaviour.  Automated off-screen runs
 * stay unlimited by default so frame-numbered tests still finish quickly. */
#ifndef CREATE_WAITABLE_TIMER_HIGH_RESOLUTION
#define CREATE_WAITABLE_TIMER_HIGH_RESOLUTION 0x00000002
#endif

typedef HANDLE (WINAPI *CreateWaitableTimerExWFn)(LPSECURITY_ATTRIBUTES, LPCWSTR,
                                                  DWORD, DWORD);

static uint32_t g_game_sym;
static uint32_t g_last_cam;

static double host_now_ms(void)
{
    static LARGE_INTEGER freq;
    if (!freq.QuadPart) QueryPerformanceFrequency(&freq);
    LARGE_INTEGER q;
    QueryPerformanceCounter(&q);
    return (double)q.QuadPart * 1000.0 / (double)freq.QuadPart;
}

static int game_in_run(uint32_t gsym)
{
    static uint32_t vtab;
    if (!vtab) vtab = guest_symbol("_ZTV6GS_Run");
    uint32_t game = gsym ? rd32(gsym) : 0;
    if (!game || !vtab) return 0;
    int32_t idx = (int32_t)rd32(game + 0x1d38);
    if (idx < 0) return 0;
    uint32_t st = rd32(game + (uint32_t)(idx + 0x74e) * 4 + 4);
    return st && rd32(st) == vtab + 8;
}

static float rd_f32(uint32_t a)
{
    uint32_t b = rd32(a);
    float f;
    memcpy(&f, &b, 4);
    return f;
}

static void wr_f32(uint32_t a, float f)
{
    uint32_t b;
    memcpy(&b, &f, 4);
    wr32(a, b);
}

static int camera_smooth_active(void);

/* Remember the camera object whose matrix CCamera::update is about to build.
 * The time-based filter runs after the build. */
void camera_note_cam(uint32_t cam)
{
    g_last_cam = cam;
}

static float g_cam_mat[16];
static double g_cam_last_ms;
static double g_cam_snap_until;
static int g_cam_mat_init;
static int g_cam_was_active;
static uint32_t g_cam_obj;

void camera_filter_last(void)
{
    int active = camera_smooth_active();
    uint32_t cam = g_last_cam;

    /* Never blend the menu camera into the first race frame (or the previous
     * track's camera into a new race): start from the engine's exact matrix. */
    if (active != g_cam_was_active) {
        g_cam_was_active = active;
        g_cam_mat_init = 0;
        g_cam_last_ms = 0.0;
        g_cam_snap_until = 0.0;
    }
    if (!active) {
        g_cam_mat_init = 0;
        g_cam_snap_until = 0.0;
        return;
    }
    if (!cam) return;
    if (cam != g_cam_obj) {
        g_cam_obj = cam;
        g_cam_mat_init = 0;
        g_cam_snap_until = 0.0;
    }

    /* CCamera::update builds the final view matrix at +0x128. */
    uint32_t mb = cam + 0x128;
    float raw[16];
    for (int i = 0; i < 16; i++) raw[i] = rd_f32(mb + (uint32_t)i * 4);

    double now = host_now_ms();
    double dt = g_cam_last_ms > 0.0 ? (now - g_cam_last_ms) / 1000.0 : 0.0;
    g_cam_last_ms = now;
    if (dt < 0.0 || dt > 0.20) dt = 0.0;

    float maxd = 0.0f;
    if (g_cam_mat_init) {
        /* Only the rotation part decides whether this is a camera cut; the
         * translation changes every tick and must not trigger a snap. */
        static const int rot[9] = { 0, 1, 2, 4, 5, 6, 8, 9, 10 };
        for (int k = 0; k < 9; k++) {
            int i = rot[k];
            float d = raw[i] - g_cam_mat[i];
            if (d < 0) d = -d;
            if (d > maxd) maxd = d;
        }
    }
    int snap = (!g_cam_mat_init || maxd > 0.5f);
    if (getenv("RECOMP_CAM_LOG") && (snap || maxd > 0.05f))
        fprintf(stderr, "[cam] active=%d cam=%x init=%d snap=%d settle=%d dt=%.4f "
                "maxd=%.3f t=(%.2f,%.2f,%.2f)\n",
                active, cam, g_cam_mat_init, snap, now < g_cam_snap_until, dt, maxd,
                raw[3], raw[7], raw[11]);
    if (snap) {
        memcpy(g_cam_mat, raw, sizeof(raw));
        g_cam_mat_init = 1;
        /* Follow a camera cut with the raw matrix for a short settle window;
         * the start-line/cinematic cuts are part of the engine's direction. */
        g_cam_snap_until = now + 250.0;
    } else if (now < g_cam_snap_until) {
        memcpy(g_cam_mat, raw, sizeof(raw));
    } else if (dt > 0.0) {
        static float tau = -1.0f;
        if (tau < 0.0f) {
            const char *e = getenv("RECOMP_CAM_TAU_MS");
            tau = e ? (float)atof(e) : 15.0f;
            if (tau < 5.0f) tau = 5.0f;
        }
        float a = (float)(1.0 - exp(-dt / ((double)tau / 1000.0)));
        for (int i = 0; i < 16; i++) {
            /* Smooth only the 3x3 rotation.  Translation (3/7/11) and the
             * bottom row follow the engine exactly so the car cannot drift
             * off-centre when a translation component is small. */
            int is_rotation = i < 12 && (i & 3) != 3;
            if (!is_rotation)
                g_cam_mat[i] = raw[i];
            else
                g_cam_mat[i] += (raw[i] - g_cam_mat[i]) * a;
        }
    }

    /* Re-orthonormalise the 3x3 rotation part after filtering. */
    float v0[3] = { g_cam_mat[0], g_cam_mat[1], g_cam_mat[2] };
    float v1[3] = { g_cam_mat[4], g_cam_mat[5], g_cam_mat[6] };
    float v2[3] = { g_cam_mat[8], g_cam_mat[9], g_cam_mat[10] };
    float n0 = sqrtf(v0[0]*v0[0] + v0[1]*v0[1] + v0[2]*v0[2]);
    if (n0 > 1e-6f) for (int i = 0; i < 3; i++) v0[i] /= n0;
    float d1 = v1[0]*v0[0] + v1[1]*v0[1] + v1[2]*v0[2];
    for (int i = 0; i < 3; i++) v1[i] -= d1 * v0[i];
    float n1 = sqrtf(v1[0]*v1[0] + v1[1]*v1[1] + v1[2]*v1[2]);
    if (n1 > 1e-6f) for (int i = 0; i < 3; i++) v1[i] /= n1;
    float old_v2[3] = { v2[0], v2[1], v2[2] };
    v2[0] = v0[1]*v1[2] - v0[2]*v1[1];
    v2[1] = v0[2]*v1[0] - v0[0]*v1[2];
    v2[2] = v0[0]*v1[1] - v0[1]*v1[0];
    /* Preserve the original handedness (the engine matrix may be mirrored). */
    if (v2[0]*old_v2[0] + v2[1]*old_v2[1] + v2[2]*old_v2[2] < 0.0f) {
        v2[0] = -v2[0]; v2[1] = -v2[1]; v2[2] = -v2[2];
    }
    for (int i = 0; i < 3; i++) {
        g_cam_mat[i] = v0[i];
        g_cam_mat[4 + i] = v1[i];
        g_cam_mat[8 + i] = v2[i];
    }
    for (int i = 0; i < 16; i++) wr_f32(mb + (uint32_t)i * 4, g_cam_mat[i]);
}

static int camera_smooth_active(void)
{
    static int enabled = -1;
    if (enabled < 0) {
        const char *e = getenv("RECOMP_CAM_SMOOTH");
        enabled = e ? atoi(e) : 1;
    }
    if (!enabled) return 0;
    return g_game_sym && game_in_run(g_game_sym);
}

static void frame_limit(int frame, uint32_t gsym)
{
    static int cap = -1, cap_start;
    static LARGE_INTEGER freq;
    static double next;
    static HANDLE timer;
    static int timer_tried;
    (void)gsym;
    if (cap < 0) {
        const char *env = getenv("RECOMP_FPS");
        const char *start = getenv("RECOMP_FPS_START");
        cap_start = start ? atoi(start) : 0;
        cap = env ? atoi(env) : 0;
        if (cap < 0) cap = 0;
        if (cap_start < 0) cap_start = 0;
        if (cap > 0) {
            timeBeginPeriod(1);
            fprintf(stderr, "[win] frame cap %d FPS%s\n", cap,
                    cap_start ? " (delayed)" : "");
        } else {
            fprintf(stderr, "[win] frame cap off (unlimited)\n");
        }
    }
    if (cap <= 0 || frame < cap_start) return;
    if (!freq.QuadPart) QueryPerformanceFrequency(&freq);

    LARGE_INTEGER q;
    QueryPerformanceCounter(&q);
    double now = (double)q.QuadPart / (double)freq.QuadPart;
    if (next <= 0.0) next = now;
    next += 1.0 / (double)cap;
    if (!timer_tried) {
        timer_tried = 1;
        /* Dynamic lookup keeps the installer's slim headers happy on
         * toolchains that predate the high-resolution timer declaration. */
        HMODULE k32 = GetModuleHandleA("kernel32.dll");
        CreateWaitableTimerExWFn create =
            k32 ? (CreateWaitableTimerExWFn)(void *)GetProcAddress(
                      k32, "CreateWaitableTimerExW") : NULL;
        if (create)
            timer = create(NULL, NULL, CREATE_WAITABLE_TIMER_HIGH_RESOLUTION,
                           TIMER_ALL_ACCESS);
    }
    if (timer) {
        double wait = next - now;
        if (wait > 0.0010) {
            LARGE_INTEGER due;
            due.QuadPart = -(LONGLONG)((wait - 0.0005) * 10000000.0);
            if (SetWaitableTimer(timer, &due, 0, NULL, NULL, FALSE))
                WaitForSingleObject(timer, INFINITE);
        }
    } else {
        /* Fallback: sleep in 1 ms slices.  A single long Sleep() commonly
         * overshoots by several milliseconds on Windows. */
        for (;;) {
            QueryPerformanceCounter(&q);
            now = (double)q.QuadPart / (double)freq.QuadPart;
            if (now >= next - 0.0015) break;
            Sleep(1);
        }
    }
    for (;;) {
        QueryPerformanceCounter(&q);
        now = (double)q.QuadPart / (double)freq.QuadPart;
        if (now >= next - 0.00035) break;
        Sleep(0);
    }
    if (now > next + 0.250) next = now;
}

static int run_crc(const char *so)
{
    if (guest_mem_init() != 0) return 1;
    guest_register_generated();
    guest_register_imports();
    guest_register_plt_imports();
    jni_init();
    if (guest_load_elf_auto(so) != 0) return 77;

    uint32_t addr = guest_symbol("crc32");
    if (!addr) { fprintf(stderr, "crc32 symbol not found\n"); return 3; }
    printf("crc32 at %08x\n", addr);

    const char *text = "123456789";
    uint32_t buf = 0x10100000;
    memcpy(G(buf), text, strlen(text));

    CPU cpu; memset(&cpu, 0, sizeof(cpu));
    cpu.r[13] = 0xBF800000; cpu.cpsr = 0x10; cpu.tid = 1;
    cpu.r[0] = 0; cpu.r[1] = buf; cpu.r[2] = (uint32_t)strlen(text); cpu.r[14] = 0;
    guest_call(&cpu, addr);

    uint32_t expect = ref_crc32(0, (const uint8_t *)text, strlen(text));
    printf("guest crc32 = %08x  expected = %08x  %s\n", cpu.r[0], expect,
           cpu.r[0] == expect ? "OK" : "MISMATCH");
    return cpu.r[0] == expect ? 0 : 4;
}

static void dump_mtx(const char *tag, uint32_t p)
{
    fprintf(stderr, "[mtx] %-18s", tag);
    for (int i = 0; i < 16; i++) {
        uint32_t b = rd32(p + (uint32_t)i * 4);
        float f; memcpy(&f, &b, 4);
        fprintf(stderr, " %8.3f", f);
        if ((i & 3) == 3) fprintf(stderr, i == 15 ? "\n" : " |");
    }
}
static void mt_call(CPU *c, const char *name, uint32_t thisp,
                    uint32_t r1, uint32_t r2, uint32_t r3)
{
    uint32_t a = guest_symbol(name);
    if (!a) { fprintf(stderr, "[mtx] missing %s\n", name); return; }
    c->r[0] = thisp; c->r[1] = r1; c->r[2] = r2; c->r[3] = r3;
    c->r[14] = 0;
    guest_call(c, a);
}
static void mt_call_s(CPU *c, const char *name, uint32_t thisp,
                      uint32_t r1, uint32_t r2, uint32_t r3, uint32_t s0)
{
    uint32_t a = guest_symbol(name);
    if (!a) { fprintf(stderr, "[mtx] missing %s\n", name); return; }
    c->r[0] = thisp; c->r[1] = r1; c->r[2] = r2; c->r[3] = r3;
    c->r[14] = 0;
    uint32_t oldsp = c->r[13];
    c->r[13] = (c->r[13] - 8u) & ~7u;
    wr32(c->r[13], s0);
    guest_call(c, a);
    c->r[13] = oldsp;
}
static void mt_zero(uint32_t p)
{
    for (int i = 0; i < 17; i++) wr32(p + (uint32_t)i * 4, 0);
}
static int run_mtxtest(const char *so)
{
    if (guest_mem_init() != 0) return 1;
    guest_register_generated();
    guest_register_imports();
    guest_register_plt_imports();
    jni_init();
    if (guest_load_elf_auto(so) != 0) return 77;

    CPU cpu; memset(&cpu, 0, sizeof(cpu));
    cpu.r[13] = 0xBF800000; cpu.cpsr = 0x10; cpu.tid = 1;
    uint32_t p = 0x10100000;      /* C */
    uint32_t a = 0x10100100;      /* A */
    uint32_t b = 0x10100200;      /* B */

    /* host-side VFP vector-mode sanity check */
    {
        CPU t; memset(&t, 0, sizeof(t));
        t.fpscr = 0x83030010u;
        for (int i = 0; i < 32; i++) *vfp_s(&t, (unsigned)i) = (float)i;
        vfp_vmul(&t, 8, 16, 20);
        fprintf(stderr, "[vfp] vmul s8..s11 = %.1f %.1f %.1f %.1f (expect 320 357 396 437)\n",
                *vfp_s(&t, 8), *vfp_s(&t, 9), *vfp_s(&t, 10), *vfp_s(&t, 11));
        vfp_vmla(&t, 8, 20, 1);
        fprintf(stderr, "[vfp] vmla s8..s11 = %.1f %.1f %.1f %.1f (expect 340 378 418 460)\n",
                *vfp_s(&t, 8), *vfp_s(&t, 9), *vfp_s(&t, 10), *vfp_s(&t, 11));
    }
    const uint32_t f1 = 0x3f800000, f2 = 0x40000000, f3 = 0x40400000;
    const uint32_t hpi = 0x3fc90fdb;   /* pi/2 */

    mt_zero(p);
    mt_call(&cpu, "_ZN7CMatrix12LoadIdentityEv", p, 0, 0, 0);
    dump_mtx("identity", p);

    mt_zero(p);
    mt_call(&cpu, "_ZN7CMatrix12DefTranslateEfff", p, f1, f2, f3);
    dump_mtx("defTranslate(1,2,3)", p);

    mt_zero(p);
    mt_call(&cpu, "_ZN7CMatrix12LoadIdentityEv", p, 0, 0, 0);
    mt_call(&cpu, "_ZN7CMatrix10DefRotateYEf", p, hpi, 0, 0);
    dump_mtx("defRotateY(90)", p);

    mt_zero(p);
    mt_call(&cpu, "_ZN7CMatrix12LoadIdentityEv", p, 0, 0, 0);
    mt_call_s(&cpu, "_ZN7CMatrix13SetQuaternionEffff", p, 0x3f000000u, 0x3f000000u, 0x3f000000u, 0x3f000000u);
    dump_mtx("setQuat(.5,.5,.5,.5)", p);

    mt_zero(p);
    mt_call(&cpu, "_ZN7CMatrix12LoadIdentityEv", p, 0, 0, 0);
    mt_call(&cpu, "_ZN7CMatrix7RotateXEf", p, hpi, 0, 0);
    dump_mtx("rotateX(90)", p);

    /* C = A * B and C = B * A */
    mt_zero(a); mt_zero(b); mt_zero(p);
    mt_call(&cpu, "_ZN7CMatrix12LoadIdentityEv", a, 0, 0, 0);
    mt_call(&cpu, "_ZN7CMatrix12DefTranslateEfff", a, f1, f2, f3);
    mt_call(&cpu, "_ZN7CMatrix12LoadIdentityEv", b, 0, 0, 0);
    mt_call(&cpu, "_ZN7CMatrix10DefRotateYEf", b, hpi, 0, 0);
    mt_call(&cpu, "_ZN7CMatrix7SetMultEPS_S0_", p, a, b, 0);
    dump_mtx("setMult(A,B)", p);
    mt_zero(p);
    mt_call(&cpu, "_ZN7CMatrix7SetMultEPS_S0_", p, b, a, 0);
    dump_mtx("setMult(B,A)", p);

    /* translation */
    mt_zero(p);
    mt_call(&cpu, "_ZN7CMatrix12LoadIdentityEv", p, 0, 0, 0);
    mt_call(&cpu, "_ZN7CMatrix14SetTranslationEfff", p, 0x40a00000u, 0x40c00000u, 0x40e00000u);
    dump_mtx("setTranslation(5,6,7)", p);

    /* weighted blend: C = A * 0.5 (then add B * 0.5) */
    mt_zero(p); mt_zero(a); mt_zero(b);
    mt_call(&cpu, "_ZN7CMatrix12LoadIdentityEv", a, 0, 0, 0);
    mt_call(&cpu, "_ZN7CMatrix12DefTranslateEfff", a, f1, f2, f3);
    mt_call(&cpu, "_ZN7CMatrix12LoadIdentityEv", b, 0, 0, 0);
    mt_call(&cpu, "_ZN7CMatrix10DefRotateYEf", b, hpi, 0, 0);
    mt_call(&cpu, "_ZN7CMatrix11SetWeightedEPS_f", p, a, 0x3f000000u, 0);
    dump_mtx("setWeighted(A,.5)", p);
    mt_call(&cpu, "_ZN7CMatrix11AddWeightedEPS_f", p, b, 0x3f000000u, 0);
    dump_mtx("addWeighted(B,.5)", p);

    mt_zero(p);
    mt_call(&cpu, "_ZN7CMatrix12LoadIdentityEv", p, 0, 0, 0);
    mt_call(&cpu, "_ZN7CMatrix12DefTranslateEfff", p, f1, f2, f3);
    mt_call(&cpu, "_ZN7CMatrix7Make3x4Ev", p, 0, 0, 0);
    dump_mtx("make3x4", p);

    mt_zero(p);
    mt_call(&cpu, "_ZN7CMatrix12LoadIdentityEv", p, 0, 0, 0);
    mt_call(&cpu, "_ZN7CMatrix12DefTranslateEfff", p, f1, f2, f3);
    mt_call(&cpu, "_ZN7CMatrix7Make2x4Ev", p, 0, 0, 0);
    dump_mtx("make2x4", p);
    return 0;
}

extern void platform_note_touch(int x, int y);

static void touch_guest(CPU *c, const char *name, int x, int y, int id)
{
    uint32_t a = guest_symbol(name);
    platform_note_touch(x, y);
    if (!a) return;
    c->r[0] = (uint32_t)x; c->r[1] = (uint32_t)y; c->r[2] = (uint32_t)id;
    c->r[14] = 0;
    guest_call(c, a);
}

static void tap_guest(CPU *c, const char *name, int x, int y)
{
    touch_guest(c, name, x, y, 0);
}

/* Android KeyEvent keycodes used by the engine's own input path
 * (Java -> nativeSetOnKeyDown -> notifyKeyPressed -> Game::InputKeyBoard). */
enum {
    AKEY_BACK = 4,
    AKEY_DPAD_UP = 19,
    AKEY_DPAD_DOWN = 20,
    AKEY_DPAD_LEFT = 21,
    AKEY_DPAD_RIGHT = 22,
    AKEY_DPAD_CENTER = 23,
    AKEY_VOLUME_UP = 24,
    AKEY_MENU = 82
};

static void key_guest(CPU *c, int keycode, int down)
{
    uint32_t a = guest_symbol(down ? "notifyKeyPressed" : "notifyKeyReleased");
    if (!a) return;
    c->r[0] = (uint32_t)keycode;
    c->r[14] = 0;
    guest_call(c, a);
}

/* Direct GamePad bit injection (same masks the on-screen HUD uses). */
static void mask_guest(CPU *c, uint32_t mask, int down)
{
    uint32_t g = guest_symbol("g_pMainGameClass");
    if (!g) return;
    uint32_t game = rd32(g);
    if (!game) return;
    uint32_t mgr = rd32(game + 0x1bc0);
    if (!mgr) return;
    uint32_t pad = rd32(mgr + 4);
    if (!pad) return;
    uint32_t fn = guest_symbol(down ? "_ZN7GamePad18KeyboardKeyPressedEi"
                                    : "_ZN7GamePad19KeyboardKeyReleasedEi");
    if (!fn) return;
    c->r[0] = pad; c->r[1] = mask;
    c->r[14] = 0;
    guest_call(c, fn);
}
static int run_boot(const char *so)
{
#if (defined(RECOMP_TARGET_337) || defined(RECOMP_TARGET_341)) && defined(RECOMP_GUI)
    /* First launch behaves like the Android GameInstaller: fetch and unpack
     * the official PVRTC pack, then continue into the game. */
    if (data_install_run(getenv("A5_DATA_PACK")) != 0) return 3;
#endif
    if (guest_mem_init() != 0) return 1;
    guest_register_generated();
    guest_register_imports();
    guest_register_plt_imports();
    jni_init();
    if (guest_load_elf_auto(so) != 0) return 2;

    CPU cpu; memset(&cpu, 0, sizeof(cpu));
    cpu.r[13] = 0xBF800000; cpu.cpsr = 0x10; cpu.tid = 1;

    uint32_t m_env = guest_symbol("mEnv");
    if (m_env) { wr32(m_env, jni_env_addr()); fprintf(stderr, "[boot] mEnv=%08x -> %08x\n", m_env, jni_env_addr()); }
    else fprintf(stderr, "[boot] mEnv symbol missing\n");

    /* The 3.3.7 HD resources were authored for the Galaxy Tab's 1024x600
     * canvas; 3.2.4 uses the Sony Ericsson 854x480 layout. */
    int is337 = guest_symbol(
        "Java_com_gameloft_android_ANMP_GloftAsphalt5_asphalt5_Asphalt5_nativeInit") != 0;
    int logical_w = is337 ? 1024 : 854;
    int logical_h = is337 ? 600 : 480;

    SetProcessDPIAware();
    int win_w = 1920, win_h = 1080;
    {
        int sw = GetSystemMetrics(SM_CXSCREEN), sh = GetSystemMetrics(SM_CYSCREEN);
        if (sw > 0 && sh > 0) {
            int th = sh < 1080 ? sh : 1080;
            int tw = th * 16 / 9;
            if (tw > sw) { tw = sw; th = tw * 9 / 16; }
            if (tw >= 854 && th >= 480) { win_w = tw; win_h = th; }
        }
    }
    {
        const char *res = getenv("RECOMP_RES");
        const char *ew = getenv("RECOMP_WIDTH");
        const char *eh = getenv("RECOMP_HEIGHT");
        if (res) sscanf(res, "%dx%d", &win_w, &win_h);
        if (ew) win_w = atoi(ew);
        if (eh) win_h = atoi(eh);
        if (!res && !ew && !eh && is337) {
            int sw = GetSystemMetrics(SM_CXSCREEN), sh = GetSystemMetrics(SM_CYSCREEN);
            if (sw >= 1920 && sh >= 1080) {
                win_w = 1920; win_h = 1080;
            } else if (sw >= 1536 && sh >= 900) {
                win_w = 1536; win_h = 900;
            } else {
                win_w = sw > 0 ? sw : 1920;
                win_h = sh > 0 ? sh : 1080;
            }
        }
        if (win_w < 320) win_w = 320;
        if (win_h < 200) win_h = 200;
        if (win_w > 7680) win_w = 7680;
        if (win_h > 4320) win_h = 4320;
    }
    fprintf(stderr, "[boot] resolution %dx%d logical %dx%d\n",
            win_w, win_h, logical_w, logical_h);
    if (platform_init(win_w, win_h) != 0) return 7;
    platform_set_cpu(&cpu);

    fprintf(stderr, "[boot] running init_array\n");
    guest_run_init_array(&cpu);
    fprintf(stderr, "[boot] init_array done\n");

    extern void platform_set_logical_size(int w, int h);
    platform_set_logical_size(logical_w, logical_h);

    call_native(&cpu, "GLResLoader_nativeInit", 0, 0, NULL, 0);
    call_native(&cpu, "GLMediaPlayer_nativeInit", 0, 0, NULL, 0);
    if (getenv("A5_SND_DEBUG")) {
        fprintf(stderr, "[snd] guest playSoundID=%08x loadSoundID=%08x\n",
                rd32(0x001f8574u), rd32(0x001f856cu));
        for (uint32_t a = 0x24f040u; a <= 0x24f070u; a += 4)
            fprintf(stderr, "[snd] g[%08x]=%08x\n", a, rd32(a));
        jni_dump_methods();
    }
    /* Both preserved data sets are PVRTC.  Java selects this package for
     * non-HTC/non-X10 devices; the second argument is mbUsePVRT. */
    call_native(&cpu, "Asphalt5_nativeInit", 0, 1, NULL, 0);

    /* The engine's UI/layout is an 854x480 logical canvas.  Render at the
     * requested window resolution by scaling GL viewports (see gl_Viewport);
     * the 3D camera keeps the same 16:9 aspect, so it rasterises at full
     * resolution while the UI layout stays in its original coordinates. */
    uint32_t args[4] = { (uint32_t)logical_w, (uint32_t)logical_h, 0, 0 };
    call_native(&cpu, "Asphalt5Renderer_nativeInit", 0, 1, args, 4);
    fprintf(stderr, "[boot] appInit returned; gAppAlive=%u screen=%ux%u\n",
            rd32(guest_symbol("gAppAlive")), rd32(0x24bb28u), rd32(0x24bb2cu));

    int frame = 0;
    int skipped_movie = 0;
    int skip_movie = getenv("A5_NO_MOVIE") != NULL ||
                     getenv("RECOMP_NO_MOVIE") != NULL ||
                     getenv("RECOMP_FORCE_SPLASH") != NULL;
    /* lib9 has scene IDs 0..12.  ID 0 is the demo/attract scene (known
     * missing object ids, not selectable in Quick Race) and 13 is invalid;
     * forcing either while the menu is still initializing only reaches an
     * error state or corrupts the resource load.  Keep the test knob inside
     * the 12 playable race scenes. */
    int force_scene = -1;
    {
        const char *env = getenv("RECOMP_FORCE_SCENE");
        if (env) {
            force_scene = atoi(env);
            if (force_scene < 1 || force_scene > 12) {
                fprintf(stderr,
                        "[scene] ignoring RECOMP_FORCE_SCENE=%d "
                        "(playable ids: 1..12; 0=demo/attract, 13=invalid)\n",
                        force_scene);
                force_scene = -1;
            }
        }
    }
    uint32_t g_game = guest_symbol("g_pMainGameClass");
    g_game_sym = g_game;
    while (!platform_should_close()) {
        platform_pump();
        if (getenv("RECOMP_MENU_DIST")) {
            float d = (float)atof(getenv("RECOMP_MENU_DIST"));
            uint32_t bits; memcpy(&bits, &d, 4);
            wr32(0x24cadc, bits);   /* GS_MainMenu::m_dist */
            wr32(0x253654, bits);   /* GS_MainMenu::m_Target_dist */
        }
        if (force_scene >= 0) {
            uint32_t g = g_game ? rd32(g_game) : 0;
            if (g) wr32(g + 0x1bd0, (uint32_t)force_scene);
        }
        if (getenv("RECOMP_CONTROL_MODE"))
            wr8(0x24f0fc, (uint8_t)atoi(getenv("RECOMP_CONTROL_MODE")));
        /* A5_NO_MOVIE / RECOMP_NO_MOVIE / RECOMP_FORCE_SPLASH keep the old
         * bring-up behaviour: release the trailer wait flag immediately so
         * automated menu/race tests never block on video.  Normal launches
         * leave the flag alone and play the requested movie below. */
        if (skip_movie && frame >= 3) {
            uint32_t g = g_game ? rd32(g_game) : 0;
            if (g) G(g + 0x1d72)[0] = 0;
            skipped_movie = 1;
        }
        if (skipped_movie && frame == 90 && getenv("RECOMP_FORCE_SPLASH")) {
            uint32_t g = g_game ? rd32(g_game) : 0;
            if (g) wr32(g + 0x84a8, 2);   /* diagnostics: one synthetic touch release */
        }
        {
            typedef struct { int x, y, f; } Tap;
            static Tap taps[16];
            static int ntaps = -1;
            if (ntaps < 0) {
                ntaps = 0;
                const char *s = getenv("RECOMP_TAP");
                while (s && *s && ntaps < 16) {
                    int x, y, f;
                    if (sscanf(s, "%d,%d,%d", &x, &y, &f) == 3) {
                        taps[ntaps].x = x; taps[ntaps].y = y; taps[ntaps].f = f;
                        ntaps++;
                    }
                    const char *semi = strchr(s, ';');
                    if (!semi) break;
                    s = semi + 1;
                }
            }
            for (int i = 0; i < ntaps; i++) {
                if (frame == taps[i].f) {
                    tap_guest(&cpu, "notifyTouchPress", taps[i].x, taps[i].y);
                    fprintf(stderr, "[tap] press %d,%d at frame %d\n", taps[i].x, taps[i].y, frame);
                } else if (frame == taps[i].f + 3) {
                    tap_guest(&cpu, "notifyTouchReleased", taps[i].x, taps[i].y);
                    fprintf(stderr, "[tap] release %d,%d at frame %d\n", taps[i].x, taps[i].y, frame);
                }
            }
        }
        {
            /* RECOMP_HOLDS=x,y,start,end[,id];...  (held touch, default id 1) */
            typedef struct { int x, y, f0, f1, id; } Hold;
            static Hold holds[16];
            static int nholds = -1;
            if (nholds < 0) {
                nholds = 0;
                const char *s = getenv("RECOMP_HOLDS");
                while (s && *s && nholds < 16) {
                    holds[nholds].id = 1;
                    if (sscanf(s, "%d,%d,%d,%d,%d", &holds[nholds].x, &holds[nholds].y,
                               &holds[nholds].f0, &holds[nholds].f1,
                               &holds[nholds].id) >= 4)
                        nholds++;
                    const char *semi = strchr(s, ';');
                    if (!semi) break;
                    s = semi + 1;
                }
            }
            for (int i = 0; i < nholds; i++) {
                if (frame == holds[i].f0) {
                    touch_guest(&cpu, "notifyTouchPress", holds[i].x, holds[i].y, holds[i].id);
                    fprintf(stderr, "[hold] press %d,%d id=%d at frame %d\n",
                            holds[i].x, holds[i].y, holds[i].id, frame);
                } else if (frame == holds[i].f1) {
                    touch_guest(&cpu, "notifyTouchReleased", holds[i].x, holds[i].y, holds[i].id);
                    fprintf(stderr, "[hold] release %d,%d id=%d at frame %d\n",
                            holds[i].x, holds[i].y, holds[i].id, frame);
                }
            }
        }
        {
            /* RECOMP_KEYS=frame:keycode:down;...  (0 = release) */
            typedef struct { int f, code, down; } SimKey;
            static SimKey keys[64];
            static int nkeys = -1;
            if (nkeys < 0) {
                nkeys = 0;
                const char *s = getenv("RECOMP_KEYS");
                while (s && *s && nkeys < 64) {
                    if (sscanf(s, "%d:%d:%d", &keys[nkeys].f, &keys[nkeys].code, &keys[nkeys].down) == 3)
                        nkeys++;
                    const char *semi = strchr(s, ';');
                    if (!semi) break;
                    s = semi + 1;
                }
            }
            for (int i = 0; i < nkeys; i++)
                if (frame == keys[i].f) {
                    key_guest(&cpu, keys[i].code, keys[i].down);
                    fprintf(stderr, "[key] %s code=%d frame=%d\n",
                            keys[i].down ? "down" : "up", keys[i].code, frame);
                }
        }
        {
            /* RECOMP_EXIT_FRAME: invoke the engine's Game::Exit path. */
            const char *ef = getenv("RECOMP_EXIT_FRAME");
            if (ef && frame == atoi(ef)) {
                uint32_t a = guest_symbol("_ZN4Game4ExitEv");
                fprintf(stderr, "[exit] Game::Exit at frame %d\n", frame);
                if (a) {
                    cpu.r[14] = 0;
                    guest_call(&cpu, a);
                }
            }
        }
        {
            /* RECOMP_MASKS=frame:mask:down;...  (raw GamePad bits) */
            typedef struct { int f; uint32_t mask; int down; } SimMask;
            static SimMask masks[64];
            static int nmasks = -1;
            if (nmasks < 0) {
                nmasks = 0;
                const char *s = getenv("RECOMP_MASKS");
                while (s && *s && nmasks < 64) {
                    unsigned m = 0;
                    if (sscanf(s, "%d:%x:%d", &masks[nmasks].f, &m, &masks[nmasks].down) == 3) {
                        masks[nmasks].mask = m;
                        nmasks++;
                    }
                    const char *semi = strchr(s, ';');
                    if (!semi) break;
                    s = semi + 1;
                }
            }
            for (int i = 0; i < nmasks; i++)
                if (frame == masks[i].f) {
                    mask_guest(&cpu, masks[i].mask, masks[i].down);
                    fprintf(stderr, "[mask] %s mask=%x frame=%d\n",
                            masks[i].down ? "down" : "up", masks[i].mask, frame);
                }
        }
        if (getenv("RECOMP_KEYMAP_DUMP") && frame == 120) {
            uint32_t game = g_game ? rd32(g_game) : 0;
            uint32_t fn = guest_symbol("_ZN4Game10GetKeyMaskEi");
            if (fn)
                for (int k = 4; k <= 62; k++) {
                    cpu.r[0] = game; cpu.r[1] = (uint32_t)k; cpu.r[14] = 0;
                    guest_call(&cpu, fn);
                    if (cpu.r[0]) fprintf(stderr, "[keymap] code=%d mask=%x\n", k, cpu.r[0]);
                }
        }
        if (getenv("RECOMP_INPUT_DUMP") && frame == atoi(getenv("RECOMP_INPUT_DUMP"))) {
            uint32_t game = g_game ? rd32(g_game) : 0;
            uint32_t scene = game ? rd32(game + 0x1bc8) : 0;
            uint32_t mgr = game ? rd32(game + 0x1bc0) : 0;
            uint32_t pad = mgr ? rd32(mgr + 4) : 0;
            fprintf(stderr, "[input] game=%x scene=%x sceneidx=%d gmode=%u control=%u mgr=%x pad=%x "
                    "keys=%x pressed=%x released=%x raw=%x\n",
                    game, scene, game ? (int32_t)rd32(game + 0x1bd0) : -1,
                    game ? (unsigned)rd8(game + 4) : 0,
                    (unsigned)rd8(0x24f0fc), mgr, pad,
                    pad ? rd32(pad + 0x10) : 0, pad ? rd32(pad + 8) : 0,
                    pad ? rd32(pad + 0xc) : 0, pad ? rd32(pad + 0) : 0);
            uint32_t idx = game ? rd32(game + 0x1d38) : 0xffffffffu;
            uint32_t st = 0;
            if (game && (int32_t)idx >= 0)
                st = rd32(game + (idx + 0x74e) * 4 + 4);
            fprintf(stderr, "[input] stateidx=%d state=%x vt=%x\n", (int)idx, st, st ? rd32(st) : 0);
            if (scene) {
                uint32_t pa = rd32(scene + 0x18c50);
                uint32_t pi = pa ? rd32(pa + 8) : 0xffffffffu;
                uint32_t car = (pa && (int32_t)pi >= 0)
                    ? rd32(scene + (pi + 0x631e) * 4 + 4) : 0;
                fprintf(stderr, "[input] playerarr=%x idx=%d car=%x speed=%d steer=%d "
                        "eng=%d state=%x st2=%x\n",
                        pa, (int)pi, car,
                        car ? (int32_t)rd32(car + 0x364) : 0,
                        car ? (int32_t)rd32(car + 0x380) : 0,
                        car ? (int32_t)rd32(car + 0x368) : 0,
                        car ? rd32(car + 0x484) : 0,
                        car ? rd32(car + 0x1788) : 0);
            }
            if (st && guest_range_ok(st, 0x400)) {
                uint32_t n = rd32(st + 0x18), arr = rd32(st + 0x10);
                fprintf(stderr, "[input] items n=%u arr=%x\n", n, arr);
                for (uint32_t k = 0; k < n && k < 32; k++) {
                    uint32_t it = rd32(arr + k * 4);
                    if (!it || !guest_range_ok(it, 0x80)) continue;
                    fprintf(stderr, "[input]  item%u @%x: %08x %08x %08x %08x %08x %08x %08x %08x | %08x %08x %08x %08x %08x %08x %08x %08x\n",
                            k, it,
                            rd32(it+0x00), rd32(it+0x04), rd32(it+0x08), rd32(it+0x0c),
                            rd32(it+0x10), rd32(it+0x14), rd32(it+0x18), rd32(it+0x1c),
                            rd32(it+0x20), rd32(it+0x24), rd32(it+0x28), rd32(it+0x2c),
                            rd32(it+0x30), rd32(it+0x34), rd32(it+0x38), rd32(it+0x3c));
                }
            }
        }
        if (getenv("RECOMP_NITRO_FILL") && frame == atoi(getenv("RECOMP_NITRO_FILL"))) {
            uint32_t game = g_game ? rd32(g_game) : 0;
            uint32_t scene = game ? rd32(game + 0x1bc8) : 0;
            uint32_t car = 0;
            if (scene) {
                uint32_t pa = rd32(scene + 0x18c50);
                uint32_t pi = pa ? rd32(pa + 8) : 0xffffffffu;
                if (pa && (int32_t)pi >= 0)
                    car = rd32(scene + (pi + 0x631e) * 4 + 4);
            }
            if (car) {
                float full = 2500.0f;
                uint32_t bits;
                memcpy(&bits, &full, sizeof(bits));
                wr32(car + 0x18e4, bits);
                fprintf(stderr, "[nitro] filled meter at frame %d\n", frame);
            }
        }
        if (getenv("RECOMP_NITRO_LOG")) {
            int every = atoi(getenv("RECOMP_NITRO_LOG"));
            if (every < 1) every = 120;
            if ((frame % every) == 0) {
                uint32_t game = g_game ? rd32(g_game) : 0;
                uint32_t scene = game ? rd32(game + 0x1bc8) : 0;
                uint32_t car = 0;
                if (scene) {
                    uint32_t pa = rd32(scene + 0x18c50);
                    uint32_t pi = pa ? rd32(pa + 8) : 0xffffffffu;
                    if (pa && (int32_t)pi >= 0)
                        car = rd32(scene + (pi + 0x631e) * 4 + 4);
                }
                if (car) {
                    uint32_t mgr = game ? rd32(game + 0x1bc0) : 0;
                    uint32_t pad = mgr ? rd32(mgr + 4) : 0;
                    fprintf(stderr, "[nitro] f=%d car=%x in=%08x amt=%.2f cap=%d "
                            "state=%d timer=%d ctr=%d max=%d cool=%d last=%d "
                            "speed=%d steer=%d flags=%08x drift=%u lock=%u "
                            "r390=%d r394=%d r38c=%d acc=%d fps=%d heap=%u "
                            "rot=(%d,%d,%d) pad=%x p0c=%x p10=%x p14=%x\n",
                            frame, car, rd32(car + 0x1788),
                            f32_from_bits(rd32(car + 0x18e4)),
                            (int32_t)rd32(car + 0x18f8),
                            (int32_t)rd32(car + 0x18ec),
                            (int32_t)rd32(car + 0x18e8),
                            (int32_t)rd32(car + 0x18f4),
                            (int32_t)rd32(car + 0x18fc),
                            (int32_t)rd32(car + 0x1914),
                            (int32_t)rd32(car + 0x1918),
                            (int32_t)rd32(car + 0x364),
                            (int32_t)rd32(car + 0x380),
                            rd32(car + 0x484),
                            (unsigned)rd8(car + 0x1740),
                            (unsigned)rd8(car + 0x1c90),
                            (int32_t)rd32(car + 0x390),
                            (int32_t)rd32(car + 0x394),
                            (int32_t)rd32(car + 0x38c),
                            game ? (int32_t)rd32(game + 0x8524) : 0,
                            game ? (int32_t)rd32(game + 0x8508) : 0,
                            guest_heap_top(),
                            (int32_t)rd32(car + 0x84),
                            (int32_t)rd32(car + 0x88),
                            (int32_t)rd32(car + 0x8c),
                            pad ? rd32(pad + 0x0) : 0,
                            pad ? rd32(pad + 0xc) : 0,
                            pad ? rd32(pad + 0x10) : 0,
                            pad ? rd32(pad + 0x14) : 0);
                }
            }
        }
        if (getenv("A5_SND_DEBUG") && (frame == 600 || frame == 15000)) {
            uint32_t g = g_game ? rd32(g_game) : 0;
            uint32_t sm = g ? rd32(g + 0x490) : 0;
            uint32_t voxsym = guest_symbol("_ZN3vox9VoxEngine11s_voxEngineE");
            uint32_t voxp = voxsym ? rd32(voxsym) : 0;
            fprintf(stderr, "[snd] f=%d game=%x sm=%x enabled=%u vox=%x voxptr=%x drv=%x i4=%x i18=%x\n",
                    frame, g, sm, sm ? rd8(sm + 0xa8) : 0,
                    voxsym, voxp,
                    voxp ? rd32(voxp + 0x50c) : 0,
                    voxp ? rd32(voxp + 4) : 0,
                    voxp ? rd32(voxp + 0x18) : 0);
            fprintf(stderr, "[snd] drv@i4+50c=%x drv@i18+50c=%x\n",
                    voxp && rd32(voxp+4) ? rd32(rd32(voxp+4)+0x50c) : 0,
                    voxp && rd32(voxp+0x18) ? rd32(rd32(voxp+0x18)+0x50c) : 0);
        }
        call_native(&cpu, "Asphalt5Renderer_nativeRender", 0, 0, NULL, 0);
        platform_swap();
        if (movie_has_pending()) {
            uint32_t g = g_game ? rd32(g_game) : 0;
            if (skip_movie) {
                movie_discard_pending();
            } else {
                movie_play_pending(platform_client_width(), platform_client_height());
            }
            /* Java's MyVideoView completion would clear this; release
             * GS_TrailerMovie::Update either way. */
            if (g) G(g + 0x1d72)[0] = 0;
        }
        frame_limit(frame, g_game);
        if ((frame % 600) == 0 && !getenv("A5_NO_HEAP_SWEEP"))
            guest_heap_compact();
        frame++;
        if ((frame % 120) == 0) {
            int tw, th, tf, tif;
            gles1_last_tex(&tw, &th, &tf, &tif);
            const float *cc = gles1_clear_color();
            uint32_t g = g_game ? rd32(g_game) : 0;
            uint32_t st = 0, vt = 0, touch = 0;
            if (g) {
                touch = rd32(g + 0x84a8);
                int idx = (int32_t)rd32(g + 0x1d38);
                if (idx >= 0) {
                    st = rd32(g + (uint32_t)(idx + 0x74e) * 4 + 4);
                    if (st) vt = rd32(st) - 8;
                }
            }
            if (getenv("A5_HEAP_LOG")) {
                uint32_t hf = 0, hl = 0, hb = 0;
                guest_heap_stats(&hf, &hl, &hb);
                fprintf(stderr, "[heap] frame %d top=%08x free=%u live=%u blocks=%u\n",
                        frame, guest_heap_top(), hf, hl, hb);
            }
            fprintf(stderr, "[boot] frame %d draws=%llu clears=%llu tex=%llu/%llu clear=%.2f/%.2f/%.2f/%.2f tex=%dx%d fmt=%x/%x nonwhite=%d state=%x touch=%u\n",
                    frame, (unsigned long long)gles1_draws(), (unsigned long long)gles1_clears(),
                    (unsigned long long)gles1_uploaded(), (unsigned long long)gles1_generated(),
                    cc[0], cc[1], cc[2], cc[3], tw, th, tif, tf, gles1_nonwhite(), vt, touch);
        }
    }
    fprintf(stderr, "[boot] leaving main loop after %d frames\n", frame);
    dump_regs(&cpu);
    return 0;
}

/* The translated code still needs the original ELF's data, relocations and
 * symbol table.  Installed builds append it to Asphalt5.exe (A5SO footer; see
 * guest_load_elf_auto); development builds can keep it on disk instead. */
static int host_file_exists(const char *p)
{
    DWORD a = GetFileAttributesA(p);
    return a != INVALID_FILE_ATTRIBUTES && !(a & FILE_ATTRIBUTE_DIRECTORY);
}

static const char *find_game_so(void)
{
    static char alt[12][MAX_PATH * 2];
    static const char *cands[] = {
        "engine/apk341/lib/armeabi/libasphalt5.so",
        "gamefiles/apk341/lib/armeabi/libasphalt5.so",
        "engine/apk337/lib/armeabi/libasphalt5.so",
        "gamefiles/apk337/lib/armeabi/libasphalt5.so",
        "original/apk337/lib/armeabi/libasphalt5.so",
        "work/apk337/lib/armeabi/libasphalt5.so",
        "lib/armeabi/libasphalt5.so",
        "engine/apk/lib/armeabi-v7a/libasphalt5.so",
        "engine/libasphalt5.so",
        "gamefiles/apk/lib/armeabi-v7a/libasphalt5.so",
        "gamefiles/libasphalt5.so",
        "original/apk/lib/armeabi-v7a/libasphalt5.so",
        "work/apk/lib/armeabi-v7a/libasphalt5.so",
        "lib/armeabi-v7a/libasphalt5.so",
        "libasphalt5.so",
    };
    const size_t ncand = sizeof(cands) / sizeof(cands[0]);
    const char *env = getenv("RECOMP_SO");
    if (env && *env) return env;

    /* Installed layout keeps the engine outside the game folder. */
    static char appdata_so[MAX_PATH * 2];
    const char *la = getenv("LOCALAPPDATA");
    if (la && *la) {
        snprintf(appdata_so, sizeof(appdata_so),
                 "%s\\Asphalt5\\engine\\apk\\lib\\armeabi-v7a\\libasphalt5.so", la);
        if (host_file_exists(appdata_so)) return appdata_so;
    }

    for (size_t i = 0; i < ncand; i++)
        if (host_file_exists(cands[i])) return cands[i];

    /* CWD may be build/ (ctest) or the repository root (manual runs). */
    char exe[MAX_PATH];
    DWORD n = GetModuleFileNameA(NULL, exe, sizeof(exe));
    if (n > 0 && n < sizeof(exe)) {
        char *slash = strrchr(exe, '\\');
        if (slash) {
            size_t k = 0;
            *slash = 0;
            for (size_t i = 0; i < ncand && k + 2 <= 12; i++) {
                snprintf(alt[k], sizeof(alt[k]), "%s\\..\\%s", exe, cands[i]);
                if (host_file_exists(alt[k])) return alt[k];
                k++;
                snprintf(alt[k], sizeof(alt[k]), "%s\\%s", exe, cands[i]);
                if (host_file_exists(alt[k])) return alt[k];
                k++;
            }
        }
    }
    return cands[0];
}

#ifdef RECOMP_GUI
#if !defined(RECOMP_TARGET_337) && !defined(RECOMP_TARGET_341)
static int game_data_present(void)
{
    static const char *dirs[] = {
        "gamefiles\\GloftA5HD341", "assets\\GloftA5HD341", "GloftA5HD341",
        "gamefiles\\GloftA5HD337", "assets\\GloftA5HD337", "GloftA5HD337",
        "gamefiles\\GloftA5HD", "assets\\GloftA5HD", "GloftA5HD"
    };
    for (int i = 0; i < (int)(sizeof(dirs) / sizeof(dirs[0])); i++) {
        char pat[MAX_PATH];
        WIN32_FIND_DATAA fd;
        snprintf(pat, sizeof(pat), "%s\\package_general.bar_*.cnk", dirs[i]);
        HANDLE h = FindFirstFileA(pat, &fd);
        if (h != INVALID_HANDLE_VALUE) { FindClose(h); return 1; }
    }
    return 0;
}
#endif
#endif

int main(int argc, char **argv)
{
#ifdef RECOMP_GUI
    /* Normal double-click launch: make the executable's folder the working
     * directory (that is where assets/ and original/ live), route all
     * diagnostics to asphalt5.log, and start the game by default. */
    {
        char exe[MAX_PATH];
        DWORD n = GetModuleFileNameA(NULL, exe, sizeof(exe));
        if (n > 0 && n < sizeof(exe)) {
            char *slash = strrchr(exe, '\\');
            if (slash) {
                *slash = 0;
                SetCurrentDirectoryA(exe);
            }
        }
        {
            char dir[MAX_PATH], path[MAX_PATH];
            const char *la = getenv("LOCALAPPDATA");
            if (la && *la) {
                snprintf(dir, sizeof(dir), "%s\\Asphalt5", la);
                CreateDirectoryA(dir, NULL);
                snprintf(path, sizeof(path), "%s\\asphalt5.log", dir);
            } else {
                snprintf(path, sizeof(path), "asphalt5.log");
            }
            freopen(path, "w", stderr);
            freopen(path, "a", stdout);
        }
#if !defined(RECOMP_TARGET_337) && !defined(RECOMP_TARGET_341)
        if (!game_data_present()) {
            fprintf(stderr, "[boot] GloftA5HD data folder is missing\n");
            MessageBoxA(NULL,
                "The game data folder is missing.\n\n"
                "Copy the recovered GloftA5HD folder to:\n"
                "    gamefiles\\GloftA5HD\n\n"
                "It must contain package_general.bar_*.cnk.\n"
                "Then start Asphalt 5 again.",
                "Asphalt 5 - game data missing", MB_ICONERROR | MB_OK);
            return 1;
        }
#endif
    }
    g_verbose = getenv("RECOMP_VERBOSE") ? 1 : 0;
    int boot = 1;
#else
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    int boot = 0;
    /* Automated/off-screen runs should never flash a console window. */
    if (getenv("RECOMP_HIDE_CONSOLE") || getenv("RECOMP_OFFSCREEN") ||
        getenv("RECOMP_MINIMIZE")) {
        HWND con = GetConsoleWindow();
        if (con) ShowWindow(con, SW_HIDE);
    }
#endif
    const char *so = find_game_so();
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "boot")) boot = 1;
        else if (!strcmp(argv[i], "crc")) boot = 0;
        else if (!strcmp(argv[i], "mtxtest")) return run_mtxtest(so);
        else if (!strcmp(argv[i], "-q")) g_verbose = 0;
        else if (!strcmp(argv[i], "-v")) g_verbose = 1;
        else so = argv[i];
    }
    int rc = boot ? run_boot(so) : run_crc(so);
#ifdef RECOMP_GUI
    if (rc != 0) {
        char msg[256];
        snprintf(msg, sizeof(msg),
                 "Asphalt 5 failed to start (code %d).\n\nSee asphalt5.log next to the executable for details.",
                 rc);
        MessageBoxA(NULL, msg, "Asphalt 5", MB_ICONERROR | MB_OK);
    }
#endif
    return rc;
}
