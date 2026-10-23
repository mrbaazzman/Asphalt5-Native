// ucapi.h - runtime loader for the Unicorn C API (unicorn.dll ships with the
// Python wheel). No link-time dependency: LoadLibrary + GetProcAddress.
#pragma once
#include <windows.h>
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef void uc_engine;
typedef size_t uc_hook;

#define UC_ARCH_ARM 1
#define UC_MODE_ARM 0
#define UC_PROT_ALL 7

#define UC_ARM_REG_CPSR    3
#define UC_ARM_REG_FPEXC   4
#define UC_ARM_REG_FPSCR   6
#define UC_ARM_REG_LR      10
#define UC_ARM_REG_PC      11
#define UC_ARM_REG_SP      12
#define UC_ARM_REG_R0      66
#define UC_ARM_REG_R1      67
#define UC_ARM_REG_R2      68
#define UC_ARM_REG_R3      69
#define UC_ARM_REG_R4      70
#define UC_ARM_REG_R5      71
#define UC_ARM_REG_R6      72
#define UC_ARM_REG_R7      73
#define UC_ARM_REG_R8      74
#define UC_ARM_REG_R9      75
#define UC_ARM_REG_R10     76
#define UC_ARM_REG_R11     77
#define UC_ARM_REG_R12     78
#define UC_ARM_REG_S0      79
#define UC_ARM_REG_D0      14
#define UC_ARM_REG_C1_C0_2 111

#define UC_HOOK_CODE         4
#define UC_HOOK_MEM_UNMAPPED 112

typedef void (*uc_cb_hookcode_t)(uc_engine*, uint64_t, uint32_t, void*);
typedef void (*uc_cb_hookmem_t)(uc_engine*, int, uint64_t, int, int64_t, void*);

extern int  (*p_uc_open)(int, int, uc_engine**);
extern int  (*p_uc_close)(uc_engine*);
extern int  (*p_uc_mem_map)(uc_engine*, uint64_t, size_t, uint32_t);
extern int  (*p_uc_mem_map_ptr)(uc_engine*, uint64_t, size_t, uint32_t, void*);
extern int  (*p_uc_mem_write_real)(uc_engine*, uint64_t, const void*, size_t);
extern int  (*p_uc_mem_read)(uc_engine*, uint64_t, void*, size_t);
// counted wrapper (diagnostics): uc_mem_write invalidates the TBs covering the
// written range, so a per-frame flood of these would force constant
// re-translation (the TCG code-buffer growth).
static unsigned long long g_ucw_count = 0;
static unsigned long long g_exe_base = 0;
static int g_ucw_log = 0, g_ucw_logged = 0;
static int uc_mem_write_counted(uc_engine* uc, uint64_t a, const void* b, size_t s) {
    g_ucw_count++;
    if (g_ucw_log && g_ucw_logged < 300) {
        g_ucw_logged++;
        void* ra = __builtin_return_address(0);
        printf("[ucw] addr=%#llx sz=%zu caller=+%#llx\n", (unsigned long long)a, s,
               (unsigned long long)((uintptr_t)ra - g_exe_base));
    }
    return p_uc_mem_write_real(uc, a, b, s);
}
#define p_uc_mem_write uc_mem_write_counted
extern int  (*p_uc_reg_write)(uc_engine*, int, const void*);
extern int  (*p_uc_reg_read)(uc_engine*, int, void*);
extern int  (*p_uc_reg_read_batch)(uc_engine*, int*, void**, int);
extern int  (*p_uc_reg_write_batch)(uc_engine*, int*, void**, int);
extern int  (*p_uc_emu_start)(uc_engine*, uint64_t, uint64_t, uint64_t, size_t);
extern int  (*p_uc_emu_stop)(uc_engine*);
extern int  (*p_uc_hook_add)(uc_engine*, uc_hook*, int, void*, void*, ...);
extern int  (*p_uc_ctl)(uc_engine*, uint64_t, ...);

// uc_ctl encoding: (op << 30) | (nargs << 26) | ctl  (unicorn 2.x)
#define UC_CTL_IO_WRITE 1
#define UC_CTL_CPU_MODEL 7
// ARM CPU models (arm_const): the game's VFP vector-mode code (FPSCR.LEN=3)
// only executes on models that implement it (A8/A9); A15 traps INSN_INVALID.
#define UC_CPU_ARM_CORTEX_A8  15
#define UC_CPU_ARM_CORTEX_A9  16
#define UC_CPU_ARM_CORTEX_A15 17
static int uc_set_cpu_model(uc_engine* uc, int model) {
    if (!p_uc_ctl) return -1;
    uint64_t code = ((uint64_t)UC_CTL_IO_WRITE << 30) | ((uint64_t)1 << 26) | UC_CTL_CPU_MODEL;
    return p_uc_ctl(uc, code, model);   // the model is passed by value
}
// The Unicorn TCG translation cache: a bigger buffer means fewer flushes
// (the game's hot code stays translated). UC_CTL_TCG_BUFFER_SIZE = 13.
#define UC_CTL_TCG_BUFFER_SIZE 13
static int uc_set_tcg_buffer(uc_engine* uc, uint32_t bytes) {
    if (!p_uc_ctl) return -1;
    uint64_t code = ((uint64_t)UC_CTL_IO_WRITE << 30) | ((uint64_t)1 << 26) | UC_CTL_TCG_BUFFER_SIZE;
    return p_uc_ctl(uc, code, bytes);
}
// UC_CTL_TB_FLUSH = 10: invalidate every translation block.  This build of
// Unicorn commits the TCG code buffer in 4MB chunks on demand and never wraps
// the code pointer on its own, so after ~256MB of generated code the pointer
// walks out of the reservation (fatal AV inside unicorn.dll).  Flushing
// periodically resets the code pointer and keeps everything inside the buffer.
static int uc_flush_tb(uc_engine* uc) {
    if (!p_uc_ctl) return -1;
    uint64_t code = ((uint64_t)UC_CTL_IO_WRITE << 30) | ((uint64_t)0 << 26) | 10;
    return p_uc_ctl(uc, code, 0);
}

int ucapi_load(void);

// ---- convenience wrappers (single global engine per process) ----
extern uc_engine* g_uc;

static inline uint32_t ur32(uint64_t a) { uint32_t v = 0; p_uc_mem_read(g_uc, a, &v, 4); return v; }
static inline void uw32(uint64_t a, uint32_t v) { p_uc_mem_write(g_uc, a, &v, 4); }
static inline uint32_t ureg(int r) { uint32_t v = 0; p_uc_reg_read(g_uc, r, &v); return v; }
static inline void usetreg(int r, uint32_t v) { p_uc_reg_write(g_uc, r, &v); }

// one API call instead of N (the per-call uc_reg_read cost dominated the GL
// bridge: ~1.5M intercepted calls per race frame set)
static inline void ureg_batch6(uint32_t* r0, uint32_t* r1, uint32_t* r2, uint32_t* r3,
                               uint32_t* sp, uint32_t* lr) {
    int regs[6] = { UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3,
                    UC_ARM_REG_SP, UC_ARM_REG_LR };
    void* vals[6] = { r0, r1, r2, r3, sp, lr };
    p_uc_reg_read_batch(g_uc, regs, vals, 6);
}

// all 15 general registers in one API call (the auto-translated natives read
// the whole register file on entry)
static inline void ureg_batch15(uint32_t* R) {
    int regs[15] = { UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3,
                     UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7,
                     UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11,
                     UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR };
    void* vals[15];
    for (int i = 0; i < 15; i++) vals[i] = &R[i];
    p_uc_reg_read_batch(g_uc, regs, vals, 15);
}

// VFP single-precision register file (S0..S31, contiguous ids in Unicorn)
#define UC_ARM_REG_S(n) (UC_ARM_REG_S0 + (n))
static inline void ureg_batch_s(float* S) {
    int regs[32];
    void* vals[32];
    for (int i = 0; i < 32; i++) { regs[i] = UC_ARM_REG_S(i); vals[i] = &S[i]; }
    p_uc_reg_read_batch(g_uc, regs, vals, 32);
}
static inline void usetreg_batch_s(const float* S) {
    int regs[32];
    void* vals[32];
    for (int i = 0; i < 32; i++) { regs[i] = UC_ARM_REG_S(i); vals[i] = (void*)&S[i]; }
    p_uc_reg_write_batch(g_uc, regs, vals, 32);
}

// write all 15 general registers + PC in one API call (the auto-translated
// natives used to pay 15 uc_reg_write calls per interception - that overhead
// was larger than the interpretation it saved)
static inline void usetreg_batch15pc(const uint32_t* R) {
    int regs[15] = { UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3,
                     UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7,
                     UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11,
                     UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR };
    void* vals[15];
    for (int i = 0; i < 15; i++) vals[i] = (void*)&R[i];
    p_uc_reg_write_batch(g_uc, regs, vals, 15);
    usetreg(UC_ARM_REG_PC, R[14]);
}
