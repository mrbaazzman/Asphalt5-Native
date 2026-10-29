#define _CRT_SECURE_NO_WARNINGS
#include "guest.h"
#include "imports_gen.h"

#include <windows.h>
#include <ctype.h>
#include <errno.h>
#include <math.h>
#include <stdarg.h>
#include <stdlib.h>
#include <time.h>
#include <winsock2.h>

/*
 * Android/libc/libm/GLES/JNI import surface for the static recompilation.
 * Guest pointers are 32-bit offsets into g_mem.  This file only implements
 * platform services; all game logic is executed by generated ARM->C code.
 */

static uint32_t g_data_errno;
static uint32_t g_data_ctype;
static uint32_t g_data_sf;
static uint32_t g_data_guard;
static uint32_t g_data_dso;

static void init_data_imports(void)
{
    g_data_errno = 0x70000200u;
    g_data_ctype = 0x70000300u;
    g_data_sf    = 0x70000400u;
    g_data_guard = 0x70000500u;
    g_data_dso   = 0x70000504u;
    wr32(g_data_errno, 0);
    wr32(g_data_guard, (uint32_t)GetTickCount() ^ 0xA5C39E17u);
    wr32(g_data_dso, 0);
    memset(G(g_data_ctype), 0, 257);
    for (int c = 0; c < 256; c++) {
        uint8_t v = 0;
        if (c == ' ' || (c >= 9 && c <= 13)) v |= 0x40;       /* space */
        if (c >= '0' && c <= '9') v |= 0x04;                  /* digit */
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) v |= 0x03;
        G(g_data_ctype)[c + 1] = v;
    }
    memset(G(g_data_sf), 0, 0x100);
}

uint32_t guest_import_addr(const char *name)
{
    if (!strcmp(name, "_ctype_")) return g_data_ctype;
    if (!strcmp(name, "__sF")) return g_data_sf;
    if (!strcmp(name, "__stack_chk_guard")) return g_data_guard;
    if (!strcmp(name, "__dso_handle")) return g_data_dso;
    for (size_t i = 0; i < g_import_def_count; i++)
        if (!strcmp(name, g_import_defs[i].name))
            return 0x71000000u + (uint32_t)(i * 16u);
    return 0;
}

static void plt_entry(CPU *cpu)
{
    uint32_t pc = cpu->pc;
    for (size_t i = 0; i < g_plt_import_count; i++)
        if (g_plt_imports[i].addr == pc) {
            if (g_verbose) fprintf(stderr, "[plt] %08x %s\n", pc, g_plt_imports[i].name);
            import_dispatch(cpu, g_plt_imports[i].name); return;
        }
    fprintf(stderr, "[plt] no import for %08x\n", pc);
    cpu->r[0] = 0;
}

void guest_register_plt_imports(void)
{
    for (size_t i = 0; i < g_plt_import_count; i++)
        guest_register_entry(g_plt_imports[i].addr, plt_entry, g_plt_imports[i].name);
}

void guest_register_imports(void)
{
    init_data_imports();
    for (size_t i = 0; i < g_import_def_count; i++)
        guest_register_entry(0x71000000u + (uint32_t)(i * 16u),
                             g_import_defs[i].fn, g_import_defs[i].name);
}

/* ---- guest varargs --------------------------------------------------- */

typedef struct {
    CPU *cpu;
    int reg;
    uint32_t sp;
    int fp;
} GuestVa;

static uint32_t va32(GuestVa *v)
{
    if (v->reg < 4) return v->cpu->r[v->reg++];
    uint32_t x = rd32(v->sp);
    v->sp += 4;
    return x;
}

static double va_double(GuestVa *v)
{
    /* softfp varargs: doubles are passed as two core words */
    uint32_t lo = va32(v);
    uint32_t hi = va32(v);
    return f64_from_bits(lo, hi);
}

static char *guest_cstr(uint32_t p)
{
    return p ? (char *)G(p) : (char *)"(null)";
}

static int guest_format(char *out, size_t cap, const char *fmt, GuestVa *va)
{
    size_t o = 0;
    for (const char *p = fmt; *p && o + 1 < cap; ) {
        if (*p != '%') { out[o++] = *p++; continue; }
        p++;
        if (*p == '%') { out[o++] = '%'; p++; continue; }
        char spec[64]; size_t si = 0;
        spec[si++] = '%';
        while (*p && strchr("-+ #0", *p) && si < 20) spec[si++] = *p++;
        while (*p >= '0' && *p <= '9' && si < 30) spec[si++] = *p++;
        if (*p == '.') { spec[si++] = *p++; while (*p >= '0' && *p <= '9' && si < 40) spec[si++] = *p++; }
        int ll = 0;
        while (*p == 'l' || *p == 'h' || *p == 'z') {
            if (*p == 'l') { if (p[1] == 'l') { ll = 1; p++; } }
            p++;
        }
        char conv = *p ? *p++ : '?';
        char tmp[512];
        int n = 0;
        switch (conv) {
        case 'd': case 'i': {
            long long x = ll ? (long long)(((uint64_t)va32(va)) | ((uint64_t)va32(va) << 32)) : (long long)(int32_t)va32(va);
            spec[si] = 'l'; spec[si + 1] = 'l'; spec[si + 2] = 'd'; spec[si + 3] = 0;
            n = snprintf(tmp, sizeof(tmp), spec, x);
            break;
        }
        case 'u': case 'x': case 'X': case 'o': {
            unsigned long long x = ll ? (((uint64_t)va32(va)) | ((uint64_t)va32(va) << 32)) : (unsigned)va32(va);
            spec[si] = 'l'; spec[si + 1] = 'l'; spec[si + 2] = conv; spec[si + 3] = 0;
            n = snprintf(tmp, sizeof(tmp), spec, x);
            break;
        }
        case 'c': {
            spec[si] = 'c'; spec[si + 1] = 0;
            n = snprintf(tmp, sizeof(tmp), spec, (int)va32(va));
            break;
        }
        case 's': {
            const char *s = guest_cstr(va32(va));
            spec[si] = 's'; spec[si + 1] = 0;
            n = snprintf(tmp, sizeof(tmp), spec, s);
            break;
        }
        case 'p': {
            spec[si] = 'p'; spec[si + 1] = 0;
            n = snprintf(tmp, sizeof(tmp), spec, (void *)(uintptr_t)va32(va));
            break;
        }
        case 'f': case 'F': case 'g': case 'G': case 'e': case 'E': {
            double d = va_double(va);
            spec[si] = conv; spec[si + 1] = 0;
            n = snprintf(tmp, sizeof(tmp), spec, d);
            break;
        }
        default:
            spec[si] = conv; spec[si + 1] = 0;
            n = snprintf(tmp, sizeof(tmp), spec);
            break;
        }
        if (n < 0) break;
        if ((size_t)n >= sizeof(tmp)) n = (int)sizeof(tmp) - 1;
        for (int i = 0; i < n && o + 1 < cap; i++) out[o++] = tmp[i];
    }
    out[o] = 0;
    return (int)o;
}

/* ---- file shim ------------------------------------------------------- */

#define MAX_FILES 64
static FILE *g_files[MAX_FILES];
static char g_fopen_path[2048];

static int path_exists(const char *p)
{
    DWORD a = GetFileAttributesA(p);
    return a != INVALID_FILE_ATTRIBUTES && !(a & FILE_ATTRIBUTE_DIRECTORY);
}

static const char *host_engine_root(void)
{
    static char root[1024];
    static int init;
    if (!init) {
        const char *la = getenv("LOCALAPPDATA");
        if (la && *la) snprintf(root, sizeof(root), "%s\\Asphalt5\\engine", la);
        init = 1;
    }
    return root[0] ? root : NULL;
}

static const char *game_data_root(void)
{
    static const char *root;
    static int init;
    if (!init) {
        const char *e = getenv("A5_DATA_DIR");
        if (e && *e) root = e;
        init = 1;
    }
    return root;
}

static const char *map_path(const char *in, char *out, size_t cap)
{
    static const char kGameDir337[] = "/sdcard/gameloft/games/asphalt5/";
    static const char kGameRoot337[] = "/sdcard/gameloft/games/asphalt5";
    static const char kDataDir337[] =
        "/data/data/com.gameloft.android.ANMP.GloftAsphalt5.asphalt5/";
    static const char kDataRoot337[] =
        "/data/data/com.gameloft.android.ANMP.GloftAsphalt5.asphalt5";
    static const char kGameDir[] = "/sdcard/gameloft/games/GloftA5HD/";
    static const char kGameRoot[] = "/sdcard/gameloft/games/";
    const char *p = in;

    if (!strncmp(p, kGameDir337, sizeof(kGameDir337) - 1))
        p += sizeof(kGameDir337) - 1;
    else if (!strncmp(p, kGameRoot337, sizeof(kGameRoot337) - 1))
        p += sizeof(kGameRoot337) - 1;
    else if (!strncmp(p, kDataDir337, sizeof(kDataDir337) - 1))
        p += sizeof(kDataDir337) - 1;
    else if (!strncmp(p, kDataRoot337, sizeof(kDataRoot337) - 1))
        p += sizeof(kDataRoot337) - 1;
    else if (!strncmp(p, kGameDir, sizeof(kGameDir) - 1))
        p += sizeof(kGameDir) - 1;
    else if (!strncmp(p, kGameRoot, sizeof(kGameRoot) - 1))
        p += sizeof(kGameRoot) - 1;
    else
        p = NULL;

    if (p && *p == '/') p++;

    if (p) {
        const char *root = game_data_root();
        if (root) {
            snprintf(out, cap, "%s/%s", root, p);
            if (path_exists(out)) return out;
        }
        /* 3.4.1, then 3.3.7, then the preserved 3.2.4 layout. */
        snprintf(out, cap, "gamefiles/GloftA5HD341/%s", p);
        if (!path_exists(out)) snprintf(out, cap, "assets/GloftA5HD341/%s", p);
        if (!path_exists(out)) snprintf(out, cap, "GloftA5HD341/%s", p);
        if (!path_exists(out)) snprintf(out, cap, "gamefiles/GloftA5HD337/%s", p);
        if (!path_exists(out)) snprintf(out, cap, "assets/GloftA5HD337/%s", p);
        if (!path_exists(out)) snprintf(out, cap, "GloftA5HD337/%s", p);
        if (!path_exists(out)) snprintf(out, cap, "gamefiles/GloftA5HD/%s", p);
        if (!path_exists(out)) snprintf(out, cap, "assets/GloftA5HD/%s", p);
        if (!path_exists(out)) snprintf(out, cap, "GloftA5HD/%s", p);
        return out;
    }

    const char *er = host_engine_root();

    if (!strncmp(in, "./", 2) || !strncmp(in, ".//", 3)) {
        const char *q = in + (in[2] == '/' ? 3 : 2);
        const char *base = strrchr(q, '/'); base = base ? base + 1 : q;
        if (er) {
            snprintf(out, cap, "%s\\apk341\\res\\raw\\%s", er, base);
            if (path_exists(out)) return out;
            snprintf(out, cap, "%s\\apk341\\assets\\%s", er, q);
            if (path_exists(out)) return out;
            snprintf(out, cap, "%s\\apk\\res\\raw\\%s", er, base);
            if (path_exists(out)) return out;
            snprintf(out, cap, "%s\\apk\\assets\\%s", er, q);
            if (path_exists(out)) return out;
        }
        snprintf(out, cap, "engine/apk341/res/raw/%s", base);
        if (!path_exists(out)) snprintf(out, cap, "engine/apk341/assets/%s", q);
        if (!path_exists(out)) snprintf(out, cap, "gamefiles/apk341/res/raw/%s", base);
        if (!path_exists(out)) snprintf(out, cap, "gamefiles/apk341/assets/%s", q);
        if (!path_exists(out)) snprintf(out, cap, "engine/apk/res/raw/%s", base);
        if (!path_exists(out)) snprintf(out, cap, "engine/apk/assets/%s", q);
        if (!path_exists(out)) snprintf(out, cap, "gamefiles/apk/res/raw/%s", base);
        if (!path_exists(out)) snprintf(out, cap, "gamefiles/apk/assets/%s", q);
        if (!path_exists(out)) snprintf(out, cap, "original/apk/res/raw/%s", base);
        if (!path_exists(out)) snprintf(out, cap, "work/apk/res/raw/%s", base);
        if (!path_exists(out)) snprintf(out, cap, "original/apk/assets/%s", q);
        if (!path_exists(out)) snprintf(out, cap, "work/apk/assets/%s", q);
        if (!path_exists(out)) snprintf(out, cap, "assets/GloftA5HD/%s", q);
        if (!path_exists(out)) snprintf(out, cap, "GloftA5HD/%s", q);
    } else {
        const char *base = strrchr(in, '/'); base = base ? base + 1 : in;
        snprintf(out, cap, "%s", in);
        if (!path_exists(out)) {
            if (er) {
                snprintf(out, cap, "%s\\apk341\\res\\raw\\%s", er, base);
                if (path_exists(out)) return out;
                snprintf(out, cap, "%s\\apk341\\assets\\%s", er, in);
                if (path_exists(out)) return out;
                snprintf(out, cap, "%s\\apk\\res\\raw\\%s", er, base);
                if (path_exists(out)) return out;
                snprintf(out, cap, "%s\\apk\\assets\\%s", er, in);
                if (path_exists(out)) return out;
            }
            snprintf(out, cap, "gamefiles/GloftA5HD/%s", in);
            if (!path_exists(out)) snprintf(out, cap, "assets/GloftA5HD/%s", in);
            if (!path_exists(out)) snprintf(out, cap, "GloftA5HD/%s", in);
            if (!path_exists(out)) snprintf(out, cap, "engine/apk341/res/raw/%s", base);
            if (!path_exists(out)) snprintf(out, cap, "engine/apk341/assets/%s", in);
            if (!path_exists(out)) snprintf(out, cap, "gamefiles/apk341/res/raw/%s", base);
            if (!path_exists(out)) snprintf(out, cap, "gamefiles/apk341/assets/%s", in);
            if (!path_exists(out)) snprintf(out, cap, "engine/apk/res/raw/%s", base);
            if (!path_exists(out)) snprintf(out, cap, "engine/apk/assets/%s", in);
            if (!path_exists(out)) snprintf(out, cap, "gamefiles/apk/res/raw/%s", base);
            if (!path_exists(out)) snprintf(out, cap, "gamefiles/apk/assets/%s", in);
            if (!path_exists(out)) snprintf(out, cap, "original/apk/res/raw/%s", base);
            if (!path_exists(out)) snprintf(out, cap, "work/apk/res/raw/%s", base);
            if (!path_exists(out)) snprintf(out, cap, "original/apk/assets/%s", in);
            if (!path_exists(out)) snprintf(out, cap, "work/apk/assets/%s", in);
        }
    }
    return out;
}

static uint32_t file_handle(FILE *f)
{
    for (int i = 0; i < MAX_FILES; i++) if (!g_files[i]) { g_files[i] = f; return 0x70010000u + (uint32_t)i * 16u; }
    return 0;
}
static FILE *file_get(uint32_t h)
{
    if (h >= 0x70010000u && h < 0x70010000u + MAX_FILES * 16u)
        return g_files[(h - 0x70010000u) / 16u];
    if (h == g_data_sf) return stdout;
    if (h == g_data_sf + 0x80) return stderr;
    return NULL;
}

/* ---- guest qsort ----------------------------------------------------- */

static void guest_qsort(uint32_t base, uint32_t n, uint32_t size, uint32_t cmp)
{
    if (n < 2 || !size) return;
    uint8_t *tmp = (uint8_t *)malloc(size);
    for (uint32_t i = 1; i < n; i++) {
        uint32_t j = i;
        while (j > 0) {
            uint32_t a = base + (j - 1) * size, b = base + j * size;
            CPU c = {0}; c.r[0] = a; c.r[1] = b; c.r[14] = 0;
            guest_call(&c, cmp);
            if ((int32_t)c.r[0] <= 0) break;
            memcpy(tmp, G(b), size);
            memcpy(G(b), G(a), size);
            memcpy(G(a), tmp, size);
            j--;
        }
    }
    free(tmp);
}

/* ---- pthread (bring-up: real mutexes, synchronous-safe stubs) -------- */

typedef struct { CRITICAL_SECTION cs; int used; } GuestMutex;
#define MAX_MUTEX 64
static GuestMutex g_mutex[MAX_MUTEX];

static GuestMutex *mutex_get(uint32_t p)
{
    if (!p) return NULL;
    int idx = (int)((p >> 4) % MAX_MUTEX);
    if (!g_mutex[idx].used) { InitializeCriticalSection(&g_mutex[idx].cs); g_mutex[idx].used = 1; }
    return &g_mutex[idx];
}

/* ---- GLES bring-up stubs -------------------------------------------- */

static const char *gl_string(uint32_t name)
{
    switch (name) {
    case 0x1F00: return "Asphalt5Recomp";
    case 0x1F01: return "Iyokan static recompilation (Win32)";
    case 0x1F02: return "OpenGL ES-CM 1.1 (host shim)";
    case 0x1F03: return "";
    default: return "";
    }
}

static uint32_t gl_put_string(const char *s)
{
    uint32_t p = 0x70002000u;
    if (s) { strncpy((char *)G(p), s, 0x3FF); G(p)[0x3FF] = 0; }
    return p;
}

static uint32_t g_tex_id = 1;

/* ---- dispatch -------------------------------------------------------- */

void import_dispatch(CPU *cpu, const char *name)
{
    uint32_t a0 = cpu->r[0], a1 = cpu->r[1], a2 = cpu->r[2], a3 = cpu->r[3];
    (void)a3;
    if (!strcmp(name, "__errno")) { cpu->r[0] = g_data_errno; return; }
    if (!strcmp(name, "memcpy")) { memcpy(G(a0), G(a1), a2); cpu->r[0] = a0; return; }
    if (!strcmp(name, "memmove")) { memmove(G(a0), G(a1), a2); cpu->r[0] = a0; return; }
    if (!strcmp(name, "memset")) { memset(G(a0), (int)a1, a2); cpu->r[0] = a0; return; }
    if (!strcmp(name, "memcmp")) { cpu->r[0] = (uint32_t)memcmp(G(a0), G(a1), a2); return; }
    if (!strcmp(name, "memchr")) { void *p = memchr(G(a0), (int)a1, a2); cpu->r[0] = p ? (uint32_t)((uint8_t *)p - g_mem) : 0; return; }
    if (!strcmp(name, "strlen")) { cpu->r[0] = (uint32_t)strlen(guest_cstr(a0)); return; }
    if (!strcmp(name, "strcpy")) { strcpy(guest_cstr(a0), guest_cstr(a1)); cpu->r[0] = a0; return; }
    if (!strcmp(name, "strncpy")) { strncpy(guest_cstr(a0), guest_cstr(a1), a2); cpu->r[0] = a0; return; }
    if (!strcmp(name, "strcat")) { strcat(guest_cstr(a0), guest_cstr(a1)); cpu->r[0] = a0; return; }
    if (!strcmp(name, "strcmp")) { cpu->r[0] = (uint32_t)strcmp(guest_cstr(a0), guest_cstr(a1)); return; }
    if (!strcmp(name, "strncmp")) { cpu->r[0] = (uint32_t)strncmp(guest_cstr(a0), guest_cstr(a1), a2); return; }
    if (!strcmp(name, "strcasecmp")) { cpu->r[0] = (uint32_t)_stricmp(guest_cstr(a0), guest_cstr(a1)); return; }
    if (!strcmp(name, "strstr")) { char *p = strstr(guest_cstr(a0), guest_cstr(a1)); cpu->r[0] = p ? (uint32_t)(p - (char *)g_mem) : 0; return; }
    if (!strcmp(name, "strchr")) { char *p = strchr(guest_cstr(a0), (int)a1); cpu->r[0] = p ? (uint32_t)(p - (char *)g_mem) : 0; return; }
    if (!strcmp(name, "strrchr")) { char *p = strrchr(guest_cstr(a0), (int)a1); cpu->r[0] = p ? (uint32_t)(p - (char *)g_mem) : 0; return; }
    if (!strcmp(name, "strlcpy")) { size_t n = strlen(guest_cstr(a1)); if (a2) { size_t c = n < a2 - 1 ? n : a2 - 1; memcpy(G(a0), G(a1), c); G(a0)[c] = 0; } cpu->r[0] = (uint32_t)n; return; }
    if (!strcmp(name, "atoi")) { cpu->r[0] = (uint32_t)atoi(guest_cstr(a0)); return; }
    if (!strcmp(name, "strtol")) { cpu->r[0] = (uint32_t)strtol(guest_cstr(a0), NULL, (int)a1); return; }
    if (!strcmp(name, "strtod")) { cpu->r[0] = 0; return; }
    if (!strcmp(name, "malloc")) { cpu->r[0] = guest_alloc(a0); return; }
    if (!strcmp(name, "calloc")) { cpu->r[0] = guest_alloc_zero(a0); return; }
    if (!strcmp(name, "realloc")) { cpu->r[0] = guest_realloc(a0, a1); return; }
    if (!strcmp(name, "free")) { guest_free(a0); return; }
    if (!strcmp(name, "_Znaj")) { cpu->r[0] = guest_alloc(a0); return; }
    if (!strcmp(name, "qsort")) { guest_qsort(a0, a1, a2, a3); return; }
    if (!strcmp(name, "abort")) { fprintf(stderr, "[guest] abort()\n"); ExitProcess(4); }
    if (!strcmp(name, "exit")) { fprintf(stderr, "[guest] exit(%d)\n", (int)a0); ExitProcess((UINT)a0); }
    if (!strcmp(name, "puts")) { fprintf(stdout, "%s\n", guest_cstr(a0)); return; }
    if (!strcmp(name, "printf")) {
        char buf[4096]; GuestVa v = { cpu, 1, cpu->r[13], 0 };
        guest_format(buf, sizeof(buf), guest_cstr(a0), &v);
        fputs(buf, stdout); cpu->r[0] = (uint32_t)strlen(buf); return;
    }
    if (!strcmp(name, "fprintf")) {
        char buf[4096]; GuestVa v = { cpu, 2, cpu->r[13], 0 };
        guest_format(buf, sizeof(buf), guest_cstr(a1), &v);
        FILE *f = file_get(a0); if (!f) f = stderr;
        fputs(buf, f); cpu->r[0] = (uint32_t)strlen(buf); return;
    }
    if (!strcmp(name, "sprintf")) {
        char buf[8192]; GuestVa v = { cpu, 2, cpu->r[13], 0 };
        guest_format(buf, sizeof(buf), guest_cstr(a1), &v);
        strcpy(guest_cstr(a0), buf); cpu->r[0] = (uint32_t)strlen(buf); return;
    }
    if (!strcmp(name, "snprintf")) {
        char buf[8192]; GuestVa v = { cpu, 3, cpu->r[13], 0 };
        guest_format(buf, sizeof(buf), guest_cstr(a2), &v);
        if (a1) { strncpy(guest_cstr(a0), buf, a1 - 1); G(a0)[a1 - 1] = 0; }
        cpu->r[0] = (uint32_t)strlen(buf); return;
    }
    if (!strcmp(name, "vsprintf") || !strcmp(name, "vfprintf") || !strcmp(name, "swprintf")) {
        cpu->r[0] = 0; return;
    }
    if (!strcmp(name, "fputc")) { FILE *f = file_get(a1); if (!f) f = stdout; cpu->r[0] = (uint32_t)fputc((int)a0, f); return; }
    if (!strcmp(name, "fflush")) { FILE *f = file_get(a0); if (f) fflush(f); cpu->r[0] = 0; return; }
    if (!strcmp(name, "fopen")) {
        const char *in = guest_cstr(a0);
        const char *p = map_path(in, g_fopen_path, sizeof(g_fopen_path));
        FILE *f = fopen(p, guest_cstr(a1));
        if (getenv("A5_SND_DEBUG") && (strstr(in, "raw_") || strstr(in, ".ogg")))
            fprintf(stderr, "[fopen] %s -> %s (%s) = %p\n", in, p,
                    guest_cstr(a1), (void *)f);
        if (f && g_verbose) fprintf(stderr, "[file] %s -> %s\n", in, p);
        cpu->r[0] = f ? file_handle(f) : 0; return;
    }
    if (!strcmp(name, "fclose")) { FILE *f = file_get(a0); if (f && f != stdout && f != stderr) { fclose(f); for (int i=0;i<MAX_FILES;i++) if (g_files[i]==f) g_files[i]=NULL; } cpu->r[0]=0; return; }
    if (!strcmp(name, "fread")) { FILE *f = file_get(a3); cpu->r[0] = f ? (uint32_t)fread(G(a0), a1, a2, f) : 0; return; }
    if (!strcmp(name, "fwrite")) { FILE *f = file_get(a3); cpu->r[0] = f ? (uint32_t)fwrite(G(a0), a1, a2, f) : 0; return; }
    if (!strcmp(name, "fseek")) { FILE *f = file_get(a0); cpu->r[0] = f ? (uint32_t)fseek(f, (long)(int32_t)a1, (int)a2) : (uint32_t)-1; return; }
    if (!strcmp(name, "ftell")) { FILE *f = file_get(a0); cpu->r[0] = f ? (uint32_t)ftell(f) : (uint32_t)-1; return; }
    if (!strcmp(name, "fscanf")) { cpu->r[0] = 0; return; }
    if (!strcmp(name, "time")) { time_t t = time(NULL); if (a0) wr32(a0, (uint32_t)t); cpu->r[0] = (uint32_t)t; return; }
    if (!strcmp(name, "clock_gettime")) {
        if (a1) { LARGE_INTEGER f, c; QueryPerformanceFrequency(&f); QueryPerformanceCounter(&c);
            wr32(a1, (uint32_t)(c.QuadPart / f.QuadPart)); wr32(a1 + 4, (uint32_t)((c.QuadPart % f.QuadPart) * 1000000000ull / f.QuadPart)); }
        cpu->r[0] = 0; return;
    }
    if (!strcmp(name, "gettimeofday")) {
        if (a0) { FILETIME ft; GetSystemTimeAsFileTime(&ft); uint64_t t = ((uint64_t)ft.dwHighDateTime << 32) | ft.dwLowDateTime;
            t -= 116444736000000000ull;
            wr32(a0, (uint32_t)(t / 10000000ull));
            wr32(a0 + 4, (uint32_t)((t % 10000000ull) / 10ull)); }
        cpu->r[0] = 0; return;
    }
    if (!strcmp(name, "usleep")) { Sleep(a0 / 1000); cpu->r[0] = 0; return; }
    if (!strcmp(name, "srand48")) { srand(a0); return; }
    if (!strcmp(name, "lrand48")) { cpu->r[0] = ((uint32_t)rand() << 16) ^ (uint32_t)rand(); return; }
    if (!strcmp(name, "getcwd")) { if (a0) strcpy((char *)G(a0), "."); cpu->r[0] = a0; return; }
    if (!strcmp(name, "gethostname")) { if (a0) strncpy((char *)G(a0), "recomp-pc", a1); cpu->r[0] = 0; return; }
    if (!strcmp(name, "inet_addr")) { struct in_addr ia; ia.s_addr = inet_addr(guest_cstr(a0)); cpu->r[0] = ia.s_addr; return; }
    if (!strcmp(name, "inet_ntoa")) { static char b[32]; struct in_addr ia; ia.s_addr = a0; strcpy(b, inet_ntoa(ia)); cpu->r[0] = gl_put_string(b); return; }
    if (!strcmp(name, "inet_ntop")) { const char *s = guest_cstr(a1); if (a2) snprintf((char *)G(a2), a3, "%s", s); cpu->r[0] = a2; return; }
    if (!strcmp(name, "herror")) { return; }
    /* math (AAPCS softfp: args/returns in r0-r3 bit patterns) */
#define D0 f64_from_bits(cpu->r[0], cpu->r[1])
#define D1 f64_from_bits(cpu->r[2], cpu->r[3])
#define DSET(v) do { uint64_t b_ = f64_bits(v); cpu->r[0]=(uint32_t)b_; cpu->r[1]=(uint32_t)(b_>>32); } while (0)
#define F0 f32_from_bits(cpu->r[0])
#define F1 f32_from_bits(cpu->r[1])
#define FSET(v) do { cpu->r[0] = f32_bits(v); } while (0)
    if (!strcmp(name, "sin")) { DSET(sin(D0)); return; }
    if (!strcmp(name, "cos")) { DSET(cos(D0)); return; }
    if (!strcmp(name, "tan")) { DSET(tan(D0)); return; }
    if (!strcmp(name, "asin")) { DSET(asin(D0)); return; }
    if (!strcmp(name, "acos")) { DSET(acos(D0)); return; }
    if (!strcmp(name, "atan")) { DSET(atan(D0)); return; }
    if (!strcmp(name, "atan2")) { DSET(atan2(D0, D1)); return; }
    if (!strcmp(name, "sqrt")) { DSET(sqrt(D0)); return; }
    if (!strcmp(name, "floor")) { DSET(floor(D0)); return; }
    if (!strcmp(name, "ceil")) { DSET(ceil(D0)); return; }
    if (!strcmp(name, "pow")) { DSET(pow(D0, D1)); return; }
    if (!strcmp(name, "log10")) { DSET(log10(D0)); return; }
    if (!strcmp(name, "sinf")) { FSET(sinf(F0)); return; }
    if (!strcmp(name, "cosf")) { FSET(cosf(F0)); return; }
    if (!strcmp(name, "tanf")) { FSET(tanf(F0)); return; }
    if (!strcmp(name, "asinf")) { FSET(asinf(F0)); return; }
    if (!strcmp(name, "acosf")) { FSET(acosf(F0)); return; }
    if (!strcmp(name, "atanf")) { FSET(atanf(F0)); return; }
    if (!strcmp(name, "atan2f")) { FSET(atan2f(F0, F1)); return; }
    if (!strcmp(name, "sqrtf")) { FSET(sqrtf(F0)); return; }
    if (!strcmp(name, "floorf")) { FSET(floorf(F0)); return; }
    if (!strcmp(name, "ceilf")) { FSET(ceilf(F0)); return; }
    if (!strcmp(name, "powf")) { FSET(powf(F0, F1)); return; }
    if (!strcmp(name, "expf")) { FSET(expf(F0)); return; }
    if (!strcmp(name, "logf")) { FSET(logf(F0)); return; }
    if (!strcmp(name, "ldexpf")) { FSET(ldexpf(F0, (int)a1)); return; }
    if (!strcmp(name, "lrintf")) { cpu->r[0] = (uint32_t)lrintf(F0); return; }
#undef D0
#undef D1
#undef DSET
#undef F0
#undef F1
#undef FSET
    /* ARM runtime helpers */
    if (!strcmp(name, "__aeabi_idiv")) { int32_t x=(int32_t)a0,y=(int32_t)a1; cpu->r[0]=(uint32_t)(y?x/y:0); return; }
    if (!strcmp(name, "__aeabi_uidiv")) { cpu->r[0] = a1 ? a0 / a1 : 0; return; }
    if (!strcmp(name, "__aeabi_idivmod")) { int32_t x=(int32_t)a0,y=(int32_t)a1; cpu->r[0]=(uint32_t)(y?x/y:0); cpu->r[1]=(uint32_t)(y?x%y:0); return; }
    if (!strcmp(name, "__aeabi_uidivmod")) { cpu->r[0] = a1 ? a0 / a1 : 0; cpu->r[1] = a1 ? a0 % a1 : 0; return; }
    if (!strcmp(name, "__aeabi_uldivmod")) {
        uint64_t n = ((uint64_t)cpu->r[1] << 32) | cpu->r[0];
        uint64_t d = ((uint64_t)cpu->r[3] << 32) | cpu->r[2];
        uint64_t q = d ? n / d : 0, r = d ? n % d : 0;
        cpu->r[0] = (uint32_t)q; cpu->r[1] = (uint32_t)(q >> 32);
        cpu->r[2] = (uint32_t)r; cpu->r[3] = (uint32_t)(r >> 32); return;
    }
    if (!strcmp(name, "__aeabi_d2lz")) { int64_t v = (int64_t)f64_from_bits(cpu->r[0], cpu->r[1]); cpu->r[0]=(uint32_t)v; cpu->r[1]=(uint32_t)(v>>32); return; }
    if (!strcmp(name, "__aeabi_ul2d")) { uint64_t v=((uint64_t)cpu->r[1]<<32)|cpu->r[0]; uint64_t b=f64_bits((double)v); cpu->r[0]=(uint32_t)b; cpu->r[1]=(uint32_t)(b>>32); return; }
    if (!strcmp(name, "__cxa_guard_acquire")) { uint32_t p=a0; if (!p) { cpu->r[0]=0; return; } if (rd32(p)==2) cpu->r[0]=0; else { wr32(p,1); cpu->r[0]=1; } return; }
    if (!strcmp(name, "__cxa_guard_release")) { if (a0) wr32(a0,2); return; }
    if (!strcmp(name, "__cxa_pure_virtual")) { fprintf(stderr,"[guest] pure virtual call\n"); ExitProcess(5); }
    if (!strcmp(name, "__aeabi_atexit")) { cpu->r[0]=0; return; }
    if (!strcmp(name, "__aeabi_unwind_cpp_pr0") || !strcmp(name, "__aeabi_unwind_cpp_pr1")) { cpu->r[0]=0; return; }
    if (!strcmp(name, "__stack_chk_fail")) { fprintf(stderr,"[guest] stack check failed\n"); ExitProcess(6); }
    if (!strcmp(name, "__android_log_print")) {
        static int logon = -1;
        if (logon < 0) logon = getenv("RECOMP_LOGS") ? 1 : 0;
        if (g_verbose || logon) {
            char buf[4096]; GuestVa v = { cpu, 3, cpu->r[13], 0 };
            guest_format(buf, sizeof(buf), guest_cstr(a2), &v);
            fprintf(stderr, "[log] %s\n", buf);
        }
        cpu->r[0]=0; return;
    }
    /* pthread */
    if (!strcmp(name, "pthread_mutex_init")) { cpu->r[0]=0; return; }
    if (!strcmp(name, "pthread_mutex_lock")) { GuestMutex *m=mutex_get(a0); if(m) EnterCriticalSection(&m->cs); cpu->r[0]=0; return; }
    if (!strcmp(name, "pthread_mutex_trylock")) { GuestMutex *m=mutex_get(a0); cpu->r[0]= (m && TryEnterCriticalSection(&m->cs))?0:16; return; }
    if (!strcmp(name, "pthread_mutex_unlock")) { GuestMutex *m=mutex_get(a0); if(m) LeaveCriticalSection(&m->cs); cpu->r[0]=0; return; }
    if (!strcmp(name, "pthread_mutex_destroy")) { cpu->r[0]=0; return; }
    if (!strcmp(name, "pthread_self")) { cpu->r[0]=cpu->tid; return; }
    if (!strcmp(name, "pthread_create")) { if (a3) wr32(a3, 1); cpu->r[0]=0; return; }
    if (!strcmp(name, "pthread_join")) { cpu->r[0]=0; return; }
    if (!strcmp(name, "pthread_key_create")) { if (a0) wr32(a0, 1); cpu->r[0]=0; return; }
    if (!strcmp(name, "pthread_getspecific")) { cpu->r[0]=0; return; }
    if (!strcmp(name, "pthread_setspecific")) { cpu->r[0]=0; return; }
    /* sockets: offline bring-up */
    if (!strcmp(name,"socket")||!strcmp(name,"bind")||!strcmp(name,"connect")||!strcmp(name,"listen")||
        !strcmp(name,"accept")||!strcmp(name,"send")||!strcmp(name,"recv")||!strcmp(name,"sendto")||
        !strcmp(name,"recvfrom")||!strcmp(name,"setsockopt")||!strcmp(name,"getsockopt")||!strcmp(name,"getsockname")||
        !strcmp(name,"select")||!strcmp(name,"gethostbyname")||!strcmp(name,"gethostbyaddr")||
        !strcmp(name,"getaddrinfo")||!strcmp(name,"freeaddrinfo")) { cpu->r[0]=(uint32_t)-1; if (!strcmp(name,"getaddrinfo")) cpu->r[0]=(uint32_t)-1; return; }
    if (!strcmp(name,"sigaction")||!strcmp(name,"fcntl")||!strcmp(name,"ioctl")||!strcmp(name,"close")) { cpu->r[0]=0; return; }
    /* GLES1 -> desktop GL */
    if (name[0] == 'g' && name[1] == 'l' && gles1_dispatch(cpu, name)) return;
    if (!strncmp(name, "gl", 2)) { cpu->r[0]=0; return; }
    /* default: report once per name, return zero */
    static const char *last[32]; static int lastn;
    int seen=0; for (int i=0;i<lastn;i++) if (last[i]==name || (last[i] && !strcmp(last[i],name))) { seen=1; break; }
    if (!seen) { if (lastn<32) last[lastn++]=name; if (g_verbose) fprintf(stderr,"[import] stub %s\n", name); }
    cpu->r[0]=0;
}
