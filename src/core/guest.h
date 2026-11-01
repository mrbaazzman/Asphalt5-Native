#ifndef ASPHALT_GUEST_H
#define ASPHALT_GUEST_H

/*
 * Guest execution runtime for the Asphalt 5 static recompilation.
 *
 * The original game is a 32-bit ARMv7-A ELF (VFPv2, no NEON).  Generated C
 * functions operate on the architectural state below.  Guest addresses are
 * 32-bit offsets into one reserved 4 GiB host mapping, so guest pointers keep
 * their original width and layout.
 */

#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CPU CPU;
typedef void (*GuestFn)(CPU *cpu);

struct CPU {
    uint32_t r[16];       /* r0-r12, sp, lr, pc */
    uint32_t cpsr;        /* NZCV in bits 31..28, T in bit 5 */
    uint32_t fpscr;       /* VFP status/control */
    uint64_t d[16];       /* d0-d15; s0-s31 alias the halves */
    uint32_t tls;         /* TPIDRURO value for this thread */
    uint32_t tid;         /* stable guest thread id */
    uint32_t pc;          /* current guest address (diagnostics) */
};

extern uint8_t *g_mem;
extern uint32_t g_load_bias;
extern int g_verbose;
extern int g_instruction_budget;

/* ---- guest memory ---------------------------------------------------- */

int  guest_mem_init(void);
void guest_mem_shutdown(void);
int  guest_commit(uint32_t addr, uint32_t size, uint32_t protect);

static inline uint8_t *G(uint32_t a) { return g_mem + (uint64_t)a; }

static inline uint8_t rd8(uint32_t a) { uint8_t v; __builtin_memcpy(&v, G(a), 1); return v; }
static inline uint16_t rd16(uint32_t a) { uint16_t v; __builtin_memcpy(&v, G(a), 2); return v; }
static inline uint32_t rd32(uint32_t a) { uint32_t v; __builtin_memcpy(&v, G(a), 4); return v; }
static inline uint64_t rd64(uint32_t a) { uint64_t v; __builtin_memcpy(&v, G(a), 8); return v; }
static inline void wr8(uint32_t a, uint8_t v) { __builtin_memcpy(G(a), &v, 1); }
static inline void wr16(uint32_t a, uint16_t v) { __builtin_memcpy(G(a), &v, 2); }
static inline void wr32(uint32_t a, uint32_t v) { __builtin_memcpy(G(a), &v, 4); }
static inline void wr64(uint32_t a, uint64_t v) { __builtin_memcpy(G(a), &v, 8); }

static inline int32_t s8(uint32_t a)  { return (int8_t)rd8(a); }
static inline int16_t s16(uint32_t a) { return (int16_t)rd16(a); }
static inline int32_t s32(uint32_t a) { return (int32_t)rd32(a); }

/* ---- condition codes (Capstone ARM_CC_*) ----------------------------- */

enum {
    CC_INVALID = 0, CC_EQ = 1, CC_NE = 2, CC_HS = 3, CC_LO = 4,
    CC_MI = 5, CC_PL = 6, CC_VS = 7, CC_VC = 8, CC_HI = 9,
    CC_LS = 10, CC_GE = 11, CC_LT = 12, CC_GT = 13, CC_LE = 14,
    CC_AL = 15
};

static inline int cond_test(const CPU *c, unsigned cc)
{
    const uint32_t f = c->cpsr;
    const int n = (f >> 31) & 1, z = (f >> 30) & 1;
    const int cy = (f >> 29) & 1, v = (f >> 28) & 1;
    switch (cc) {
    case CC_EQ: return z;
    case CC_NE: return !z;
    case CC_HS: return cy;
    case CC_LO: return !cy;
    case CC_MI: return n;
    case CC_PL: return !n;
    case CC_VS: return v;
    case CC_VC: return !v;
    case CC_HI: return cy && !z;
    case CC_LS: return !cy || z;
    case CC_GE: return n == v;
    case CC_LT: return n != v;
    case CC_GT: return !z && n == v;
    case CC_LE: return z || n != v;
    default: return 1;
    }
}

static inline void set_nz(CPU *c, uint32_t v)
{
    c->cpsr = (c->cpsr & 0x3FFFFFFFu) | (v & 0x80000000u) | (v == 0 ? 0x40000000u : 0);
}

static inline void set_nz64(CPU *c, uint64_t v)
{
    c->cpsr = (c->cpsr & 0x3FFFFFFFu) | ((uint32_t)(v >> 32) & 0x80000000u) |
              (((v & 0xFFFFFFFFFFFFFFFFull) == 0) ? 0x40000000u : 0);
}

/* a + b + cin; returns 32-bit result, updates NZCV when set != 0 */
static inline uint32_t add_flags(CPU *c, uint32_t a, uint32_t b, uint32_t cin, int set)
{
    uint64_t wide = (uint64_t)a + (uint64_t)b + (uint64_t)cin;
    uint32_t res = (uint32_t)wide;
    if (set) {
        uint32_t f = (uint32_t)(res & 0x80000000u);
        if (res == 0) f |= 0x40000000u;
        if ((wide >> 32) & 1) f |= 0x20000000u;
        if ((~(a ^ b) & (a ^ res)) & 0x80000000u) f |= 0x10000000u;
        c->cpsr = (c->cpsr & 0x0FFFFFFFu) | f;
    }
    return res;
}

static inline uint32_t sub_flags(CPU *c, uint32_t a, uint32_t b, uint32_t cin, int set)
{
    return add_flags(c, a, ~b, cin, set);
}

/* shift used by data-processing operands; updates *carry when amount != 0 */
static inline uint32_t shifter(uint32_t v, unsigned type, unsigned amount, uint32_t *carry)
{
    switch (type) {
    case 1: /* ASR */
        if (amount == 0) return v;
        if (amount >= 32) {
            *carry = (v >> 31) & 1;
            return (v & 0x80000000u) ? 0xFFFFFFFFu : 0u;
        }
        *carry = (v >> (amount - 1)) & 1;
        return (uint32_t)((int32_t)v >> amount);
    case 2: /* LSL */
        if (amount == 0) return v;
        if (amount >= 32) {
            *carry = (amount == 32) ? (v & 1) : 0;
            return 0;
        }
        *carry = (v >> (32 - amount)) & 1;
        return v << amount;
    case 3: /* LSR */
        if (amount == 0) return v;
        if (amount >= 32) {
            *carry = (amount == 32) ? ((v >> 31) & 1) : 0;
            return 0;
        }
        *carry = (v >> (amount - 1)) & 1;
        return v >> amount;
    case 4: /* ROR */
        if (amount == 0) return v;
        amount &= 31;
        if (amount == 0) {
            *carry = (v >> 31) & 1;
            return v;
        }
        *carry = (v >> (amount - 1)) & 1;
        return (v >> amount) | (v << (32 - amount));
    case 5: { /* RRX */
        uint32_t c = *carry;
        *carry = v & 1;
        return (v >> 1) | (c << 31);
    }
    default:
        return v;
    }
}

/* ---- VFP ------------------------------------------------------------- */

/* AAPCS softfp argument/return helpers (the library has no VFP_args tag). */
static inline float f32_from_bits(uint32_t b) { float f; __builtin_memcpy(&f, &b, 4); return f; }
static inline uint32_t f32_bits(float f) { uint32_t b; __builtin_memcpy(&b, &f, 4); return b; }
static inline double f64_from_bits(uint32_t lo, uint32_t hi)
{
    uint64_t b = ((uint64_t)hi << 32) | lo; double d; __builtin_memcpy(&d, &b, 8); return d;
}
static inline uint64_t f64_bits(double d) { uint64_t b; __builtin_memcpy(&b, &d, 8); return b; }

static inline float *vfp_s(CPU *c, unsigned s)
{
    return ((float *)&c->d[s >> 1]) + (s & 1);
}
static inline double *vfp_d(CPU *c, unsigned d) { return (double *)&c->d[d]; }

/* VFP short-vector mode.
 *
 * The register bank is split into four banks of eight single-precision
 * registers (s0-s7, s8-s15, s16-s23, s24-s31).  Vectors wrap inside their
 * bank, and the operation type follows the ARM architecture rules:
 *   - Fd in s0-s7            -> scalar
 *   - Fm in s0-s7, Fd not    -> mixed (Fm is a scalar broadcast)
 *   - otherwise              -> vector (all operands elementwise)
 * The engine's hand-written 4x4 matrix code relies on the mixed form, e.g.
 *   vmul.f32 s8, s16, s0    ; s8..s11 = s16..s19 * s0
 *   vmla.f32 s8, s20, s1    ; s8..s11 += s20..s23 * s1
 */
static inline unsigned vfp_vlen(CPU *c) { return ((c->fpscr >> 16) & 7u) + 1u; }
static inline unsigned vfp_vstride(CPU *c)
{
    return (((c->fpscr >> 20) & 3u) == 3u) ? 2u : 1u;
}
static inline unsigned vfp_velem(CPU *c, unsigned base, unsigned i)
{
    unsigned st = vfp_vstride(c);
    return (base & ~7u) | ((base + i * st) & 7u);
}
static inline void vfp_vadd(CPU *c, unsigned d, unsigned n, unsigned m)
{
    unsigned len = vfp_vlen(c);
    if (d < 8 || len == 1) { *vfp_s(c, d) = *vfp_s(c, n) + *vfp_s(c, m); return; }
    if (m < 8) {
        float b = *vfp_s(c, m);
        for (unsigned i = 0; i < len; i++)
            *vfp_s(c, vfp_velem(c, d, i)) = *vfp_s(c, vfp_velem(c, n, i)) + b;
        return;
    }
    for (unsigned i = 0; i < len; i++)
        *vfp_s(c, vfp_velem(c, d, i)) = *vfp_s(c, vfp_velem(c, n, i)) + *vfp_s(c, vfp_velem(c, m, i));
}
static inline void vfp_vsub(CPU *c, unsigned d, unsigned n, unsigned m)
{
    unsigned len = vfp_vlen(c);
    if (d < 8 || len == 1) { *vfp_s(c, d) = *vfp_s(c, n) - *vfp_s(c, m); return; }
    if (m < 8) {
        float b = *vfp_s(c, m);
        for (unsigned i = 0; i < len; i++)
            *vfp_s(c, vfp_velem(c, d, i)) = *vfp_s(c, vfp_velem(c, n, i)) - b;
        return;
    }
    for (unsigned i = 0; i < len; i++)
        *vfp_s(c, vfp_velem(c, d, i)) = *vfp_s(c, vfp_velem(c, n, i)) - *vfp_s(c, vfp_velem(c, m, i));
}
static inline void vfp_vmul(CPU *c, unsigned d, unsigned n, unsigned m)
{
    unsigned len = vfp_vlen(c);
    if (d < 8 || len == 1) { *vfp_s(c, d) = *vfp_s(c, n) * *vfp_s(c, m); return; }
    if (m < 8) {
        float b = *vfp_s(c, m);
        for (unsigned i = 0; i < len; i++)
            *vfp_s(c, vfp_velem(c, d, i)) = *vfp_s(c, vfp_velem(c, n, i)) * b;
        return;
    }
    for (unsigned i = 0; i < len; i++)
        *vfp_s(c, vfp_velem(c, d, i)) = *vfp_s(c, vfp_velem(c, n, i)) * *vfp_s(c, vfp_velem(c, m, i));
}
static inline void vfp_vdiv(CPU *c, unsigned d, unsigned n, unsigned m)
{
    unsigned len = vfp_vlen(c);
    if (d < 8 || len == 1) { *vfp_s(c, d) = *vfp_s(c, n) / *vfp_s(c, m); return; }
    if (m < 8) {
        float b = *vfp_s(c, m);
        for (unsigned i = 0; i < len; i++)
            *vfp_s(c, vfp_velem(c, d, i)) = *vfp_s(c, vfp_velem(c, n, i)) / b;
        return;
    }
    for (unsigned i = 0; i < len; i++)
        *vfp_s(c, vfp_velem(c, d, i)) = *vfp_s(c, vfp_velem(c, n, i)) / *vfp_s(c, vfp_velem(c, m, i));
}
static inline void vfp_vmla(CPU *c, unsigned d, unsigned n, unsigned m)
{
    unsigned len = vfp_vlen(c);
    if (d < 8 || len == 1) { *vfp_s(c, d) += *vfp_s(c, n) * *vfp_s(c, m); return; }
    if (m < 8) {
        float b = *vfp_s(c, m);
        for (unsigned i = 0; i < len; i++) {
            float *dp = vfp_s(c, vfp_velem(c, d, i));
            *dp += *vfp_s(c, vfp_velem(c, n, i)) * b;
        }
        return;
    }
    for (unsigned i = 0; i < len; i++) {
        float *dp = vfp_s(c, vfp_velem(c, d, i));
        *dp += *vfp_s(c, vfp_velem(c, n, i)) * *vfp_s(c, vfp_velem(c, m, i));
    }
}
static inline void vfp_vmls(CPU *c, unsigned d, unsigned n, unsigned m)
{
    unsigned len = vfp_vlen(c);
    if (d < 8 || len == 1) { *vfp_s(c, d) -= *vfp_s(c, n) * *vfp_s(c, m); return; }
    if (m < 8) {
        float b = *vfp_s(c, m);
        for (unsigned i = 0; i < len; i++) {
            float *dp = vfp_s(c, vfp_velem(c, d, i));
            *dp -= *vfp_s(c, vfp_velem(c, n, i)) * b;
        }
        return;
    }
    for (unsigned i = 0; i < len; i++) {
        float *dp = vfp_s(c, vfp_velem(c, d, i));
        *dp -= *vfp_s(c, vfp_velem(c, n, i)) * *vfp_s(c, vfp_velem(c, m, i));
    }
}
static inline void vfp_vnmla(CPU *c, unsigned d, unsigned n, unsigned m)
{
    unsigned len = vfp_vlen(c);
    if (d < 8 || len == 1) { *vfp_s(c, d) = -(*vfp_s(c, d) + *vfp_s(c, n) * *vfp_s(c, m)); return; }
    if (m < 8) {
        float b = *vfp_s(c, m);
        for (unsigned i = 0; i < len; i++) {
            float *dp = vfp_s(c, vfp_velem(c, d, i));
            *dp = -(*dp + *vfp_s(c, vfp_velem(c, n, i)) * b);
        }
        return;
    }
    for (unsigned i = 0; i < len; i++) {
        float *dp = vfp_s(c, vfp_velem(c, d, i));
        *dp = -(*dp + *vfp_s(c, vfp_velem(c, n, i)) * *vfp_s(c, vfp_velem(c, m, i)));
    }
}
static inline void vfp_vnmls(CPU *c, unsigned d, unsigned n, unsigned m)
{
    unsigned len = vfp_vlen(c);
    if (d < 8 || len == 1) { *vfp_s(c, d) = -(*vfp_s(c, d) - *vfp_s(c, n) * *vfp_s(c, m)); return; }
    if (m < 8) {
        float b = *vfp_s(c, m);
        for (unsigned i = 0; i < len; i++) {
            float *dp = vfp_s(c, vfp_velem(c, d, i));
            *dp = -(*dp - *vfp_s(c, vfp_velem(c, n, i)) * b);
        }
        return;
    }
    for (unsigned i = 0; i < len; i++) {
        float *dp = vfp_s(c, vfp_velem(c, d, i));
        *dp = -(*dp - *vfp_s(c, vfp_velem(c, n, i)) * *vfp_s(c, vfp_velem(c, m, i)));
    }
}
static inline void vfp_vnmul(CPU *c, unsigned d, unsigned n, unsigned m)
{
    unsigned len = vfp_vlen(c);
    if (d < 8 || len == 1) { *vfp_s(c, d) = -(*vfp_s(c, n) * *vfp_s(c, m)); return; }
    if (m < 8) {
        float b = *vfp_s(c, m);
        for (unsigned i = 0; i < len; i++)
            *vfp_s(c, vfp_velem(c, d, i)) = -(*vfp_s(c, vfp_velem(c, n, i)) * b);
        return;
    }
    for (unsigned i = 0; i < len; i++)
        *vfp_s(c, vfp_velem(c, d, i)) = -(*vfp_s(c, vfp_velem(c, n, i)) * *vfp_s(c, vfp_velem(c, m, i)));
}
static inline void vfp_vabs(CPU *c, unsigned d, unsigned n)
{
    unsigned len = vfp_vlen(c);
    if (d < 8 || n < 8 || len == 1) { *vfp_s(c, d) = fabsf(*vfp_s(c, n)); return; }
    for (unsigned i = 0; i < len; i++)
        *vfp_s(c, vfp_velem(c, d, i)) = fabsf(*vfp_s(c, vfp_velem(c, n, i)));
}
static inline void vfp_vneg(CPU *c, unsigned d, unsigned n)
{
    unsigned len = vfp_vlen(c);
    if (d < 8 || n < 8 || len == 1) { *vfp_s(c, d) = -*vfp_s(c, n); return; }
    for (unsigned i = 0; i < len; i++)
        *vfp_s(c, vfp_velem(c, d, i)) = -*vfp_s(c, vfp_velem(c, n, i));
}
static inline void vfp_vsqrt(CPU *c, unsigned d, unsigned n)
{
    unsigned len = vfp_vlen(c);
    if (d < 8 || n < 8 || len == 1) { *vfp_s(c, d) = sqrtf(*vfp_s(c, n)); return; }
    for (unsigned i = 0; i < len; i++)
        *vfp_s(c, vfp_velem(c, d, i)) = sqrtf(*vfp_s(c, vfp_velem(c, n, i)));
}

void vfp_set_cmp(CPU *c, double a, double b);
void vfp_set_cmp32(CPU *c, float a, float b);
static inline void vfp_sync_flags(CPU *c)
{
    c->cpsr = (c->cpsr & 0x0FFFFFFFu) | (c->fpscr & 0xF0000000u);
}

/* ---- dispatch / loader ---------------------------------------------- */

typedef struct {
    uint32_t addr;
    GuestFn fn;
    const char *name;
} GuestEntry;

void guest_register_entry(uint32_t addr, GuestFn fn, const char *name);
void guest_register_generated(void);
GuestFn guest_lookup(uint32_t addr);
void guest_call(CPU *cpu, uint32_t addr);
void guest_jump(CPU *cpu, uint32_t addr);
void guest_return_or_jump(CPU *cpu, uint32_t target, uint32_t entry_lr);
/* Returns 1 when control left this C frame (return or tail jump), 0 when an
 * LR-linked indirect call returned and execution should continue. */
int  guest_pc_write(CPU *cpu, uint32_t target, uint32_t entry_lr, uint32_t next_pc);
void guest_unimplemented(CPU *cpu, uint32_t addr);
void guest_abort(CPU *cpu, const char *fmt, ...);
/* CMatrix::Mult/PreMult/SetMult host replacements (0=Mult,1=PreMult,2=SetMult).
 * The originals use the VFPv2 short-vector trick, which is hard to match
 * exactly; this scalar version mirrors the original row-major math. */
void guest_cmatrix_mul(CPU *cpu, int op);
void guest_cmatrix_get_quaternion(CPU *cpu);
int  guest_load_elf(const char *path);
int  guest_load_elf_auto(const char *path);
uint32_t guest_symbol(const char *name);
void guest_run_init_array(CPU *cpu);
uint32_t guest_import_stub(const char *name);

/* guest heap (32-bit addresses) */
uint32_t guest_alloc(size_t n);
uint32_t guest_alloc_zero(size_t n);
void guest_free(uint32_t p);
uint32_t guest_realloc(uint32_t p, size_t n);
uint32_t guest_heap_top(void);
void guest_heap_stats(uint32_t *free_bytes, uint32_t *live_bytes, uint32_t *blocks);
void guest_heap_compact(void);
void jni_free_deferred(void);
void jni_free_menu_deferred(void);
void jni_free_race_deferred(void);

/* generated import veneers */
typedef struct { const char *name; GuestFn fn; } ImportDef;
extern const ImportDef g_import_defs[];
extern const size_t g_import_def_count;
void import_dispatch(CPU *cpu, const char *name);

typedef struct { uint32_t addr; const char *name; } PltImport;
extern const PltImport g_plt_imports[];
extern const size_t g_plt_import_count;
void guest_register_plt_imports(void);

/* generated table */
extern const GuestEntry g_generated_functions[];
extern const size_t g_generated_function_count;

/* imports */
void guest_register_imports(void);
uint32_t guest_import_addr(const char *name);

/* host JNIEnv */
void jni_init(void);
uint32_t jni_env_addr(void);

/* Win32/WGL platform + GLES1 compatibility */
int  platform_init(int width, int height);
void platform_set_resolution(int w, int h);
void platform_set_vsync(int v);
void platform_set_aspect_fit(int v);
void platform_set_frame_cap(int cap);
void platform_restart(void);
void platform_set_cpu(CPU *cpu);
void platform_pump(void);
int  platform_is_player_car(uint32_t car);
int  platform_buttons_mode(void);
int  platform_nitro_held_for_car(uint32_t car);
void platform_request_exit(void);
void platform_crash_log(const char *msg);
void platform_swap(void);
int  platform_should_close(void);
int  platform_client_width(void);
int  platform_client_height(void);
int  platform_logical_width(void);
int  platform_logical_height(void);

/* Host hooks for the engine's controls page. */
int  guest_control_menu_label(CPU *cpu);
int  guest_video_menu_label(CPU *cpu);
int  guest_force_control_mode(CPU *cpu);
int  guest_control_menu_action(CPU *cpu);
int  guest_control_menu_bar_action(CPU *cpu);
int  guest_control_menu_click(CPU *cpu);
void guest_string_override(CPU *cpu);
void guest_controls_page_tick(void);
void guest_clear_controls_page(CPU *cpu);
void guest_log_menu(CPU *cpu);
int  guest_controls_render_begin(CPU *cpu);
void guest_record_row(CPU *cpu);
void guest_debug_menu(CPU *cpu);
int  gles1_dispatch(CPU *cpu, const char *name);
uint64_t gles1_draws(void);
uint64_t gles1_clears(void);
uint64_t gles1_uploaded(void);
uint64_t gles1_generated(void);
const float *gles1_clear_color(void);
int gles1_last_tex(int *w, int *h, int *fmt, int *ifmt);
int gles1_nonwhite(void);

#ifdef __cplusplus
}
#endif

#endif
