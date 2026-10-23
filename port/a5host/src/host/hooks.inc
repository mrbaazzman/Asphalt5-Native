// ---------------------------------------------------------------- hooks
#include "vtables.h"

extern int pvrtc_decode(const uint8_t* data, long w, long h, uint8_t* out_rgba, int is2bpp);
static int auto_index(uint32_t a);

// A5_STEP_PROF: per-load-step breakdown of host time in the GL bridge vs the
// other shims (identifies whether a slow GS_LoadGame step is driver/host or
// interpreted guest code).
static int g_step_prof = 0;
static long long g_gl_ticks = 0, g_shim_ticks = 0;
static unsigned long long g_gl_calls = 0, g_shim_calls = 0;
static unsigned long long g_shim_counts[256];
static uint32_t g_wcur_cnt[2048];
static uint32_t g_lr_addr[16];
static uint32_t g_lr_cnt[16];
static int g_lr_n = 0;
static double g_qpc_freq = 0.0;
static double step_secs(long long t) { return g_qpc_freq > 0.0 ? (double)t / g_qpc_freq : 0.0; }




static const char* vtable_name(uint32_t vt) {
    for (size_t i = 0; i < sizeof(VTABLES)/sizeof(VTABLES[0]); i++)
        if (vt == BASE + VTABLES[i].addr) return VTABLES[i].name;
    return "?";
}

// A5_SAMPLE=1: statistical PC sampling. A code hook over the whole .text
// records every 256th executed instruction into a histogram; the exit dumps
// the top addresses so the Python side can attribute time to functions.
static uint32_t sample_hist[1 << 20];   // one bucket per instruction word of the .so
static uint64_t sample_total = 0;       // all samples taken (the top-N share denominator)
static int g_sample_load_only = 0;   // A5_SAMPLE_LOAD: only while GS_LoadGame
static volatile int g_in_load = 0;
static void sample_hook(uc_engine* u, uint64_t addr, uint32_t size, void* user) {
    static uint32_t ctr = 0;
    if (g_sample_load_only && !g_in_load) return;
    if ((ctr++ & 0xFF) == 0) { sample_hist[((uint32_t)addr >> 2) & ((1u << 20) - 1)]++; sample_total++; }
}
static void sample_dump(void) {
    int top = 40;
    { const char* st = getenv("A5_SAMPLE_TOP"); if (st) top = atoi(st); if (top < 1) top = 40; if (top > 400) top = 400; }
    printf("[sample] total samples: %llu (~%lluM instructions executed)\n",
           (unsigned long long)sample_total, (unsigned long long)(sample_total * 256 / 1000000));
    { const char* dp = getenv("A5_SAMPLE_DUMP");
      if (dp) {
        FILE* f = fopen(dp, "w");
        if (f) {
            for (uint32_t i = 0; i < (1u << 20); i++)
                if (sample_hist[i]) fprintf(f, "%#x %u\n", BASE + (i << 2), sample_hist[i]);
            fclose(f);
            printf("[sample] full histogram written to %s\n", dp);
        }
      } }
    printf("[sample] top PCs (256-instruction sampling, top %d):\n", top);
    uint64_t shown = 0;
    for (int rank = 0; rank < top; rank++) {
        uint32_t best = 0, bi = 0;
        for (uint32_t i = 0; i < (1u << 20); i++)
            if (sample_hist[i] > best) { best = sample_hist[i]; bi = i; }
        if (!best) break;
        shown += best;
        printf("[sample] %8u  %#x\n", best, BASE + (bi << 2));
        sample_hist[bi] = 0;
    }
    printf("[sample] top %d share: %llu / %llu = %.2f%%\n", top,
           (unsigned long long)shown, (unsigned long long)sample_total,
           sample_total ? (double)shown * 100.0 / (double)sample_total : 0.0);
}

// A5_TILT_DEBUG: log the code reading the accelerometer globals (.bss
// 0xafe260..0xafe2a0) so the engine's tilt math can be identified.
static void tilt_read_hook(uc_engine* u, int access, uint64_t addr, int size, int64_t value, void* user) {
    static int n = 0;
    if (n >= 1500) return;
    n++;
    uint32_t pc = ureg(UC_ARM_REG_PC);
    printf("[touch] read %#llx size=%d val=%d at pc=%#x\n",
           (unsigned long long)addr, size, (int)value, pc);
}
static void tilt_write_hook(uc_engine* u, int access, uint64_t addr, int size, int64_t value, void* user) {
    static int n = 0;
    if (n >= 100) return;
    n++;
    uint32_t pc = ureg(UC_ARM_REG_PC);
    printf("[tiltw] write %#llx size=%d val=%d at pc=%#x\n",
           (unsigned long long)addr, size, (int)value, pc);
}
// A5_MENU_WATCH=1: log writes to the menu item tables (who computes the
// corner layout positions?)
static void menu_watch_hook(uc_engine* u, int access, uint64_t addr, int size, int64_t value, void* user) {
    static int n = 0;
    if (n >= 150) return;
    n++;
    uint32_t pc = ureg(UC_ARM_REG_PC);
    printf("[menuw] %#llx size=%d val=%#llx pc=%#x lr=%#x\n",
           (unsigned long long)addr, size, (unsigned long long)value,
           pc - BASE, ureg(UC_ARM_REG_LR) - BASE);
}
// A5_GATE_WATCH=1: log writes to game+0x849c (the "proceed past the splash"
// gate that GS_Splash::Update waits for).
static void gate_watch_hook(uc_engine* u, int access, uint64_t addr, int size, int64_t value, void* user) {
    static int n = 0;
    if (n >= 40) return;
    n++;
    uint32_t pc = ureg(UC_ARM_REG_PC);
    printf("[gatew] %#llx size=%d val=%#llx pc=%#x lr=%#x\n",
           (unsigned long long)addr, size, (unsigned long long)value,
           pc - BASE, ureg(UC_ARM_REG_LR) - BASE);
}

// A5_COLL_VERIFY=1: set while the collision verifier re-runs the emulated
// function - the hook must let it through instead of calling the native.
int g_coll_bypass = 0;
// A5_TEXCOORD_VERIFY=1: the texcoord hook re-runs the interpreter on the
// restored state and diffs (the bypass lets the emulated call through).
int g_tex_bypass = 0;
int g_plane_bypass = 0;
int g_section_bypass = 0;
int g_susp_bypass = 0;
int g_rot_bypass = 0;
int g_rgtex_bypass = 0;
static int g_rgtex_verify = 0;
static int g_rgtex_verify_init = 0;
static int g_rot_verify = 0;
static int g_rot_verify_init = 0;
static int g_susp_verify = 0;
static int g_susp_verify_init = 0;
static int g_section_verify = 0;
static int g_section_verify_init = 0;
static int g_plane_verify = 0;
static int g_plane_verify_init = 0;
static int g_tex_verify = 0;
static int g_tex_verify_init = 0;

// ---- auto-translated natives (analysis/tools/autotrans.py --gen) ----------
// Faithful ARM->C translations of whole functions.  Every memory access goes
// through the host helpers, so in A5_AUTO_VERIFY=1 mode the exact entry state
// is restored from the helper write log and the interpreter re-runs the same
// function for a per-call differential (registers + every written byte).
// ---- PLT -> shim direct calls + shim call trace -------------------------
int g_auto_verify = 0;
int g_auto_bypass = 0;
static int g_auto_all = -1;
static int g_ver_no = 0;   // verification counter (trace pairing)

static int g_auto_trace = 0;   // A5_PFM_TRACE=1 (set in probe's first call)
static int g_ver_vg = 0;       // the current call came from A5_VERIFY_GATED
static int auto_verifiable(uint32_t);
static int auto_trusted(uint32_t);

// ---- native execution control ---------------------------------------------
// A5_NATIVE_ALLOW=0xADDR[,0xADDR...]  force-enable specific translated functions
// A5_NATIVE_DENY=0xADDR[,...]         force-disable them (A/B testing)
// A5_NATIVE_REPORT=1                  per-function native/gated call counts at exit
// A5_NATIVE_HUD=1                     live native-coverage percentage in the title
// The gate list itself remains analysis/autogen/list.txt (the generated
// auto_verifiable/auto_trusted tables); these knobs let us test a function
// without regenerating and see exactly what is still interpreted.
static int8_t g_native_allow[4096];
static int8_t g_native_deny[4096];
static int g_native_ctl = -1;
static int g_native_report = 0;
static uint64_t g_nat_native = 0;   // native dispatches (auto_dispatch)
static uint64_t g_nat_gated = 0;    // gated entries seen by the hook
static uint64_t g_nat_gated_cnt[2048];

static void native_ctl_init(void) {
    g_native_ctl = 0;
    g_native_report = getenv("A5_NATIVE_REPORT") ? 1 : 0;
    const char* al = getenv("A5_NATIVE_ALLOW");
    const char* dn = getenv("A5_NATIVE_DENY");
    if (al || dn) g_native_ctl = 1;
    for (const char* p = al; p && *p; ) {
        char* e = NULL;
        unsigned long v = strtoul(p, &e, 16);
        int ai = auto_index(BASE + (uint32_t)v);
        if (ai >= 0 && ai < 4096) g_native_allow[ai] = 1;
        p = e; while (*p == ',' || *p == ' ') p++;
    }
    for (const char* p = dn; p && *p; ) {
        char* e = NULL;
        unsigned long v = strtoul(p, &e, 16);
        int ai = auto_index(BASE + (uint32_t)v);
        if (ai >= 0 && ai < 4096) g_native_deny[ai] = 1;
        p = e; while (*p == ',' || *p == ' ') p++;
    }
}

// The enable gate, shared by the hook and every generated call path: only
// validated functions (differential-clean or trusted) run natively unless
// A5_AUTO_ALL=1 forces the unvalidated ones.
int auto_enabled(uint32_t a) {
    if (g_auto_all < 0) g_auto_all = getenv("A5_AUTO_ALL") ? 1 : 0;
    if (g_native_ctl < 0) native_ctl_init();
    if (g_native_ctl) {
        int ai = auto_index(a);
        if (ai >= 0 && ai < 4096) {
            if (g_native_deny[ai]) return 0;
            if (g_native_allow[ai]) return 1;
        }
    }
    return g_auto_all || auto_verifiable(a) || auto_trusted(a);
}
// The engine calls the platform shims through PLT stubs.  Running a stub in a
// nested emulator instance costs a uc_emu_start round trip and (at volume)
// destabilises Unicorn's TCG cache, so auto natives resolve the stub to the
// host shim and call it directly.  The call sequence is logged on both sides
// (native and interpreter re-run) so the differential can compare it.
#define SHIMLOG_MAX 4096
static uint32_t g_shimlog[SHIMLOG_MAX][11];   // [0]=tgt [1..4]=r0-r3 [5]=caller
                                              // [6..10]=the five stack args
static int g_shimlog_n = 0;
static int g_shimlog_side = 0;   // 0 = native run, 1 = interpreter re-run

static uint32_t ror32(uint32_t v, uint32_t n) {
    n &= 31;
    return n ? ((v >> n) | (v << (32 - n))) : v;
}

// decode the standard PLT stub (a is the ABSOLUTE emulated address):
//   add ip, pc, #imm  /  add ip, ip, #imm  /  ldr pc, [ip, #imm]!
static int plt_target(uint32_t a, uint32_t* tgt) {
    uint32_t w0 = rd32(a), w1 = rd32(a + 4), w2 = rd32(a + 8);
    if ((w0 & 0xFFFFF000u) != 0xE28FC000u) return 0;
    if ((w1 & 0xFFFFF000u) != 0xE28CC000u) return 0;
    if ((w2 & 0xFFFFF000u) != 0xE5BCF000u) return 0;
    uint32_t ip = (a + 8) + ror32(w0 & 0xFF, ((w0 >> 8) & 0xF) * 2);
    ip += ror32(w1 & 0xFF, ((w1 >> 8) & 0xF) * 2);
    ip += w2 & 0xFFF;
    *tgt = rd32(ip);
    return 1;
}

uint32_t g_auto_r1;   // r1 as left by the last auto_call_plt (see below)
uint32_t auto_call_plt(uint32_t plt, uint32_t r0, uint32_t r1, uint32_t r2,
                              uint32_t r3, uint32_t sp) {
    uint32_t tgt = 0;
    if (plt_target(plt, &tgt) && tgt >= SHIM && tgt < SHIM + 0x00100000) {
        int i = (int)((tgt - SHIM) / 4);
        if (i >= 0 && i < nstubs && stubs[i].addr == tgt) {
            if (g_auto_verify && g_shimlog_side == 0 && g_shimlog_n < SHIMLOG_MAX) {
                g_shimlog[g_shimlog_n][0] = tgt;
                g_shimlog[g_shimlog_n][1] = r0;
                g_shimlog[g_shimlog_n][2] = r1;
                g_shimlog[g_shimlog_n][3] = r2;
                g_shimlog[g_shimlog_n][4] = r3;
                g_shimlog[g_shimlog_n][5] = plt;   // caller (PLT stub) id
                // the five stack args: 5+-arg calls (glTexImage2D etc.) pass
                // them on the stack; without these the comparison was blind
                p_uc_mem_read(g_uc, sp, &g_shimlog[g_shimlog_n][6], 20);
                g_shimlog_n++;
            }
            // hot leaves called by the engine decoder: division and comparison
            // per pixel.  Inline them here; shim_call's dispatch was the
            // dominant cost of the remaining load steps.
            {
                int sid = shim_ids[i];
                if (sid == SH_AEABI_IDIV) {
                    g_auto_r1 = r1;
                    return (uint32_t)((int32_t)r1 ? (int32_t)r0 / (int32_t)r1 : 0);
                }
                if (sid == SH_AEABI_UIDIV) {
                    g_auto_r1 = r1;
                    return r1 ? r0 / r1 : 0;
                }
                if (sid == SH_MEMCMP) {
                    g_auto_r1 = r1;
                    if (!r2) return 0;
                    const uint8_t* pa = (const uint8_t*)mem_host(r0);
                    const uint8_t* pb = (const uint8_t*)mem_host(r1);
                    if (pa && pb) return (uint32_t)memcmp(pa, pb, r2);
                }
            }
            g_shim_r1_set = 0;
            LARGE_INTEGER _q0, _q1;
            if (g_step_prof) QueryPerformanceCounter(&_q0);
            uint32_t ret = shim_call(shim_ids[i], stubs[i].name, r0, r1, r2, r3, sp);
            if (g_step_prof) {
                QueryPerformanceCounter(&_q1);
                g_shim_ticks += _q1.QuadPart - _q0.QuadPart;
                g_shim_calls++;
                g_shim_counts[shim_ids[i] & 255]++;
                int wai = auto_index(BASE + g_wcur);
                if (wai >= 0 && wai < 2048) g_wcur_cnt[wai]++;
            }
            // shims that return a second value in r1 (__aeabi_idivmod, the
            // softfp double helpers) publish it via g_shim_r1_val; for every
            // other shim r1 is untouched, exactly like the interpreter's.
            g_auto_r1 = g_shim_r1_set ? g_shim_r1_val : r1;
            return ret;
        }
    }
    if (getenv("A5_AUTO_DEBUG")) {
        static int dbg = 0;
        if (dbg < 10) { dbg++; printf("[plt] %#x -> tgt %#x (no shim), emulated\n", plt - BASE, tgt); }
    }
    uint32_t ret = call_emulated_at(plt, (uint32_t[]){ r0, r1, r2, r3 }, 4, sp);
    g_auto_r1 = ureg(UC_ARM_REG_R1);
    return ret;
}

// float <-> bit-pattern helpers for the generated VFP code (strict-aliasing
// safe, same pattern as natives.inc)

// ---- instruction-level checkpoint differential (TraficGenerate hunt) ----
// A5_CHK_N=<n>: on the n-th VERIFIED call of the tracked function, record a
// checkpoint (pc + r0..r12 + sp) before every executed instruction on the
// native side, then compare the interpreter re-run checkpoint-by-checkpoint.
// The first mismatching checkpoint pinpoints the exact instruction where the
// two implementations diverge (same pc + differing register = a data/flag
// computation; differing pc = the previous branch decided differently).
typedef struct { uint32_t pc; uint32_t r[14]; float s[32]; } a5chk_t;   // r0..r12, sp + s0..s31
#define A5_CHK_CAP 200000
static a5chk_t g_chk_buf[A5_CHK_CAP];   // static BSS (malloc proved unreliable here)
static a5chk_t* g_chk = g_chk_buf;
static int g_chk_cap = 0, g_chk_n = 0, g_chk_nat = 0;
static int g_chk_mode = 0;      // 0 off, 1 record (native), 2 compare (interp)
static int g_chk_bad = 0;
static int g_chk_sel = -1;      // A5_CHK_N (1-based, -2 = AUTO all calls); -1 = not initialised
static int g_chk_fn_cnt = 0;    // verified calls of the tracked function
static int g_chk_do = 0;        // current verification is the selected one
static int g_chk_cur_fn = 0;    // fn# of the call being checkpointed
static int g_chk_res = 0;       // 0 clean, 1 per-instruction diff, 2 length diff
static int g_chk_diffs = 0;     // AUTO: number of divergence reports so far
// last-16 ring of the native/interp traces: on a length mismatch this shows
// where each run ended (the checkpoint buffer only keeps the first N entries)
static a5chk_t g_chk_tail_nat[16], g_chk_tail_int[16];
static int g_chk_tail_n_nat = 0, g_chk_tail_n_int = 0;
static uint32_t g_chk_fn_addr = BASE + 0xb21bc;   // A5_CHK_FN
static uint32_t g_chk_fn_end = BASE + 0xb3070;    // A5_CHK_END

static void a5_chk(uint32_t pc, const uint32_t* cr, uint32_t sp, const float* S) {
    if (g_chk_mode == 1) {
        if (g_chk_n < g_chk_cap) {
            a5chk_t* e = &g_chk[g_chk_n];
            e->pc = pc;
            memcpy(e->r, cr, 13 * 4);
            e->r[13] = sp;
            memcpy(e->s, S, 32 * 4);
        }
        {   // tail ring
            a5chk_t* e = &g_chk_tail_nat[g_chk_tail_n_nat & 15];
            e->pc = pc;
            memcpy(e->r, cr, 13 * 4);
            e->r[13] = sp;
            memcpy(e->s, S, 32 * 4);
            g_chk_tail_n_nat++;
        }
        g_chk_n++;
    } else if (g_chk_mode == 2) {
        {   // tail ring
            a5chk_t* e = &g_chk_tail_int[g_chk_tail_n_int & 15];
            e->pc = pc;
            memcpy(e->r, cr, 13 * 4);
            e->r[13] = sp;
            memcpy(e->s, S, 32 * 4);
            g_chk_tail_n_int++;
        }
        if (!g_chk_bad && g_chk_n < g_chk_cap && g_chk_n < g_chk_nat) {
            const a5chk_t* e = &g_chk[g_chk_n];
            int which = -1;
            uint32_t ev = 0, iv = 0;
            int fwhich = -1;
            uint32_t fev = 0, fiv = 0;
            if (e->pc != pc) { which = 99; }
            else {
                for (int i = 0; i < 14; i++) {
                    if (i == 12) continue;            // r12: PLT-stub noise
                    uint32_t v = (i == 13) ? sp : cr[i];
                    if (e->r[i] != v) { which = i; ev = e->r[i]; iv = v; break; }
                }
            }
            if (which < 0) {
                for (int i = 0; i < 32; i++) {
                    uint32_t nv = (uint32_t)fbits(e->s[i]), ivv = (uint32_t)fbits(S[i]);
                    if (nv != ivv) { fwhich = i; fev = nv; fiv = ivv; break; }
                }
                if (fwhich >= 0) which = 100 + fwhich;
            }
            if (which >= 0) {
                g_chk_bad = 1;
                g_chk_diffs++;
                printf("[chk] fn#%d first divergence at checkpoint #%d of %d\n",
                       g_chk_cur_fn, g_chk_n, g_chk_nat);
                if (which == 99)
                    printf("[chk]   PC:  native=%#x interp=%#x\n", e->pc, pc);
                else if (which >= 100)
                    printf("[chk]   s%d:  native=%#x interp=%#x  (pc=%#x)\n",
                           which - 100, fev, fiv, e->pc);
                else
                    printf("[chk]   r%d:  native=%#x interp=%#x  (pc=%#x)\n", which, ev, iv, e->pc);
                int lo = g_chk_n - 10; if (lo < 0) lo = 0;
                for (int j = lo; j <= g_chk_n; j++) {
                    const a5chk_t* p = &g_chk[j];
                    printf("[chk]   nat#%d %#x r0=%08x r1=%08x r2=%08x r3=%08x r4=%08x sp=%08x s10=%08x s11=%08x s12=%08x s13=%08x s14=%08x s15=%08x\n",
                           j, p->pc, p->r[0], p->r[1], p->r[2], p->r[3], p->r[4], p->r[13],
                           (uint32_t)fbits(p->s[10]), (uint32_t)fbits(p->s[11]), (uint32_t)fbits(p->s[12]),
                           (uint32_t)fbits(p->s[13]), (uint32_t)fbits(p->s[14]), (uint32_t)fbits(p->s[15]));
                }
                printf("[chk]   int#%d %#x r0=%08x r1=%08x r2=%08x r3=%08x r4=%08x sp=%08x s10=%08x s11=%08x s12=%08x s13=%08x s14=%08x s15=%08x\n",
                       g_chk_n, pc, cr[0], cr[1], cr[2], cr[3], cr[4], sp,
                       (uint32_t)fbits(S[10]), (uint32_t)fbits(S[11]), (uint32_t)fbits(S[12]),
                       (uint32_t)fbits(S[13]), (uint32_t)fbits(S[14]), (uint32_t)fbits(S[15]));
            }
        }
        g_chk_n++;
    }
}

#define A5_CHK(pc) do { if (g_chk_mode) { \
    uint32_t _cr[13] = { r0,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12 }; \
    a5_chk((pc), _cr, sp, S); } } while (0)

// ---- interpreter re-run write log (verification state safety) ----
// The interpreter re-run can diverge; its writes must not leak into the live
// game state.  A memory-write hook (registered only with A5_AUTO_VERIFY)
// records every write during the re-run; auto_verify_run restores them.
// (The entry layout/log arrays live in a5host.c next to wlog: both runs feed
// one chronological log via rec_add, so the restore order is exact.)
static void iw_hook(uc_engine* u, int type, uint64_t addr, int size, int64_t value, void* user) {
    rec_add((uint32_t)addr, size, 0, (uint32_t)ureg(UC_ARM_REG_PC));
}

// ---------------------------------------------------------------------------
// Direct dispatch of the hand-written probe natives from translated callers.
// Every translated call site used to route a non-auto callee through
// call_emulated_regs - a full nested Unicorn start/stop per call.  A scene
// load performed 2.3M of those (tens of seconds of pure overhead).  These
// natives are exact replacements for their ARM functions (validated by the
// differential probes), so call them in-process instead.
// Returns 1 when fn was handled in-process.
int probe_dispatch(uint32_t fn, uint32_t* R, float* S, uint32_t sp) {
    uint32_t lr = R[14];
    (void)sp; (void)S;
    if (fn == BASE + 0x131f4c) {                 // readIdx
        if (!native_readidx(R[0], R[1], lr)) return 0;
        R[0] = ureg(UC_ARM_REG_R0);
        return 1;
    }
    if (fn == BASE + 0x131d88) {                 // IdxVert::operator==
        native_idxvert_eq(R[0], R[1], lr);
        R[0] = ureg(UC_ARM_REG_R0);
        return 1;
    }
    if (fn == BASE + 0x13e1ac || fn == BASE + 0x13e224 || fn == BASE + 0x13e29c) {
        native_cmat_mul(g_uc, fn, R[0], R[1], R[2], lr);
        // mirror the vmsr the real function performs (FZ+DN persist)
        usetreg(UC_ARM_REG_FPSCR, 0x83000010u);
        g_vfp_dn = 1;
        { unsigned csr = _mm_getcsr(); if (!(csr & 0x8040u)) _mm_setcsr(csr | 0x8040u); }
        return 1;
    }
    if (fn == BASE + 0x13e340 || fn == BASE + 0x13e314) {   // CMatrix::LoadIdentity
        if (!native_cmat_identity(R[0])) return 0;
        return 1;
    }
    if (fn == BASE + 0x13e36c || fn == BASE + 0x13e380) {   // CMatrix::Load
        if (!native_cmat_load(R[0], R[1])) return 0;
        return 1;
    }
    if (fn == BASE + 0x13e118) {                 // CMatrix::TransformVector
        if (!native_cmat_transform_vector(R[0], R[1], R[2])) return 0;
        return 1;
    }
    if (fn == BASE + 0x13e394) {                 // CMatrix::SetTranslation
        if (!native_cmat_set_translation(R[0], R[1], R[2], R[3])) return 0;
        return 1;
    }
    if (fn == BASE + 0x13e3a4) {                 // CMatrix::SetQuaternion
        native_cmat_set_quaternion(R[0], R[1], R[2], R[3], rd32(sp));
        return 1;
    }
    if (fn == BASE + 0x140644) {                 // Vector3d::Cross
        if (!native_vec3d_cross(R[0], R[1], R[2])) return 0;
        return 1;
    }
    if (fn == BASE + 0x141194) {                 // Vector3d::Normalize
        if (!native_vec3d_normalize(R[0])) return 0;
        return 1;
    }
    if (fn == BASE + 0x13fc8c || fn == BASE + 0x13fcdc || fn == BASE + 0x13fd7c) {
        // CMatrix::RotateZ/Y/X
        if (!native_cmat_rotate(fn, R[0], R[1], lr)) return 0;
        return 1;
    }
    if (fn == BASE + 0x11613c) {                 // CAlterHSV::Decode
        static int no_hsv = -1;
        if (no_hsv < 0) no_hsv = getenv("A5_NO_HSV") ? 1 : 0;
        if (no_hsv) return 0;
        R[0] = native_hsv_decode(R[0], R[1]);
        return 1;
    }
    return 0;
}

// Scene::UpdateCars entry side effects (one logic tick).  Must happen exactly
// once per entry, whether the function is entered through the emulator
// (code_hook below) or called directly from another translated native
// (auto_dispatch special case).  The press latch is consumed inside the body
// at the car tick (0x9f1e4), not here.
static void a5_updatecars_entry(void) {
    g_tick_count++;
}

// Keep the one-frame "pressed" edge alive until Scene::UpdateCars consumes it.
// Called after GamePadManager::UpdateKeys (native path; this used to live in
// the 0x71ad8 code hook inside Game::TimerCallback, which no longer runs now
// that TimerCallback is native) and from that hook if TimerCallback is
// interpreted.  Only latches while GS_Run is the live state: replaying stale
// bits into a menu makes the pause list scroll and fires nitro on resume.
static void a5_press_latch_update(uint32_t game, uint32_t mgr) {
    if (!game || !mgr) return;
    int32_t ix = (int32_t)rd32(game + 0x1d38);
    uint32_t st = ix >= 0 ? rd32(game + 0x1d3c + (uint32_t)ix * 4) : 0;
    int in_run = st && rd32(st) == BASE + 0x1efaa8;   // GS_Run
    if (!in_run) { g_press_latch = 0; return; }
    uint32_t pressed = rd32(mgr + 8);
    g_press_latch |= pressed;
    if (g_press_latch && pressed != g_press_latch) uw32(mgr + 8, g_press_latch);
}

#include "autogens.inc"

static void native_report_dump(void) {
    if (!g_native_report) return;
    uint64_t total = g_nat_native + g_nat_gated;
    printf("[native] dispatches=%llu native=%llu gated=%llu coverage=%.2f%%\n",
           (unsigned long long)total, (unsigned long long)g_nat_native,
           (unsigned long long)g_nat_gated,
           total ? 100.0 * (double)g_nat_native / (double)total : 100.0);
    for (int r = 0; r < 500; r++) {
        int best = -1; uint64_t bv = 0;
        for (int i = 0; i < (int)AUTO_N && i < 2048; i++)
            if (g_nat_gated_cnt[i] > bv) { bv = g_nat_gated_cnt[i]; best = i; }
        if (best < 0 || !bv) break;
        printf("[native] gated %#x x%llu\n", auto_addrs[best], (unsigned long long)bv);
        g_nat_gated_cnt[best] = 0;
    }
}

// A5_STEP_PROF native sampler: a 1 ms watchdog records g_last_auto, so a slow
// GS_LoadGame step reports which translated function occupied the time.
static volatile int g_autosample_run = 0;
static volatile uint32_t g_autosample_hist[2048];
static DWORD WINAPI autosample_thread(LPVOID p) {
    (void)p;
    SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_HIGHEST);
    for (;;) {
        if (g_autosample_run) {
            uint32_t a = g_last_auto;
            if (a) {
                int i = auto_index(BASE + a);
                if (i >= 0 && i < 2048) g_autosample_hist[i]++;
            }
        }
        Sleep(1);
    }
    return 0;
}


static void auto_verify_run(uint32_t a, uint32_t* R_in) {
    uint32_t sp = R_in[13];
    static int ncall = 0, nbad = 0, av_detail = 0;
    g_ver_no++;
    // instruction-level checkpoint selection (A5_CHK_N): only the n-th
    // verified call of TraficGenerate records/compares per-instruction state
    if (g_chk_sel == -1) {
        const char* cs = getenv("A5_CHK_N");
        if (cs && (strcmp(cs, "AUTO") == 0 || strcmp(cs, "-1") == 0)) g_chk_sel = -2;
        else g_chk_sel = cs ? atoi(cs) : 0;
        const char* fn = getenv("A5_CHK_FN");
        if (fn) g_chk_fn_addr = BASE + (uint32_t)strtoul(fn, NULL, 16);
        const char* fe2 = getenv("A5_CHK_END");
        if (fe2) g_chk_fn_end = BASE + (uint32_t)strtoul(fe2, NULL, 16);
        g_chk_cap = A5_CHK_CAP;
        printf("[chk] init at call#%d: sel=%d fn=%#x..%#x cap=%d\n",
               ncall + 1, g_chk_sel, g_chk_fn_addr - BASE, g_chk_fn_end - BASE, g_chk_cap);
    }
    int chk_fn = (a == g_chk_fn_addr);
    if (chk_fn) g_chk_fn_cnt++;
    if (getenv("A5_FPSCR_DBG") && chk_fn && g_chk_fn_cnt <= 3)
        printf("[fpscr] verify %#x call#%d fpscr=%08x g_dn=%d\n", a - BASE, g_chk_fn_cnt,
               ureg(UC_ARM_REG_FPSCR), g_vfp_dn);
    g_chk_do = (chk_fn && (g_chk_sel > 0 ? g_chk_fn_cnt == g_chk_sel : g_chk_sel == -2));
    if (g_chk_do) { g_chk_mode = 1; g_chk_n = 0; g_chk_bad = 0; g_chk_res = 0; g_chk_cur_fn = g_chk_fn_cnt;
                    g_chk_tail_n_nat = 0; g_chk_tail_n_int = 0; }
    uint32_t R_nat[16];
    memcpy(R_nat, R_in, sizeof(R_nat));
    float S_in[32], S_nat[32];
    ureg_batch_s(S_in);
    memcpy(S_nat, S_in, sizeof(S_nat));
    g_wlog_n = 0; g_wlog_on = 1;
    g_shimlog_n = 0; g_shimlog_side = 0;
    // the host allocator's bump/free-list state is not guest memory: snapshot
    // it so the interpreter re-run's mallocs return the same addresses
    uint32_t hn0 = heap_next;
    uint32_t hb0[HEAP_BINS];
    uint64_t hm0[HEAP_BINS / 64];
    memcpy(hb0, heap_bins, sizeof(hb0));
    memcpy(hm0, heap_binmap, sizeof(hm0));
    uint64_t dr0 = g_drand48;                // lrand48 state: part of the input
    int ok = auto_dispatch(a, R_nat, S_nat, sp);
    uint32_t hn1 = heap_next;
    uint32_t hb1[HEAP_BINS];
    uint64_t hm1[HEAP_BINS / 64];
    memcpy(hb1, heap_bins, sizeof(hb1));
    memcpy(hm1, heap_binmap, sizeof(hm1));
    uint64_t dr1 = g_drand48;
    if (g_chk_do) { g_chk_mode = 0; g_chk_nat = g_chk_n; g_chk_n = 0; }
    g_wlog_on = 0;
    int nn = g_wlog_n;
    int shim_nat = g_shimlog_n;
    static uint32_t sl_nat[SHIMLOG_MAX][11];
    for (int i = 0; i < shim_nat; i++)
        for (int k = 0; k < 11; k++) sl_nat[i][k] = g_shimlog[i][k];
    static uint32_t av_addr[WLOG_MAX];
    static uint8_t av_sz[WLOG_MAX];
    static uint32_t av_new[WLOG_MAX];
    static uint32_t av_by[WLOG_MAX];
    for (int i = 0; i < nn; i++) {
        av_addr[i] = g_wlog[i].addr;
        av_sz[i] = g_wlog[i].size;
        av_by[i] = g_wlog[i].by;
        av_new[i] = av_sz[i] == 4 ? rd32(av_addr[i]) : av_sz[i] == 2 ? ur16(av_addr[i]) : rd8(av_addr[i]);
    }
    // restore the native's writes exactly (reverse: the last write's old value
    // is the state before it, so reverse order reconstructs the entry state)
    for (int i = nn - 1; i >= 0; i--) {
        wlog_ent* e = &g_wlog[i];
        uint8_t* p = mem_host(e->addr);
        if (p) memcpy(p, e->old, e->size);
        else p_uc_mem_write(g_uc, e->addr, e->old, e->size);
    }
    g_wlog_n = 0;
    if (!ok) { printf("[autov] %#x native bailed\n", a - BASE);
               if (g_chk_do) printf("[chk] native bailed after %d checkpoints\n", g_chk_nat);
               return; }
    // interpreter re-run from the identical entry state.  LR = LR_SENTINEL is
    // a harness artifact: wherever the interpreter run saves LR (stack pushes)
    // or leaves it in the register, the native run has the real return
    // address R_in[14].  The comparisons below forgive exactly that pair.
    g_auto_bypass = 1;
    g_shimlog_n = 0; g_shimlog_side = 1;
    if (g_chk_do) { g_chk_mode = 2; g_chk_n = 0; }
    g_iw_on = 1; g_iw_n = 0;
    heap_next = hn0; memcpy(heap_bins, hb0, sizeof(hb0)); memcpy(heap_binmap, hm0, sizeof(hm0));   // rewind the host allocator
    g_drand48 = dr0;                         // and the lrand48 sequence
    usetreg_batch_s(S_in);                   // VFP entry state (native run's
                                             // callee syncs moved the file)
    call_emulated_regs(a, R_in, sp);         // full register file: the reference
    heap_next = hn1; memcpy(heap_bins, hb1, sizeof(hb1)); memcpy(heap_binmap, hm1, sizeof(hm1));   // the native run's final allocator state
    g_drand48 = dr1;
    g_iw_on = 0;
    g_auto_bypass = 0;
    if (g_chk_do) {
        g_chk_mode = 0;
        if (!g_chk_bad) {
            if (g_chk_n != g_chk_nat) {
                g_chk_res = 2;
                g_chk_diffs++;
                printf("[chk] fn#%d no per-instruction diff, lengths differ: native=%d interp=%d\n",
                       g_chk_cur_fn, g_chk_nat, g_chk_n);
                int lo = g_chk_tail_n_nat > 16 ? g_chk_tail_n_nat - 16 : 0;
                for (int j = g_chk_tail_n_nat - 1; j >= lo && j >= g_chk_tail_n_nat - 6; j--) {
                    const a5chk_t* p = &g_chk_tail_nat[j & 15];
                    printf("[chk]   end-nat#%d %#x r0=%08x r1=%08x r2=%08x r3=%08x\n",
                           j, p->pc, p->r[0], p->r[1], p->r[2], p->r[3]);
                }
                int li = g_chk_tail_n_int > 16 ? g_chk_tail_n_int - 16 : 0;
                for (int j = g_chk_tail_n_int - 1; j >= li && j >= g_chk_tail_n_int - 6; j--) {
                    const a5chk_t* p = &g_chk_tail_int[j & 15];
                    printf("[chk]   end-int#%d %#x r0=%08x r1=%08x r2=%08x r3=%08x\n",
                           j, p->pc, p->r[0], p->r[1], p->r[2], p->r[3]);
                }
            } else if (g_chk_sel == -2 && (g_chk_fn_cnt % 250) == 0) {
                printf("[chk] fn#%d clean (%d checkpoints)\n", g_chk_cur_fn, g_chk_nat);
            }
        } else {
            g_chk_res = 1;
        }
        if (g_chk_sel == -2 && g_chk_diffs >= 3) g_chk_sel = 0;   // enough reports
    }
    int shim_int = g_shimlog_n;
    uint32_t R_emu[15];
    for (int i = 0; i <= 12; i++) R_emu[i] = ureg(UC_ARM_REG_R0 + i);
    R_emu[13] = ureg(UC_ARM_REG_SP);
    R_emu[14] = ureg(UC_ARM_REG_LR);
    // VFP register file: bit-exact comparison (NaN payloads included)
    float S_emu[32];
    ureg_batch_s(S_emu);
    int sdiffs = 0;
    for (int i = 0; i < 32; i++) {
        if (fbits(S_nat[i]) != fbits(S_emu[i])) {
            if (sdiffs < 4 && av_detail < 200000) { av_detail++; printf("[autov] %#x s%d native=%08x interp=%08x\n",
                                   a - BASE, i, fbits(S_nat[i]), fbits(S_emu[i])); }
            sdiffs++;
        }
    }
    int diffs = 0, wdiffs = 0;
    for (int i = 0; i <= 13; i++) {   // r0..r12 + sp.  LR is call-clobbered:
        if (i == 12) continue;        // r12 too (the PLT stub leaves its own
        if (R_nat[i] != R_emu[i]) {   // ip value - undefined per ABI anyway)
            if (diffs < 6 && av_detail < 200000) { av_detail++; printf("[autov] %#x r%d native=%08x interp=%08x\n", a - BASE, i, R_nat[i], R_emu[i]); }
            diffs++;
        }
    }
    // lr is deliberately NOT compared: it is call-clobbered per the ABI, and
    // the interpreter re-run's final lr can be the harness LR_SENTINEL.
    if (R_nat[14] != R_in[14] && av_detail < 200000) {
        av_detail++;
        printf("[autov] %#x NOTE ret=%08x entry-lr=%08x\n", a - BASE, R_nat[14], R_in[14]);
    }
    // shim call sequence must match exactly (same shims, same arguments)
    if (shim_nat != shim_int) {
        if (av_detail < 200000) {
            av_detail++;
            printf("[autov] %#x shim calls native=%d interp=%d\n", a - BASE, shim_nat, shim_int);
            // pinpoint the first diverging call in the common prefix
            int cm = shim_nat < shim_int ? shim_nat : shim_int;
            for (int i = 0; i < cm; i++) {
                int same = 1;
                for (int k = 0; k < 11; k++) {
                    if (k == 5) continue;   // the caller field: recorded as the
                                            // PLT stub (native) vs the return
                                            // address (interp) - by design
                    if (k >= 6) {
                        // the 5+ stack-arg slots of a <=4-arg call hold frame
                        // leftovers: code addresses and the nested-call
                        // LR_SENTINEL artifact are not real arguments
                        uint32_t nv = sl_nat[i][k];
                        if (nv == LR_SENTINEL) continue;
                        if (nv >= BASE && nv < BASE + 0x02000000u) continue;
                    }
                    if (sl_nat[i][k] != g_shimlog[i][k]) { same = 0; break; }
                }
                if (!same) {
                    printf("[autov] %#x first shim diff at #%d\n", a - BASE, i);
                    int lo = i - 3 > 0 ? i - 3 : 0;
                    for (int j = lo; j <= i + 2; j++) {
                        if (j < shim_nat)
                            printf("   N#%d tgt=%08x caller=%#x (%08x %08x %08x %08x)\n", j,
                                   sl_nat[j][0], sl_nat[j][5], sl_nat[j][1], sl_nat[j][2], sl_nat[j][3], sl_nat[j][4]);
                        if (j < shim_int)
                            printf("   I#%d tgt=%08x caller=%#x (%08x %08x %08x %08x)\n", j,
                                   g_shimlog[j][0], g_shimlog[j][5], g_shimlog[j][1], g_shimlog[j][2], g_shimlog[j][3], g_shimlog[j][4]);
                    }
                    break;
                }
            }
        }
        wdiffs++;
    } else {
        for (int i = 0; i < shim_nat; i++) {
            for (int k = 0; k < 11; k++) {
                if (k == 5) continue;   // caller field: asymmetric by design
                if (k >= 6) {
                    uint32_t nv = sl_nat[i][k];
                    if (nv == LR_SENTINEL) continue;
                    if (nv >= BASE && nv < BASE + 0x02000000u) continue;
                }
                if (sl_nat[i][k] != g_shimlog[i][k]) {
                    if (wdiffs < 6 && av_detail < 200000) { av_detail++; printf("[autov] %#x shim#%d arg%d native=%08x interp=%08x\n",
                                           a - BASE, i, k, sl_nat[i][k], g_shimlog[i][k]); }
                    wdiffs++;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < nn; i++) {
        uint32_t cur = av_sz[i] == 4 ? rd32(av_addr[i]) : av_sz[i] == 2 ? ur16(av_addr[i]) : rd8(av_addr[i]);
        if (av_sz[i] == 4 && cur == LR_SENTINEL && av_new[i] == R_in[14]) continue;
        // the native run's nested call_emulated_at callees saved LR_SENTINEL to
        // the stack; the interpreter re-run (in-session) saved the real LR there
        if (av_sz[i] == 4 && av_new[i] == LR_SENTINEL && cur >= BASE && cur < BASE + 0x02000000) continue;
        if (cur != av_new[i]) {
            if (wdiffs < 30 && av_detail < 4000) {
                // find the interpreter's last write to this address (pc pinpoint)
                uint32_t wpc = 0;
                for (int k = g_iw_n - 1; k >= 0; k--)
                    if (g_iwlog[k].addr == av_addr[i]) { wpc = g_iwlog[k].pc; break; }
                av_detail++; printf("[autov] %#x mem %#x sz%d native=%08x interp=%08x (by=%#x sp_entry=%08x off=%+d ipc=%#x)\n",
                                   a - BASE, av_addr[i], av_sz[i], av_new[i], cur, av_by[i], sp,
                                   (int)(av_addr[i] - sp), wpc ? wpc - BASE : 0);
            }
            wdiffs++;
        }
    }
    // ---- MISSING-WRITE detection: every address the INTERPRETER wrote but
    // the native never wrote is a store the recomp dropped.  The differential
    // only compares the native's own writes, so these were invisible - e.g. a
    // dropped stack store leaves the caller's frame stale and its pop {pc}
    // jumps to garbage (the PaintFModule startup crash).  Generation-stamped
    // hash: O(nn + niw), no per-call clear.
    {
        static uint32_t mw_val[1 << 20];
        static uint32_t mw_gen[1 << 20];
        static uint32_t mw_cur = 0;
        static int mw_reported = 0;
        mw_cur++;
        for (int i = 0; i < nn; i++) {
            uint32_t a = av_addr[i] ? av_addr[i] : 1;
            uint32_t h = (a * 2654435761u) >> 12;
            while (mw_gen[h & ((1 << 20) - 1)] == mw_cur) {
                if (mw_val[h & ((1 << 20) - 1)] == a) break;
                h++;
            }
            mw_gen[h & ((1 << 20) - 1)] = mw_cur;
            mw_val[h & ((1 << 20) - 1)] = a;
        }
        int missing = 0;
        for (int i = 0; i < g_iw_n; i++) {
            uint32_t a = g_iwlog[i].addr ? g_iwlog[i].addr : 1;
            uint32_t h = (a * 2654435761u) >> 12;
            int found = 0;
            while (mw_gen[h & ((1 << 20) - 1)] == mw_cur) {
                if (mw_val[h & ((1 << 20) - 1)] == a) { found = 1; break; }
                h++;
            }
            if (!found) {
                missing++;
                if (mw_reported < 60 && av_detail < 4000) {
                    mw_reported++; av_detail++;
                    printf("[autov] %#x MISSING native write at %#x sz%d (interp pc=%#x)\n",
                           a - BASE, a, g_iwlog[i].size,
                           g_iwlog[i].pc ? g_iwlog[i].pc - BASE : 0);
                }
            }
        }
        if (missing) wdiffs += missing;
    }
    // state safety: the native run is the trusted path (the game runs it in
    // normal mode).  Undo the interpreter re-run's writes (which may include
    // divergent junk), then re-apply the native's writes.
    for (int i = g_iw_n - 1; i >= 0; i--) {
        wlog_ent* e = &g_iwlog[i];
        uint8_t* p = mem_host(e->addr);
        if (p) memcpy(p, e->old, e->size);
        else p_uc_mem_write(g_uc, e->addr, e->old, e->size);
    }
    g_iw_n = 0;
    for (int i = 0; i < nn; i++) {
        if (av_sz[i] == 4) uw32(av_addr[i], av_new[i]);
        else if (av_sz[i] == 2) uw16(av_addr[i], (uint16_t)av_new[i]);
        else uw8(av_addr[i], (uint8_t)av_new[i]);
    }
    // the native path is authoritative: leave its final register state (a
    // faulted interpreter re-run aborts mid-instruction and would otherwise
    // leave garbage registers for the game's continuation)
    for (int i = 0; i <= 12; i++) usetreg(UC_ARM_REG_R0 + i, R_nat[i]);
    usetreg(UC_ARM_REG_SP, R_nat[13]);
    usetreg(UC_ARM_REG_LR, R_nat[14]);
    usetreg_batch_s(S_nat);
    ncall++;
    static int av_bad[512];         // per-function bad calls (indexed like av_cnt)
    int av_idx = auto_index(a);
    if (diffs || wdiffs || sdiffs) {
        nbad++;
        if (av_idx >= 0 && av_idx < 512) av_bad[av_idx]++;
    }
    static int trg_bad_shown = 0;
    if (chk_fn && (diffs || wdiffs || sdiffs) && !trg_bad_shown) {
        trg_bad_shown = 1;
        printf("[chk] first bad verified call of 0xb21bc: fn#%d (re-run with A5_CHK_N=%d)\n",
               g_chk_fn_cnt, g_chk_fn_cnt);
    }
    if (chk_fn && g_chk_do && g_chk_res == 0 && (diffs || wdiffs || sdiffs)) {
        printf("[chk] fn#%d final state bad but all %d checkpoints identical -> divergence inside callees/shims\n",
               g_chk_cur_fn, g_chk_nat);
        g_chk_diffs++;
        if (g_chk_sel == -2 && g_chk_diffs >= 3) g_chk_sel = 0;
    }
    static int av_printed = 0;
    if ((diffs || wdiffs || sdiffs || ncall <= 5 || g_ver_vg || (ncall % 200) == 0) && av_printed < 3000000) {
        av_printed++;
        printf("[autov] %#x call#%d writes=%d regdiffs=%d memdiffs=%d sdiffs=%d (bad %d/%d fnbad %d)\n",
               a - BASE, ncall, nn, diffs, wdiffs, sdiffs, nbad, ncall,
               (av_idx >= 0 && av_idx < 512) ? av_bad[av_idx] : -1);
    }
}

static void probe(uc_engine* u, uint64_t addr, uint32_t size, void* user) {
    uint32_t a = (uint32_t)addr;
    if (getenv("A5_PFM_TRACE") && !g_auto_trace) g_auto_trace = 1;
    if (getenv("A5_TRG_TRACE") && g_auto_bypass &&
        ((a >= BASE + 0xb23c0 && a <= BASE + 0xb2428) || (a >= BASE + 0xb24d8 && a <= BASE + 0xb24e8))) {
        static int tn = 0;
        uint32_t sp_ = ureg(UC_ARM_REG_SP);
        if (tn++ < 20000)
            printf("[trg-i] v%d %#x fp=%08x lr=%08x r0=%08x c3c=%08x c6c=%08x\n",
                   g_ver_no, a - BASE, ureg(UC_ARM_REG_R11), ureg(UC_ARM_REG_LR),
                   ureg(UC_ARM_REG_R0), ureg(UC_ARM_REG_R12),
                   rd32(sp_ + 0x3c), rd32(sp_ + 0x6c));
    }
    if (getenv("A5_PFM_TRACE") && !g_auto_trace) g_auto_trace = 1;
    if (getenv("A5_TRG_TRACE") && g_auto_bypass &&
        ((a >= BASE + 0xb23c0 && a <= BASE + 0xb2428) || (a >= BASE + 0xb24d8 && a <= BASE + 0xb24e8))) {
        static int tn = 0;
        uint32_t sp_ = ureg(UC_ARM_REG_SP);
        if (tn++ < 20000)
            printf("[trg-i] v%d %#x fp=%08x lr=%08x r0=%08x c3c=%08x c6c=%08x\n",
                   g_ver_no, a - BASE, ureg(UC_ARM_REG_R11), ureg(UC_ARM_REG_LR),
                   ureg(UC_ARM_REG_R0), ureg(UC_ARM_REG_R12),
                   rd32(sp_ + 0x3c), rd32(sp_ + 0x6c));
    }
    if (getenv("A5_PFM_TRACE") &&
        (a == BASE + 0x77bf4 || a == BASE + 0x77d0c || a == BASE + 0x77d60 || a == BASE + 0x77d94)) {
        static int rn = 0;
        if (rn++ < 400)
            printf("[pfm-i] v%d %#x r0=%08x r1=%08x r2=%08x r3=%08x r4=%08x r6=%08x r7=%08x\n",
                   g_ver_no, a - BASE,
                   ureg(UC_ARM_REG_R0), ureg(UC_ARM_REG_R1), ureg(UC_ARM_REG_R2), ureg(UC_ARM_REG_R3),
                   ureg(UC_ARM_REG_R4), ureg(UC_ARM_REG_R6), ureg(UC_ARM_REG_R7));
    }
    if (a == BASE + 0x77d60 && getenv("A5_PFM_TRACE")) {
        static int n = 0;
        if (n++ < 4)
            printf("[pfm-interp] r0=%08x r1=%08x r2=%08x r3=%08x r4=%08x r6=%08x r7=%08x r11=%08x\n",
                   ureg(UC_ARM_REG_R0), ureg(UC_ARM_REG_R1), ureg(UC_ARM_REG_R2), ureg(UC_ARM_REG_R3),
                   ureg(UC_ARM_REG_R4), ureg(UC_ARM_REG_R6), ureg(UC_ARM_REG_R7), ureg(UC_ARM_REG_R11));
        return;
    }
    if (getenv("A5_AUTO_DEBUG") && a == BASE + 0x146504) {
        static int raw = 0;
        if (raw < 5) { raw++; printf("[rawhit] 146504\n"); }
    }
    if (arm_prof_on) {
        for (int i = 0; i < ARM_PROF_N; i++)
            if (a == BASE + arm_prof_tab[i].addr) { arm_prof_counts[i]++; break; }
    }
    // A5_EMU_ONLY=1 disables the OPTIONAL native hooks (the interpreter runs
    // them) so their net value can be A/B measured. The VFP vector-mode
    // natives (Mult/PreMult/SetMult/Rotate*/SetTranslation) must stay - the
    // interpreter cannot execute those instructions at all.
    static int emu_only = -1;
    if (emu_only == -1) emu_only = getenv("A5_EMU_ONLY") ? 1 : 0;
    if (!g_tex_verify_init) { g_tex_verify_init = 1; g_tex_verify = getenv("A5_TEXCOORD_VERIFY") ? 1 : 0; }
    if (!g_plane_verify_init) { g_plane_verify_init = 1; g_plane_verify = getenv("A5_PLANE_VERIFY") ? 1 : 0; }
    if (!g_section_verify_init) { g_section_verify_init = 1; g_section_verify = getenv("A5_SECTION_VERIFY") ? 1 : 0; }
    if (!g_susp_verify_init) { g_susp_verify_init = 1; g_susp_verify = getenv("A5_SUSP_VERIFY") ? 1 : 0; }
    if (!g_rot_verify_init) { g_rot_verify_init = 1; g_rot_verify = getenv("A5_ROT_VERIFY") ? 1 : 0; }
    if (!g_rgtex_verify_init) { g_rgtex_verify_init = 1; g_rgtex_verify = getenv("A5_RGTEX_VERIFY") ? 1 : 0; }
    if (a == BASE + 0x63bf4) {
        // Game::Exit() - reached after the Quit confirmation.  Close the host
        // window here as well as via the JNI Exit method: that static call used
        // to be ignored, so confirming Quit did nothing.
        printf("[exit] Game::Exit reached -> closing host\n");
        fflush(stdout);
        a5gl_request_close();
        return;   // let nativeExit run normally
    }
    if (a == BASE + 0x147070) {
        // PVRTCDecompress(src, bpp_flag, w, h, dst).  The engine's decoder is
        // exact but slow in the hybrid (its translated core costs ~0.8 s per
        // mip chain).  Cache the core's OWN output by compressed-content hash:
        // a repeated decode (next race, same texture) becomes a memcpy and the
        // pixels are bit-identical to the engine.  A5_FAST_PVRTC=1 keeps the
        // old (slightly different) host decoder for comparison.
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        uint32_t dst = rd32(sp);
        int w = (int)r2, h = (int)r3, is2 = (r1 != 0);
        if (dst && w > 0 && h > 0 && w <= 2048 && h <= 2048) {
            uint8_t* s = (uint8_t*)mem_host(r0);
            uint8_t* d = (uint8_t*)mem_host(dst);
            if (s && d) {
                if (getenv("A5_FAST_PVRTC")) {
                    pvrtc_decode(s, (long)w, (long)h, d, is2);
                    usetreg(UC_ARM_REG_PC, lr);
                    return;
                }
                uint32_t csize = (uint32_t)(((long)w * h) >> (is2 ? 2 : 1));
                if (csize < 8) csize = 8;
                uint64_t key = 1469598103934665603ULL;
                for (uint32_t i = 0; i < csize; i++) { key ^= s[i]; key *= 1099511628211ULL; }
                key ^= ((uint64_t)(uint32_t)w << 32) | ((uint64_t)(uint32_t)h << 16) | (uint32_t)(is2 ? 0x5a5a : 0);
                static struct { uint64_t key; int w, h, is2; uint8_t* rgba; } pc[256];
                static int pcn = 0;
                static long long pcbytes = 0;
                for (int i = 0; i < pcn; i++)
                    if (pc[i].key == key && pc[i].w == w && pc[i].h == h && pc[i].is2 == is2) {
                        memcpy(d, pc[i].rgba, (size_t)w * h * 4);
                        usetreg(UC_ARM_REG_PC, lr);
                        return;
                    }
                uint32_t stk = heap_alloc(0x800);
                if (stk) {
                    uint32_t csp = stk + 0x780;
                    uw32(csp, 1); uw32(csp + 4, dst);
                    uint32_t R2[16] = {0};
                    R2[0] = r0; R2[1] = r1; R2[2] = r2; R2[3] = r3;
                    R2[13] = csp; R2[14] = LR_SENTINEL;
                    float S2[32];
                    ureg_batch_s(S2);
                    LARGE_INTEGER q0, q1;
                    QueryPerformanceCounter(&q0);
                    auto_dispatch(BASE + 0x14690c, R2, S2, csp);
                    QueryPerformanceCounter(&q1);
                    static int miss_log = 0;
                    if (miss_log < 10) {
                        miss_log++;
                        printf("[pvr] %dx%d bpp=%d engine core %.1fms\n", w, h, (int)r1,
                               g_qpc_freq > 0 ? (double)(q1.QuadPart - q0.QuadPart) * 1000.0 / g_qpc_freq : 0.0);
                    }
                    heap_free(stk);
                    size_t n = (size_t)w * h * 4;
                    if (pcn < 256 && pcbytes + (long long)n < (128LL << 20)) {
                        uint8_t* cp = (uint8_t*)malloc(n);
                        if (cp) {
                            memcpy(cp, d, n);
                            pc[pcn].key = key; pc[pcn].w = w; pc[pcn].h = h;
                            pc[pcn].is2 = is2; pc[pcn].rgba = cp; pcn++; pcbytes += (long long)n;
                        }
                    }
                    usetreg(UC_ARM_REG_PC, lr);
                    return;
                }
            }
        }
        return;
    }
    if (a == BASE + 0x131d88 && getenv("A5_NO_IDXEQ")) return;   // A/B guard
    if (a == BASE + 0x13e1ac || a == BASE + 0x13e224 || a == BASE + 0x13e29c) {
        // CMatrix::Mult / PreMult / SetMult - VFP vector-mode 4x4 multiplies
        // that Unicorn cannot execute. Run the bit-exact recompiled native
        // (natives.inc; validated vs the real ARM code by recomp_mult_test.py).
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        if (getenv("A5_FPSCR_DBG")) {
            static int mn = 0;
            if (mn++ < 5)
                printf("[fpscr] cmat %#x entry fpscr=%08x\n", a - BASE, ureg(UC_ARM_REG_FPSCR));
        }
        native_cmat_mul(u, a, r0, r1, r2, lr);
        // The real function executes vmsr fpscr: entry 0x83030010 (FZ+DN+LEN=3),
        // exit 0x83000010 (FZ+DN, LEN cleared) - and never restores it.  The
        // native path skips the vmsr, so mirror the exit value here: every later
        // interpreted VFP instruction must see FZ+DN like the real device (this
        // is what makes NaN results 0x7FC00000 and flushes denormals).
        usetreg(UC_ARM_REG_FPSCR, 0x83000010u);
        g_vfp_dn = 1;   // FZ+DN now persist for the rest of the run (real device)
        // FZ (flush-to-zero) maps to SSE FTZ+DAZ: denormal inputs read as zero
        // and denormal results flush to zero, exactly like the device's FPSCR.
        { unsigned csr = _mm_getcsr(); if (!(csr & 0x8040u)) _mm_setcsr(csr | 0x8040u); }
        if (getenv("A5_FPSCR_DBG")) {
            static int mn2 = 0;
            if (mn2++ < 5)
                printf("[fpscr] cmat %#x exit fpscr=%08x\n", a - BASE, ureg(UC_ARM_REG_FPSCR));
        }
        return;
    }
    if (a == BASE + 0x13fc8c || a == BASE + 0x13fcdc || a == BASE + 0x13fd7c) {
        // CMatrix::RotateZ/Y/X - recompiled native (recomp_rot_test.py:
        // 1989/1989 bit-exact). Falls back to the emulation if unmapped.
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_NO_NATIVE_ROT") ? 1 : 0;
        if (no_nat) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        native_cmat_rotate(a, r0, r1, lr);
        return;
    }
    if (a == BASE + 0x13e394) {
        // CMatrix::SetTranslation - recompiled native
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        if (native_cmat_set_translation(r0, r1, r2, r3)) usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (emu_only) goto nonnative;   // the optional natives start here
    if (a == BASE + 0x16adb8) {
        // CCollideCar::CollideCarWithStaticCollider(car, body2, p3, p4) - the
        // collision cluster's entry (ComputeCollisionBody + TestSpheres run in
        // C; only CollideBodies/NoteWallImpact stay emulated). A5_NO_COLLIDE=1
        // A/B guard.
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_NO_COLLIDE") ? 1 : 0;
        if (!g_trace_car) g_trace_car = ureg(UC_ARM_REG_R0);   // A5_TRACE capture
        if (no_nat || g_coll_bypass) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        int res = native_collidecar_collide_static(r0, r1, r2, r3, sp);
        usetreg(UC_ARM_REG_SP, sp);   // call_emulated restores it, but be safe
        if (res >= 0) {
            usetreg(UC_ARM_REG_R0, (uint32_t)res);
            usetreg(UC_ARM_REG_PC, lr);
        }
        return;
    }
    if (a == BASE + 0x8dae0) {
        // Scene::SortObjectsDrawOrder - once per frame; its callee IsVisible2
        // (and SphereInFrustum) collapse into C calls inside the native.
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_NO_SORTDRAW") ? 1 : 0;
        if (no_nat) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        native_scene_sort_draw_order(r0, sp);
        usetreg(UC_ARM_REG_SP, sp);
        usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (a == BASE + 0x118b54) {
        // gxRenderGroup::OrderRenderGroups - the per-frame group sort
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_NO_RENDGRP") ? 1 : 0;
        if (no_nat) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        native_gxrg_order(r0);
        usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (a == BASE + 0x1189d0) {
        // gxRenderGroup::InsertItem(gxRenderItem*) - called by Scene::
        // RenderPowerups (the other caller is now native)
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_NO_RENDGRP") ? 1 : 0;
        if (no_nat) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        native_gxrg_insert_item(r0, r1);
        usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (a == BASE + 0x15688c && getenv("A5_NITRO_DEBUG")) {
        // CCar::UpdateNitro(car, keys): log the car input bits + nitro state
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        static uint32_t last = 0xFFFFFFFF;
        static int n = 0;
        if (r1 != last || (n % 900) == 0) {
            printf("[nitro] f%d car=%#x keys=%#x stored5a4=%#x timer=%d level=%d/%d charge=%.3f speed=%.2f acc=%d flag178c=%#x\n",
                   g_host_frame, r0, r1, rd32(r0 + 0x5a4), (int)rd32(r0 + 0x1918),
                   (int)rd32(r0 + 0x18f0), (int)rd32(r0 + 0x1900), uf32(r0 + 0x18e8),
                   uf32(r0 + 0x354), (int)rd32(r0 + 0x18ec), rd32(r0 + 0x178c));
            last = r1;
        }
        n++;
    }
    if (getenv("A5_NITRO_DEBUG") && a == BASE + 0x1791fc) {
        // GamePad::KeyboardKeyPressed(key): log the nitro (0x4000) and brake
        // (0x4) presses with the frame; other keys only once.
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        static uint32_t seen = 0; static int n = 0;
        if (r1 == 0x4000 || r1 == 0x4) {
            if (n < 200) printf("[key] f%d key=%#x\n", g_host_frame, r1);
            n++;
        } else if ((r1 & ~seen) != 0) {
            seen |= r1;
            printf("[key] f%d new key=%#x\n", g_host_frame, r1);
        }
    }
    if (getenv("A5_NITRO_DEBUG") && (a == BASE + 0x147a68 || a == BASE + 0x14781c)) {
        // CTouchScreen::PadTouchEvent / PadUntouchEvent (x, y, id?)
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        static int nt = 0, nu = 0;
        if (a == BASE + 0x147a68) {
            if (nt < 40) printf("[padtouch] this=%#x a=%#x b=%#x c=%#x\n", r0, r1, r2, r3);
            nt++;
        } else {
            if (nu < 40) printf("[paduntouch] this=%#x a=%#x b=%#x c=%#x\n", r0, r1, r2, r3);
            nu++;
        }
    }
    if (getenv("A5_NITRO_DEBUG") && a == BASE + 0x148324) {
        // CCar::AddNitro(amount): the charge gains (drift/pickup/takedown)
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        static int n = 0;
        if (n < 40) printf("[addnitro] car=%#x amount=%.3f charge-before=%.3f\n",
                           r0, uf32(sp), uf32(r0 + 0x18e8));
        n++;
    }
    if (a == BASE + 0x9f1e4) {
        g_press_latch = 0;      // the car update consumed the pressed bits
    }
    if (a == BASE + 0x9f1e4 && getenv("A5_NITRO_DEBUG")) {
        // Scene::UpdateCars: r5 = held keys (mgr+0x10), r7 = pressed (mgr+8)
        uint32_t r5 = ureg(UC_ARM_REG_R5);
        uint32_t r7 = ureg(UC_ARM_REG_R7);
        if (g_host_frame >= 1480)
            printf("[ucars] f%d held=%#x pressed=%#x\n", g_host_frame, r5, r7);
    }
    if (getenv("A5_NITRO_DEBUG") && a == BASE + 0x17920c) {
        // GamePad::KeyboardUpdateKeys(pad): the raw bits -> the pressed edge
        uint32_t r0 = ureg(UC_ARM_REG_R0);
        if (g_host_frame >= 1480)
            printf("[kupd] f%d pad=%#x raw10=%#x held_c=%#x\n",
                   g_host_frame, r0, rd32(r0 + 0x10), rd32(r0 + 0xc));
    }
    if (getenv("A5_NITRO_DEBUG") && a == BASE + 0x178fe4) {
        // GamePadManager::Update
        uint32_t r0 = ureg(UC_ARM_REG_R0);
        uint32_t pad = r0 ? rd32(r0 + 4) : 0;
        if (g_host_frame >= 1480)
            printf("[gmupd] f%d mgr=%#x raw10=%#x p0=%#x\n",
                   g_host_frame, r0, pad ? rd32(pad + 0x10) : 0,
                   r0 ? rd32(r0 + 8) : 0);
    }
    if (getenv("A5_NITRO_DEBUG") &&
        (a == BASE + 0x1569c0 || a == BASE + 0x156d10 || a == BASE + 0x156cbc || a == BASE + 0x156ac4)) {
        // CCar::UpdateNitro decision points: the threshold compare, the engage,
        // the "recent nitro" special path, and the skip label.
        uint32_t car = ureg(UC_ARM_REG_R8);
        static int n = 0;
        if (n < 300) {
            const char* tag = (a == BASE + 0x1569c0) ? "cmp" :
                              (a == BASE + 0x156d10) ? "ENGAGE" :
                              (a == BASE + 0x156cbc) ? "recent" : "skip";
            printf("[npath] f%d %s car=%#x charge=%.3f level=%d max=%d keys=%#x\n",
                   g_host_frame, tag, car, car ? uf32(car + 0x18e8) : 0.0f,
                   car ? (int)rd32(car + 0x18f0) : -1,
                   car ? (int)rd32(car + 0x1900) : -1,
                   ureg(UC_ARM_REG_R0));
            n++;
        }
    }
    if (a == BASE + 0x9ef18 && !auto_enabled(a)) {
        // Scene::UpdateCars entry = one game logic tick.  Clear the high-FPS
        // press latch HERE: the body is native, so a hook inside it (0x9f1e4)
        // never fires.  mgr+8 still holds the latched bits, so this tick reads
        // them; the next manager update starts clean unless a new press arrives.
        // Native entries do this in auto_dispatch (same helper) so both paths
        // tick exactly once.
        a5_updatecars_entry();
    }
    if (a == BASE + 0x71ad8) {
        // Interpreted Game::TimerCallback path; the native path calls the same
        // helper right after GamePadManager::UpdateKeys in auto_dispatch.
        uint32_t game = ureg(UC_ARM_REG_R8);
        uint32_t mgr = game ? rd32(game + 0x1bc0) : 0;
        a5_press_latch_update(game, mgr);
    }
    if (0 && a == BASE + 0x16b338) {   // auto-translated now (probe retired)
        // CCollideCar::CollideCarWithPlane - collision family.
        // DISABLED by default: the outputs (return value + *p4) are bit-exact
        // over 20k+ verified calls, but the frame leftover bytes still differ
        // from the interpreter's and the car-state trace diverges - the engine
        // reads stale stack slots, so the native is only correct once its
        // frame matches byte-for-byte.  Enable for further work with
        // A5_PLANE_NATIVE=1 (verify with A5_PLANE_VERIFY=1).
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_NO_COLLIDEPLANE") ? 1 : 0;
        if (no_nat || g_plane_bypass) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        if (g_plane_verify) {
            // A5_PLANE_VERIFY=1: per-call differential vs the interpreter
            static uint8_t fsnap[0xc8], fsnap2[0xc8];
            uint8_t* fp = mem_host(sp - 0xc8);
            if (fp) {
                static int nc = -1, nb = 0;
                if (nc < 0) nc = 0;
                uint32_t p4v = rd32(r3);
                memcpy(fsnap, fp, 0xc8);
                int rn = native_ccollidecar_collide_with_plane(r0, r1, r2, r3, sp);
                if (nc == 0) {
                    printf("[planev] after native: sp=%#x fr=%#x w04=%#x (expect fr+30=%#x) w10=%#x\n",
                           sp, sp - 0xc8, rd32(sp - 0xc8 + 4), sp - 0xc8 + 0x30, rd32(sp - 0xc8 + 0x10));
                }
                uint32_t p4n = rd32(r3);
                memcpy(fsnap2, fp, 0xc8);
                memcpy(fp, fsnap, 0xc8);
                uw32(r3, p4v);
                g_plane_bypass = 1;
                uint32_t re = call_emulated_at(BASE + 0x16b338,
                    (uint32_t[]){ r0, r1, r2, r3, rd32(sp), rd32(sp + 4) }, 6, sp);
                g_plane_bypass = 0;
                int diffs = 0;
                if ((uint32_t)rn != re) {
                    if (diffs < 4) printf("[planev] ret native=%d interp=%u\n", rn, re);
                    diffs++;
                }
                if (p4n != rd32(r3)) {
                    if (diffs < 4) printf("[planev] p4 native=%#x interp=%#x\n", p4n, rd32(r3));
                    diffs++;
                }
                if (nc == 0) {
                    // full list of differing 4-byte words (frame-relative)
                    for (int i = 0; i < 0xb8; i += 4) {
                        uint32_t a = fsnap2[i] | (fsnap2[i+1] << 8) | (fsnap2[i+2] << 16) | ((uint32_t)fsnap2[i+3] << 24);
                        uint32_t b = fp[i] | (fp[i+1] << 8) | (fp[i+2] << 16) | ((uint32_t)fp[i+3] << 24);
                        if (a != b)
                            printf("[planev] w+%#04x native=%#010x interp=%#010x\n", i, a, b);
                    }
                }
                if (0) {
                    // hex dump both frames for the first call (alignment check)
                    printf("[planev] native frame @%#x:\n", sp - 0xb8);
                    for (uint32_t i = 0; i < 0x60; i += 16) {
                        printf("[planev]  +%02x:", i);
                        for (uint32_t j = 0; j < 16; j++) printf(" %02x", fsnap2[i + j]);
                        printf("\n");
                    }
                    printf("[planev] interp frame @%#x:\n", sp - 0xb8);
                    for (uint32_t i = 0; i < 0x60; i += 16) {
                        printf("[planev]  +%02x:", i);
                        for (uint32_t j = 0; j < 16; j++) printf(" %02x", fp[i + j]);
                        printf("\n");
                    }
                }
                int listed = 0;
                for (uint32_t i = 0; i < 0xc8; i++)
                    if (fsnap2[i] != fp[i]) {
                        diffs++;
                        if (nc == 0 && listed < 60) {
                            printf("[planev] frame+%#x native=%02x interp=%02x\n",
                                   i, fsnap2[i], fp[i]);
                            listed++;
                        }
                    }
                if (diffs) nb++;
                nc++;
                if (diffs || nc <= 3 || (nc % 200) == 0)
                    printf("[planev] call#%d diffs=%d (bad %d/%d)\n", nc, diffs, nb, nc);
                uw32(r3, p4n);
                memcpy(fp, fsnap2, 0xc8);
                usetreg(UC_ARM_REG_SP, sp);
                usetreg(UC_ARM_REG_R0, (uint32_t)rn);
                usetreg(UC_ARM_REG_PC, lr);
                return;
            }
        }
        int res = native_ccollidecar_collide_with_plane(r0, r1, r2, r3, sp);
        usetreg(UC_ARM_REG_SP, sp);
        if (res >= 0) usetreg(UC_ARM_REG_R0, (uint32_t)res);
        usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (0 && a == BASE + 0x16896c) {   // auto-translated now (probe retired)
        // CCollideCar::UpdateSection - collision family.  Gated off until the
        // differential + trace pass (A5_SECTION_NATIVE=1 to enable).
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_SECTION_NATIVE") ? 0 : 1;
        if (no_nat || g_section_bypass) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        if (g_section_verify) {
            static uint8_t fsnap[0x50], fsnap2[0x50];
            uint8_t* fp = mem_host(sp - 0x50);
            if (fp) {
                static int nc = -1, nb = 0;
                if (nc < 0) nc = 0;
                uint32_t o0 = rd32(r3), t0 = rd32(r0 + 0x1b0), t1 = rd32(r0 + 0x1b4), t2 = rd32(r0 + 0x1b8);
                memcpy(fsnap, fp, 0x50);
                int rn = native_ccollidecar_update_section(r0, r1, r2, r3, sp);
                uint32_t o1 = rd32(r3), s0 = rd32(r0 + 0x1b0), s1 = rd32(r0 + 0x1b4), s2 = rd32(r0 + 0x1b8);
                memcpy(fsnap2, fp, 0x50);
                memcpy(fp, fsnap, 0x50);
                uw32(r3, o0); uw32(r0 + 0x1b0, t0); uw32(r0 + 0x1b4, t1); uw32(r0 + 0x1b8, t2);
                g_section_bypass = 1;
                call_emulated_at(BASE + 0x16896c, (uint32_t[]){ r0, r1, r2, r3, rd32(sp) }, 5, sp);
                g_section_bypass = 0;
                int diffs = 0;
                if (o1 != rd32(r3)) { if (diffs < 3) printf("[secv] out native=%#x interp=%#x\n", o1, rd32(r3)); diffs++; }
                if (s0 != rd32(r0 + 0x1b0) || s1 != rd32(r0 + 0x1b4) || s2 != rd32(r0 + 0x1b8)) {
                    if (diffs < 3) printf("[secv] triple native=%#x/%#x/%#x interp=%#x/%#x/%#x\n",
                        s0, s1, s2, rd32(r0 + 0x1b0), rd32(r0 + 0x1b4), rd32(r0 + 0x1b8));
                    diffs++;
                }
                for (uint32_t i = 0; i < 0x50; i++)
                    if (fsnap2[i] != fp[i]) diffs++;
                if (nc == 0) {
                    for (int i = 0; i < 0x50; i += 4) {
                        uint32_t a = fsnap2[i] | (fsnap2[i+1] << 8) | (fsnap2[i+2] << 16) | ((uint32_t)fsnap2[i+3] << 24);
                        uint32_t b = fp[i] | (fp[i+1] << 8) | (fp[i+2] << 16) | ((uint32_t)fp[i+3] << 24);
                        if (a != b) printf("[secv] w+%#04x native=%#010x interp=%#010x\n", i, a, b);
                    }
                }
                nc++;
                if (diffs) nb++;
                if (diffs || nc <= 3 || (nc % 200) == 0)
                    printf("[secv] call#%d n=%d res=%d diffs=%d (bad %d/%d)\n", nc, (int)r3, rn, diffs, nb, nc);
                uw32(r3, o1); uw32(r0 + 0x1b0, s0); uw32(r0 + 0x1b4, s1); uw32(r0 + 0x1b8, s2);
                memcpy(fp, fsnap2, 0x50);
                usetreg(UC_ARM_REG_SP, sp);
                usetreg(UC_ARM_REG_PC, lr);
                return;
            }
        }
        int res = native_ccollidecar_update_section(r0, r1, r2, r3, sp);
        usetreg(UC_ARM_REG_SP, sp);
        usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (0 && a == BASE + 0x11622c) {   // auto-translated now (probe retired)
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_NO_HSV") ? 1 : 0;
        if (no_nat) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        native_hsv_rgbtohsv(r0, r1);
        usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (a == BASE + 0x11613c) {
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_NO_HSV") ? 1 : 0;
        if (no_nat) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        usetreg(UC_ARM_REG_R0, native_hsv_decode(r0, r1));
        usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (0 && a == BASE + 0x1160c8) {   // auto-translated now (probe retired)
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_NO_HSV") || !getenv("A5_HSV_EXT") ? 1 : 0;
        if (no_nat) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        usetreg(UC_ARM_REG_R0, native_hsv_encode(r0, r1, r2));
        usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (0 && a == BASE + 0x117b78) {   // auto-translated now (probe retired)
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_NO_HSV") || !getenv("A5_HSV_EXT") ? 1 : 0;
        if (no_nat) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        native_hsv_torgba(r0, r1);
        usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (0 && a == BASE + 0x117da0) {   // auto-translated now (probe retired)
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_NO_HSV") || !getenv("A5_HSV_EXT") ? 1 : 0;
        if (no_nat) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        native_hsv_alter2(r0, r1, r2, r3, uf32(sp), uf32(sp + 4), uf32(sp + 8), uf32(sp + 12), sp);
        usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (a == BASE + 0x16016c) {
        // CCarBase::UpdateSuspensions
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_NO_SUSP") ? 1 : 0;
        if (no_nat || g_susp_bypass) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        if (g_susp_verify) {
            static uint8_t fsnap[0x24], fsnap2[0x24];
            uint8_t* fp = mem_host(sp - 0x24);
            if (fp) {
                static int nc = -1, nb = 0;
                if (nc < 0) nc = 0;
                static uint8_t csnap[0x700];   // the suspension fields 0xc0..0x7ff? use 0x540
                uint8_t* cb = mem_host(r0 + 0xc0);
                uint32_t n0 = cb ? 0x500 : 0;
                if (cb) memcpy(csnap, cb, 0x500);
                memcpy(fsnap, fp, 0x24);
                int rn = native_ccarbase_update_suspensions(r0, sp);
                memcpy(fsnap2, fp, 0x24);
                int diffs = 0;
                if (cb && memcmp(csnap, cb, 0x500) != 0) diffs++;
                for (uint32_t i = 0; i < 0x24; i++)
                    if (fsnap2[i] != fp[i]) diffs++;
                nc++;
                if (diffs) nb++;
                if (diffs || nc <= 3 || (nc % 200) == 0)
                    printf("[suspv] call#%d res=%d diffs=%d (bad %d/%d)\n", nc, rn, diffs, nb, nc);
                if (cb) memcpy(cb, csnap, 0x500);
                memcpy(fp, fsnap, 0x24);
                g_susp_bypass = 1;
                call_emulated_at(BASE + 0x16016c, (uint32_t[]){ r0 }, 1, sp);
                g_susp_bypass = 0;
                usetreg(UC_ARM_REG_SP, sp);
                usetreg(UC_ARM_REG_PC, lr);
                return;
            }
        }
        int res = native_ccarbase_update_suspensions(r0, sp);
        usetreg(UC_ARM_REG_SP, sp);
        usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (0 && a == BASE + 0x160e50) {   // auto-translated now (probe retired)
        // CCarBase::ComputeCarRotation
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_ROT_NATIVE") ? 0 : 1;
        if (no_nat || g_rot_bypass) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        if (g_rot_verify) {
            static uint8_t fsnap[0x28], fsnap2[0x28];
            static uint8_t csnap[0x600], csnap2[0x600];
            uint8_t* fp = mem_host(sp - 0x28);
            uint8_t* cb = mem_host(r0 + 0);
            if (fp && cb) {
                static int nc = -1, nb = 0;
                if (nc < 0) nc = 0;
                uint32_t outs[6];
                uint32_t outp[6];
                memcpy(csnap, cb, 0x600);
                memcpy(fsnap, fp, 0x28);
                outp[0] = r1; outp[1] = r2; outp[2] = r3;
                outp[3] = rd32(sp); outp[4] = rd32(sp + 4); outp[5] = rd32(sp + 8);
                for (int i = 0; i < 6; i++) outs[i] = rd32(outp[i]);
                int rn = native_ccarbase_compute_car_rotation(r0, r1, r2, r3, rd32(sp), rd32(sp + 4), rd32(sp + 8), sp);
                memcpy(csnap2, cb, 0x600);
                memcpy(fsnap2, fp, 0x28);
                int diffs = 0;
                if (rn >= 0) {
                    for (int i = 0; i < 6; i++) {
                        uint32_t a = rd32(outp[i]);
                        if (a != outs[i]) {
                            if (diffs < 3) printf("[rotv] out%d native=%#x interp=%#x\n", i, a, outs[i]);
                            diffs++;
                        }
                    }
                    if (memcmp(csnap2, csnap, 0x600) != 0) diffs++;
                }
                nc++;
                if (diffs) nb++;
                if (diffs || nc <= 3 || (nc % 200) == 0)
                    printf("[rotv] call#%d res=%d diffs=%d (bad %d/%d)\n", nc, rn, diffs, nb, nc);
                memcpy(cb, csnap, 0x600);
                memcpy(fp, fsnap, 0x28);
                g_rot_bypass = 1;
                call_emulated_at(BASE + 0x160e50, (uint32_t[]){ r0, r1, r2, r3, rd32(sp), rd32(sp + 4), rd32(sp + 8) }, 7, sp);
                g_rot_bypass = 0;
                memcpy(cb, csnap2, 0x600);
                memcpy(fp, fsnap2, 0x28);
                usetreg(UC_ARM_REG_SP, sp);
                usetreg(UC_ARM_REG_PC, lr);
                return;
            }
        }
        int res = native_ccarbase_compute_car_rotation(r0, r1, r2, r3, rd32(sp), rd32(sp + 4), rd32(sp + 8), sp);
        usetreg(UC_ARM_REG_SP, sp);
        usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (a == BASE + 0x118c94) {
        // gxRenderGroup::UpdateSphericalTexCoord (the env-map pass)
        if (getenv("A5_RGTEX_DEBUG")) {
            static int n = 0;
            if (n < 20)
                printf("[rgtex] call#%d this=%#x m=%#x item=%#x\n", n,
                       ureg(UC_ARM_REG_R0), ureg(UC_ARM_REG_R1), ureg(UC_ARM_REG_R2));
            n++;
        }
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_RGTEX_NATIVE") ? 0 : 1;
        if (no_nat || g_rgtex_bypass) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        if (g_rgtex_verify) {
            uint32_t base = rd32(r0 + 0xbc);
            uint32_t flags = rd32(r0 + 0xdc);
            static uint8_t snap[1 << 20], snap2[1 << 20], fsnap[1 << 18], fsnap2[1 << 18];
            static uint32_t doff[1 << 17];
            static uint8_t dval[1 << 17];
            uint8_t* o = mem_host(base);
            uint8_t* fl = mem_host(flags);
            if (o && fl) {
                static int nc = -1, nb = 0;
                if (nc < 0) nc = 0;
                memcpy(snap, o, sizeof(snap));
                memcpy(fsnap, fl, sizeof(fsnap));
                int rn = native_gxrg_update_spherical_texcoord2(r0, r1, r2, sp);
                memcpy(snap2, o, sizeof(snap));
                memcpy(fsnap2, fl, sizeof(fsnap));
                int nd = 0;
                for (uint32_t i = 0; i < (uint32_t)sizeof(snap) && nd < (int)(sizeof(doff) / 4); i++)
                    if (snap[i] != snap2[i]) { doff[nd] = i; dval[nd] = snap2[i]; nd++; }
                for (int i = 0; i < nd; i++) o[doff[i]] = snap[doff[i]];
                memcpy(fl, fsnap, sizeof(fsnap));
                g_rgtex_bypass = 1;
                call_emulated_at(BASE + 0x118c94, (uint32_t[]){ r0, r1, r2 }, 3, sp);
                g_rgtex_bypass = 0;
                int diffs = 0;
                for (int i = 0; i < nd; i++)
                    if (o[doff[i]] != dval[i]) {
                        if (diffs < 3) printf("[rgtexv] off+%#x native=%02x interp=%02x\n", doff[i], dval[i], o[doff[i]]);
                        diffs++;
                    }
                for (uint32_t i = 0; i < (uint32_t)sizeof(fsnap); i++)
                    if (fsnap2[i] != fl[i]) diffs++;
                nc++;
                if (diffs) nb++;
                if (diffs || nc <= 3 || (nc % 200) == 0)
                    printf("[rgtexv] call#%d res=%d changed=%d diffs=%d (bad %d/%d)\n", nc, rn, nd, diffs, nb, nc);
                for (int i = 0; i < nd; i++) o[doff[i]] = dval[i];
                memcpy(fl, fsnap2, sizeof(fsnap));
                usetreg(UC_ARM_REG_SP, sp);
                usetreg(UC_ARM_REG_PC, lr);
                return;
            }
        }
        int res = native_gxrg_update_spherical_texcoord2(r0, r1, r2, sp);
        usetreg(UC_ARM_REG_SP, sp);
        usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (a == BASE + 0x16f6d4) {
        // CMap::CollideCarsWithBGObjects(cars) - the collision driver
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_NO_COLLIDE_DRIVER") ? 1 : 0;
        if (no_nat) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        if (!g_trace_car && r1) g_trace_car = rd32(rd32(r1));   // A5_TRACE capture
        int res = native_map_collide_cars_with_bg(r0, r1, sp);
        usetreg(UC_ARM_REG_SP, sp);   // the original epilogue restores SP
        if (res >= 0) usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (a == BASE + 0x12bc60) {
        // AniObj_v4::UpdateSphericalTexCoord(this, m, meshes, n, arg5, arg6)
        // - the #1 sampled hotspot (~21% of the race).  The function reads the
        // u-scroll from [sp+4] and the v-scroll from [sp+8] (the 6th arg and a
        // STALE caller stack slot - the caller passes (0,0) and the engine adds
        // whatever is left at [sp+8], exactly like InvSqrt's seed).
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_NO_TEXCOORD") ? 1 : 0;
        if (no_nat || g_tex_bypass) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        float fu = uf32(sp + 4);      // the value the emulated function reads for u
        float fv = uf32(sp + 8);      // ... and the stale slot it reads for v
        if (g_tex_verify) {
            // A5_TEXCOORD_VERIFY=1: per-call differential. Only the bytes the
            // native changed are restored/re-compared (a full-window restore
            // would clobber live data that shares the region).
            uint32_t thisp = r0;
            uint32_t obase = rd32(thisp + 0x10c);
            uint32_t outb = rd32(thisp + 0x128 + 4) + obase;
            uint32_t flagsb = rd32(thisp + 0x154);
            static uint8_t snap[1 << 20], snap2[1 << 20], fsnap[1 << 18], fsnap2[1 << 18];
            static uint32_t diffs_off[1 << 17];
            static uint8_t diffs_val[1 << 17];
            uint8_t* o = mem_host(outb);
            uint8_t* fl = mem_host(flagsb);
            if (o && fl) {
                memcpy(snap, o, sizeof(snap));
                memcpy(fsnap, fl, sizeof(fsnap));
                int res_n = native_aniobj_v4_update_spherical_texcoord(thisp, r1, r2, (int32_t)r3, fu, fv);
                memcpy(snap2, o, sizeof(snap));
                memcpy(fsnap2, fl, sizeof(fsnap));
                int nd = 0;
                for (uint32_t i = 0; i < (uint32_t)sizeof(snap) && nd < (int)(sizeof(diffs_off)/4); i++)
                    if (snap[i] != snap2[i]) { diffs_off[nd] = i; diffs_val[nd] = snap2[i]; nd++; }
                int nf = 0;
                for (uint32_t i = 0; i < (uint32_t)sizeof(fsnap) && nf < 4096; i++)
                    if (fsnap[i] != fsnap2[i]) nf++;
                // restore only the changed bytes, then run the interpreter
                for (int i = 0; i < nd; i++) o[diffs_off[i]] = snap[diffs_off[i]];
                memcpy(fl, fsnap, sizeof(fsnap));
                g_tex_bypass = 1;
                call_emulated(BASE + 0x12bc60, (uint32_t[]){ thisp, r1, r2, r3,
                    (uint32_t)(*(uint32_t*)&fu), (uint32_t)(*(uint32_t*)&fv), 0 }, 7);
                g_tex_bypass = 0;
                int diffs = 0;
                for (int i = 0; i < nd; i++)
                    if (o[diffs_off[i]] != diffs_val[i]) {
                        if (diffs < 8) printf("[texv] out+%#x native=%02x emu=%02x\n",
                                              diffs_off[i], diffs_val[i], o[diffs_off[i]]);
                        diffs++;
                    }
                for (uint32_t i = 0; i < (uint32_t)sizeof(fsnap); i++)
                    if (fsnap2[i] != fl[i]) diffs++;
                static int nc = 0, nb = 0;
                nc++;
                if (diffs) nb++;
                if (diffs || nc <= 3 || (nc % 500) == 0)
                    printf("[texv] call#%d n=%d res=%d changed=%d flags=%d diffs=%d (bad %d/%d)\n",
                           nc, (int32_t)r3, res_n, nd, nf, diffs, nb, nc);
                // keep the native's result
                for (int i = 0; i < nd; i++) o[diffs_off[i]] = diffs_val[i];
                memcpy(fl, fsnap2, sizeof(fsnap));
                usetreg(UC_ARM_REG_PC, lr);
                return;
            }
        }
        int res = native_aniobj_v4_update_spherical_texcoord(r0, r1, r2, (int32_t)r3, fu, fv);
        if (res >= 0) usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (a == BASE + 0x168358) {
        // CCollideCar::TestSpheres(a, ra, b, rb) - static; fixed-point sphere
        // overlap test (the #2 collision hotspot). recomp_spheres_test.py:
        // 4000/4000 bit-exact vs the real ARM.
        static int no_nat = -1;
        if (no_nat == -1) no_nat = getenv("A5_NO_SPHERES") ? 1 : 0;
        if (no_nat) return;
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        int res = native_collidecar_test_spheres(r0, (int32_t)r1, r2, (int32_t)r3);
        if (res >= 0) {
            usetreg(UC_ARM_REG_R0, (uint32_t)res);
            usetreg(UC_ARM_REG_PC, lr);
        }
        return;
    }
    if (a == BASE + 0x13e118) {
        // CMatrix::TransformVector (the hottest math function, ~240k/700f)
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        if (native_cmat_transform_vector(r0, r1, r2)) usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (a == BASE + 0x13e36c || a == BASE + 0x13e380) {
        // CMatrix::Load(CMatrix*) / Load(float*) - a 64-byte copy
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        if (native_cmat_load(r0, r1)) usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (a == BASE + 0x13e340 || a == BASE + 0x13e314) {
        // CMatrix::LoadIdentity / CMatrix::Zero - the identity template copy
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        if (native_cmat_identity(r0)) usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (a == BASE + 0x13e3a4) {
        // CMatrix::SetQuaternion(this, x, y, z, w) - w arrives on the stack
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        native_cmat_set_quaternion(r0, r1, r2, r3, rd32(sp));
        usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (a == BASE + 0x140644) {
        // Vector3d::CrossProduct
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        if (native_vec3d_cross(r0, r1, r2)) usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    if (a == BASE + 0x141194) {
        // Vector3d::Normalize
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        if (native_vec3d_normalize(r0)) usetreg(UC_ARM_REG_PC, lr);
        return;
    }
    static int texloop_on = -1;
    if (texloop_on == -1) texloop_on = getenv("A5_NO_TEXLOOP") ? 0 : 1;
    if (getenv("A5_TEXDBG") && a == BASE + 0x120818) {
        printf("[tex] @0x120818 r0=%#x ip=%#x r1=%#x r2=%#x r5=%#x lr=%#x\n",
               ureg(UC_ARM_REG_R0), ureg(UC_ARM_REG_R12), ureg(UC_ARM_REG_R1),
               ureg(UC_ARM_REG_R2), ureg(UC_ARM_REG_R5), ureg(UC_ARM_REG_LR));
    }
    if (texloop_on && a == BASE + 0x1207ec && !getenv("A5_NO_TEXSCAN")) {
        // Texture::LoadRGBA_4444: the all-opaque alpha scan (the sampled hot
        // loop). Runs natively, then jumps to the opaque/transparent path.
        uint32_t thisp = ureg(UC_ARM_REG_R5);
        uint32_t w = rd32(thisp + 4), h = rd32(thisp + 8);
        uint8_t* d = (uint8_t*)mem_host(rd32(thisp + 0x24));
        if (getenv("A5_TEXDBG"))
            printf("[tex] scan: this=%#x w=%u h=%u data=%#x host=%p\n",
                   thisp, w, h, rd32(thisp + 0x24), (void*)d);
        if (d && w && h) {
            int npix = (int)(w * h);
            int opaque = 1;
            for (int i = 0; i < npix; i++)
                if (d[i * 4 + 3] != 0xff) { opaque = 0; break; }
            if (getenv("A5_NO_SCANJUMP")) return;   // debug: the scan only
            // 0x120818 (and the 0x120900 path that falls into it) expects
            // r0 = w and ip(r12) = h from the skipped ldmib - set both paths!
            usetreg(UC_ARM_REG_R0, w);
            usetreg(UC_ARM_REG_R12, h);
            if (opaque) {
                usetreg(UC_ARM_REG_PC, BASE + 0x120818u);
            } else {
                usetreg(UC_ARM_REG_PC, BASE + 0x120900u);
            }
            return;
        }
        return;
    }
    if (texloop_on && a == BASE + 0x120834 && !getenv("A5_NO_TEXPACK")) {
        // Texture::LoadRGBA_4444: the RGBA->4444 pack loop (the hottest loop).
        // The ARM packs (R>>4)<<12 | (G>>4)<<8 | (B>>4)<<4 | (A>>4).
        uint32_t thisp = ureg(UC_ARM_REG_R5);
        uint8_t* s = (uint8_t*)mem_host(rd32(thisp + 0x24));
        uint8_t* dd = (uint8_t*)mem_host(ureg(UC_ARM_REG_R7));
        uint32_t size = ureg(UC_ARM_REG_R8);
        if (getenv("A5_TEXDBG"))
            printf("[tex] pack: this=%#x src=%#x dst=%#x size=%u s=%p d=%p\n",
                   thisp, rd32(thisp + 0x24), ureg(UC_ARM_REG_R7), size, (void*)s, (void*)dd);
        if (s && dd) {
            int npix = (int)(size / 4);
            for (int i = 0; i < npix; i++) {
                uint32_t r = s[i * 4 + 0], g = s[i * 4 + 1], b = s[i * 4 + 2], al = s[i * 4 + 3];
                ((uint16_t*)dd)[i] = (uint16_t)(((r & 0xf0) << 8) | ((g & 0xf0) << 4) |
                                                (b & 0xf0) | (al >> 4));
            }
            usetreg(UC_ARM_REG_PC, BASE + 0x120894u);
            return;
        }
        return;
    }
    if (a == BASE + 0x16e3e0 && !g_auto_bypass) {
        // RoadStruct::GetSection - the hottest race function by sampling.
        // Gated on !g_auto_bypass: the differential's interpreter re-run must
        // execute the REAL ARM code as the reference (the hand-written native
        // only sets r0; the real code also clobbers r2/r3 and writes its frame).
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        native_roadstruct_getsection(r0, r1, lr, sp);
        return;
    }
    if (a == BASE + 0x131f4c) {
        // readIdx - the mesh index decoder (the hottest loading function)
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        int ri_ok = native_readidx(r0, r1, lr);
        if (getenv("A5_READIDX_DBG")) {
            static int ri_n = 0;
            if (ri_n++ < 30)
                printf("[readidx] pp=%#x count=%d p=%#x ok=%d depth=%d\n",
                       r0, (int)r1, rd32(r0), ri_ok, g_emu_depth);
        }
        return;
    }
    if (a == BASE + 0x131d88) {
        // IdxVert::operator== - the #1 hotspot by sampling (the mesh dedup)
        uint32_t r0, r1, r2, r3, sp, lr;
        ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
        native_idxvert_eq(r0, r1, lr);
        return;
    }
    {
        // ---- auto-translated functions (autogens.inc) ----
        static int no_auto = -1;
        if (no_auto == -1) {
            no_auto = getenv("A5_NO_AUTO") ? 1 : 0;
            g_auto_verify = getenv("A5_AUTO_VERIFY") ? 1 : 0;
        }
        if (!no_auto && !g_auto_bypass && auto_is_auto(a)) {
            if (g_native_report) {
                int ai = auto_index(a);
                if (ai >= 0 && ai < 2048 && !auto_enabled(a)) {
                    g_nat_gated++;
                    g_nat_gated_cnt[ai]++;
                }
            }
            // A5_AUTO_SKIP=0xADDR[,0xADDR...]: run these from the interpreter
            // (used to bisect a misbehaving translation)
            static uint32_t auto_skip[512];
            static int auto_nskip = -1;
            if (auto_nskip < 0) {
                auto_nskip = 0;
                const char* s = getenv("A5_AUTO_SKIP");
                if (s) {
                    char buf[4096];
                    snprintf(buf, sizeof(buf), "%s", s);
                    char* p = buf;
                    while (*p && auto_nskip < 512) {
                        auto_skip[auto_nskip++] = (uint32_t)strtoul(p, &p, 16);
                        while (*p == ',' || *p == ' ') p++;
                    }
                }
            }
            for (int i = 0; i < auto_nskip; i++)
                if (auto_skip[i] == a - BASE) return;   // interpreter runs it
            if (getenv("A5_AUTO_DEBUG")) {
                static int dbg = 0;
                if (dbg < 40) { dbg++; printf("[autohit] %#x\n", a - BASE); }
            }
            // A5_VERIFY_GATED=0xADDR[,..]: allow the differential to run these
            // gated functions (they stay disabled in normal mode)
            static uint32_t vg_tab[4096];
            static int vg_n = -1;
            if (vg_n < 0) {
                vg_n = 0;
                const char* vg = getenv("A5_VERIFY_GATED");
                if (vg) {
                    char vbuf[32768];
                    snprintf(vbuf, sizeof(vbuf), "%s", vg);
                    char* vp = vbuf;
                    while (*vp && vg_n < 4096) {
                        vg_tab[vg_n++] = (uint32_t)strtoul(vp, &vp, 16);
                        while (*vp == ',' || *vp == ' ') vp++;
                    }
                }
            }
            int vg_ok = 0;
            for (int vi = 0; vi < vg_n; vi++)
                if (vg_tab[vi] == a - BASE) { vg_ok = 1; break; }
            if (vg_ok && getenv("A5_DEPTH_DBG")) {
                static int dn = 0;
                if (dn++ < 60) printf("[depth] %#x depth=%d\n", a - BASE, g_emu_depth);
            }
            if (getenv("A5_TRG_DEBUG") && a == BASE + 0xb21bc) {
                static int dn = 0;
                if (dn++ < 6)
                    printf("[trg] fired: enabled=%d verify=%d vg_ok=%d depth=%d idx=%d\n",
                           auto_enabled(a), g_auto_verify, vg_ok, g_emu_depth, auto_index(a));
            }
            // A5_SKIP_ENABLED=1: run every ENABLED function from the
            // interpreter during a verification run.  Verification only works
            // at g_emu_depth <= 1, and a native caller pushes its callees to
            // depth 2 - so verifying a gated function whose caller has already
            // been enabled otherwise becomes impossible.
            static int skip_enabled = -1;
            if (skip_enabled < 0) skip_enabled = getenv("A5_SKIP_ENABLED") ? 1 : 0;
            int en_eff = auto_enabled(a) && !skip_enabled;
            if (!en_eff && !(g_auto_verify && vg_ok))
                return;   // translated but not validated: interpreter runs it
            uint32_t R[16] = {0}, R0[16];
            float S[32] = {0}, S0[32];
            ureg_batch15(R);
            ureg_batch_s(S);
            memcpy(R0, R, sizeof(R0));
            memcpy(S0, S, sizeof(S0));
            g_last_auto = a - BASE;
            g_wcur = a - BASE;
            // Dispatch gate: only functions that passed the differential (or
            // whose every callee is a translated native) run natively by
            // default.  A5_AUTO_ALL=1 forces the not-yet-validated ones too.
            static int auto_all = -1;
            if (auto_all < 0) auto_all = getenv("A5_AUTO_ALL") ? 1 : 0;
            if (g_auto_verify) {
                static int av_cnt[512] = {0};
                static int av_all = -1;
                static int av_n = -1;
                static uint32_t vskip_tab[16];
                static int vskip_n = -1;
                if (av_all < 0) {
                    av_all = getenv("A5_AUTO_VERIFY_ALL") ? 1 : 0;
                    const char* vn = getenv("A5_VERIFY_N");
                    av_n = vn ? atoi(vn) : 400;
                }
                if (vskip_n < 0) {
                    vskip_n = 0;
                    const char* vs = getenv("A5_VERIFY_SKIP");
                    while (vs && *vs && vskip_n < 16) {
                        char* end = NULL;
                        vskip_tab[vskip_n++] = (uint32_t)strtoul(vs, &end, 16);
                        vs = end;
                        while (*vs == ',' || *vs == ' ') vs++;
                    }
                }
                int vskip = 0;
                for (int vi = 0; vi < vskip_n; vi++)
                    if (BASE + vskip_tab[vi] == a) { vskip = 1; break; }
                int idx = auto_index(a);
                if (!vskip && ((auto_verifiable(a) && !skip_enabled) || vg_ok) && idx >= 0 && g_emu_depth <= 1) {
                    av_cnt[idx]++;
                    g_ver_vg = vg_ok;
                    if (av_all || av_cnt[idx] <= av_n || (av_cnt[idx] % 2000) == 0) {
                        uint32_t ret_lr = R[14];
                        auto_verify_run(a, R);
                        // the interpreter re-run ran with LR = LR_SENTINEL;
                        // return to the real caller address (setting PC = the
                        // sentinel would trigger the code_hook's emu_stop)
                        usetreg(UC_ARM_REG_LR, ret_lr);
                        usetreg(UC_ARM_REG_PC, ret_lr);
                        return;
                    }
                }
                if (!vskip) return;   // not verifiable (or not sampled): interpreter runs it
            }
            if (en_eff && (auto_all || auto_verifiable(a) || auto_trusted(a))) {
                uint32_t entry_lr = R[14];
                if (auto_dispatch(a, R, S, R[13])) {
                    // batched API writes (the per-call API traffic was the
                    // dominant interception overhead).  The ARM returns via
                    // the stacked LR, so the continuation is the ENTRY lr -
                    // the native's final lr can be a stale call continuation
                    // (returning there jumped into garbage: the PaintFModule
                    // startup crash).
                    usetreg_batch15pc(R);
                    usetreg(UC_ARM_REG_PC, entry_lr);
                    usetreg_batch_s(S);
                    return;
                }
                // a generated function can bail at runtime (e.g. a jump-table
                // default): restore the entry registers so the interpreter can
                // run the function from scratch
                usetreg_batch15pc(R0);
                usetreg_batch_s(S0);
            }
        }
    }
    // ---- end of the recompiled-native hooks (A5_EMU_ONLY jumps here) ----
nonnative:
    if (a == BASE + 0xbebf4) {
        // trailer movie state (GS_TrailerMovie::Update entry). Normally the
        // host plays the movie between frames (movie.c) and clears the wait
        // flag when it ends; with A5_NO_MOVIE=1 report "no movie playing"
        // instantly so the engine advances (the old behaviour).
        if (getenv("A5_NO_MOVIE")) {
            uint32_t game = rd32(BASE + 0x1fa798);
            if (game && rd32(game + 0x1d72)) uw32(game + 0x1d72, 0);
        }
        return;
    }
    if (a == BASE + 0x120764) {  // LoadRGBA_4444 after the source read
        static int cnt = 0;
        if (cnt < 6) {
            cnt++;
            uint32_t thisp = ureg(UC_ARM_REG_R5);
            uint32_t src = rd32(thisp + 0x24), size = rd32(thisp + 0x3c);
            unsigned char b[32] = {0};
            if (src) p_uc_mem_read(g_uc, src, b, 32);
            printf("[src] size=%u first32:", size);
            for (int k = 0; k < 32; k++) printf(" %02x", b[k]);
            printf("\n");
        }
        return;
    }
    if (a == BASE + 0x121a08) {  // Texture::Load after the format readShort
        static int cnt = 0;
        if (cnt < 60) {
            cnt++;
            uint32_t thisp = ureg(UC_ARM_REG_R5);
            printf("[fmt] tex=%#x w=%u h=%u fmt=%#x\n", thisp, rd32(thisp + 4), rd32(thisp + 8), ureg(UC_ARM_REG_R0) & 0xFFFF);
        }
        return;
    }
    if (a == BASE + 0x1229bc) {  // after Texture::Load inside TexturesLibrary::LoadTexture
        static int cnt = 0;
        if (cnt < 100) {
            cnt++;
            printf("[texload] ret=%#x glid=%u\n", ureg(UC_ARM_REG_R0), a5gl_last_bound_emu());
        }
        return;
    }
    if (a == BASE + 0x120d30) {  // Texture::StorePVRTC
        static int cnt2 = 0;
        if (cnt2 < 60) {
            cnt2++;
            uint32_t thisp = ureg(UC_ARM_REG_R0);
            uint32_t idptr = rd32(thisp + 0x44);
            uint32_t glid = idptr ? rd32(idptr) : 0;
            printf("[store] StorePVRTC(this=%#x glid=%u flag=%u)\n", thisp, glid, ureg(UC_ARM_REG_R1));
        }
        return;
    }
    if (0 && a == BASE + 0x1227d4) {   // auto-translated now (probe retired)  // TexturesLibrary::LoadTexture
        static int cnt = 0;
        if (cnt < 80) { cnt++; printf("[texlib] LoadTexture(idx=%u pkg=%u flag=%u)\n", ureg(UC_ARM_REG_R1), ureg(UC_ARM_REG_R2), ureg(UC_ARM_REG_R3)); }
        return;
    }
    if (a == BASE + 0x122bcc || a == BASE + 0x122ca0 || a == BASE + 0x122d00) {
        static int cnt2 = 0;
        if (cnt2 < 40) {
            cnt2++;
            printf("[texlib] %s(pkg=%u)\n", a == BASE + 0x122bcc ? "RefreshRange" : a == BASE + 0x122ca0 ? "RefreshPackage" : "Refresh",
                   ureg(UC_ARM_REG_R1));
        }
        return;
    }
    if (a == BASE + 0xc019c || a == BASE + 0xc0270) {  // Game::PushState / Game::ChangeState
        uint32_t st = ureg(UC_ARM_REG_R1);
        uint32_t vt = st ? rd32(st) : 0;
        // track the loading state so the host can run extra load steps/frame
        if (vt == BASE + 0x1efe18) g_load_state = st;     // GS_LoadGame
        else if (g_load_state) g_load_state = 0;
        g_cur_state = vtable_name(vt);
        g_cur_state_ptr = st;
        if (g_status_log) { fprintf(g_status_log, "  [state] %s\n", g_cur_state); fflush(g_status_log); }
        printf("[state] %s(%#x) = %s vt=%#x\n", a == BASE + 0xc019c ? "PushState" : "ChangeState", st, vtable_name(vt), vt - BASE);
        return;
    }
    if (a == BASE + 0xf94d8) {  // GS_MainMenu::DoBarAction(barIndex)
        static int c1 = 0;
        if (c1 < 20) { c1++; printf("[menu] DoBarAction(bar=%u)\n", ureg(UC_ARM_REG_R1)); }
        return;
    }
    if (a == BASE + 0xfae98) {  // GS_MainMenu::DoAction(item)
        static int c2 = 0;
        if (c2 < 20) { c2++; printf("[menu] DoAction(item=%u)\n", ureg(UC_ARM_REG_R1)); }
        return;
    }
    if (a == BASE + 0xf9064) {  // GS_MainMenu::UpdateOutro
        static int c3 = 0;
        if (c3 < 20) { c3++; printf("[menu] UpdateOutro\n"); }
        return;
    }
    if (a == BASE + 0xfeac0) {  // GS_MainMenu::ProcessOnMouseButtonDown
        static int c4 = 0;
        if (c4 < 2) {
            c4++;
            uint32_t cnt = rd32(ureg(UC_ARM_REG_R0) + 0x18);
            uint32_t lst = rd32(ureg(UC_ARM_REG_R0) + 0x10);
            printf("[touch] menu items=%u\n", cnt);
            for (uint32_t i = 0; i < cnt && i < 12; i++) {
                uint32_t it = rd32(lst + i * 4);
                float x1 = uf32(it + 0), y1 = uf32(it + 4), x2 = uf32(it + 8), y2 = uf32(it + 12);
                printf("[touch]   item%u @%#x rect=(%.0f,%.0f)-(%.0f,%.0f)\n", i, it, x1, y1, x2, y2);
            }
        }
        uint16_t mc = ur16(BASE + 0xafd12c);
        printf("[touch] down: count=%u touchX=%d touchY=%d\n", mc, (int16_t)ur16(BASE + 0xafd12e), (int16_t)ur16(BASE + 0xafd130));
        return;
    }
    if (a == BASE + 0xb7138) {  // gxGameState::CreateRects(count)
        static int cr2_n = 0;
        if (cr2_n < 20) {
            cr2_n++;
            uint32_t th = ureg(UC_ARM_REG_R0);
            printf("[createrects] count=%d this+0x10=%#x this+0x14=%d\n",
                   (int)ureg(UC_ARM_REG_R1), rd32(th + 0x10), (int)rd32(th + 0x14));
        }
        return;
    }
    if (a == BASE + 0xb71b4) {  // gxMenu::CreateItems(count) - log the return value on exit
        static int ci_n = 0;
        uint32_t th = ureg(UC_ARM_REG_R0);
        int count = (int)ureg(UC_ARM_REG_R1);
        if (ci_n < 20) {
            ci_n++;
            printf("[createitems] count=%d this+0x8d8=%d 0x8dc=%d 0x8f0=%d 0x8e8=%#x 0x8ec=%#x\n",
                   count, (int)rd32(th + 0x8d8), (int)rd32(th + 0x8dc),
                   (int)rd32(th + 0x8f0), rd32(th + 0x8e8), rd32(th + 0x8ec));
        }
        // NOTE: the per-menu item positions (main menu corner buttons, the
        // SelectLocation race-start bar, the garage NEXT bar, the options
        // content bars) are all computed by the engine itself once the
        // .init_array static initializers have run - the host no longer
        // patches any positions.
        return;
    }
    if (a == BASE + 0xfac30) {  // inside GS_MainMenu::Create, just before the item-count loads
        uint32_t th = ureg(UC_ARM_REG_R7);  // this lives in r7 here
        // A5_MENU_FIX=1: legacy fallback - inject the main menu item counts
        // before the count loads. No longer needed (the .init_array static
        // initializers make the engine's own Create -> ApplyMenuSettings flow
        // set the counts/tables correctly), kept for debugging only.
        if (getenv("A5_MENU_FIX") && rd32(th + 0x8dc) == 0 && rd32(th + 0x8d8) == 0) {
            uw32(th + 0x8d8, 4);
            uw32(th + 0x8dc, 5);
            uw32(th + 0x8e8, BASE + 0x1f7448);
            uw32(th + 0x8ec, BASE + 0x1f73a0);
            uw32(th + 0x7c, 0xffffffff);
            p_uc_mem_write(g_uc, th + 0x8d4, "\x01", 1);
            printf("[menu] Create: injected menu settings (fallback)\n");
        }
        return;
    }
    if (a == BASE + 0xfabfc) {  // GS_MainMenu::Create
        uint32_t th = ureg(UC_ARM_REG_R0);
        // A5_MENU_FIX=1: legacy fallback - inject the item counts before the
        // Create reads them. No longer needed: with the .init_array static
        // initializers running, the engine's own Create -> ApplyMenuSettings
        // flow registers the item rects correctly. Kept for debugging only.
        if (getenv("A5_MENU_FIX") && rd32(th + 0x8dc) == 0 && rd32(th + 0x8d8) == 0) {
            uw32(th + 0x8d8, 4);                 // dynamic item count
            uw32(th + 0x8dc, 5);                 // static (bar) item count
            uw32(th + 0x8e8, BASE + 0x1f7448);   // mainMenuItems
            uw32(th + 0x8ec, BASE + 0x1f73a0);   // mainMenuBarItems
            uw32(th + 0x7c, 0xffffffff);         // selection = none
            p_uc_mem_write(g_uc, th + 0x8d4, "\x01", 1);  // show title extra info
            printf("[menu] Create: injected menu settings (fallback)\n");
        }
        return;
    }
    if (a == BASE + 0xb6a24) {  // gxGameState::AddRectangle(id, x, y, w, h)
        static int ar_n = 0;
        if (ar_n < 200) {
            ar_n++;
            printf("[rect+] id=%d rect=(%d,%d,%d,%d) lr=%#x\n",
                   (int)ureg(UC_ARM_REG_R1), (int)ureg(UC_ARM_REG_R2), (int)ureg(UC_ARM_REG_R3),
                   (int)ureg(UC_ARM_REG_R4), (int)ureg(UC_ARM_REG_R5),
                   ureg(UC_ARM_REG_LR) - BASE);
        }
        return;
    }
    if (a == BASE + 0xb9114) {  // gxGameState::AdjustRectangle(id, x, y, w, h)
        static int adj_n = 0;
        if (adj_n < 200) {
            adj_n++;
            printf("[rect~] id=%d rect=(%d,%d,%d,%d) lr=%#x\n",
                   (int)ureg(UC_ARM_REG_R1), (int)ureg(UC_ARM_REG_R2), (int)ureg(UC_ARM_REG_R3),
                   (int)ureg(UC_ARM_REG_R4), (int)ureg(UC_ARM_REG_R5),
                   ureg(UC_ARM_REG_LR) - BASE);
        }
        return;
    }
    // ---- sound: the engine's real audio path now runs (the Java GLMediaPlayer
    // side is implemented in audio.c: Ogg decode + waveOut mixing). The old
    // stubs that neutralised playEx are gone; A5_STUB_SOUND=1 restores them
    // for debugging (e.g. if a future change breaks the audio device setup).
    if (getenv("A5_STUB_SOUND")) {
        if (a == BASE + 0x17ac38) { usetreg(UC_ARM_REG_R0, 0); usetreg(UC_ARM_REG_PC, ureg(UC_ARM_REG_LR)); return; }  // playEx
        if (a == BASE + 0x17a730) { usetreg(UC_ARM_REG_R0, 0); usetreg(UC_ARM_REG_PC, ureg(UC_ARM_REG_LR)); return; }  // isSoundPlaying
        if (a == BASE + 0x17a79c) { usetreg(UC_ARM_REG_R0, 0); usetreg(UC_ARM_REG_PC, ureg(UC_ARM_REG_LR)); return; }  // getNumberOfPlayingSounds
        if (a == BASE + 0x17a66c) { usetreg(UC_ARM_REG_R0, 1); usetreg(UC_ARM_REG_PC, ureg(UC_ARM_REG_LR)); return; }  // areAllSoundStoped
        if (a == BASE + 0xc97e0) { usetreg(UC_ARM_REG_R0, 0); usetreg(UC_ARM_REG_PC, ureg(UC_ARM_REG_LR)); return; }  // SampleStartIfNotPlaying
        if (a == BASE + 0xc9720) { usetreg(UC_ARM_REG_R0, 0); usetreg(UC_ARM_REG_PC, ureg(UC_ARM_REG_LR)); return; }  // playInPosition
        if (a == BASE + 0xc9714) { usetreg(UC_ARM_REG_PC, ureg(UC_ARM_REG_LR)); return; }                            // SampleStop (void)
    }
    if (a == BASE + 0xff594) {  // GS_MainMenu::RenderItem(int, int)
        static int ri_calls = 0;
        ri_calls++;
        // dump the full item table + state once, well into the menu (4 calls/frame)
        if (ri_calls == 800) {
            uint32_t th = ureg(UC_ARM_REG_R0);
            uint32_t arr = rd32(th + 0x8e8);
            uint32_t st  = rd32(th + 0x88);
            printf("[items] render dump (call#%d) count84=%d flags: 8ce=%d 8fc=%d 94=%d 8d4=%d 7c=%d\n",
                   ri_calls, (int)rd32(th + 0x84), (int)rd32(th + 0x8ce), (int)rd32(th + 0x8fc),
                   (int)rd32(th + 0x94), (int)rd32(th + 0x8d4), (int)rd32(th + 0x7c));
            for (int i = 0; i < 9; i++) {
                uint32_t e = arr + i * 24;
                int id = (int)rd32(e);
                printf("  [%d] id=%d act=%#x f8=%#x x=%d y=%d f14=%#x | st=%#x\n",
                       i, id, rd32(e + 4), rd32(e + 8), (int)rd32(e + 0xc), (int)rd32(e + 0x10),
                       rd32(e + 0x14), st ? rd32(st + id * 24 + 8) : 0);
            }
        }
        return;
    }
    if (a == BASE + 0x77dec) {  // Sprite::PaintFrame(frame, x, y, color, ?)
        static int pf_n = 0;
        if (getenv("A5GL_DEBUG") && pf_n < 4000) {
            int frame = (int)ureg(UC_ARM_REG_R1);
            int x = (int)ureg(UC_ARM_REG_R2), y = (int)ureg(UC_ARM_REG_R3);
            // the corner menu items' frames: 0xb4 (quick race), 0x15 (info), 0x17 (sound), 0x19 (panel)
            if (frame == 0xb4 || frame == 0xb5 || frame == 0x15 || frame == 0x16 ||
                frame == 0x17 || frame == 0x18 || frame == 0x19 || frame == 0x1a) {
                pf_n++;
                uint32_t spr = ureg(UC_ARM_REG_R0);
                uint32_t tbl = rd32(spr + 0x24);
                unsigned char mb = 0xff;
                if (tbl) p_uc_mem_read(g_uc, tbl + frame, &mb, 1);
                int mods = tbl ? (int)mb : -1;
                printf("[paint] spr=%#x frame=%#x mods=%d x=%d y=%d col=%#x\n",
                       spr, frame, mods, x, y, ureg(UC_ARM_REG_R4));
            }
        }
        return;
    }
    if (a == BASE + 0x6c18c || a == BASE + 0x6c2c0) {  // Game::PlayMusic / ResumeMusic
        static int pn = 0;
        if (pn < 12) {
            pn++;
            uint32_t th = ureg(UC_ARM_REG_R0);
            int mv = (int)rd32(BASE + 0x1f85ec + 0x24);
            int sv = (int)rd32(BASE + 0x1f85ec + 0x28);
            int muv = (int)rd32(BASE + 0x1f85ec + 0x2c);
            printf("[mus] %s this=%#x musicId=%d master=%d sfx=%d music=%d r1=%d r2=%d\n",
                   a == BASE + 0x6c18c ? "PlayMusic" : "ResumeMusic",
                   th, th ? (int)rd32(th + 0x484) : -1, mv, sv, muv,
                   (int)ureg(UC_ARM_REG_R1), (int)ureg(UC_ARM_REG_R2));
        }
        return;
    }
    if (a == BASE + 0x77704 && getenv("A5GL_DEBUG")) {  // Sprite::PaintModule trace
        static int pm_n = 0;
        {
            uint32_t spr = ureg(UC_ARM_REG_R0);
            int module = (int)ureg(UC_ARM_REG_R1);
            int x = (int)ureg(UC_ARM_REG_R2), y = (int)ureg(UC_ARM_REG_R3);
            uint32_t wp = rd32(spr + 0xc), hp = rd32(spr + 8);
            unsigned short w = 0, h = 0;
            if (wp) p_uc_mem_read(g_uc, wp + module * 2, &w, 2);
            if (hp) p_uc_mem_read(g_uc, hp + module * 2, &h, 2);
            // the corner menu items: small modules near the top-left / left edge
            if (x < 100 && y < 100 && w >= 20 && w <= 90 && h >= 20 && h <= 90) {
                pm_n++;
                printf("[pmod] spr=%#x mod=%d x=%d y=%d w=%d h=%d texid=%d page=%d flags=%#x\n",
                       spr, module, x, y, (int)w, (int)h, (int)rd32(spr + 0x68), (int)rd32(spr + 0x6c),
                       (unsigned)ureg(UC_ARM_REG_R6));
            }
        }
        return;
    }
    if (a == BASE + 0x1337f0) {  // Shader::Set() - dump the shader's color when it looks like the car tint
        static int ss_n = 0;
        uint32_t sh = ureg(UC_ARM_REG_R0);
        float c0 = uf32(sh + 8), c1 = uf32(sh + 0xc), c2 = uf32(sh + 0x10), c3 = uf32(sh + 0x14);
        if (getenv("A5GL_DEBUG") && ss_n < 10 &&
            c0 > 0.4f && c0 < 0.75f && c1 > 0.5f && c1 < 0.8f && c2 > 0.6f && c2 < 0.9f) {
            ss_n++;
            uint32_t lib = rd32(BASE + 0x1fa79c);
            unsigned char lb[4] = {0,0,0,0};
            if (lib) p_uc_mem_read(g_uc, lib + 0x17a8, lb, 4);
            uint32_t packed = lib ? rd32(lib + 0x12c8) : 0;
            printf("[shader] this=%#x color=(%.3f,%.3f,%.3f,%.3f) | lib17a8=(%u,%u,%u,%u) lib12c8=%#x\n",
                   sh, c0, c1, c2, c3, lb[0], lb[1], lb[2], lb[3], packed);
        }
        return;
    }
    if (a == BASE + 0x8e864) {  // Scene::UpdateCarColor(int)
        static int ucc_n = 0;
        ucc_n++;
        if (ucc_n <= 6 || ucc_n % 5000 == 0) {
            uint32_t sc = ureg(UC_ARM_REG_R0);
            int idx = (int)ureg(UC_ARM_REG_R1);
            printf("[ucc] UpdateCarColor(car=%d) call#%d\n", idx, ucc_n);
        }
        return;
    }
    if (a == BASE + 0x11a0b8) {  // Lib3D::setColor(unsigned) - the engine's current color
        static int sc_n = 0;
        sc_n++;
        uint32_t c = ureg(UC_ARM_REG_R1);
        if (sc_n <= 20 || (sc_n % 2000) == 0) {
            printf("[setcolor] %#x = (%u,%u,%u,%u) lr=%#x call#%d\n", c,
                   (c >> 16) & 0xff, (c >> 8) & 0xff, c & 0xff, (c >> 24) & 0xff,
                   ureg(UC_ARM_REG_LR) - BASE, sc_n);
        }
        return;
    }
    if (a == BASE + 0x1001bc) {  // GS_MainMenu::Resume (base for the menu subclasses too)
        static int rs_n = 0;
        if (rs_n < 20) {
            rs_n++;
            uint32_t th = ureg(UC_ARM_REG_R0);
            uint32_t vt = rd32(th);
            printf("[resume] this=%#x vt=%#x counts: 8d8=%d 8dc=%d 8e8=%#x lr=%#x\n",
                   th, vt, (int)rd32(th + 0x8d8), (int)rd32(th + 0x8dc), rd32(th + 0x8e8),
                   ureg(UC_ARM_REG_LR) - BASE);
        }
        return;
    }
    if (a == BASE + 0x10f674) {  // GS_SelectLocationMenu::DoAction
        static int la_n = 0;
        if (la_n < 20) { la_n++; printf("[loc-action] id=%d mode=%d\n", (int)ureg(UC_ARM_REG_R1), (int)ureg(UC_ARM_REG_R2)); }
        return;
    }
    if (a == BASE + 0xea88c) {  // GS_CareerMenu::DoAction
        static int ca_n = 0;
        if (ca_n < 20) { ca_n++; printf("[career-action] id=%d mode=%d\n", (int)ureg(UC_ARM_REG_R1), (int)ureg(UC_ARM_REG_R2)); }
        return;
    }
    if (a == BASE + 0xfae98) {  // GS_MainMenu::DoAction(id, mode)
        static int ma_n = 0;
        if (ma_n < 20) { ma_n++; printf("[main-action] id=%d mode=%d\n", (int)ureg(UC_ARM_REG_R1), (int)ureg(UC_ARM_REG_R2)); }
        return;
    }
    if (a == BASE + 0x11a058) {  // InvSqrt(float) - fast inverse sqrt
        // The function reads its Newton seed from [sp-4] (the caller's scratch
        // slot). The engine's own callers never store it (garbage in practice,
        // which poisons the spherical reflection UVs on every 2-texture-unit
        // mesh - car bodies). Supply the standard bit-trick seed so the
        // iteration converges. A5_NO_INVSQRT_FIX=1 disables.
        static int isq_n = 0;
        if (!getenv("A5_NO_INVSQRT_FIX")) {
            uint32_t x = ureg(UC_ARM_REG_R0);
            uint32_t sp = ureg(UC_ARM_REG_SP);
            uw32(sp - 4, 0x5f3759df - (x >> 1));
            if (isq_n < 8) {
                isq_n++;
                float xf; memcpy(&xf, &x, 4);
                printf("[invsqrt] x=%g -> seed=%#x (fixed)\n", xf, 0x5f3759df - (x >> 1));
            }
        }
        return;
    }
    if (a == BASE + 0xbfae0) {  // GS_LoadGame::Update - loading progress
        static int lg_n = 0;
        lg_n++;
        uint32_t th = ureg(UC_ARM_REG_R0);
        uint32_t g = rd32(BASE + 0x1fa798);
        // when loading is complete, the engine only starts GS_Run if game+0x849c
        // is set (audio/asset-ready gate that never turns on under our shims).
        if (rd32(th + 0x78) == rd32(th + 0x7c) && rd32(g + 0x849c) == 0) {
            uw32(g + 0x849c, 1);
            printf("[loadgame] loading done -> set start flag 0x849c=1\n");
        }
        if (lg_n < 6 || (lg_n % 1000) == 0) {
            printf("[loadgame] call#%d progress=%d target=%d flag849c=%d\n", lg_n,
                   (int)rd32(th + 0x78), (int)rd32(th + 0x7c), (int)rd32(g + 0x849c));
        }
        return;
    }
    if (a == BASE + 0xbfae0 || a == BASE + 0xf9acc ||
        a == BASE + 0x1001bc || a == BASE + 0xf96f4 || a == BASE + 0x114f08) {
        static const struct { uint32_t off; const char* nm; } names[] = {
            {0xc019c, "PushState"}, {0xc0270, "ChangeState"}, {0xbfae0, "GS_LoadGame::Update"},
            {0xf9acc, "GS_MainMenu::Update"}, {0x1001bc, "GS_MainMenu::Resume"},
            {0xf96f4, "GS_MainMenu::ApplyMenuSettings"}, {0x114f08, "gxMainMenu::Update"},
        };
        for (size_t i = 0; i < sizeof(names)/sizeof(names[0]); i++)
            if (a == BASE + names[i].off) {
                static int cnt = 0;
                if (cnt < 60) { cnt++; printf("[state] %s\n", names[i].nm); }
                break;
            }
        return;
    }
}

// Demand-paged guard past the .so image: the game writes just past its bss
// (harmless on Android, where the neighbouring library mappings absorb it,
// but fatal here inside Unicorn's direct-access fast path).  Log the writer
// and map a zero chunk on demand so the access completes.
static void guard_hook(uc_engine* u, int type, uint64_t addr, int size, int64_t value, void* user) {
    static int gn = 0;
    uint32_t a = (uint32_t)addr;
    uint32_t pc = ureg(UC_ARM_REG_PC), lr = ureg(UC_ARM_REG_LR);
    if (gn++ < 300)
        printf("[guard] %s pc=%#x lr=%#x addr=%#x sz%d v=%llx\n",
               (type & 2048) ? "write" : "read", pc - BASE, lr - BASE, a - BASE, size,
               (unsigned long long)value);
    uint64_t page = addr & ~(uint64_t)0xFFF;
    p_uc_mem_map(u, page, 0x10000, UC_PROT_ALL);
}

// diagnostic (A5_SMC_TRACE): guest writes into its own code pages.  Self-
// modifying code forces constant TB invalidation and re-translation, which
// fills the TCG code buffer (the 4MB-stride AV walk).
static void smc_hook(uc_engine* u, int type, uint64_t addr, int size, int64_t value, void* user) {
    static int sn = 0;
    if (sn++ < 200)
        printf("[smc] write pc=%#x addr=%#x sz%d v=%llx\n",
               ureg(UC_ARM_REG_PC) - BASE, (uint32_t)addr - BASE, size, (unsigned long long)value);
}

// interpreter-side checkpoints for the instruction-level differential
// (active only while comparing the selected verification of 0xb21bc)
static void trg_chk_hook(uc_engine* u, uint64_t addr, uint32_t size, void* user) {
    if (g_chk_mode != 2) return;
    uint32_t a = (uint32_t)addr;
    if (a < g_chk_fn_addr || a >= g_chk_fn_end) return;
    uint32_t cr[13];
    for (int i = 0; i < 13; i++) cr[i] = ureg(UC_ARM_REG_R0 + i);
    float S[32];
    ureg_batch_s(S);
    a5_chk(a - BASE, cr, ureg(UC_ARM_REG_SP), S);
}

static void trace_create_hook(uc_engine* u, uint64_t addr, uint32_t size, void* user) {
    uint32_t a = (uint32_t)addr;
    uint32_t th = ureg(UC_ARM_REG_R0);
    printf("[crtrace] pc=%#x r0=%#x r1=%#x r2=%#x | [r0+8d8]=%d [r0+8dc]=%d [r0+8e8]=%#x\n",
           a - BASE, th, ureg(UC_ARM_REG_R1), ureg(UC_ARM_REG_R2),
           (int)rd32(th + 0x8d8), (int)rd32(th + 0x8dc), rd32(th + 0x8e8));
    if (a == BASE + 0xfac2c || a == BASE + 0xfac1c) {
        uint32_t vt = rd32(ureg(UC_ARM_REG_R3));
        uint32_t fn = rd32(vt + (a == BASE + 0xfac2c ? 0x7c : 0x80));
        printf("[crtrace]   vtable call: vt=%#x fn=%#x (off %#x)\n", vt, fn, fn - BASE);
    }
}

static void code_hook(uc_engine* u, uint64_t addr, uint32_t size, void* user) {    uint32_t a = (uint32_t)addr;
    if (getenv("A5_UI_TOUCH")) {
        if (a == BASE + 0xb730c) {   // gxGameState::ProcessOnMouseButtonDown
            static int n = 0;
            if (n++ < 60)
                printf("[uit] f%d down this=%#x x=%d y=%d cnt=%d\n", g_host_frame,
                       ureg(UC_ARM_REG_R0), (int16_t)ur16(BASE + 0xafd12e),
                       (int16_t)ur16(BASE + 0xafd130), (int)ur16(BASE + 0xafd12c));
        } else if (a == BASE + 0xb733c) {   // after the item hit-test
            uint32_t it = ureg(UC_ARM_REG_R0);
            static int n2 = 0;
            if (n2++ < 60)
                printf("[uit]   item=%#x id=%d\n", it, it ? (int)rd32(it + 0x24) : -999);
        }
    }
    if (a >= SHIM && a < SHIM + 0x00100000) {
        if (a >= JNI_STUBS && a < JNI_STUBS + 256 * 4) {
            int slot = (int)((a - JNI_STUBS) / 4);
            uint32_t r0, r1, r2, r3, sp, lr;
            ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
            uint32_t ret = jni_dispatch(slot, r0, r1, r2, r3, sp);
            usetreg(UC_ARM_REG_R0, ret);
            return;
        }
        if (a == LR_SENTINEL) { p_uc_emu_stop(u); return; }
        int i = (int)((a - SHIM) / 4);
        if (i >= 0 && i < nstubs && stubs[i].addr == a) {
            uint32_t r0, r1, r2, r3, sp, lr;
            ureg_batch6(&r0, &r1, &r2, &r3, &sp, &lr);
            if (shim_ids[i] == SH_GL) {
                uint32_t raw[9];
                raw[0] = r0; raw[1] = r1; raw[2] = r2; raw[3] = r3;
                // one 20-byte read for the five stack args (was 5 mem_reads)
                p_uc_mem_read(g_uc, sp, &raw[4], 20);
                if (g_auto_verify && g_shimlog_n < SHIMLOG_MAX) {
                    g_shimlog[g_shimlog_n][0] = a;
                    g_shimlog[g_shimlog_n][1] = r0;
                    g_shimlog[g_shimlog_n][2] = r1;
                    g_shimlog[g_shimlog_n][3] = r2;
                    g_shimlog[g_shimlog_n][4] = r3;
                    g_shimlog[g_shimlog_n][5] = lr;   // caller return address
                    for (int k = 0; k < 5; k++) g_shimlog[g_shimlog_n][6 + k] = raw[4 + k];
                    g_shimlog_n++;
                }
                LARGE_INTEGER _q0, _q1;
                if (g_step_prof) QueryPerformanceCounter(&_q0);
                uint32_t ret = a5gl_call(stubs[i].name, raw, lr);
                if (g_step_prof) { QueryPerformanceCounter(&_q1); g_gl_ticks += _q1.QuadPart - _q0.QuadPart; g_gl_calls++; }
                usetreg(UC_ARM_REG_R0, ret);
                return;
            }
            if (g_auto_verify && g_shimlog_n < SHIMLOG_MAX) {
                g_shimlog[g_shimlog_n][0] = a;
                g_shimlog[g_shimlog_n][1] = r0;
                g_shimlog[g_shimlog_n][2] = r1;
                g_shimlog[g_shimlog_n][3] = r2;
                g_shimlog[g_shimlog_n][4] = r3;
                g_shimlog[g_shimlog_n][5] = lr;   // caller return address
                p_uc_mem_read(g_uc, sp, &g_shimlog[g_shimlog_n][6], 20);
                g_shimlog_n++;
            }
            LARGE_INTEGER _q0, _q1;
            if (g_step_prof) QueryPerformanceCounter(&_q0);
            uint32_t ret = shim_call(shim_ids[i], stubs[i].name, r0, r1, r2, r3, sp);
            if (g_step_prof) { QueryPerformanceCounter(&_q1); g_shim_ticks += _q1.QuadPart - _q0.QuadPart; g_shim_calls++; }
            if (g_step_prof) {
                int sid_ = shim_ids[i];
                if (sid_ == SH_MEMCPY || sid_ == SH_MEMSET || sid_ == SH_MALLOC) {
                    uint32_t la = lr - BASE;
                    int k = 0;
                    for (; k < g_lr_n; k++) if (g_lr_addr[k] == la) break;
                    if (k == g_lr_n && g_lr_n < 16) g_lr_addr[g_lr_n++] = la;
                    if (k < 16) g_lr_cnt[k]++;
                }
            }
            usetreg(UC_ARM_REG_R0, ret);
            return;
        }
        return;
    }
    probe(u, addr, size, user);
}
