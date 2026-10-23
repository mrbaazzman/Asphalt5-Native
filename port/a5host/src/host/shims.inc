// ---------------------------------------------------------------- printf
// bionic lrand48 state (48-bit LCG).  Host-side, but part of the emulated
// state: auto_verify_run snapshots/restores it around the interpreter re-run
// so the differential compares identical random sequences.
static uint64_t g_drand48 = 0x1234ABCD330Eull;
// __aeabi_idivmod / uidivmod / 64-bit helpers return a second value in r1.
// shim_call writes it into Unicorn's R1; auto_call_plt copies it out here so
// the generated code can update its r1 local (otherwise `bl __aeabi_idivmod`
// followed by a use of r1 read a stale value in the native path only).
static int g_shim_r1_set = 0;
static uint32_t g_shim_r1_val = 0;
static const char* slot_str(uint32_t v, char* tmp, size_t tmpsz) {
    (void)tmp; (void)tmpsz;
    static char bufs[4][512]; static int bi = 0;
    bi = (bi + 1) & 3;
    rstr(v, bufs[bi], sizeof(bufs[bi]));
    return bufs[bi];
}

// format using softfp slots (regs then stack), consumed = fixed register args
static void fmt_args(char* out, size_t outsz, const char* fmt,
                     const uint32_t* regs, uint32_t sp, int consumed) {
    uint32_t slots[24];
    for (int i = 0; i < 4; i++) slots[i] = regs[i];
    for (int i = 4; i < 24; i++) slots[i] = rd32(sp + (uint32_t)(i - 4) * 4);
    int ai = consumed;
    size_t o = 0;
    out[0] = 0;
    for (const char* p = fmt; *p && o + 64 < outsz; ) {
        if (*p != '%') { out[o++] = *p++; continue; }
        const char* start = p++;
        while (*p && strchr("-+ #0123456789.lh", *p)) p++;
        if (!*p) break;
        char conv = *p++;
        char spec[32];
        size_t sl = (size_t)(p - start);
        if (sl >= sizeof(spec)) sl = sizeof(spec) - 1;
        memcpy(spec, start, sl); spec[sl] = 0;
        char tmp[512];
        if (conv == 'd' || conv == 'i') {
            int v = (int)slots[ai++];
            char s2[32]; snprintf(s2, sizeof(s2), "%%%s", spec + 1);
            snprintf(tmp, sizeof(tmp), s2, v);
            o += (size_t)snprintf(out + o, outsz - o, "%s", tmp);
        } else if (conv == 'u' || conv == 'x' || conv == 'X' || conv == 'o') {
            unsigned v = slots[ai++];
            char s2[32]; snprintf(s2, sizeof(s2), "%%%s", spec + 1);
            snprintf(tmp, sizeof(tmp), s2, v);
            o += (size_t)snprintf(out + o, outsz - o, "%s", tmp);
        } else if (conv == 'p') {
            unsigned v = slots[ai++];
            o += (size_t)snprintf(out + o, outsz - o, "%08x", v);
        } else if (conv == 's') {
            const char* s = slot_str(slots[ai++], tmp, sizeof(tmp));
            o += (size_t)snprintf(out + o, outsz - o, "%s", s);
        } else if (conv == 'c') {
            char c = (char)slots[ai++];
            if (o + 1 < outsz) out[o++] = c;
        } else if (conv == 'f' || conv == 'g' || conv == 'e') {
            uint32_t lo = slots[ai], hi = slots[ai + 1];
            ai += 2;
            double d;
            uint64_t bits = ((uint64_t)hi << 32) | lo;
            memcpy(&d, &bits, 8);
            char s2[32]; snprintf(s2, sizeof(s2), "%%%s", spec + 1);
            snprintf(tmp, sizeof(tmp), s2, d);
            o += (size_t)snprintf(out + o, outsz - o, "%s", tmp);
        } else if (conv == '%') {
            if (o + 1 < outsz) out[o++] = '%';
        }
    }
    out[o] = 0;
}

// ---------------------------------------------------------------- shim call
static uint32_t shim_call(int id, const char* name, uint32_t r0, uint32_t r1, uint32_t r2, uint32_t r3, uint32_t sp) {
    if (id == SH_GL) {
        // GL called from translated code: route it through the same bridge as
        // the interpreter's PLT interception.  This case was missing, so every
        // GL call made by a native function silently returned 0 - no texture
        // binds, no draw setup (the "track textures invisible" regression).
        uint32_t raw[9];
        raw[0] = r0; raw[1] = r1; raw[2] = r2; raw[3] = r3;
        p_uc_mem_read(g_uc, sp, &raw[4], 20);
        return a5gl_call(name, raw, 0);
    }
    switch (id) {
    case SH_EXIT:
        // The engine's Exit menu item calls exit(); the real Android build
        // finishes the activity.  Close the host window so the game ends.
        printf("[host] exit requested by the engine\n");
        fflush(stdout);
        a5gl_request_close();
        return 0;
    case SH_LOG: {
        char tag[128], fmt[512], msg[2048];
        rstr(r1, tag, sizeof(tag)); rstr(r2, fmt, sizeof(fmt));
        uint32_t regs[4] = {r0, r1, r2, r3};
        fmt_args(msg, sizeof(msg), fmt, regs, sp, 3);
        printf("[%s] %s\n", tag, msg);
        return 0;
    }
    case SH_MALLOC: case SH_NEWARR: return heap_alloc(r0);
    case SH_CALLOC: {
        uint32_t n = r0 * r1;
        uint32_t p = heap_alloc(n);
        if (p) { uint8_t* z = (uint8_t*)calloc(1, n ? n : 1); p_uc_mem_write(g_uc, p, z, n); free(z); }
        return p;
    }
    case SH_REALLOC: return heap_realloc(r0, r1);
    case SH_FREE: heap_free(r0); return 0;
    case SH_MEMCPY: case SH_MEMMOVE: {
        if (r2) {
            // direct host path first: p_uc_mem_write would invalidate the TBs
            // covering the range (constant memcpy traffic re-translated the
            // hot code every frame)
            uint8_t* d = mem_host(r0);
            uint8_t* s = mem_host(r1);
            if (d && s) {
                memmove(d, s, r2);
            } else {
                uint8_t* tmp = (uint8_t*)malloc(r2);
                p_uc_mem_read(g_uc, r1, tmp, r2);
                p_uc_mem_write(g_uc, r0, tmp, r2);
                free(tmp);
            }
        }
        return r0;
    }
    case SH_MEMSET: {
        if (r2) {
            static int memtrace = -1;
            if (memtrace < 0) memtrace = getenv("A5_MEMSET_TRACE") ? 1 : 0;
            if (memtrace && r2 > 8192) printf("[memset] %#x x%u\n", r0, r2);
            uint8_t* d = mem_host(r0);
            if (d) {
                memset(d, (int)(r1 & 0xff), r2);
            } else {
                uint8_t* tmp = (uint8_t*)malloc(r2);
                memset(tmp, (int)(r1 & 0xff), r2);
                p_uc_mem_write(g_uc, r0, tmp, r2);
                free(tmp);
            }
        }
        return r0;
    }
    case SH_MEMCMP: {
        if (!r2) return 0;
        // direct host path: the old path malloc'd two buffers and copied both
        // sides through the emulator API for every comparison (the second-race
        // colour pass does ~380k of these per texture).
        const uint8_t* a = (const uint8_t*)mem_host(r0);
        const uint8_t* b = (const uint8_t*)mem_host(r1);
        if (a && b) return (uint32_t)memcmp(a, b, r2);
        uint8_t* ta = (uint8_t*)malloc(r2);
        uint8_t* tb = (uint8_t*)malloc(r2);
        p_uc_mem_read(g_uc, r0, ta, r2); p_uc_mem_read(g_uc, r1, tb, r2);
        int rc = memcmp(ta, tb, r2);
        free(ta); free(tb);
        return (uint32_t)rc;
    }
    case SH_MEMCHR: {
        uint8_t* a = (uint8_t*)malloc(r2 ? r2 : 1);
        p_uc_mem_read(g_uc, r0, a, r2);
        uint8_t* f = (uint8_t*)memchr(a, (int)(r1 & 0xff), r2);
        uint32_t rc = f ? r0 + (uint32_t)(f - a) : 0;
        free(a);
        return rc;
    }
    case SH_STRLEN: { char b[1 << 16]; rstr(r0, b, sizeof(b)); return (uint32_t)strlen(b); }
    case SH_STRCMP: case SH_STRCASECMP: {
        char a[8192], b[8192]; rstr(r0, a, sizeof(a)); rstr(r1, b, sizeof(b));
        int rc = (id == SH_STRCMP) ? strcmp(a, b) : _stricmp(a, b);
        return (uint32_t)rc;
    }
    case SH_STRNCMP: {
        char a[8192], b[8192]; rstr(r0, a, sizeof(a)); rstr(r1, b, sizeof(b));
        return (uint32_t)strncmp(a, b, r2);
    }
    case SH_STRCPY: { char b[65536]; rstr(r1, b, sizeof(b)); p_uc_mem_write(g_uc, r0, b, strlen(b) + 1); return r0; }
    case SH_STRNCPY: {
        char b[65536]; rstr(r1, b, sizeof(b));
        size_t n = strlen(b); if (n > r2) n = r2;
        p_uc_mem_write(g_uc, r0, b, n);
        if (n < r2) { uint8_t z = 0; p_uc_mem_write(g_uc, r0 + (uint32_t)n, &z, 1); }
        return r0;
    }
    case SH_STRLCPY: {
        char b[65536]; rstr(r1, b, sizeof(b));
        size_t n = strlen(b); if (r2 && n >= r2) n = r2 - 1;
        p_uc_mem_write(g_uc, r0, b, n);
        uint8_t z = 0; p_uc_mem_write(g_uc, r0 + (uint32_t)n, &z, 1);
        return (uint32_t)strlen(b);
    }
    case SH_STRCAT: {
        char a[65536], b[65536]; rstr(r0, a, sizeof(a)); rstr(r1, b, sizeof(b));
        strncat(a, b, sizeof(a) - strlen(a) - 1);
        p_uc_mem_write(g_uc, r0, a, strlen(a) + 1);
        return r0;
    }
    case SH_STRCHR: case SH_STRRCHR: {
        char a[65536]; rstr(r0, a, sizeof(a));
        char* f = (id == SH_STRCHR) ? strchr(a, (int)(r1 & 0xff)) : strrchr(a, (int)(r1 & 0xff));
        return f ? r0 + (uint32_t)(f - a) : 0;
    }
    case SH_STRSTR: {
        char a[65536], b[4096]; rstr(r0, a, sizeof(a)); rstr(r1, b, sizeof(b));
        char* f = strstr(a, b);
        return f ? r0 + (uint32_t)(f - a) : 0;
    }
    case SH_STRTOL: { char b[4096]; rstr(r0, b, sizeof(b)); long v = strtol(b, NULL, 0); if (r1) uw32(r1, r0); return (uint32_t)v; }
    case SH_STRTOD: {
        char b[4096]; rstr(r0, b, sizeof(b));
        double v = atof(b);
        if (r1) uw32(r1, r0);
        uint64_t bits; memcpy(&bits, &v, 8);
        g_shim_r1_val = (uint32_t)(bits >> 32); g_shim_r1_set = 1;
        usetreg(UC_ARM_REG_R1, g_shim_r1_val);
        return (uint32_t)bits;
    }
    case SH_ATOI: { char b[64]; rstr(r0, b, sizeof(b)); return (uint32_t)atoi(b); }
    case SH_FOPEN: {
        char path[512], mode[16], hp[640];
        rstr(r0, path, sizeof(path)); rstr(r1, mode, sizeof(mode));
        host_path(path, hp, sizeof(hp));
        // The game saves its profile/settings with fopen("AASave%d", "wb") -
        // the old shim always opened "rb" so every save silently failed.
        // Write modes go to <exe>\saves\<name>; reads try that folder first
        // (so a saved profile loads again) and fall back to the data dir.
        const char* bn = path;
        for (const char* c = path; *c; c++) if (*c == '/' || *c == '\\') bn = c + 1;
        int writing = (strchr(mode, 'w') || strchr(mode, 'a') || strchr(mode, '+')) ? 1 : 0;
        FILE* f = NULL;
        if (writing && g_exe_dir[0]) {
            char sp[720];
            snprintf(sp, sizeof(sp), "%s\\saves\\%s", g_exe_dir, bn);
            char hm[8] = "wb";
            if (strchr(mode, 'a')) snprintf(hm, sizeof(hm), "ab");
            else if (strchr(mode, 'r') && strchr(mode, '+')) snprintf(hm, sizeof(hm), "r+b");
            f = fopen(sp, hm);
            printf("[io] fopen(%s, %s) [saves] -> %s\n", path, mode, f ? "ok" : "FAIL");
        } else {
            if (g_exe_dir[0]) {
                char sp[720];
                snprintf(sp, sizeof(sp), "%s\\saves\\%s", g_exe_dir, bn);
                f = fopen(sp, "rb");
            }
            if (!f) f = fopen(hp, "rb");
            printf("[io] fopen(%s, %s) -> %s\n", path, mode, f ? "ok" : "FAIL");
        }
        // Reuse closed slots: the engine opens dozens of files during a race
        // and the table used to fill permanently (every later fopen returned
        // NULL -> "error occurred with sd card" when starting a second race).
        int slot = -1;
        for (int i = 0; i < nfiles; i++)
            if (!files[i].f) { slot = i; break; }
        if (slot < 0 && nfiles < 64) slot = nfiles++;
        if (slot >= 0) {
            files[slot].addr = fakefile_next; fakefile_next += 0x100;
            files[slot].f = f;
            snprintf(files[slot].mode, sizeof(files[slot].mode), "%s", mode);
            return files[slot].addr;
        }
        printf("[io] fopen: file table full (%d handles)\n", nfiles);
        return 0;
    }
    case SH_FCLOSE: {
        for (int i = 0; i < nfiles; i++)
            if (files[i].addr == r0) { if (files[i].f) fclose(files[i].f); files[i].f = NULL; return 0; }
        return 0;
    }
    case SH_FREAD: {
        // fread(ptr, size, nmemb, FILE) - the FILE is the 4th argument (r3)!
        for (int i = 0; i < nfiles; i++)
            if (files[i].addr == r3) {
                if (!files[i].f) return 0;
                size_t total = (size_t)r1 * r2;
                uint8_t* tmp = (uint8_t*)malloc(total ? total : 1);
                size_t got = fread(tmp, 1, total, files[i].f);
                p_uc_mem_write(g_uc, r0, tmp, got);
                free(tmp);
                return r1 ? (uint32_t)(got / r1) : 0;
            }
        return 0;
    }
    case SH_FWRITE: {
        // fwrite(ptr, size, nmemb, FILE) - same: the FILE is r3
        for (int i = 0; i < nfiles; i++)
            if (files[i].addr == r3) {
                if (!files[i].f) return r2;
                size_t total = (size_t)r1 * r2;
                uint8_t* tmp = (uint8_t*)malloc(total ? total : 1);
                p_uc_mem_read(g_uc, r0, tmp, total);
                fwrite(tmp, 1, total, files[i].f);
                free(tmp);
                return r2;
            }
        return r2;
    }
    case SH_FSEEK: {
        for (int i = 0; i < nfiles; i++)
            if (files[i].addr == r0) {
                if (files[i].f) fseek(files[i].f, (long)(int)r1, (int)r2);
                return 0;
            }
        return 0;
    }
    case SH_FTELL: {
        for (int i = 0; i < nfiles; i++)
            if (files[i].addr == r0) return files[i].f ? (uint32_t)ftell(files[i].f) : 0;
        return 0;
    }
    case SH_FFLUSH: return 0;
    case SH_FPUTC: return r0;
    case SH_FILENO: return 1;
    case SH_PRINTF: case SH_SPRINTF: case SH_SNPRINTF: case SH_FPRINTF:
    case SH_VSPRINTF: case SH_VFPRINTF: case SH_SWPRINTF: {
        char fmt[1024], msg[4096];
        uint32_t regs[4] = {r0, r1, r2, r3};
        int consumed = 0;
        if (id == SH_PRINTF) { rstr(r0, fmt, sizeof(fmt)); consumed = 1; }
        else if (id == SH_SPRINTF) { rstr(r1, fmt, sizeof(fmt)); consumed = 2; }
        else if (id == SH_SNPRINTF) { rstr(r2, fmt, sizeof(fmt)); consumed = 3; }
        else if (id == SH_FPRINTF) { rstr(r1, fmt, sizeof(fmt)); consumed = 2; }
        else { rstr(r1, fmt, sizeof(fmt)); consumed = 2; }
        fmt_args(msg, sizeof(msg), fmt, regs, sp, consumed);
        if (id == SH_PRINTF || id == SH_FPRINTF || id == SH_VFPRINTF) printf("%s\n", msg);
        else if (id == SH_SPRINTF || id == SH_VSPRINTF) { p_uc_mem_write(g_uc, r0, msg, strlen(msg) + 1); return (uint32_t)strlen(msg); }
        else if (id == SH_SNPRINTF) {
            size_t n = strlen(msg); if (r1 && n >= r1) n = r1 - 1;
            p_uc_mem_write(g_uc, r0, msg, n);
            uint8_t z = 0; p_uc_mem_write(g_uc, r0 + (uint32_t)n, &z, 1);
            return (uint32_t)strlen(msg);
        }
        return (uint32_t)strlen(msg);
    }
    case SH_FSCANF: return 0xFFFFFFFF;
    case SH_PUTS: { char b[4096]; rstr(r0, b, sizeof(b)); printf("%s\n", b); return 0; }
    case SH_TIME: {
        uint32_t t = vt_enabled ? (uint32_t)(vt_ms / 1000) : (uint32_t)time(NULL);
        if (r0) uw32(r0, t);
        return t;
    }
    case SH_GETTIMEOFDAY: {
        // NOTE: must be real milliseconds - time(NULL)*1000 has 1-second
        // resolution and the engine's frame delta becomes 0, which stops all
        // streaming (the race track never loads!).
        uint64_t ms = vt_enabled ? vt_ms : (uint64_t)GetTickCount64();
        uw32(r0, (uint32_t)(ms / 1000));
        uw32(r0 + 4, (uint32_t)((ms % 1000) * 1000));
        return 0;
    }
    case SH_CLOCK: {
        // bionic CLOCKS_PER_SEC is 1000000 (microseconds)
        uint64_t ms = vt_enabled ? vt_ms : (uint64_t)GetTickCount64();
        return (uint32_t)(ms * 1000) & 0x7FFFFFFF;
    }
    case SH_LRAND48: {
        // bionic lrand48: X(n+1) = (0x5DEECE66D * X(n) + 0xB) mod 2^48,
        // return bits 47..17 (the POSIX 48-bit LCG).
        g_drand48 = (g_drand48 * 0x5DEECE66Dull + 0xBull) & 0xFFFFFFFFFFFFull;
        return (uint32_t)(g_drand48 >> 17);
    }
    case SH_SRAND48:
        g_drand48 = (((uint64_t)(uint32_t)r0) << 16) | 0x330Eull;
        return 0;
    case SH_PTHREAD_CREATE: { uw32(r0, 0x12340000); return 0; }
    case SH_PTHREAD_JOIN: return 0;
    case SH_PTHREAD_MUTEX: return 0;
    case SH_SOCKET: return 0xFFFFFFFF;
    case SH_SIGACTION: return 0;
    case SH_GUARD_ACQUIRE: return 1;
    case SH_GUARD_RELEASE: { uint8_t one = 1; p_uc_mem_write(g_uc, r0, &one, 1); return 0; }
    case SH_AEABI_ATEXIT: return 0;
    case SH_PURE_VIRTUAL: printf("!! __cxa_pure_virtual\n"); return 0;
    case SH_STACK_CHK_FAIL: printf("!! __stack_chk_fail\n"); p_uc_emu_stop(g_uc); return 0;
    case SH_UNWIND: return 0;
    case SH_AEABI_IDIV: {
        int32_t a = (int32_t)r0, b = (int32_t)r1;
        return (uint32_t)(b ? a / b : 0);
    }
    case SH_AEABI_UIDIV: return r1 ? r0 / r1 : 0;
    case SH_AEABI_IDIVMOD: {
        int32_t a = (int32_t)r0, b = (int32_t)r1;
        g_shim_r1_val = (uint32_t)(b ? a % b : 0);
        g_shim_r1_set = 1;
        usetreg(UC_ARM_REG_R1, g_shim_r1_val);
        return (uint32_t)(b ? a / b : 0);
    }
    case SH_AEABI_UIDIVMOD: {
        g_shim_r1_val = r1 ? r0 % r1 : 0;
        g_shim_r1_set = 1;
        usetreg(UC_ARM_REG_R1, g_shim_r1_val);
        return r1 ? r0 / r1 : 0;
    }
    case SH_SINF: { float x; memcpy(&x, &r0, 4); float y = sinf(x); memcpy(&r0, &y, 4); return r0; }
    case SH_COSF: { float x; memcpy(&x, &r0, 4); float y = cosf(x); memcpy(&r0, &y, 4); return r0; }
    case SH_TANF: { float x; memcpy(&x, &r0, 4); float y = tanf(x); memcpy(&r0, &y, 4); return r0; }
    case SH_ATANF: { float x; memcpy(&x, &r0, 4); float y = atanf(x); memcpy(&r0, &y, 4); return r0; }
    case SH_ATAN2F: { float x, y; memcpy(&x, &r0, 4); memcpy(&y, &r1, 4); float z = atan2f(x, y); memcpy(&r0, &z, 4); return r0; }
    case SH_ASINF: { float x; memcpy(&x, &r0, 4); float y = asinf(x); memcpy(&r0, &y, 4); return r0; }
    case SH_ACOSF: { float x; memcpy(&x, &r0, 4); float y = acosf(x); memcpy(&r0, &y, 4); return r0; }
    case SH_SQRTF: { float x; memcpy(&x, &r0, 4); float y = sqrtf(x); memcpy(&r0, &y, 4); return r0; }
    case SH_EXPF: { float x; memcpy(&x, &r0, 4); float y = expf(x); memcpy(&r0, &y, 4); return r0; }
    case SH_LOGF: { float x; memcpy(&x, &r0, 4); float y = logf(x); memcpy(&r0, &y, 4); return r0; }
    case SH_FLOOR: { float x; memcpy(&x, &r0, 4); float y = floorf(x); memcpy(&r0, &y, 4); return r0; }
    case SH_CEIL: { float x; memcpy(&x, &r0, 4); float y = ceilf(x); memcpy(&r0, &y, 4); return r0; }
    case SH_LRINTF: { float x; memcpy(&x, &r0, 4); return (uint32_t)(int)lrintf(x); }
    case SH_POW_D: {
        double x, y, z;
        uint64_t bx = ((uint64_t)r1 << 32) | r0, by = ((uint64_t)r3 << 32) | r2;
        memcpy(&x, &bx, 8); memcpy(&y, &by, 8);
        z = pow(x, y);
        uint64_t bz; memcpy(&bz, &z, 8);
        g_shim_r1_val = (uint32_t)(bz >> 32); g_shim_r1_set = 1;
        usetreg(UC_ARM_REG_R1, g_shim_r1_val);
        return (uint32_t)bz;
    }
    case SH_SIN: case SH_COS: case SH_TAN: case SH_ATAN: case SH_ATAN2: case SH_ASIN:
    case SH_ACOS: case SH_SQRT: case SH_EXP: case SH_LOG_D: {
        double x, y, z = 0;
        uint64_t bx = ((uint64_t)r1 << 32) | r0, by = ((uint64_t)r3 << 32) | r2;
        memcpy(&x, &bx, 8); memcpy(&y, &by, 8);
        switch (id) {
        case SH_SIN: z = sin(x); break; case SH_COS: z = cos(x); break;
        case SH_TAN: z = tan(x); break; case SH_ATAN: z = atan(x); break;
        case SH_ATAN2: z = atan2(x, y); break; case SH_ASIN: z = asin(x); break;
        case SH_ACOS: z = acos(x); break; case SH_SQRT: z = sqrt(x); break;
        case SH_EXP: z = exp(x); break; case SH_LOG_D: z = log(x); break;
        }
        uint64_t bz; memcpy(&bz, &z, 8);
        g_shim_r1_val = (uint32_t)(bz >> 32); g_shim_r1_set = 1;
        usetreg(UC_ARM_REG_R1, g_shim_r1_val);
        return (uint32_t)bz;
    }
    default:
        return 0;
    }
}
