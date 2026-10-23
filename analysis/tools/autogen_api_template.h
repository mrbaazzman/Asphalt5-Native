// autogen_api.h - shared declarations for the chunked translated functions.
//
// The game's 5k translated functions are split into 12 .c chunks so Ninja can
// compile them in parallel.  Everything they touch lives here: the guest
// memory helpers, the write/read watch hooks, the flag snapshots' shared
// state, and the translation-dispatch entry points.
#pragma once
#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <xmmintrin.h>
#include "ucapi.h"

#ifndef BASE
#define BASE 0x10000000u
#define SHIM 0x30000000u
#define DATA 0x40000000u
#define HEAP 0x50000000u
#define HEAP_SIZE 0x40000000u
#define STACK 0x70000000u
#define STACK_SIZE 0x00100000u
#define LR_SENTINEL (SHIM + 0x000F0000u)
#define JNI_STUBS (SHIM + 0x00010000u)
#define JNI_TABLE (JNI_STUBS + 0x1000u)
#endif

typedef struct { uint64_t addr; size_t size; uint8_t* host; } MemRegion;
extern MemRegion memregions[8];
extern int nmemregions;
extern uint8_t* g_mem_page[1u << 16];

#if defined(__GNUC__)
#define A5_INLINE static inline __attribute__((always_inline))
#else
#define A5_INLINE static __forceinline
#endif

A5_INLINE uint8_t* mem_host(uint64_t addr) {
    if (addr < 0x100000000ull) {
        uint8_t* p = g_mem_page[(uint32_t)addr >> 16];
        if (p) return p + ((uint32_t)addr & 0xFFFF);
    }
    for (int i = 0; i < nmemregions; i++)
        if (addr >= memregions[i].addr && addr < memregions[i].addr + memregions[i].size)
            return memregions[i].host + (addr - memregions[i].addr);
    return NULL;
}

// write log / read watch state (defined in a5host.c)
extern int g_wlog_on, g_iw_on;
extern int g_rwatch_on, g_rwatch_start;
extern uint32_t g_rwatch_lo, g_rwatch_hi;
extern uint32_t g_wcur;
extern int g_host_frame;
extern void rec_add(uint32_t a, int sz, uint32_t by, uint32_t pc);

A5_INLINE void rwatch(uint32_t a, uint32_t v, int sz) {
    static long n = 0;
    if (__builtin_expect(!g_rwatch_on || g_host_frame < g_rwatch_start, 1)) return;
    if (a < g_rwatch_lo || a >= g_rwatch_hi) return;
    if (n++ >= 4000) return;
    printf("[rw] f%d a=%#x v=%#x sz=%d by=%#x\n", g_host_frame, a, v, sz, g_wcur);
}

A5_INLINE void wlog_add(uint32_t a, int sz) {
    if (__builtin_expect(g_wlog_on || g_iw_on, 0)) rec_add(a, sz, g_wcur, 0);
}

A5_INLINE uint32_t rd32(uint32_t a) {
    uint32_t v;
    uint8_t* p = mem_host(a);
    if (p) memcpy(&v, p, 4);
    else { v = 0; p_uc_mem_read(g_uc, a, &v, 4); }
    rwatch(a, v, 4);
    return v;
}
A5_INLINE uint16_t ur16(uint32_t a) {
    uint16_t v;
    uint8_t* p = mem_host(a);
    if (p) memcpy(&v, p, 2);
    else { v = 0; p_uc_mem_read(g_uc, a, &v, 2); }
    rwatch(a, v, 2);
    return v;
}
A5_INLINE uint8_t rd8(uint32_t a) {
    uint8_t* p = mem_host(a);
    if (p) return *p;
    uint8_t v = 0; p_uc_mem_read(g_uc, a, &v, 1); return v;
}
A5_INLINE void uw16(uint32_t a, uint16_t v) {
    wlog_add(a, 2);
    uint8_t* p = mem_host(a);
    if (p) memcpy(p, &v, 2); else p_uc_mem_write(g_uc, a, &v, 2);
}
A5_INLINE void uw8(uint32_t a, uint8_t v) {
    wlog_add(a, 1);
    uint8_t* p = mem_host(a);
    if (p) *p = v; else p_uc_mem_write(g_uc, a, &v, 1);
}
#undef uw32
#define uw32(a, v) do { \
    uint32_t _v = (uint32_t)(v); \
    wlog_add((a), 4); \
    uint8_t* _p = mem_host(a); \
    if (_p) memcpy(_p, &_v, 4); else p_uc_mem_write(g_uc, a, &_v, 4); \
} while (0)

A5_INLINE float uf32(uint32_t a) {
    uint8_t* p = mem_host(a);
    if (p) { float v; memcpy(&v, p, 4); return v; }
    float v = 0; p_uc_mem_read(g_uc, a, &v, 4); return v;
}
A5_INLINE uint32_t fbits(float f) { uint32_t u; memcpy(&u, &f, 4); return u; }
A5_INLINE float ffrombits(uint32_t u) { float f; memcpy(&f, &u, 4); return f; }

// ARM VFP NaN / conversion helpers (copied from natives.inc; the chunks do
// not include natives.inc because it carries host state).
static inline float arm_vfp_nan(float v) {
    uint32_t u;
    memcpy(&u, &v, 4);
    if ((u & 0x7F800000u) == 0x7F800000u && (u & 0x007FFFFFu)) {
        u = 0x7FC00000u;
        memcpy(&v, &u, 4);
    }
    return v;
}
static inline double arm_vfp_nan_d(double v) {
    uint64_t u;
    memcpy(&u, &v, 8);
    if ((u & 0x7FF0000000000000ull) == 0x7FF0000000000000ull &&
        (u & 0x000FFFFFFFFFFFFFull)) {
        u = 0x7FF8000000000000ull;
        memcpy(&v, &u, 8);
    }
    return v;
}
static inline uint32_t vcvt_s32_f32(float v) {
    if (v != v) return 0;
    if (v >= 2147483648.0f) return 0x7FFFFFFFu;
    if (v < -2147483648.0f) return 0x80000000u;
    return (uint32_t)(int32_t)v;
}
static inline uint32_t vcvt_u32_f32(float v) {
    if (v != v) return 0;
    if (v >= 4294967296.0f) return 0xFFFFFFFFu;
    if (v < 0.0f) return 0;
    return (uint32_t)v;
}
static inline uint32_t vcvt_s32_f64(double v) {
    if (v != v) return 0;
    if (v >= 2147483648.0) return 0x7FFFFFFFu;
    if (v < -2147483648.0) return 0x80000000u;
    return (uint32_t)(int32_t)v;
}
static inline uint32_t vcvt_u32_f64(double v) {
    if (v != v) return 0;
    if (v >= 4294967296.0) return 0xFFFFFFFFu;
    if (v < 0.0) return 0;
    return (uint32_t)v;
}

// ---- translation runtime (defined in a5host.c / hooks.inc) ----
extern int g_auto_bypass, g_auto_verify;
extern uint32_t g_auto_r1;
extern uint32_t g_press_latch;
extern int probe_dispatch(uint32_t fn, uint32_t* R, float* S, uint32_t sp);
extern int auto_enabled(uint32_t a);
extern int auto_dispatch(uint32_t a, uint32_t* R, float* S, uint32_t sp);
extern uint32_t call_emulated_regs(uint32_t func, const uint32_t* R, uint32_t sp);
extern uint32_t auto_call_plt(uint32_t plt, uint32_t r0, uint32_t r1,
                              uint32_t r2, uint32_t r3, uint32_t sp);
