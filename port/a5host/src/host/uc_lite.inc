// uc_lite.inc - minimal native backend for the Unicorn C API surface.
//
// The game code is fully translated to x86-64, so no ARM instruction ever
// needs to execute.  What the host still uses from the Unicorn API is:
//   - guest memory read/write (image, heap, stack, SHIM)
//   - the ARM register file / VFP S registers used by hand-written probes
//   - map/open/hook/ctl calls at boot
// This file implements exactly that.  uc_emu_start is a hard failure: reaching
// it means an untranslated function was called and the pure build is invalid.

typedef struct { int dummy; } uc_lite_engine;
static uc_lite_engine g_uc_lite_eng;

static uint32_t g_lite_r[16];       // r0-r12, sp, lr, pc
static float    g_lite_s[32];       // VFP S0-S31
static uint32_t g_lite_cpsr, g_lite_fpscr, g_lite_fpexc, g_lite_cpacr;

static int lite_mem_read(uc_engine* uc, uint64_t addr, void* buf, size_t size) {
    (void)uc;
    if (!buf) return -1;
    if (size == 0) return 0;
    uint8_t* p = mem_host(addr);
    if (p && mem_host(addr + size - 1)) { memcpy(buf, p, size); return 0; }
    uint8_t* d = (uint8_t*)buf;
    int ok = 1;
    for (size_t i = 0; i < size; i++) {
        uint8_t* q = mem_host(addr + i);
        if (q) d[i] = *q;
        else { d[i] = 0; ok = 0; }
    }
    return ok ? 0 : -1;
}

static int lite_mem_write(uc_engine* uc, uint64_t addr, const void* buf, size_t size) {
    (void)uc;
    if (!buf) return -1;
    if (size == 0) return 0;
    uint8_t* p = mem_host(addr);
    if (p && mem_host(addr + size - 1)) { memcpy(p, buf, size); return 0; }
    const uint8_t* s = (const uint8_t*)buf;
    int ok = 1;
    for (size_t i = 0; i < size; i++) {
        uint8_t* q = mem_host(addr + i);
        if (q) *q = s[i];
        else ok = 0;
    }
    return ok ? 0 : -1;
}

static void lite_register(uint64_t addr, size_t size, uint8_t* host) {
    if (!host) return;
    int known = 0;
    for (int i = 0; i < nmemregions; i++)
        if (memregions[i].addr == addr) known = 1;
    if (!known && nmemregions < 8) {
        memregions[nmemregions].addr = addr;
        memregions[nmemregions].size = size;
        memregions[nmemregions].host = host;
        nmemregions++;
    }
    // mem_host's 64 KB fast path is only valid for aligned regions; the
    // linear fallback covers the rest.
    if ((addr & 0xFFFF) == 0) {
        for (uint64_t a = addr; a < addr + size; a += 0x10000)
            g_mem_page[(uint32_t)(a >> 16)] = host + (size_t)(a - addr);
    }
}

static int lite_mem_map(uc_engine* uc, uint64_t addr, size_t size, uint32_t prot) {
    (void)uc; (void)prot;
    if (!size) return 0;
    void* p = VirtualAlloc(NULL, size, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (!p) return -1;
    memset(p, 0, size);
    lite_register(addr, size, (uint8_t*)p);
    return 0;
}

static int lite_mem_map_ptr(uc_engine* uc, uint64_t addr, size_t size,
                            uint32_t prot, void* host) {
    (void)uc; (void)prot;
    // The boot loop registers these regions itself; keep this a no-op so the
    // memregions table is not duplicated.
    (void)addr; (void)size; (void)host;
    return 0;
}

static int lite_reg_read(uc_engine* uc, int reg, void* val) {
    (void)uc;
    if (!val) return -1;
    if (reg >= UC_ARM_REG_R0 && reg <= UC_ARM_REG_R12) {
        *(uint32_t*)val = g_lite_r[reg - UC_ARM_REG_R0]; return 0;
    }
    switch (reg) {
        case UC_ARM_REG_SP:     *(uint32_t*)val = g_lite_r[13]; return 0;
        case UC_ARM_REG_LR:     *(uint32_t*)val = g_lite_r[14]; return 0;
        case UC_ARM_REG_PC:     *(uint32_t*)val = g_lite_r[15]; return 0;
        case UC_ARM_REG_CPSR:   *(uint32_t*)val = g_lite_cpsr;  return 0;
        case UC_ARM_REG_FPEXC:  *(uint32_t*)val = g_lite_fpexc; return 0;
        case UC_ARM_REG_FPSCR:  *(uint32_t*)val = g_lite_fpscr; return 0;
        case UC_ARM_REG_C1_C0_2:*(uint32_t*)val = g_lite_cpacr; return 0;
        default: break;
    }
    if (reg >= UC_ARM_REG_S0 && reg < UC_ARM_REG_S0 + 32) {
        memcpy(val, &g_lite_s[reg - UC_ARM_REG_S0], 4); return 0;
    }
    if (reg >= UC_ARM_REG_D0 && reg < UC_ARM_REG_D0 + 32) {
        int i = (reg - UC_ARM_REG_D0) * 2;
        if (i + 1 < 32) { memcpy(val, &g_lite_s[i], 8); return 0; }
    }
    return -1;
}

static int lite_reg_write(uc_engine* uc, int reg, const void* val) {
    (void)uc;
    if (!val) return -1;
    if (reg >= UC_ARM_REG_R0 && reg <= UC_ARM_REG_R12) {
        g_lite_r[reg - UC_ARM_REG_R0] = *(const uint32_t*)val; return 0;
    }
    switch (reg) {
        case UC_ARM_REG_SP:     g_lite_r[13] = *(const uint32_t*)val; return 0;
        case UC_ARM_REG_LR:     g_lite_r[14] = *(const uint32_t*)val; return 0;
        case UC_ARM_REG_PC:     g_lite_r[15] = *(const uint32_t*)val; return 0;
        case UC_ARM_REG_CPSR:   g_lite_cpsr  = *(const uint32_t*)val; return 0;
        case UC_ARM_REG_FPEXC:  g_lite_fpexc = *(const uint32_t*)val; return 0;
        case UC_ARM_REG_FPSCR:  g_lite_fpscr = *(const uint32_t*)val; return 0;
        case UC_ARM_REG_C1_C0_2:g_lite_cpacr = *(const uint32_t*)val; return 0;
        default: break;
    }
    if (reg >= UC_ARM_REG_S0 && reg < UC_ARM_REG_S0 + 32) {
        memcpy(&g_lite_s[reg - UC_ARM_REG_S0], val, 4); return 0;
    }
    if (reg >= UC_ARM_REG_D0 && reg < UC_ARM_REG_D0 + 32) {
        int i = (reg - UC_ARM_REG_D0) * 2;
        if (i + 1 < 32) { memcpy(&g_lite_s[i], val, 8); return 0; }
    }
    return -1;
}

static int lite_reg_read_batch(uc_engine* uc, int* regs, void** vals, int n) {
    for (int i = 0; i < n; i++)
        if (lite_reg_read(uc, regs[i], vals[i]) != 0) return -1;
    return 0;
}

static int lite_reg_write_batch(uc_engine* uc, int* regs, void** vals, int n) {
    for (int i = 0; i < n; i++)
        if (lite_reg_write(uc, regs[i], vals[i]) != 0) return -1;
    return 0;
}

static int lite_open(int arch, int mode, uc_engine** out) {
    (void)arch; (void)mode;
    *out = (uc_engine*)&g_uc_lite_eng;
    return 0;
}
static int lite_close(uc_engine* uc) { (void)uc; return 0; }
static void lite_log_untranslated(uint32_t addr, uint32_t lr, uint32_t sp) {
    static uint32_t seen[1024];
    static int nseen = 0;
    for (int i = 0; i < nseen; i++) if (seen[i] == addr) return;
    if (nseen < 1024) seen[nseen++] = addr;
    char path[MAX_PATH];
    DWORD len = GetModuleFileNameA(NULL, path, MAX_PATH);
    if (len && len < MAX_PATH) {
        char* slash = strrchr(path, '\\');
        if (slash) slash[1] = 0;
        strncat(path, "untranslated.txt", MAX_PATH - strlen(path) - 1);
        FILE* f = fopen(path, "a");
        if (f) {
            fprintf(f, "addr=%#x off=%#x lr=%#x sp=%#x\n",
                    addr, addr - 0x10000000u, lr, sp);
            fclose(f);
        }
    }
    printf("[uc-lite] FATAL: untranslated code reached (%#x off %#x lr %#x)\n",
           addr, addr - 0x10000000u, lr);
    fflush(stdout);
}

static int lite_emu_start(uc_engine* uc, uint64_t begin, uint64_t until,
                          uint64_t timeout, size_t count) {
    (void)uc; (void)until; (void)timeout; (void)count;
    lite_log_untranslated((uint32_t)begin, g_lite_r[14], g_lite_r[13]);
    return 1;
}
static int lite_emu_stop(uc_engine* uc) { (void)uc; return 0; }
static int lite_hook_add(uc_engine* uc, uc_hook* h, int type, void* cb,
                         void* user, ...) {
    (void)uc; (void)cb; (void)user;
    if (h) *h = 0;
    (void)type;
    return 0;
}
static int lite_ctl(uc_engine* uc, uint64_t code, ...) {
    (void)uc; (void)code;
    return 0;
}

static void uc_lite_install(void) {
    p_uc_open            = lite_open;
    p_uc_close           = lite_close;
    p_uc_mem_map         = lite_mem_map;
    p_uc_mem_map_ptr     = lite_mem_map_ptr;
    p_uc_mem_write_real  = lite_mem_write;
    p_uc_mem_read        = lite_mem_read;
    p_uc_reg_write       = lite_reg_write;
    p_uc_reg_read        = lite_reg_read;
    p_uc_reg_read_batch  = lite_reg_read_batch;
    p_uc_reg_write_batch = lite_reg_write_batch;
    p_uc_emu_start       = lite_emu_start;
    p_uc_emu_stop        = lite_emu_stop;
    p_uc_hook_add        = lite_hook_add;
    p_uc_ctl             = lite_ctl;
    g_uc                 = (uc_engine*)&g_uc_lite_eng;
}
