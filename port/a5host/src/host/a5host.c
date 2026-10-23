// a5host.c - native host for the REAL libasphalt5.so (Unicorn C API + our
// platform layer: libc/libm/C++ shims, fake JNI, resource loader, GL bridge).
// This is the C port of analysis/tools/a5boot.py + a5gl.py and the platform
// layer that the final static-recompiled build will use.
#include "ucapi.h"
#include "a5gl.h"
#include "audio.h"
#include "installer.h"
#include "movie.h"
#include "input.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#include <mmsystem.h>
#include "autogen_api.h"

// Shared Unicorn API surface: one instance for every translation unit (the
// pure-x86 backend or the legacy DLL, chosen by ucapi_load).
uc_engine* g_uc = NULL;
int  (*p_uc_open)(int, int, uc_engine**) = NULL;
int  (*p_uc_close)(uc_engine*) = NULL;
int  (*p_uc_mem_map)(uc_engine*, uint64_t, size_t, uint32_t) = NULL;
int  (*p_uc_mem_map_ptr)(uc_engine*, uint64_t, size_t, uint32_t, void*) = NULL;
int  (*p_uc_mem_write_real)(uc_engine*, uint64_t, const void*, size_t) = NULL;
int  (*p_uc_mem_read)(uc_engine*, uint64_t, void*, size_t) = NULL;
int  (*p_uc_reg_write)(uc_engine*, int, const void*) = NULL;
int  (*p_uc_reg_read)(uc_engine*, int, void*) = NULL;
int  (*p_uc_reg_read_batch)(uc_engine*, int*, void**, int) = NULL;
int  (*p_uc_reg_write_batch)(uc_engine*, int*, void**, int) = NULL;
int  (*p_uc_emu_start)(uc_engine*, uint64_t, uint64_t, uint64_t, size_t) = NULL;
int  (*p_uc_emu_stop)(uc_engine*) = NULL;
int  (*p_uc_hook_add)(uc_engine*, uc_hook*, int, void*, void*, ...) = NULL;
int  (*p_uc_ctl)(uc_engine*, uint64_t, ...) = NULL;

#define GAME_DIR_DEFAULT "..\\..\\data\\installed_native"

MemRegion memregions[8]; int nmemregions = 0;
uint8_t* g_mem_page[1u << 16];
#include "uc_lite.inc"

static int g_ucapi_loaded = 0;
int ucapi_load(void) {
    if (g_ucapi_loaded) return 0;
    if (!getenv("A5_USE_UNICORN")) {
        uc_lite_install();
        g_ucapi_loaded = 1;
        return 0;
    }
    char path[MAX_PATH];
    const char* cands[] = {
        "C:\\Users\\Baz\\AppData\\Local\\Programs\\Python\\Python312\\Lib\\site-packages\\unicorn\\lib\\unicorn.dll",
        "unicorn.dll",
    };
    HMODULE dll = NULL;
    for (int i = 0; i < 2 && !dll; i++) dll = LoadLibraryA(cands[i]);
    if (!dll) {
        snprintf(path, sizeof(path), "%s\\unicorn.dll",
                 getenv("UNICORN_DIR") ? getenv("UNICORN_DIR") : ".");
        dll = LoadLibraryA(path);
    }
    if (!dll) { fprintf(stderr, "ucapi: cannot load unicorn.dll\n"); return -1; }
    p_uc_open       = (int(*)(int,int,uc_engine**))GetProcAddress(dll, "uc_open");
    p_uc_close      = (int(*)(uc_engine*))GetProcAddress(dll, "uc_close");
    p_uc_mem_map    = (int(*)(uc_engine*,uint64_t,size_t,uint32_t))GetProcAddress(dll, "uc_mem_map");
    p_uc_mem_map_ptr= (int(*)(uc_engine*,uint64_t,size_t,uint32_t,void*))GetProcAddress(dll, "uc_mem_map_ptr");
    p_uc_mem_write_real = (int(*)(uc_engine*,uint64_t,const void*,size_t))GetProcAddress(dll, "uc_mem_write");
    p_uc_mem_read   = (int(*)(uc_engine*,uint64_t,void*,size_t))GetProcAddress(dll, "uc_mem_read");
    p_uc_reg_write  = (int(*)(uc_engine*,int,const void*))GetProcAddress(dll, "uc_reg_write");
    p_uc_reg_read   = (int(*)(uc_engine*,int,void*))GetProcAddress(dll, "uc_reg_read");
    p_uc_reg_read_batch = (int(*)(uc_engine*,int*,void**,int))GetProcAddress(dll, "uc_reg_read_batch");
    p_uc_reg_write_batch = (int(*)(uc_engine*,int*,void**,int))GetProcAddress(dll, "uc_reg_write_batch");
    p_uc_emu_start  = (int(*)(uc_engine*,uint64_t,uint64_t,uint64_t,size_t))GetProcAddress(dll, "uc_emu_start");
    p_uc_emu_stop   = (int(*)(uc_engine*))GetProcAddress(dll, "uc_emu_stop");
    p_uc_hook_add   = (int(*)(uc_engine*,uc_hook*,int,void*,void*,...))GetProcAddress(dll, "uc_hook_add");
    p_uc_ctl        = (int(*)(uc_engine*,uint64_t,...))GetProcAddress(dll, "uc_ctl");
    if (!p_uc_open || !p_uc_mem_map || !p_uc_emu_start || !p_uc_hook_add) {
        fprintf(stderr, "ucapi: missing unicorn exports\n");
        return -1;
    }
    g_ucapi_loaded = 1;
    return 0;
}

// ---- auto-verify write log (declared early: heap_w32 must log too) ----
// One chronological log covers BOTH the native run (helper writes from
// translated code + emulated writes from nested call_emulated_regs callees)
// and the interpreter re-run (its writes are undone for state safety).  The
// reverse-order restore needs the true global order, so a single counter.
#define WLOG_MAX (1 << 22)
typedef struct { uint32_t addr; uint8_t size; uint8_t old[4]; uint32_t by; uint32_t pc; } wlog_ent;
static wlog_ent g_wlog[WLOG_MAX];
static int g_wlog_n = 0;
int g_wlog_on = 0;
uint32_t g_wcur = 0;   // native function currently executing (for the log)
// A5_RWATCH=1: log reads of the CTouchScreen statics with the translated
// function that performs them (identifies who consumes the touch position).
int g_rwatch_on = 0;
int g_rwatch_start = 0;
uint32_t g_rwatch_lo = 0, g_rwatch_hi = 0;
extern int g_host_frame;
void rec_add(uint32_t a, int sz, uint32_t by, uint32_t pc);

// Direct guest write for the heap helpers: p_uc_mem_write invalidates every TB
// covering the written range, and the game's malloc/free traffic is constant
// (that invalidation was re-translating the hot code every frame and filling
// the TCG code buffer).  Still logged: the differential restores heap state.
static void heap_w32(uint32_t a, uint32_t v) {
    wlog_add(a, 4);
    uint8_t* p = mem_host(a);
    if (p) memcpy(p, &v, 4); else p_uc_mem_write(g_uc, a, &v, 4);
}

static char game_dir[512] = GAME_DIR_DEFAULT;
static int vt_enabled = 0;          // virtual clock
static uint64_t vt_ms = 0;
static uint32_t g_load_state = 0;   // the active GS_LoadGame object (set by the state hook)
static const char* g_cur_state = "boot";   // last state name (set by the state hook)
static uint32_t g_cur_state_ptr = 0;  // the active gxGameState object (set by the state hook)
uint32_t g_trace_car = 0;
int g_host_frame = 0;
uint64_t g_tick_count = 0;          // Scene::UpdateCars calls (logic ticks)
uint32_t g_press_latch = 0;         // unconsumed pad "pressed" bits (60fps input latch)            // the frame loop's counter (for diagnostics)           // A5_TRACE: the first car pointer the collision native saw
char g_movie_path[700] = {0};       // GLMediaPlayer.loadMovie request (movie.c)
volatile int g_movie_pending = 0;
static FILE* g_status_log = NULL;   // a5host_status.txt: where the game is / why it stalls
static char g_exe_dir[512] = {0};   // folder of a5host.exe (saves live in <exe>\saves)

// ARM-side profiler (A5_ARM_PROF=1): count executions of the candidate hot
// engine functions to rank the recompilation queue.
static const struct { uint32_t addr; const char* name; } arm_prof_tab[] = {
    {0x13e1ac, "CMatrix::Mult"},                {0x13fc2c, "CMatrix::Translate"},
    {0x13fcdc, "CMatrix::RotateY"},             {0x13fc8c, "CMatrix::RotateZ"},
    {0x13fd7c, "CMatrix::RotateX"},             {0x13e9ac, "CMatrix::RotateVector2"},
    {0x13ea28, "CMatrix::RotateVector"},        {0x13e394, "CMatrix::SetTranslation"},
    {0x13e3a4, "CMatrix::SetQuaternion"},       {0x140644, "Vector3d::CrossProduct"},
    {0x141194, "Vector3d::Normalize"},          {0x140a5c, "Vector3d::Normalized"},
    {0x172d10, "Vector4s::Length"},             {0x124a9c, "gxAniGroup::computeMatrices"},
    {0x12c0e0, "gxAnimation::eval"},            {0x123204, "CAniObjDLists::SendBuffersToGPU"},
    {0x1241e4, "CAniObjDLists::UpdateSphericalTexCoord"},
    {0x124504, "CAniObjDLists::Render"},        {0x123f40, "CAniObjDLists::RenderGroups"},
    {0x123014, "CAniObjDLists::CopyVBuffer"},   {0xa4bfc, "Scene::Update"},
    {0xa7ab0, "Scene::Render"},                 {0x964d8, "Scene::PreRenderCars"},
    {0x8ecb0, "Scene::RenderCars"},             {0x7bf5c, "CarSceneObject::UpdateRotationAngles"},
    {0x7d5e0, "CarSceneObject::UpdateNitroSpeedEffect"},
    {0x13c9b0, "CCamera::updateMatrix"},        {0x13cb18, "CCamera::update"},
    {0x152e38, "CCar::ComputeExtend"},          {0x152980, "CCar::ComputeEnveloppe"},
    {0xbad74, "GS_Run::Update"},                {0xba264, "GS_Run::Render"},
    {0xb6cf4, "GS_Run::UpdateCarsConstFPS"},    {0x152980, "CCar::ComputeEnveloppe2"},
    // recompilation queue: the animation + math leaves
    {0x12c2bc, "gxAnimation::evalLerp"},        {0x12c404, "gxAnimation::evalSlerp"},
    {0x13e118, "CMatrix::TransformVector"},     {0x13e340, "CMatrix::LoadIdentity"},
    {0x13e36c, "CMatrix::Load(CMatrix*)"},      {0x13e380, "CMatrix::Load(float*)"},
    {0x13e314, "CMatrix::Zero"},                {0x13d0a4, "CCamera::LookUpDown"},
    {0x13cd4c, "CCamera::Strafecamera"},        {0x13c910, "CCamera::setPos"},
    {0x172d7c, "Vector2s::Normalize"},          {0x1409e4, "Vector2d::Normalize"},
    {0x140dbc, "Vector2d::RotateAsPoint"},      {0x140638, "Vector3d::computeDeltaXY"},
    {0x14063c, "Vector3d::computeDelta"},       {0x1405b0, "Vector2d::Cross"},
    {0x140d78, "Vector3d::SetRand"},            {0x140e94, "Vector2d::AngleBetween"},
};
#define ARM_PROF_N ((int)(sizeof(arm_prof_tab) / sizeof(arm_prof_tab[0])))
static uint64_t arm_prof_counts[ARM_PROF_N];
static int arm_prof_on = 0;

// ---------------------------------------------------------------- elf
static uint8_t* elf_data; static size_t elf_size;

// The end-user installer appends the user's engine image to this exe and
// writes this 24-byte footer after it.  Nothing is executed from the image;
// it is the data/strings/vtables image the translated native code addresses.
// Keeping it inside the exe means the installed folder has no .so file.
#define A5_EMBED_MAGIC "A5EMBED1"
static int load_embedded_elf(uint8_t** out_data, size_t* out_size) {
    char exe[MAX_PATH];
    if (!GetModuleFileNameA(NULL, exe, sizeof(exe))) return 0;
    FILE* f = fopen(exe, "rb");
    if (!f) return 0;
    if (fseek(f, 0, SEEK_END) != 0) { fclose(f); return 0; }
    long end = ftell(f);
    if (end < 24) { fclose(f); return 0; }
    unsigned char foot[24];
    if (fseek(f, end - 24, SEEK_SET) != 0 ||
        fread(foot, 1, sizeof(foot), f) != sizeof(foot)) {
        fclose(f); return 0;
    }
    if (memcmp(foot, A5_EMBED_MAGIC, 8) != 0) { fclose(f); return 0; }
    unsigned long long off = 0, len = 0;
    memcpy(&off, foot + 8, 8);
    memcpy(&len, foot + 16, 8);
    if (len < 0x100 || off + len > (unsigned long long)(end - 24)) {
        fclose(f); return 0;
    }
    uint8_t* buf = (uint8_t*)malloc((size_t)len);
    if (!buf) { fclose(f); return 0; }
    if (fseek(f, (long)off, SEEK_SET) != 0 ||
        fread(buf, 1, (size_t)len, f) != (size_t)len) {
        free(buf); fclose(f); return 0;
    }
    fclose(f);
    *out_data = buf;
    *out_size = (size_t)len;
    return 1;
}
static uint8_t* dynstr; static uint32_t dynstr_size;
static uint8_t* dynsym; static uint32_t dynsym_size;
static uint32_t dynsym_count;

typedef struct { uint32_t addr; char name[96]; } Stub;
static Stub stubs[400]; static int nstubs = 0;

typedef struct { char name[32]; uint32_t addr; } DataObj;
static DataObj dataobjs[8]; static int ndataobjs = 0;

typedef struct { uint32_t addr; char name[96]; } RelEnt;
static RelEnt *rels; static int nrels = 0;

static inline uint32_t rd32(uint32_t a);
static uint32_t heap_next = HEAP + 0x1000;
// Free lists are binned by exact block size (8-byte units), 1024 bins; sizes
// >= 8 KB share the last bin.  The old single first-fit list grew to tens of
// thousands of entries after a race and every allocation rescanned it (the
// second-race loading stalls).  With exact-size bins an allocation is O(1):
// the first block in the bin always fits.  Block layout is unchanged:
// [u32 size][u32 next_free][data...]; header = 8 bytes.
#define HEAP_BINS 1024
static uint32_t heap_bins[HEAP_BINS];
static uint64_t heap_binmap[HEAP_BINS / 64];   // bit b = heap_bins[b] non-empty
static int heap_bin_of(uint32_t sz) {
    uint32_t i = sz / 8;
    if (i >= HEAP_BINS) i = HEAP_BINS - 1;
    return (int)i;
}
static void heap_bin_set(int b, uint32_t hdr) {
    heap_w32(hdr + 4, heap_bins[b]);
    heap_bins[b] = hdr;
    heap_binmap[b >> 6] |= (uint64_t)1 << (b & 63);
}
static int heap_first_bin(int start) {
    if (start >= HEAP_BINS) return -1;
    int wi = start >> 6, bit = start & 63;
    uint64_t w = heap_binmap[wi] & (~(uint64_t)0 << bit);
    for (;;) {
        if (w) {
            int b = 0;
            while (!(w & 1)) { w >>= 1; b++; }
            return wi * 64 + b;
        }
        if (++wi >= HEAP_BINS / 64) return -1;
        w = heap_binmap[wi];
    }
}

// Freshly allocated guest memory is zeroed.  Old C++ code in the engine often
// relies on value-initialised fields (notably pointer links that are only set
// when present); recycled host blocks used to surface stale float data there,
// which crashed the scene teardown on "back to main menu" (CMatrix::~CMatrix
// following a 0xf0b6... "pointer").
static void heap_zero(uint32_t p, uint32_t n) {
    uint8_t* d = mem_host(p);
    if (d) { memset(d, 0, n); return; }
    uint8_t z[64];
    memset(z, 0, sizeof(z));
    while (n) {
        uint32_t k = n < (uint32_t)sizeof(z) ? n : (uint32_t)sizeof(z);
        p_uc_mem_write(g_uc, p, z, k);
        p += k; n -= k;
    }
}
static uint32_t heap_alloc(uint32_t n) {
    n = (n + 7) & ~7u;
    if (n == 0) n = 8;
    // first non-empty exact-size bin, then larger bins (the last bin is
    // first-fit for >8 KB); the bitmap makes the search O(1)
    int bi = heap_first_bin(heap_bin_of(n));
    while (bi >= 0) {
        uint32_t prev = 0, cur = heap_bins[bi];
        while (cur) {
            uint32_t sz = rd32(cur);
            uint32_t nxt = rd32(cur + 4);
            if (bi == HEAP_BINS - 1 && sz < n) { prev = cur; cur = nxt; continue; }
            if (prev) heap_w32(prev + 4, nxt);
            else {
                heap_bins[bi] = nxt;
                if (!nxt) heap_binmap[bi >> 6] &= ~((uint64_t)1 << (bi & 63));
            }
            if (sz >= n + 32) {          // split off the remainder
                uint32_t rest = cur + 8 + n;
                uint32_t rsz = sz - n - 8;
                heap_w32(rest, rsz);
                heap_bin_set(heap_bin_of(rsz), rest);
                heap_w32(cur, n);
            }
            heap_zero(cur + 8, n);
            return cur + 8;
        }
        bi = heap_first_bin(bi + 1);
    }
    // bump from the tail
    if (heap_next + n + 8 >= HEAP + HEAP_SIZE) { printf("[heap] EXHAUSTED (want %u)\n", n); return 0; }
    uint32_t p = heap_next;
    heap_next += n + 8;
    heap_w32(p, n);
    heap_zero(p + 8, n);
    return p + 8;
}
static void heap_free(uint32_t p) {
    if (!p) return;
    uint32_t hdr = p - 8;
    uint32_t sz = rd32(hdr);
    heap_bin_set(heap_bin_of(sz), hdr);
}
static uint32_t heap_realloc(uint32_t p, uint32_t n) {
    if (!p) return heap_alloc(n);
    uint32_t old = rd32(p - 8);
    if (old >= n) return p;
    uint32_t np = heap_alloc(n);
    if (np) {
        uint8_t* d = mem_host(np);
        uint8_t* s = mem_host(p);
        if (d && s) memcpy(d, s, old);
        else { unsigned char* tmp = (unsigned char*)malloc(old); if (tmp) { p_uc_mem_read(g_uc, p, tmp, old); p_uc_mem_write(g_uc, np, tmp, old); free(tmp); } }
    }
    heap_free(p);
    return np;
}
static uint32_t alloc_str(const char* s) {
    uint32_t p = heap_alloc((uint32_t)strlen(s) + 1);
    uint8_t* d = mem_host(p);
    if (d) memcpy(d, s, strlen(s) + 1);
    else p_uc_mem_write(g_uc, p, s, strlen(s) + 1);
    return p;
}
static void rstr(uint32_t a, char* out, size_t max) {
    size_t i = 0;
    out[0] = 0;
    if (!a) { strcpy(out, "(null)"); return; }
    while (i + 1 < max) {
        uint8_t c = 0;
        if (p_uc_mem_read(g_uc, a + i, &c, 1) != 0) break;
        if (!c) break;
        out[i++] = (char)c;
    }
    out[i] = 0;
}

// ---- auto-verify write log (A5_AUTO_VERIFY)
// Every helper write records (addr, size, old bytes) so the exact entry state
// can be restored for the interpreter re-run differential (hooks.inc).  Gated
// by g_wlog_on: one predictable branch per write, empty log in normal runs.
// (the WLOG_MAX/typedef/globals live near the top; heap_w32 needs them)
// The interpreter re-run's write log shares the wlog_ent layout; it is a
// separate array because auto_verify_run holds both sides at once.
#define IWLOG_MAX (1 << 22)
static wlog_ent g_iwlog[IWLOG_MAX];
static int g_iw_n = 0;
int g_iw_on = 0;

// Route a write record to whichever log is active: the native run's wlog
// (restored to reconstruct the entry state) or the interpreter re-run's log
// (undone for state safety).  Single call path keeps the true global order.
void rec_add(uint32_t a, int sz, uint32_t by, uint32_t pc) {
    wlog_ent* e;
    if (g_wlog_on) { if (g_wlog_n >= WLOG_MAX) return; e = &g_wlog[g_wlog_n++]; }
    else if (g_iw_on) { if (g_iw_n >= IWLOG_MAX) return; e = &g_iwlog[g_iw_n++]; }
    else return;
    e->addr = a; e->size = (uint8_t)sz; e->by = by; e->pc = pc;
    for (int i = 0; i < sz && i < 4; i++) e->old[i] = rd8(a + (uint32_t)i);
}
// ---------------------------------------------------------------- shims
enum {
    SH_NONE = 0, SH_LOG, SH_MALLOC, SH_CALLOC, SH_REALLOC, SH_FREE, SH_NEWARR,
    SH_MEMCPY, SH_MEMMOVE, SH_MEMSET, SH_MEMCMP, SH_MEMCHR,
    SH_STRLEN, SH_STRCMP, SH_STRCASECMP, SH_STRNCMP, SH_STRCPY, SH_STRNCPY, SH_STRLCPY,
    SH_STRCAT, SH_STRCHR, SH_STRRCHR, SH_STRSTR, SH_STRTOL, SH_STRTOD, SH_ATOI,
    SH_FOPEN, SH_FCLOSE, SH_FREAD, SH_FWRITE, SH_FSEEK, SH_FTELL, SH_FFLUSH, SH_FPUTC, SH_FILENO,
    SH_PRINTF, SH_SPRINTF, SH_SNPRINTF, SH_FPRINTF, SH_VSPRINTF, SH_VFPRINTF, SH_SWPRINTF,
    SH_FSCANF, SH_PUTS,
    SH_TIME, SH_GETTIMEOFDAY, SH_CLOCK, SH_LRAND48, SH_SRAND48,
    SH_PTHREAD_CREATE, SH_PTHREAD_JOIN, SH_PTHREAD_MUTEX,
    SH_SOCKET, SH_SIGACTION,
    SH_GUARD_ACQUIRE, SH_GUARD_RELEASE, SH_AEABI_ATEXIT, SH_PURE_VIRTUAL, SH_STACK_CHK_FAIL,
    SH_UNWIND, SH_AEABI_IDIV, SH_AEABI_UIDIV, SH_AEABI_IDIVMOD, SH_AEABI_UIDIVMOD,
    SH_SINF, SH_COSF, SH_TANF, SH_ATANF, SH_ATAN2F, SH_ASINF, SH_ACOSF, SH_SQRTF, SH_EXPF, SH_LOGF,
    SH_FLOOR, SH_CEIL, SH_LRINTF, SH_POWF,
    SH_SIN, SH_COS, SH_TAN, SH_ATAN, SH_ATAN2, SH_ASIN, SH_ACOS, SH_SQRT, SH_EXP, SH_LOG_D,
    SH_FLOOR_D, SH_CEIL_D, SH_FABS_D, SH_POW_D, SH_ACOSF2,
    SH_GL,
    SH_EXIT,
};

static const struct { const char* name; int id; } SHIM_TABLE[] = {
    {"__android_log_print", SH_LOG},
    {"malloc", SH_MALLOC}, {"calloc", SH_CALLOC}, {"realloc", SH_REALLOC}, {"free", SH_FREE},
    {"_Znaj", SH_NEWARR}, {"_Znwj", SH_MALLOC},
    {"memcpy", SH_MEMCPY}, {"memmove", SH_MEMMOVE}, {"memset", SH_MEMSET},
    {"memcmp", SH_MEMCMP}, {"memchr", SH_MEMCHR},
    {"strlen", SH_STRLEN}, {"strcmp", SH_STRCMP}, {"strcasecmp", SH_STRCASECMP},
    {"strncmp", SH_STRNCMP}, {"strcpy", SH_STRCPY}, {"strncpy", SH_STRNCPY},
    {"strlcpy", SH_STRLCPY}, {"strcat", SH_STRCAT}, {"strchr", SH_STRCHR},
    {"strrchr", SH_STRRCHR}, {"strstr", SH_STRSTR}, {"strtol", SH_STRTOL},
    {"strtod", SH_STRTOD}, {"atoi", SH_ATOI},
    {"fopen", SH_FOPEN}, {"fclose", SH_FCLOSE}, {"fread", SH_FREAD}, {"fwrite", SH_FWRITE},
    {"fseek", SH_FSEEK}, {"ftell", SH_FTELL}, {"fflush", SH_FFLUSH}, {"fputc", SH_FPUTC},
    {"fileno", SH_FILENO},
    {"printf", SH_PRINTF}, {"sprintf", SH_SPRINTF}, {"snprintf", SH_SNPRINTF},
    {"fprintf", SH_FPRINTF}, {"vsprintf", SH_VSPRINTF}, {"vfprintf", SH_VFPRINTF},
    {"swprintf", SH_SWPRINTF}, {"fscanf", SH_FSCANF}, {"puts", SH_PUTS},
    {"time", SH_TIME}, {"gettimeofday", SH_GETTIMEOFDAY}, {"clock", SH_CLOCK},
    {"lrand48", SH_LRAND48}, {"srand48", SH_SRAND48},
    {"pthread_create", SH_PTHREAD_CREATE}, {"pthread_join", SH_PTHREAD_JOIN},
    {"pthread_mutex_lock", SH_PTHREAD_MUTEX}, {"pthread_mutex_unlock", SH_PTHREAD_MUTEX},
    {"pthread_mutex_init", SH_PTHREAD_MUTEX}, {"pthread_mutex_destroy", SH_PTHREAD_MUTEX},
    {"socket", SH_SOCKET}, {"bind", SH_SOCKET}, {"connect", SH_SOCKET}, {"listen", SH_SOCKET},
    {"accept", SH_SOCKET}, {"send", SH_SOCKET}, {"recv", SH_SOCKET}, {"sendto", SH_SOCKET},
    {"recvfrom", SH_SOCKET}, {"select", SH_SOCKET}, {"getsockname", SH_SOCKET},
    {"getsockopt", SH_SOCKET}, {"setsockopt", SH_SOCKET}, {"ioctl", SH_SOCKET},
    {"close", SH_SOCKET}, {"fcntl", SH_SOCKET}, {"getaddrinfo", SH_SOCKET},
    {"freeaddrinfo", SH_SOCKET}, {"gethostbyname", SH_SOCKET}, {"gethostbyaddr", SH_SOCKET},
    {"gethostname", SH_SOCKET}, {"herror", SH_SOCKET}, {"inet_addr", SH_SOCKET},
    {"inet_ntoa", SH_SOCKET}, {"inet_ntop", SH_SOCKET},
    {"sigaction", SH_SIGACTION},
    {"exit", SH_EXIT}, {"_exit", SH_EXIT}, {"abort", SH_EXIT},
    {"__cxa_guard_acquire", SH_GUARD_ACQUIRE}, {"__cxa_guard_release", SH_GUARD_RELEASE},
    {"__aeabi_atexit", SH_AEABI_ATEXIT}, {"__cxa_pure_virtual", SH_PURE_VIRTUAL},
    {"__stack_chk_fail", SH_STACK_CHK_FAIL},
    {"__aeabi_unwind_cpp_pr0", SH_UNWIND}, {"__aeabi_unwind_cpp_pr1", SH_UNWIND},
    {"__aeabi_idiv", SH_AEABI_IDIV}, {"__aeabi_uidiv", SH_AEABI_UIDIV},
    {"__aeabi_idivmod", SH_AEABI_IDIVMOD}, {"__aeabi_uidivmod", SH_AEABI_UIDIVMOD},
    {"sinf", SH_SINF}, {"cosf", SH_COSF}, {"tanf", SH_TANF}, {"atanf", SH_ATANF},
    {"atan2f", SH_ATAN2F}, {"asinf", SH_ASINF}, {"acosf", SH_ACOSF}, {"sqrtf", SH_SQRTF},
    {"expf", SH_EXPF}, {"logf", SH_LOGF}, {"floor", SH_FLOOR}, {"ceil", SH_CEIL},
    {"lrintf", SH_LRINTF}, {"pow", SH_POW_D},
    {"sin", SH_SIN}, {"cos", SH_COS}, {"tan", SH_TAN}, {"atan", SH_ATAN}, {"atan2", SH_ATAN2},
    {"asin", SH_ASIN}, {"acos", SH_ACOS}, {"sqrt", SH_SQRT}, {"exp", SH_EXP}, {"log", SH_LOG_D},
};
static int shim_ids[400];   // parallel to stubs[]
static int shim_id_of(const char* n) {
    for (size_t i = 0; i < sizeof(SHIM_TABLE)/sizeof(SHIM_TABLE[0]); i++)
        if (strcmp(SHIM_TABLE[i].name, n) == 0) return SHIM_TABLE[i].id;
    if (strncmp(n, "gl", 2) == 0) return SH_GL;
    return SH_NONE;
}

// ---- fake stdio
typedef struct { uint32_t addr; FILE* f; char mode[8]; } FakeFile;
static FakeFile files[64]; static int nfiles = 0;
static uint32_t fakefile_next = DATA + 0x20000;

static const char* host_path(const char* p, char* out, size_t outsz) {
    const char* s = p;
    const char* marker = "/sdcard/gameloft/games/asphalt5/";
    const char* m = strstr(p, marker);
    if (m) s = m + strlen(marker);
    else if (strncmp(s, ".//", 3) == 0) s += 3;
    else if (strncmp(s, "./", 2) == 0) s += 2;
    snprintf(out, outsz, "%s\\%s", game_dir, s);
    for (char* c = out; *c; c++) if (*c == '/') *c = '\\';
    return out;
}

// ---- resource layer
typedef struct { char path[256]; uint8_t* data; size_t len; } ResCache;
static ResCache* rescache = NULL; static int nrescache = 0, rescap = 0;
static int res_log = 0;

static uint8_t* resolve_res(const char* path_in, size_t* out_len) {
    char norm[512];
    const char* s = path_in;
    if (strncmp(s, ".//", 3) == 0) s += 3;
    else if (strncmp(s, "./", 2) == 0) s += 2;
    const char* marker = "/sdcard/gameloft/games/asphalt5/";
    const char* m = strstr(s, marker);
    if (m) s = m + strlen(marker);
    snprintf(norm, sizeof(norm), "%s", s);
    for (int i = 0; i < nrescache; i++)
        if (strcmp(rescache[i].path, norm) == 0) { *out_len = rescache[i].len; return rescache[i].data; }

    char hp[640];
    snprintf(hp, sizeof(hp), "%s\\%s", game_dir, norm);
    for (char* c = hp; *c; c++) if (*c == '/') *c = '\\';
    FILE* f = fopen(hp, "rb");
    uint8_t* data = NULL; size_t len = 0;
    if (f) {
        fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
        if (sz > 0) {
            data = (uint8_t*)malloc((size_t)sz);
            if (fread(data, 1, (size_t)sz, f) != (size_t)sz) { free(data); data = NULL; }
            else len = (size_t)sz;
        }
        fclose(f);
    }
    if (nrescache == rescap) {
        rescap = rescap ? rescap * 2 : 128;
        rescache = (ResCache*)realloc(rescache, sizeof(ResCache) * rescap);
    }
    snprintf(rescache[nrescache].path, sizeof(rescache[nrescache].path), "%s", norm);
    rescache[nrescache].data = data; rescache[nrescache].len = len;
    nrescache++;
    if (res_log < 400) {
        res_log++;
        printf("[res] '%s' -> %s\n", path_in, data ? "found" : "NOT FOUND");
    }
    *out_len = len;
    return data;
}

#include "jni.inc"

#include "shims.inc"

// forward decl: the collision natives call back into the interpreter
static uint32_t call_emulated(uint32_t func, const uint32_t* args, int nargs);
static uint32_t call_emulated_at(uint32_t func, const uint32_t* args, int nargs, uint32_t sp);
static uint32_t call_emulated_lr(uint32_t func, const uint32_t* args, int nargs, uint32_t sp, uint32_t lr);
uint32_t call_emulated_regs(uint32_t func, const uint32_t* R, uint32_t sp);
static uint32_t call_emulated_keep(uint32_t func, const uint32_t* args, int nargs, uint32_t sp);
static int g_emu_depth = 0;   // nested call_emulated_at depth (the auto verifier
                              // must not re-enter Unicorn while one is running)
unsigned long long g_emu_starts = 0;   // nested uc_emu_start count (diagnostics)
volatile uint32_t g_last_auto = 0;   // crash reporter state (veh_handler)
volatile int g_last_frame = 0;
#include "natives.inc"

#include "hooks.inc"

// ---------------------------------------------------------------- boot
// Crash reporter: prints the last auto-translated function, the emu depth and
// the frame when the process takes an access violation (the host natives read
// guest memory directly, so a bad pointer faults inside the host).
// one-shot stop hook for the A5_FPA_TEST probe
static void fpa_stop_hook(uc_engine* u, uint64_t addr, uint32_t size, void* user) { p_uc_emu_stop(u); }

static LONG CALLBACK veh_handler(EXCEPTION_POINTERS* ep) {    if (ep->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION) {
        uintptr_t fa = (uintptr_t)ep->ExceptionRecord->ExceptionInformation[1];
        const char* reg = "?";
        long long off = 0;
        for (int i = 0; i < nmemregions; i++) {
            uintptr_t hb = (uintptr_t)memregions[i].host;
            if (fa >= hb && fa < hb + memregions[i].size) {
                reg = "guest-region"; off = (long long)(fa - hb); break;
            }
        }
        printf("[crash] AV at %p (type %d addr %p) last_auto=%#x depth=%d frame=%d region=%s off=%lld state=%s\n",
               (void*)ep->ExceptionRecord->ExceptionAddress,
               (int)ep->ExceptionRecord->ExceptionInformation[0],
               (void*)fa,
               g_last_auto, g_emu_depth, g_last_frame, reg, off,
               g_cur_state ? g_cur_state : "?");
        fflush(stdout);
        // The faulting helpers are the TCG code emitters: rdi = the TCG
        // context, [rdi+0x88] = the code buffer pointer (safe read only).
        {
            uintptr_t rdi = (uintptr_t)ep->ContextRecord->Rdi;
            MEMORY_BASIC_INFORMATION mbi;
            if (VirtualQuery((LPCVOID)rdi, &mbi, sizeof(mbi)) && mbi.State == MEM_COMMIT &&
                (mbi.Protect & (PAGE_READONLY | PAGE_READWRITE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE))) {
                uint64_t cp = *(volatile uint64_t*)(rdi + 0x88);
                printf("[crash] tcg ctx=%p code_ptr=%#llx (off %#llx)\n",
                       (void*)rdi, (unsigned long long)cp, (unsigned long long)(cp - rdi));
                static int ctxdumped = 0;
                if (ctxdumped < 2) {
                    ctxdumped++;
                    printf("[crash] tcg ctx dump:");
                    for (int i = 0; i < 20; i++) {
                        uint64_t v = *(volatile uint64_t*)(rdi + 0x40 + i * 8);
                        printf(" %02x:%#llx", 0x40 + i * 8, (unsigned long long)v);
                    }
                    printf("\n");
                }
            }
        }
        // host backtrace: identifies the host path that touched the bad address
        static int bt_printed = 0;
        if (bt_printed < 4) {
            bt_printed++;
            void* frames[24];
            USHORT n = CaptureStackBackTrace(0, 24, frames, NULL);
            uintptr_t base0 = (uintptr_t)GetModuleHandleA(NULL);
            printf("[crash] bt:");
            for (USHORT i = 0; i < n && i < 16; i++)
                printf(" +%#llx", (unsigned long long)((uintptr_t)frames[i] - base0));
            printf("\n");
            // which module contains the faulting code?
            HMODULE hm = NULL;
            if (GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
                                   GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                                   (LPCSTR)ep->ExceptionRecord->ExceptionAddress, &hm)) {
                char path[MAX_PATH] = {0};
                GetModuleFileNameA(hm, path, MAX_PATH);
                const char* slash = strrchr(path, '\\');
                printf("[crash] module: %s (base %p + %#llx)\n", slash ? slash + 1 : path, (void*)hm,
                       (unsigned long long)((uintptr_t)ep->ExceptionRecord->ExceptionAddress - (uintptr_t)hm));
            }
            extern void a5gl_ring_dump(void);
            a5gl_ring_dump();
        }
        fflush(stdout);
    }
    return EXCEPTION_CONTINUE_SEARCH;
}

static void unlock_vfp(void) {
    uint32_t cpacr = 0x00F00000, fpexc = 0x40000000;
    p_uc_reg_write(g_uc, UC_ARM_REG_C1_C0_2, &cpacr);
    p_uc_reg_write(g_uc, UC_ARM_REG_FPEXC, &fpexc);
}

// ---- pure-native host->game calls ---------------------------------------
// Host entries (boot, JNI callbacks, the per-frame nativeRender) used to start
// Unicorn just to reach the entry hook.  Try the translated/probe path first;
// every target reached in normal play is native, so ARM never executes.
static uint64_t g_host_native = 0, g_host_emu = 0;
static uint32_t g_host_emu_addr[512];
static uint64_t g_host_emu_cnt[512];
static int g_host_emu_n = 0;
static int g_host_report = -1;

static int host_force_emu(uint32_t func) {
    static int init = 0, n = 0;
    static uint32_t tab[64];
    if (!init) {
        init = 1;
        const char* s = getenv("A5_HOST_EMU");
        while (s && *s && n < 64) {
            char* e = NULL;
            unsigned long v = strtoul(s, &e, 16);
            tab[n++] = BASE + (uint32_t)v;
            s = e;
            while (*s == ',' || *s == ' ') s++;
        }
    }
    for (int i = 0; i < n; i++) if (tab[i] == func) return 1;
    return 0;
}

static int host_native_dispatch(uint32_t func, uint32_t* R, float* S, uint32_t sp) {
    if (g_auto_verify || g_auto_bypass) return 0;
    if (host_force_emu(func)) return 0;
    if (probe_dispatch(func, R, S, sp)) return 1;
    if (auto_is_auto(func) && auto_enabled(func) &&
        auto_dispatch(func, R, S, sp)) return 1;
    return 0;
}

static void host_emu_note(uint32_t func) {
    g_host_emu++;
    for (int i = 0; i < g_host_emu_n; i++)
        if (g_host_emu_addr[i] == func) { g_host_emu_cnt[i]++; return; }
    if (g_host_emu_n < 512) {
        g_host_emu_addr[g_host_emu_n] = func;
        g_host_emu_cnt[g_host_emu_n] = 1;
        g_host_emu_n++;
        printf("[host] ARM fallback: %#x\n", func);
    }
}

static uint32_t call_emulated_at(uint32_t func, const uint32_t* args, int nargs, uint32_t sp) {
    if (g_host_report < 0) g_host_report = getenv("A5_HOST_REPORT") ? 1 : 0;
    {
        uint32_t R[16] = {0};
        float S[32];
        if (!g_auto_verify && !g_auto_bypass) {
            ureg_batch15(R);   // the old Unicorn path entered with the live regs
            ureg_batch_s(S);
        } else {
            memset(S, 0, sizeof(S));
        }
        for (int i = 0; i < nargs && i < 4; i++) R[i] = args[i];
        for (int i = 4; i < nargs; i++) uw32(sp + (uint32_t)(i - 4) * 4, args[i]);
        R[13] = sp; R[14] = LR_SENTINEL; R[15] = 0;
        if (host_native_dispatch(func, R, S, sp)) {
            g_host_native++;
            // Mirror what the Unicorn entry hook did after a native dispatch:
            // the emulator's register file/VFP state stay live for any probe,
            // shim or nested call that reads them.
            unlock_vfp();
            usetreg_batch15pc(R);
            usetreg_batch_s(S);
            return R[0];
        }
        host_emu_note(func);
        if (g_host_report && getenv("A5_HOST_TRACE"))
            printf("[host] fallback args func=%#x nargs=%d\n", func, nargs);
    }
    unlock_vfp();
    g_emu_depth++;
    g_emu_starts++;
    for (int i = 0; i < nargs && i < 4; i++) {
        int regs[4] = {UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3};
        usetreg(regs[i], args[i]);
    }
    for (int i = 4; i < nargs; i++) uw32(sp + (uint32_t)(i - 4) * 4, args[i]);
    usetreg(UC_ARM_REG_SP, sp);
    usetreg(UC_ARM_REG_LR, LR_SENTINEL);
    int rc = p_uc_emu_start(g_uc, func, LR_SENTINEL, 0, 0);
    if (rc != 0) {
        uint32_t pc = ureg(UC_ARM_REG_PC), lr = ureg(UC_ARM_REG_LR);
        uint32_t r0 = ureg(UC_ARM_REG_R0), r1 = ureg(UC_ARM_REG_R1);
        uint32_t rr[13], sp2 = ureg(UC_ARM_REG_SP);
        for (int i = 0; i <= 12; i++) rr[i] = ureg(UC_ARM_REG_R0 + i);
        unsigned char ins[4] = {0};
        int canread = (p_uc_mem_read(g_uc, pc, ins, 4) == 0);
        printf("  fault: uc_err=%d pc=%#x lr=%#x r0=%#x r1=%#x mem@pc=%s %02x %02x %02x %02x\n",
               rc, pc, lr, r0, r1, canread ? "OK" : "FAIL", ins[0], ins[1], ins[2], ins[3]);
        printf("  regs: r0=%08x r1=%08x r2=%08x r3=%08x r4=%08x r5=%08x r6=%08x r7=%08x r8=%08x r9=%08x r10=%08x r11=%08x r12=%08x sp=%08x\n",
               rr[0], rr[1], rr[2], rr[3], rr[4], rr[5], rr[6], rr[7], rr[8], rr[9], rr[10], rr[11], rr[12], sp2);
        g_emu_depth--;
        return 0xFFFFFFFF;
    }
    g_emu_depth--;
    return ureg(UC_ARM_REG_R0);
}

// Like call_emulated_at, but the callee enters with the caller's FULL register
// file (r0-r12).  The interpreter (in-session) sees exactly the caller's live
// values, so the nested run must too - otherwise a callee that saves r4-r11
// (callee-saved, legal) writes stale host-register-file values to its stack
// frame, which the differential flags.
static uint32_t g_nest_fn[512], g_nest_cnt[512];
static int g_nest_n = 0;
static void nest_dump(void) {
    printf("[nest] nested call_emulated_regs targets (top 15):\n");
    for (int r = 0; r < 15; r++) {
        int best = -1; uint32_t bv = 0;
        for (int i = 0; i < g_nest_n; i++) if (g_nest_cnt[i] > bv) { bv = g_nest_cnt[i]; best = i; }
        if (best < 0) break;
        printf("[nest] %10u  %#x\n", bv, g_nest_fn[best] - BASE);
        g_nest_cnt[best] = 0;
    }
}

uint32_t call_emulated_regs(uint32_t func, const uint32_t* R, uint32_t sp) {
    // A5_NEST_PROF=1: count nested interpreter starts per callee (the loading
    // hang was 2.3M nested starts; this shows which callee is responsible).
    static int nest_prof = -1;
    if (nest_prof < 0) nest_prof = getenv("A5_NEST_PROF") ? 1 : 0;
    if (nest_prof) {
        static int nest_from = -1, nest_to = -1;
        if (nest_from < 0) {
            const char* nf = getenv("A5_NEST_FROM");
            const char* nt = getenv("A5_NEST_TO");
            nest_from = nf ? atoi(nf) : 0;
            nest_to = nt ? atoi(nt) : 0x7fffffff;
        }
        if (g_host_frame < nest_from || g_host_frame > nest_to) goto nest_skip;
        int slot = -1;
        for (int i = 0; i < g_nest_n; i++) if (g_nest_fn[i] == func) { slot = i; break; }
        if (slot < 0 && g_nest_n < 512) { slot = g_nest_n++; g_nest_fn[slot] = func; }
        if (slot >= 0) g_nest_cnt[slot]++;
    }
nest_skip:
    if (func < 0x1000 ||
        (func >= BASE + 0x02000000u && !(func >= SHIM && func < SHIM + 0x00100000u))) {
        // Valid targets are guest code and the host's SHIM/JNI stub region
        // (the engine calls imported functions through stored pointers too;
        // rejecting those dropped e.g. a JNI callback every frame).
        printf("  [bug] call_emulated_regs(func=%#x) - null/garbage target\n", func);
        void* frames[20];
        USHORT n = CaptureStackBackTrace(0, 20, frames, NULL);
        uintptr_t base0 = (uintptr_t)GetModuleHandleA(NULL);
        printf("        bt:");
        for (USHORT i = 0; i < n && i < 12; i++)
            printf(" +%#llx", (unsigned long long)((uintptr_t)frames[i] - base0));
        printf("\n");
    }
    // JNI environment calls: the JNI_TABLE pointers land on 4-byte BX LR
    // stubs that the code hook routes to jni_dispatch.  Do that here directly
    // instead of starting Unicorn for every JNI call (millions per race).
    if (func >= JNI_STUBS && func < JNI_STUBS + 256 * 4) {
        int slot = (int)((func - JNI_STUBS) / 4);
        uint32_t ret = jni_dispatch(slot, R[0], R[1], R[2], R[3], sp);
        usetreg(UC_ARM_REG_R0, ret);
        usetreg(UC_ARM_REG_LR, LR_SENTINEL);
        return ret;
    }
    // ---- in-process fast paths -------------------------------------------
    // A nested uc_emu_start costs a full emulator round-trip (and churns the
    // TCG code buffer).  The loader issues hundreds of thousands of these per
    // race because the engine's own PLT stubs and the translated callees were
    // re-entered through this function - that was the multi-second loading
    // hitch.  Resolve both in-process instead:
    //
    // SHIM stub target: the engine also calls relocated imports through
    // function pointers.  Run the host shim directly instead of starting a
    // nested emulator for what is often a division or a comparison (the
    // engine decoder calls these hundreds of thousands of times per texture).
    if (func >= SHIM && func < SHIM + 0x00100000u) {
        int si = (int)((func - SHIM) / 4);
        if (si >= 0 && si < nstubs && stubs[si].addr == func) {
            int sid = shim_ids[si];
            if (sid == SH_AEABI_IDIV) {
                int32_t a = (int32_t)R[0], b = (int32_t)R[1];
                uint32_t ret = (uint32_t)(b ? a / b : 0);
                usetreg(UC_ARM_REG_R0, ret); usetreg(UC_ARM_REG_LR, LR_SENTINEL);
                return ret;
            }
            if (sid == SH_AEABI_UIDIV) {
                uint32_t ret = R[1] ? R[0] / R[1] : 0;
                usetreg(UC_ARM_REG_R0, ret); usetreg(UC_ARM_REG_LR, LR_SENTINEL);
                return ret;
            }
            if (sid == SH_MEMCMP) {
                uint32_t ret = 0;
                if (R[2]) {
                    const uint8_t* a = (const uint8_t*)mem_host(R[0]);
                    const uint8_t* b = (const uint8_t*)mem_host(R[1]);
                    if (a && b) ret = (uint32_t)memcmp(a, b, R[2]);
                    else ret = shim_call(sid, stubs[si].name, R[0], R[1], R[2], R[3], sp);
                }
                usetreg(UC_ARM_REG_R0, ret); usetreg(UC_ARM_REG_LR, LR_SENTINEL);
                return ret;
            }
            g_shim_r1_set = 0;
            uint32_t ret = shim_call(sid, stubs[si].name, R[0], R[1], R[2], R[3], sp);
            if (g_shim_r1_set) usetreg(UC_ARM_REG_R1, g_shim_r1_val);
            usetreg(UC_ARM_REG_R0, ret);
            usetreg(UC_ARM_REG_LR, LR_SENTINEL);
            return ret;
        }
    }
    // 1) guest PLT stub -> the host shim it was relocated to (memcpy, memset,
    //    LZMA helpers, ...).  Same call auto_call_plt already makes for the
    //    generated direct-call path.
    if (func >= BASE + 0x5c368u && func < BASE + 0x5cb78u) {
        uint32_t tgt = 0;
        if (plt_target(func, &tgt) && tgt >= SHIM && tgt < SHIM + 0x00100000u) {
            int pi = (int)((tgt - SHIM) / 4);
            if (pi >= 0 && pi < nstubs && stubs[pi].addr == tgt) {
                int sid = shim_ids[pi];
                // hot leaves: division and comparison dominate the engine
                // decoder; skip the second PLT decode + shim switch entirely
                if (sid == SH_AEABI_IDIV) {
                    int32_t a = (int32_t)R[0], b = (int32_t)R[1];
                    uint32_t ret = (uint32_t)(b ? a / b : 0);
                    usetreg(UC_ARM_REG_R0, ret); usetreg(UC_ARM_REG_R1, R[1]);
                    usetreg(UC_ARM_REG_LR, LR_SENTINEL);
                    return ret;
                }
                if (sid == SH_AEABI_UIDIV) {
                    uint32_t ret = R[1] ? R[0] / R[1] : 0;
                    usetreg(UC_ARM_REG_R0, ret); usetreg(UC_ARM_REG_R1, R[1]);
                    usetreg(UC_ARM_REG_LR, LR_SENTINEL);
                    return ret;
                }
                if (sid == SH_MEMCMP) {
                    uint32_t ret = 0;
                    if (R[2]) {
                        const uint8_t* pa = (const uint8_t*)mem_host(R[0]);
                        const uint8_t* pb = (const uint8_t*)mem_host(R[1]);
                        if (pa && pb) ret = (uint32_t)memcmp(pa, pb, R[2]);
                        else ret = shim_call(sid, stubs[pi].name, R[0], R[1], R[2], R[3], sp);
                    }
                    usetreg(UC_ARM_REG_R0, ret); usetreg(UC_ARM_REG_R1, R[1]);
                    usetreg(UC_ARM_REG_LR, LR_SENTINEL);
                    return ret;
                }
                g_shim_r1_set = 0;
                uint32_t ret = shim_call(sid, stubs[pi].name, R[0], R[1], R[2], R[3], sp);
                if (g_shim_r1_set) usetreg(UC_ARM_REG_R1, g_shim_r1_val);
                usetreg(UC_ARM_REG_R0, ret);
                usetreg(UC_ARM_REG_LR, LR_SENTINEL);
                return ret;
            }
        }
    }
    // 2) translated function entry -> run the C translation directly.  The
    //    generated callers already do this for computed calls; the paths that
    //    ended up here (hand-written natives, PLT fallbacks) paid the nested
    //    start for every single call.
    if (!g_auto_verify && !g_auto_bypass && auto_is_auto(func) && auto_enabled(func)) {
        uint32_t Rc[16] = {0};
        float S[32];
        for (int i = 0; i < 13; i++) Rc[i] = R[i];
        Rc[13] = sp; Rc[14] = LR_SENTINEL; Rc[15] = 0;
        ureg_batch_s(S);
        if (auto_dispatch(func, Rc, S, sp)) {
            int regs[15] = { UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3,
                             UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7,
                             UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11,
                             UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR };
            void* vals[15];
            for (int i = 0; i < 15; i++) vals[i] = &Rc[i];
            p_uc_reg_write_batch(g_uc, regs, vals, 15);
            usetreg_batch_s(S);
            return Rc[0];
        }
    }
    host_emu_note(func);
    unlock_vfp();
    g_emu_depth++;
    g_emu_starts++;
    for (int i = 0; i < 13; i++) usetreg(UC_ARM_REG_R0 + i, R[i]);
    usetreg(UC_ARM_REG_SP, sp);
    usetreg(UC_ARM_REG_LR, LR_SENTINEL);
    int rc = p_uc_emu_start(g_uc, func, LR_SENTINEL, 0, 0);
    if (rc != 0) {
        printf("  fault(regs): uc_err=%d pc=%#x lr=%#x sp=%#x r0=%#x func=%#x\n",
               rc, ureg(UC_ARM_REG_PC), ureg(UC_ARM_REG_LR), ureg(UC_ARM_REG_SP),
               ureg(UC_ARM_REG_R0), func);
        g_emu_depth--;
        return 0xFFFFFFFF;
    }
    g_emu_depth--;
    return ureg(UC_ARM_REG_R0);
}

// A5_LOAD_PROF: statistical PC profiler for interpreted calls.  The emulator
// runs in 20k-instruction slices; the PC at each slice boundary is recorded.
// This costs one emu_start round trip per slice (far cheaper than a
// per-instruction code hook) and shows which functions make a loading step
// slow.
#define LOADPROF_MAX 300000
static uint32_t* g_loadprof_pc = NULL;
static int g_loadprof_n = 0;
static int g_loadprof_on = 0;

static uint32_t call_emulated_sliced(uint32_t func, const uint32_t* args, int nargs) {
    uint32_t sp = STACK + STACK_SIZE - 0x2000;
    if (!g_loadprof_on) {
        g_loadprof_on = 1;
        g_loadprof_pc = (uint32_t*)malloc(LOADPROF_MAX * sizeof(uint32_t));
    }
    unlock_vfp();
    g_emu_depth++;
    g_emu_starts++;
    for (int i = 0; i < nargs && i < 4; i++) {
        int regs[4] = {UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3};
        usetreg(regs[i], args[i]);
    }
    for (int i = 4; i < nargs; i++) uw32(sp + (uint32_t)(i - 4) * 4, args[i]);
    usetreg(UC_ARM_REG_SP, sp);
    usetreg(UC_ARM_REG_LR, LR_SENTINEL);
    uint32_t pc = func;
    for (;;) {
        int rc = p_uc_emu_start(g_uc, pc, LR_SENTINEL, 0, 20000);
        pc = ureg(UC_ARM_REG_PC);
        if (g_loadprof_pc && g_loadprof_n < LOADPROF_MAX) g_loadprof_pc[g_loadprof_n++] = pc;
        if (rc != 0) { g_emu_depth--; return 0xFFFFFFFF; }
        if (pc == LR_SENTINEL) break;
        if (pc < BASE || pc >= BASE + 0x02000000u) break;   // safety
    }
    g_emu_depth--;
    return ureg(UC_ARM_REG_R0);
}

// Long engine calls (texture decoding during the loading screen) are atomic
// from the game's point of view.  Run them in instruction slices and service
// the window message queue in between, so the OS keeps the window responsive
// and the title shows loading progress instead of freezing.
static uint32_t call_emulated_pump(uint32_t func, const uint32_t* args, int nargs) {
    uint32_t sp = STACK + STACK_SIZE - 0x2000;
    unlock_vfp();
    g_emu_depth++;
    g_emu_starts++;
    for (int i = 0; i < nargs && i < 4; i++) {
        int regs[4] = {UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3};
        usetreg(regs[i], args[i]);
    }
    for (int i = 4; i < nargs; i++) uw32(sp + (uint32_t)(i - 4) * 4, args[i]);
    usetreg(UC_ARM_REG_SP, sp);
    usetreg(UC_ARM_REG_LR, LR_SENTINEL);
    uint32_t pc = func;
    clock_t last = clock();
    for (;;) {
        int rc = p_uc_emu_start(g_uc, pc, LR_SENTINEL, 0, 300000);
        pc = ureg(UC_ARM_REG_PC);
        a5gl_pump();
        clock_t now = clock();
        if ((double)(now - last) / CLOCKS_PER_SEC > 0.2) {
            last = now;
            uint32_t pg = g_load_state ? rd32(g_load_state + 0x78) : 0;
            uint32_t tg = g_load_state ? rd32(g_load_state + 0x7c) : 0;
            a5gl_set_title_progress(tg ? (int)((uint64_t)pg * 100 / tg) : -1);
        }
        if (rc != 0) { g_emu_depth--; return 0xFFFFFFFF; }
        if (pc == LR_SENTINEL) break;
        if (pc < BASE || pc >= BASE + 0x02000000u) break;   // safety
    }
    g_emu_depth--;
    return ureg(UC_ARM_REG_R0);
}

// Timeout-based slicing: unlike the instruction count, the timeout lets
// Unicorn stop at a safe translation-block boundary.  Used behind
// A5_LOAD_SLICE=1 to test pausing long load calls without freezing the UI.
static uint32_t call_emulated_timeout(uint32_t func, const uint32_t* args, int nargs, int pump) {
    uint32_t sp = STACK + STACK_SIZE - 0x2000;
    unlock_vfp();
    g_emu_depth++;
    g_emu_starts++;
    for (int i = 0; i < nargs && i < 4; i++) {
        int regs[4] = {UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3};
        usetreg(regs[i], args[i]);
    }
    for (int i = 4; i < nargs; i++) uw32(sp + (uint32_t)(i - 4) * 4, args[i]);
    usetreg(UC_ARM_REG_SP, sp);
    usetreg(UC_ARM_REG_LR, LR_SENTINEL);
    uint32_t pc = func;
    clock_t last = clock();
    for (;;) {
        int rc = p_uc_emu_start(g_uc, pc, LR_SENTINEL, 10000, 0);   // 10 ms slices
        pc = ureg(UC_ARM_REG_PC);
        if (pump) {
            a5gl_pump();
            clock_t now = clock();
            if ((double)(now - last) / CLOCKS_PER_SEC > 0.2) {
                last = now;
                uint32_t pg = g_load_state ? rd32(g_load_state + 0x78) : 0;
                uint32_t tg = g_load_state ? rd32(g_load_state + 0x7c) : 0;
                a5gl_set_title_progress(tg ? (int)((uint64_t)pg * 100 / tg) : -1);
            }
        }
        if (pc == LR_SENTINEL) break;
        if (rc != 0) {
            printf("[slice] stop rc=%d pc=%#x\n", rc, pc);
            g_emu_depth--;
            return 0xFFFFFFFF;
        }
        if (pc < BASE || pc >= BASE + 0x02000000u) break;
    }
    g_emu_depth--;
    return ureg(UC_ARM_REG_R0);
}

static void loadprof_dump(void) {    if (!g_loadprof_on) return;
    printf("[loadprof] %d samples\n", g_loadprof_n);
    const char* dp = getenv("A5_LOAD_PROF_DUMP");
    char path[MAX_PATH];
    if (!dp || !*dp) { snprintf(path, sizeof(path), "loadprof.txt"); dp = path; }
    FILE* f = fopen(dp, "w");
    if (f) {
        for (int i = 0; i < g_loadprof_n; i++) fprintf(f, "%#x\n", g_loadprof_pc[i]);
        fclose(f);
        printf("[loadprof] written to %s\n", dp);
    }
}

// Like call_emulated_at, but with the REAL LR value and the stop address set
// to the return address.  The auto-verify differential needs this: a function
// that pushes LR to the stack must see the true return address (with
// LR_SENTINEL it would store the sentinel, which is a harness artifact).
static uint32_t call_emulated_lr(uint32_t func, const uint32_t* args, int nargs,
                                 uint32_t sp, uint32_t lr) {    unlock_vfp();
    g_emu_depth++;
    for (int i = 0; i < nargs && i < 4; i++) {
        int regs[4] = {UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3};
        usetreg(regs[i], args[i]);
    }
    for (int i = 4; i < nargs; i++) uw32(sp + (uint32_t)(i - 4) * 4, args[i]);
    usetreg(UC_ARM_REG_SP, sp);
    usetreg(UC_ARM_REG_LR, lr);
    int rc = p_uc_emu_start(g_uc, func, lr, 0, 0);
    if (rc != 0) {
        printf("  fault(lr): uc_err=%d pc=%#x lr=%#x sp=%#x r0=%#x func=%#x\n",
               rc, ureg(UC_ARM_REG_PC), ureg(UC_ARM_REG_LR), ureg(UC_ARM_REG_SP),
               ureg(UC_ARM_REG_R0), func);
        g_emu_depth--;
        return 0xFFFFFFFF;
    }
    g_emu_depth--;
    return ureg(UC_ARM_REG_R0);
}

// Like call_emulated_at, but r4-r12 keep the CURRENT register-file values.
// The hand-written probe natives replace a guest function; when they call
// back into the interpreter, those registers are the caller's live values -
// exactly what an in-session call would see.  With call_emulated_at they were
// stale leftovers, which showed up as callee stack-frame residues (a callee
// that saves r4/r5 pushes different values than the interpreter does).
static uint32_t call_emulated_keep(uint32_t func, const uint32_t* args, int nargs, uint32_t sp) {
    unlock_vfp();
    g_emu_depth++;
    g_emu_starts++;
    for (int i = 0; i < nargs && i < 4; i++) {
        int regs[4] = {UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3};
        usetreg(regs[i], args[i]);
    }
    for (int i = 4; i < nargs; i++) uw32(sp + (uint32_t)(i - 4) * 4, args[i]);
    usetreg(UC_ARM_REG_SP, sp);
    usetreg(UC_ARM_REG_LR, LR_SENTINEL);
    int rc = p_uc_emu_start(g_uc, func, LR_SENTINEL, 0, 0);
    if (rc != 0) {
        printf("  fault(keep): uc_err=%d pc=%#x lr=%#x sp=%#x r0=%#x func=%#x\n",
               rc, ureg(UC_ARM_REG_PC), ureg(UC_ARM_REG_LR), ureg(UC_ARM_REG_SP),
               ureg(UC_ARM_REG_R0), func);
        g_emu_depth--;
        return 0xFFFFFFFF;
    }
    g_emu_depth--;
    return ureg(UC_ARM_REG_R0);
}

static uint32_t call_emulated(uint32_t func, const uint32_t* args, int nargs) {
    return call_emulated_at(func, args, nargs, STACK + STACK_SIZE - 0x2000);
}


// ---- input module bindings (input.c) --------------------------------------
static uint32_t in_call(uint32_t fn, const uint32_t* args, int nargs) {
    return call_emulated(fn, args, nargs);
}
static uint32_t in_rd32(uint32_t addr) { return rd32(addr); }
static void in_wr32(uint32_t addr, uint32_t val) { p_uc_mem_write(g_uc, addr, &val, 4); }
static const char* in_state(void) { return g_cur_state; }
static uint32_t in_state_ptr(void) { return g_cur_state_ptr; }

// ---------------------------------------------------------------- main
// Resolve a repo-relative path next to the EXE first (so double-clicking
// a5host.exe works from any working directory), then fall back to the
// CWD-relative layout used by the dev scripts. Returns 1 when found.
static int exe_relative_path(const char* rel, char* out, size_t outsz) {
    char exe[MAX_PATH] = {0};
    if (GetModuleFileNameA(NULL, exe, sizeof(exe))) {
        char* slash = strrchr(exe, '\\');
        if (slash) {
            *slash = 0;
            snprintf(out, outsz, "%s\\%s", exe, rel);
            if (GetFileAttributesA(out) != INVALID_FILE_ATTRIBUTES) return 1;
        }
    }
    if (GetFileAttributesA(rel) != INVALID_FILE_ATTRIBUTES) {
        snprintf(out, outsz, "%s", rel);
        return 1;
    }
    snprintf(out, outsz, "%s", rel);   // fall through: report the plain path
    return 0;
}

// Always resolve next to the exe, without an existence check - for paths that
// may not exist yet (the data directory on the first run).
static void exe_dir_path(const char* rel, char* out, size_t outsz) {
    char exe[MAX_PATH] = {0};
    if (GetModuleFileNameA(NULL, exe, sizeof(exe))) {
        char* slash = strrchr(exe, '\\');
        if (slash) { *slash = 0; snprintf(out, outsz, "%s\\%s", exe, rel); return; }
    }
    snprintf(out, outsz, "%s", rel);
}

// A5_NITRO_DEBUG: log who writes scene[0x6432c] (the nitro/collision gate)
static void gate_write_hook(uc_engine* u, int access, uint64_t addr, int size,
                            int64_t value, void* user) {
    static int n = 0;
    if (n < 80) {
        uint32_t pc = ureg(UC_ARM_REG_PC);
        printf("[gatewr] pc=%#x val=%d\n", pc, (int)value);
        n++;
    }
}

// ---- UI dump (A5_UI_DUMP_FRAME=<n>): print the active menu state's full item
// layout at that frame - the item list with final x/y, and every touch rect.
// Used to verify the engine's own layout (place every element exactly).
static void ui_dump(void) {
    uint32_t th = g_cur_state_ptr;
    if (!th) { printf("[ui] no current state\n"); return; }
    uint32_t vt = rd32(th);
    if (vt == BASE + 0x1ef8f8) {   // CPanel (confirmation dialogs)
        printf("[ui] CPanel this=%#x selected=%d timer=%d mousedown=%d\n",
               th, (int)rd32(th + 0x80), (int)rd32(th + 0x84), (int)rd8(th + 0x9d8));
        for (int b = 0; b < 6; b++) {
            uint32_t o = 0x90c + (uint32_t)b * 0x10;
            printf("[ui]  btn%d rect=(%.0f,%.0f)-(%.0f,%.0f)\n", b,
                   uf32(th + o), uf32(th + o + 4), uf32(th + o + 8), uf32(th + o + 0xc));
        }
        fflush(stdout);
        return;
    }
    int ndyn = (int)rd32(th + 0x8d8), nbar = (int)rd32(th + 0x8dc), nextra = (int)rd32(th + 0x8f0);
    printf("[ui] state=%s this=%#x vt=%#x mode=%d counts: dyn=%d bar=%d extra=%d\n",
           vtable_name(vt), th, vt - BASE, (int)rd32(th + 0x94), ndyn, nbar, nextra);
    printf("[ui] tables: items(0x8e8)=%#x barItems(0x8ec)=%#x list(0x88)=%#x n(0x84)=%d\n",
           rd32(th + 0x8e8), rd32(th + 0x8ec), rd32(th + 0x88), (int)rd32(th + 0x84));
    uint32_t list = rd32(th + 0x88);
    int n = ndyn + nbar + nextra;
    for (int i = 0; i < n && i < 24; i++) {
        uint32_t e = list + (uint32_t)i * 0x18;
        printf("[ui]  item %2d: id=%-3d act=%#-8x frame=%#-10x x=%-5d y=%-5d flags=%#x\n", i,
               (int)rd32(e), rd32(e + 4), rd32(e + 8), (int)rd32(e + 0xc), (int)rd32(e + 0x10), rd32(e + 0x14));
        uint32_t sp2 = call_emulated(BASE + 0xf7308, (uint32_t[]){ th, rd32(e + 4) }, 2);
        if (sp2) {
            char sbuf[160];
            rstr(sp2, sbuf, sizeof(sbuf));
            printf("[ui]       label='%s'\n", sbuf);
        }
    }
    uint32_t rl = rd32(th + 0x10); int rc = (int)rd32(th + 0x14);
    printf("[ui] rects: %d (list=%#x)\n", rc, rl);
    for (int i = 0; i < rc && i < 24; i++) {
        uint32_t rp = rl ? rd32(rl + (uint32_t)i * 4) : 0;
        if (!rp) continue;
        printf("[ui]  rect %2d: %#x (%.0f,%.0f)-(%.0f,%.0f)\n", i, rp,
               uf32(rp), uf32(rp + 4), uf32(rp + 8), uf32(rp + 0xc));
    }
    // the items' resolved touch rects (FindRect by item id)
    for (int i = 0; i < n && i < 24; i++) {
        uint32_t e = list + (uint32_t)i * 0x18;
        int id = (int)rd32(e);
        uint32_t rp = call_emulated(BASE + 0xb6738, (uint32_t[]){ th, (uint32_t)id }, 2);
        if (rp) printf("[ui]  item %2d id=%-3d FindRect -> (%.0f,%.0f)-(%.0f,%.0f)\n", i, id,
                       uf32(rp), uf32(rp + 4), uf32(rp + 8), uf32(rp + 0xc));
    }
    fflush(stdout);
}

int main(int argc, char** argv) {
    // GUI-subsystem release build: there is no console, so route the
    // diagnostic log to %TEMP%\Asphalt5.log instead of dropping it.
    if (!GetConsoleWindow()) {
        char tmp[MAX_PATH] = {0}, logp[MAX_PATH + 32];
        if (GetTempPathA(sizeof(tmp), tmp)) {
            snprintf(logp, sizeof(logp), "%sAsphalt5.log", tmp);
            freopen(logp, "w", stdout);
            freopen(logp, "a", stderr);
        }
    }
    SetConsoleOutputCP(65001);
    AddVectoredExceptionHandler(1, veh_handler);
    g_exe_base = (unsigned long long)(uintptr_t)GetModuleHandleA(NULL);
    // single instance: a double-click that fires twice (or a lingering window)
    // must not start a second emulation - it halves the CPU and the audio
    // device and makes both windows look "stuck".
    int run_hidden = getenv("A5BOOT_HIDDEN") != NULL;
    // A5_ALLOW_MULTI=1: diagnostic hidden run alongside the player's instance
    // (separate mutex name; separate saves dir because the exe dir differs).
    HANDLE inst = CreateMutexA(NULL, TRUE,
        getenv("A5_ALLOW_MULTI") ? "a5host_single_instance_diag"
                                 : "a5host_single_instance_v1");
    if (inst && GetLastError() == ERROR_ALREADY_EXISTS) {
        // A scripted (hidden) run must never pop a dialog on the user's
        // desktop - it just exits quietly and lets the running game continue.
        if (run_hidden) {
            printf("a5host: another instance is running - hidden run exits\n");
            return 0;
        }
        printf("a5host: another instance is already running (close it first)\n");
        MessageBoxA(NULL, "Asphalt 5 (a5host) is already running.\nClose the other window first.",
                    "a5host", MB_OK | MB_ICONINFORMATION);
        return 0;
    }
    if (ucapi_load() != 0) return 1;
    // exe dir + the saves folder (the game's SaveProfile writes "AASave%d")
    {
        char exe[MAX_PATH] = {0};
        if (GetModuleFileNameA(NULL, exe, sizeof(exe))) {
            char* slash = strrchr(exe, '\\');
            if (slash) *slash = 0;
            snprintf(g_exe_dir, sizeof(g_exe_dir), "%s", exe);
            char sd[MAX_PATH + 16];
            snprintf(sd, sizeof(sd), "%s\\saves", exe);
            CreateDirectoryA(sd, NULL);
        }
    }
    if (p_uc_open(UC_ARCH_ARM, UC_MODE_ARM, &g_uc) != 0) { printf("uc_open failed\n"); return 1; }
    // TCG translation cache size: bigger = fewer flushes of the hot code.
    // A5_TCG_MB=<n> overrides (0 = leave the Unicorn default).
    {
        const char* tb = getenv("A5_TCG_MB");
        long mb = tb ? atol(tb) : 2048;   // 2 GB: the wheel build never wraps the
                                          // code pointer on its own (the TCG
                                          // commits in 4MB chunks until the
                                          // reservation ends), so a large buffer
                                          // is what keeps a long session alive
        if (mb > 0) {
            int trc = uc_set_tcg_buffer(g_uc, (uint32_t)mb << 20);
            printf("a5host: tcg buffer %ld MB -> %d\n", mb, trc);
        }
    }
    const char* gd = getenv("A5_GAMEDIR");
    if (gd) snprintf(game_dir, sizeof(game_dir), "%s", gd);
    // ATC pack is the default (it carries the real UI data); A5_PVRT=1 forces
    // the PVRT pack, A5_GAMEDIR overrides the data directory entirely.
    // Layouts: the dist release keeps the phone layout <exe>\sdcard\gameloft\
    // games\asphalt5\ (created by the installer on the first run); the dev
    // build uses <exe>\..\..\data\unpacked_atc. The one that exists wins, with
    // the dist path preferred when neither exists (first run in dist).
    int use_atc = getenv("A5_PVRT") == NULL;
    if (!gd) {
        char distdir[512] = {0}, devdir[512] = {0};
        exe_dir_path("sdcard\\gameloft\\games\\asphalt5", distdir, sizeof(distdir));
        exe_relative_path(use_atc ? "..\\..\\data\\unpacked_atc" : "..\\..\\data\\installed_native",
                          devdir, sizeof(devdir));
        int dist_ok = GetFileAttributesA(distdir) != INVALID_FILE_ATTRIBUTES;
        int dev_ok = GetFileAttributesA(devdir) != INVALID_FILE_ATTRIBUTES;
        snprintf(game_dir, sizeof(game_dir), "%s", (dist_ok || !dev_ok) ? distdir : devdir);
    }
    printf("a5host: data dir = %s\n", game_dir);
    // screen size: 854x480 is the game's native design resolution (the .data
    // defaults of OS_SCREEN_W/H are 854/480 and the whole menu layout is built
    // for it). A5_SCREEN=WxH overrides.
    int scr_w = 854, scr_h = 480;
    { const char* ss = getenv("A5_SCREEN"); if (ss) sscanf(ss, "%dx%d", &scr_w, &scr_h); }
    vt_enabled = getenv("A5BOOT_FASTTIME") != NULL;
    // Default: run live (until the window is closed) - a double-click on the
    // exe boots straight into the game. Scripted runs set A5BOOT_FRAMES.
    int frames = getenv("A5BOOT_FRAMES") ? atoi(getenv("A5BOOT_FRAMES")) : 0;
    if (getenv("A5_WATCH_MENU")) setvbuf(stdout, NULL, _IONBF, 0);   // never lose the tail
    if (getenv("A5_RWATCH")) {
        const char* rs = getenv("A5_RWATCH");
        g_rwatch_on = 1;
        g_rwatch_start = rs ? atoi(rs) : 0;
        g_rwatch_lo = BASE + 0xafd12c;   // CTouchScreen statics
        g_rwatch_hi = BASE + 0xafd142;
    }
    const char* shot = getenv("A5BOOT_SHOT");
    const char* live_shot = getenv("A5BOOT_LIVE_SHOT");
    int shot_frame = getenv("A5BOOT_SHOT_FRAME") ? atoi(getenv("A5BOOT_SHOT_FRAME")) : frames - 1;
    // maps: the emulated regions are backed by HOST buffers via
    // uc_mem_map_ptr, so the whole platform layer (GL bridge, JNI, shims,
    // native recompiled functions) can access emulated memory directly
    // instead of paying a uc_mem_read/write API call per access.
    {
        // NOTE: the 1 GB heap region (0x50000000-0x90000000) already contains
        // the stack address (0x70000000), so no separate stack mapping - the
        // original code "mapped" it too but that call always failed and the
        // heap range served it by accident.
        const struct { uint64_t addr; size_t size; } regions[] = {
            { BASE, 0x00C00000 }, { SHIM, 0x00200000 }, { DATA, 0x00040000 },
            { HEAP, HEAP_SIZE },
        };
        for (size_t i = 0; i < sizeof(regions)/sizeof(regions[0]); i++) {
            void* p = VirtualAlloc(NULL, regions[i].size, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
            if (!p) { printf("a5host: host alloc failed (%zu bytes)\n", regions[i].size); return 1; }
            int rc = p_uc_mem_map_ptr(g_uc, regions[i].addr, regions[i].size, UC_PROT_ALL, p);
            if (rc != 0) { printf("a5host: uc_mem_map_ptr failed at %#llx (%d)\n",
                                 (unsigned long long)regions[i].addr, rc); return 1; }
            if (nmemregions < 8) {
                memregions[nmemregions].addr = regions[i].addr;
                memregions[nmemregions].size = regions[i].size;
                memregions[nmemregions].host = (uint8_t*)p;
                nmemregions++;
                for (uint64_t a = regions[i].addr; a < regions[i].addr + regions[i].size; a += 0x10000)
                    g_mem_page[(uint32_t)(a >> 16)] = (uint8_t*)p + (size_t)(a - regions[i].addr);
                printf("a5host: region guest %#llx size %#zx host %p\n",
                       (unsigned long long)regions[i].addr, regions[i].size, p);
            }
        }
    }

    // ---- load the ELF
    // End-user install: the engine image is embedded at the end of this exe.
    // Developer install: keep the external-file path (and optional argv[1]).
    uint8_t* embedded = NULL;
    size_t embedded_size = 0;
    int have_embedded = (argc <= 1) && load_embedded_elf(&embedded, &embedded_size);
    if (have_embedded) {
        elf_data = embedded;
        elf_size = embedded_size;
        printf("a5host: embedded engine image %zu bytes\n", elf_size);
    } else {
        static char so_buf[512];
        const char* so_path = (argc > 1) ? argv[1] : so_buf;
        if (argc <= 1) {
            // dist layout first (<exe>\libasphalt5.so), then the dev tree
            exe_relative_path("libasphalt5.so", so_buf, sizeof(so_buf));
            if (GetFileAttributesA(so_buf) == INVALID_FILE_ATTRIBUTES)
                exe_relative_path("..\\..\\analysis\\apk\\lib\\armeabi\\libasphalt5.so", so_buf, sizeof(so_buf));
        }
        FILE* f = fopen(so_path, "rb");
        if (!f) { printf("cannot open %s\n", so_path); return 1; }
        fseek(f, 0, SEEK_END); long fsz = ftell(f); fseek(f, 0, SEEK_SET);
        elf_data = (uint8_t*)malloc((size_t)fsz);
        fread(elf_data, 1, (size_t)fsz, f);
        fclose(f);
        elf_size = (size_t)fsz;
    }

    uint32_t e_shoff = *(uint32_t*)(elf_data + 0x20);
    uint16_t e_shentsize = *(uint16_t*)(elf_data + 0x2E);
    uint16_t e_shnum = *(uint16_t*)(elf_data + 0x30);
    uint16_t e_shstrndx = *(uint16_t*)(elf_data + 0x32);
    uint16_t e_phnum = *(uint16_t*)(elf_data + 0x2C);
    uint32_t e_phoff = *(uint32_t*)(elf_data + 0x1C);

    // program headers -> write PT_LOAD segments
    for (int i = 0; i < e_phnum; i++) {
        uint8_t* ph = elf_data + e_phoff + (size_t)i * 32;
        uint32_t p_type = *(uint32_t*)ph;
        if (p_type != 1) continue;
        uint32_t p_offset = *(uint32_t*)(ph + 4);
        uint32_t p_vaddr = *(uint32_t*)(ph + 8);
        uint32_t p_filesz = *(uint32_t*)(ph + 16);
        if (p_filesz) p_uc_mem_write(g_uc, BASE + p_vaddr, elf_data + p_offset, p_filesz);
    }

    // sections
    uint8_t* shstrtab = NULL;
    uint8_t* sh = elf_data + e_shoff;
    {
        uint8_t* s = sh + (size_t)e_shstrndx * e_shentsize;
        shstrtab = elf_data + *(uint32_t*)(s + 16);
    }
    uint8_t* rel_dyn = NULL; uint32_t rel_dyn_size = 0;
    uint8_t* rel_plt = NULL; uint32_t rel_plt_size = 0;
    for (int i = 0; i < e_shnum; i++) {
        uint8_t* s = sh + (size_t)i * e_shentsize;
        uint32_t name_off = *(uint32_t*)s;
        const char* nm = (const char*)(shstrtab + name_off);
        if (strcmp(nm, ".dynsym") == 0) {
            dynsym = elf_data + *(uint32_t*)(s + 16);
            dynsym_size = *(uint32_t*)(s + 20);
            dynsym_count = dynsym_size / 16;
            uint32_t link = *(uint32_t*)(s + 24);
            uint8_t* ds = sh + (size_t)link * e_shentsize;
            dynstr = elf_data + *(uint32_t*)(ds + 16);
            dynstr_size = *(uint32_t*)(ds + 20);
        } else if (strcmp(nm, ".rel.dyn") == 0) {
            rel_dyn = elf_data + *(uint32_t*)(s + 16);
            rel_dyn_size = *(uint32_t*)(s + 20);
        } else if (strcmp(nm, ".rel.plt") == 0) {
            rel_plt = elf_data + *(uint32_t*)(s + 16);
            rel_plt_size = *(uint32_t*)(s + 20);
        }
    }
    if (!dynsym || !dynstr) { printf("no dynsym/dynstr\n"); return 1; }

    // data imports
    struct { const char* name; uint32_t size; uint32_t addr; } dobjs[] = {
        {"__stack_chk_guard", 4, 0}, {"__dso_handle", 4, 0}, {"__ctype_", 260, 0}, {"__sF", 0x108, 0},
    };
    for (size_t i = 0; i < 4; i++) {
        dobjs[i].addr = heap_alloc(dobjs[i].size);
        uint8_t* z = (uint8_t*)calloc(1, dobjs[i].size);
        if (strcmp(dobjs[i].name, "__stack_chk_guard") == 0) *(uint32_t*)z = 0xDEADBEEF;
        if (strcmp(dobjs[i].name, "__ctype_") == 0) {
            for (int c = 48; c < 58; c++) z[c] = 0x04;
            for (int c = 65; c < 91; c++) z[c] = 0x03;
            for (int c = 97; c < 123; c++) z[c] = 0x03;
        }
        p_uc_mem_write(g_uc, dobjs[i].addr, z, dobjs[i].size);
        free(z);
        snprintf(dataobjs[ndataobjs].name, sizeof(dataobjs[ndataobjs].name), "%s", dobjs[i].name);
        dataobjs[ndataobjs].addr = dobjs[i].addr;
        ndataobjs++;
    }

    // undefined symbols -> stubs
    for (uint32_t i = 0; i < dynsym_count; i++) {
        uint8_t* sym = dynsym + (size_t)i * 16;
        uint32_t st_name = *(uint32_t*)sym;
        uint16_t st_shndx = *(uint16_t*)(sym + 14);
        if (st_shndx != 0 || !st_name) continue;
        const char* name = (const char*)(dynstr + st_name);
        stubs[nstubs].addr = SHIM + (uint32_t)nstubs * 4;
        snprintf(stubs[nstubs].name, sizeof(stubs[nstubs].name), "%s", name);
        shim_ids[nstubs] = shim_id_of(name);
        uint32_t bx_lr = 0xE12FFF1E;
        p_uc_mem_write(g_uc, stubs[nstubs].addr, &bx_lr, 4);
        nstubs++;
    }
    printf("a5host: %d imports shimmed\n", nstubs);

    // relocations
    uint32_t rel_total = (rel_dyn_size + rel_plt_size) / 8;
    rels = (RelEnt*)malloc(sizeof(RelEnt) * (rel_total ? rel_total : 1));
    uint8_t* rel_sections[2] = { rel_dyn, rel_plt };
    uint32_t rel_sizes[2] = { rel_dyn_size, rel_plt_size };
    for (int si = 0; si < 2; si++) {
        if (!rel_sections[si]) continue;
        for (uint32_t off = 0; off + 8 <= rel_sizes[si]; off += 8) {
            uint32_t r_offset = *(uint32_t*)(rel_sections[si] + off);
            uint32_t r_info = *(uint32_t*)(rel_sections[si] + off + 4);
            uint32_t symidx = r_info >> 8;
            uint32_t rtype = r_info & 0xff;
            uint32_t addr = BASE + r_offset;
            uint32_t cur = rd32(addr);
            uint32_t val = 0;
            if (rtype == 2 || rtype == 21 || rtype == 22) {
                uint8_t* sym = dynsym + (size_t)symidx * 16;
                uint32_t st_name = *(uint32_t*)sym;
                uint32_t st_value = *(uint32_t*)(sym + 4);
                uint16_t st_shndx = *(uint16_t*)(sym + 14);
                if (st_shndx == 0) {
                    const char* name = (const char*)(dynstr + st_name);
                    uint32_t sv = 0;
                    for (int d = 0; d < ndataobjs; d++)
                        if (strcmp(dataobjs[d].name, name) == 0) { sv = dataobjs[d].addr; break; }
                    if (!sv)
                        for (int s2 = 0; s2 < nstubs; s2++)
                            if (strcmp(stubs[s2].name, name) == 0) { sv = stubs[s2].addr; break; }
                    val = sv + (rtype == 2 ? cur : 0);
                } else {
                    val = BASE + st_value + (rtype == 2 ? cur : 0);
                }
            } else if (rtype == 23) {
                val = BASE + cur;
            } else {
                continue;
            }
            uw32(addr, val);
            if (nrels < (int)rel_total) {
                rels[nrels].addr = addr;
                snprintf(rels[nrels].name, sizeof(rels[nrels].name), "rel");
                nrels++;
            }
        }
    }
    printf("a5host: relocations applied\n");
    if (getenv("A5_PLT_PROBE")) {
        static const uint32_t pl[] = {0x5c6ac, 0x5c7cc, 0x5c7a8, 0x5c928, 0x5c838, 0x5c508, 0x5c578};
        for (unsigned k = 0; k < sizeof(pl)/sizeof(pl[0]); k++) {
            uint32_t t = 0;
            if (plt_target(BASE + pl[k], &t) && t >= SHIM && t < SHIM + 0x00100000u) {
                int i = (int)((t - SHIM) / 4);
                if (i >= 0 && i < nstubs)
                    printf("[pltprobe] %#x -> %s\n", pl[k], stubs[i].name);
            }
        }
    }
    if (getenv("A5_PLT_DEBUG")) {
        printf("[plt] got[0x1f5070] = %#x\n", rd32(BASE + 0x1f5070));
        for (int i = 0; i < nstubs; i++)
            if (strcmp(stubs[i].name, "memset") == 0)
                printf("[plt] memset stub = %#x (id %d), shim_ids[%d]=%d\n", stubs[i].addr, shim_ids[i], i, shim_ids[i]);
    }

    // JNI stubs + table
    for (int i = 0; i < 256; i++) {
        uint32_t bx_lr = 0xE12FFF1E;
        p_uc_mem_write(g_uc, JNI_STUBS + i * 4, &bx_lr, 4);
    }
    for (int i = 0; i < 256; i++) uw32(JNI_TABLE + i * 4, JNI_STUBS + i * 4);
    uint32_t ENV_TABLE = heap_alloc(4);
    uw32(ENV_TABLE, JNI_TABLE);

    // hooks: shim region + probes
    uc_hook h;
    p_uc_hook_add(g_uc, &h, UC_HOOK_CODE, (void*)code_hook, NULL, (uint64_t)SHIM, (uint64_t)(SHIM + 0x00100000 - 1));
    static const uint32_t probes[] = {
        0x13e1ac, 0x13e224, 0x13e29c, 0x13fc8c, 0x13fcdc, 0x13fd7c, 0x13e394,
        0x13e118, 0x13e380, 0x13e340, 0x13e314, 0x13e3a4,
        0x140644, 0x141194, 0x16e3e0, 0x131f4c, 0x1207ec, 0x120834, 0x131d88,
        0xbebf4, 0xc019c, 0xc0270, 0xbfae0, 0xf9acc,
        0x1001bc, 0xf96f4, 0x114f08,
        0x122bcc, 0x122ca0, 0x122d00, 0x1229bc, 0x120d30, 0x121a08, 0x120764,
        0xfeac0, 0xfe2b0, 0xf94d8, 0xfae98, 0xf9064,
        0xb6a24, 0xb9114, 0xfabfc,
        0xb7138, 0xb71b4, 0xfac30,
        0xbfae0, 0xff594, 0x77dec, 0x77704, 0x1337f0, 0x8e864, 0x11a0b8, 0x1001bc,
        0x10f674, 0xea88c, 0xfae98, 0x11a058,
        0x168358,
        0x16adb8,
        0x12bc60,
        0x16f6d4,
        0x118b54,
        0x8dae0,
        0x15688c,
        0x1791fc,
        0x147a68,
        0x14781c,
        0x148324,
        0x9f1e4,
        0x9ef18,
        0x71ad8,
        0x11613c,
        0x16016c,
        0x118c94,
        0x17920c,
        0x178fe4,
        0x1569c0,
        0x156d10,
        0x156cbc,
        0x156ac4,
        0x1189d0,
        0x17ac38, 0x17a730, 0x17a79c, 0x17a66c, 0xc97e0, 0xc9720, 0xc9714,
        0x147070,
        0x63bf4,
        0x6c18c, 0x6c2c0,
    };
    for (size_t i = 0; i < sizeof(probes)/sizeof(probes[0]); i++)
        p_uc_hook_add(g_uc, &h, UC_HOOK_CODE, (void*)code_hook, NULL,
                      (uint64_t)(BASE + probes[i]), (uint64_t)(BASE + probes[i]));
    // auto-translated functions (autogens.inc): register their entries too,
    // skipping any address already in probes[] (a duplicate hook would run the
    // native twice for one call)
    printf("a5host: %d auto functions registered\n", (int)AUTO_N);
    for (size_t i = 0; i < AUTO_N; i++) {
        int dup = 0;
        for (size_t j = 0; j < sizeof(probes)/sizeof(probes[0]); j++)
            if (probes[j] == auto_addrs[i]) { dup = 1; break; }
        if (!dup) {
            int hrc = p_uc_hook_add(g_uc, &h, UC_HOOK_CODE, (void*)code_hook, NULL,
                          (uint64_t)(BASE + auto_addrs[i]), (uint64_t)(BASE + auto_addrs[i]));
            if (hrc) printf("a5host: auto hook %#x FAILED (%d)\n", auto_addrs[i], hrc);
        } else {
            printf("a5host: auto hook %#x skipped (already probed)\n", auto_addrs[i]);
        }
    }
    // ARM profiler probes (A5_ARM_PROF=1): count the candidate hot functions
    arm_prof_on = getenv("A5_ARM_PROF") != NULL;
    if (arm_prof_on) {
        for (int i = 0; i < ARM_PROF_N; i++)
            p_uc_hook_add(g_uc, &h, UC_HOOK_CODE, (void*)code_hook, NULL,
                          (uint64_t)(BASE + arm_prof_tab[i].addr), (uint64_t)(BASE + arm_prof_tab[i].addr));
    }
    if (getenv("A5_TRACE_CREATE"))
        p_uc_hook_add(g_uc, &h, UC_HOOK_CODE, (void*)trace_create_hook, NULL,
                      (uint64_t)(BASE + 0xfabfc), (uint64_t)(BASE + 0xfade4));
    // instruction-level checkpoint differential (A5_CHK_N; A5_CHK_FN/A5_CHK_END
    // select the tracked function, default TraficGenerate)
    if (getenv("A5_CHK_N")) {
        uint32_t cf = BASE + 0xb21bc, ce = BASE + 0xb3070;
        const char* fn = getenv("A5_CHK_FN");
        if (fn) cf = BASE + (uint32_t)strtoul(fn, NULL, 16);
        const char* fe = getenv("A5_CHK_END");
        if (fe) ce = BASE + (uint32_t)strtoul(fe, NULL, 16);
        p_uc_hook_add(g_uc, &h, UC_HOOK_CODE, (void*)trg_chk_hook, NULL,
                      (uint64_t)cf, (uint64_t)(ce - 1));
    }
    // demand-paged guard past the .so image (the game overruns its bss; on
    // Android the neighbouring mappings absorb it)
    p_uc_hook_add(g_uc, &h, 3072 /* UC_HOOK_MEM_READ|WRITE */, (void*)guard_hook, NULL,
                  (uint64_t)(BASE + 0x00C00000), (uint64_t)(BASE + 0x04000000));
    // every UNMAPPED access anywhere: map a page on demand.  The native path
    // drops writes to unmapped addresses silently (mem_host -> NULL -> no-op),
    // but the interpreter would raise WRITE_UNMAPPED and abort - which used to
    // kill the differential's reference re-run mid-instruction and corrupt the
    // game state (the cascading "bad" verdicts).  These hooks fire only on
    // unmapped accesses, so there is no cost for normal memory traffic.
    p_uc_hook_add(g_uc, &h, 48 /* UC_HOOK_MEM_READ_UNMAPPED|WRITE_UNMAPPED */,
                  (void*)guard_hook, NULL, (uint64_t)0, (uint64_t)-1);
    // verification state safety: log every write of the interpreter re-run so
    // auto_verify_run can undo it (only in verify runs)
    if (getenv("A5_AUTO_VERIFY"))
        p_uc_hook_add(g_uc, &h, 2048 /* UC_HOOK_MEM_WRITE */, (void*)iw_hook, NULL,
                      (uint64_t)0, (uint64_t)-1);
    // diagnostic: guest writes into its own code pages (self-modifying code
    // forces constant TB invalidation + re-translation -> TCG buffer overflow)
    if (getenv("A5_SMC_TRACE"))
        p_uc_hook_add(g_uc, &h, 2048 /* UC_HOOK_MEM_WRITE */, (void*)smc_hook, NULL,
                      (uint64_t)BASE, (uint64_t)(BASE + 0x200000));
    if (getenv("A5_PFM_TRACE"))
        p_uc_hook_add(g_uc, &h, UC_HOOK_CODE, (void*)code_hook, NULL,
                      (uint64_t)(BASE + 0x77bf4), (uint64_t)(BASE + 0x77df8));
    if (getenv("A5_TRG_TRACE")) {
        p_uc_hook_add(g_uc, &h, UC_HOOK_CODE, (void*)code_hook, NULL,
                      (uint64_t)(BASE + 0xb23c0), (uint64_t)(BASE + 0xb2428));
        p_uc_hook_add(g_uc, &h, UC_HOOK_CODE, (void*)code_hook, NULL,
                      (uint64_t)(BASE + 0xb24d8), (uint64_t)(BASE + 0xb24e8));
    }
    if (getenv("A5_TEXDBG"))
        p_uc_hook_add(g_uc, &h, UC_HOOK_CODE, (void*)code_hook, NULL,
                      (uint64_t)(BASE + 0x120818), (uint64_t)(BASE + 0x120818));
    if (getenv("A5_SAMPLE"))
        p_uc_hook_add(g_uc, &h, UC_HOOK_CODE, (void*)sample_hook, NULL,
                      (uint64_t)(BASE + 0x5cb78), (uint64_t)(BASE + 0x1bc7b0));
    if (getenv("A5_TILT_DEBUG")) {
        p_uc_hook_add(g_uc, &h, 1024 /* UC_HOOK_MEM_READ */, (void*)tilt_read_hook, NULL,
                      (uint64_t)(BASE + 0xafe27c), (uint64_t)(BASE + 0xafe283));   // X + Y
        p_uc_hook_add(g_uc, &h, 1024, (void*)tilt_read_hook, NULL,
                      (uint64_t)(BASE + 0xafe290), (uint64_t)(BASE + 0xafe293));   // Z
        p_uc_hook_add(g_uc, &h, 2048 /* UC_HOOK_MEM_WRITE */, (void*)tilt_write_hook, NULL,
                      (uint64_t)(BASE + 0xafe27c), (uint64_t)(BASE + 0xafe293));
        // CTouchScreen statics (s_tMouseX/Y/DX/DY, count, current)
        p_uc_hook_add(g_uc, &h, 1024, (void*)tilt_read_hook, NULL,
                      (uint64_t)(BASE + 0xafd12c), (uint64_t)(BASE + 0xafd140));
        p_uc_hook_add(g_uc, &h, 2048, (void*)tilt_write_hook, NULL,
                      (uint64_t)(BASE + 0xafd12c), (uint64_t)(BASE + 0xafd140));
    }
    if (getenv("A5_MENU_WATCH")) {
        p_uc_hook_add(g_uc, &h, 2048, (void*)menu_watch_hook, NULL,
                      (uint64_t)(BASE + 0x1f7448), (uint64_t)(BASE + 0x1f7448 + 0x5f));
        p_uc_hook_add(g_uc, &h, 2048, (void*)menu_watch_hook, NULL,
                      (uint64_t)(BASE + 0x1f73a0), (uint64_t)(BASE + 0x1f73a0 + 0x77));
    }
    if (getenv("A5_UI_TOUCH")) {
        p_uc_hook_add(g_uc, &h, UC_HOOK_CODE, (void*)code_hook, NULL,
                      (uint64_t)(BASE + 0xb730c), (uint64_t)(BASE + 0xb730c));
        p_uc_hook_add(g_uc, &h, UC_HOOK_CODE, (void*)code_hook, NULL,
                      (uint64_t)(BASE + 0xb733c), (uint64_t)(BASE + 0xb733c));
    }
    // ---- the engine's static initializers (.init_array). On a real device the
    // dynamic linker runs these at dlopen, before any JNI call; some of them
    // compute screen-dependent layout constants from OS_SCREEN_W/H
    // (e.g. kLOAD_BAR_Y = OS_SCREEN_H - 0x46, kLOADING_GIRL_Y = OS_SCREEN_H -
    // 0x32, MENU_MONEY_Y = OS_SCREEN_H - 10). The host must set the screen
    // size first (the .data defaults are 854x480; the window size may differ)
    // or those constants stay 0 and the widgets land at the top-left corner.
    uw32(BASE + 0x1f5d04, (uint32_t)scr_w);
    uw32(BASE + 0x1f5d08, (uint32_t)scr_h);
    {
        int n_init = 0;
        for (int i = 0; i < e_shnum; i++) {
            uint8_t* s = sh + (size_t)i * e_shentsize;
            const char* nm = (const char*)(shstrtab + *(uint32_t*)s);
            if (strcmp(nm, ".init_array") != 0) continue;
            uint32_t off = *(uint32_t*)(s + 16);
            uint32_t sz = *(uint32_t*)(s + 20);
            for (uint32_t j = 0; j + 4 <= sz; j += 4) {
                uint32_t fn = *(uint32_t*)(elf_data + off + j);
                if (!fn) continue;
                call_emulated(BASE + fn, NULL, 0);
                n_init++;
            }
        }
        printf("a5host: ran %d static initializers (.init_array), OS_SCREEN=%dx%d\n",
               n_init, scr_w, scr_h);
    }

    // GL window
    printf("a5host: screen = %dx%d\n", scr_w, scr_h);
    if (a5gl_init(g_uc, scr_w, scr_h, "Asphalt 5 - a5host (real engine)") != 0) return 1;
    a5gl_mem_direct = mem_host;   // direct access to the host-backed emulated memory
    { const char* uf = getenv("A5GL_UIFRAME"); if (uf) a5gl_ui_dump_frame = atoi(uf); }
    g_status_log = fopen("a5host_status.txt", "w");
    if (g_status_log) { fprintf(g_status_log, "a5host status log (frame / state / load / audio)\n"); fflush(g_status_log); }

    // ---- the phone's first-run installer (GameInstaller): checks the data
    // directory and, when files are missing, shows the real installer UI and
    // downloads the master data file over loopback HTTP before the engine
    // boots. A5_INSTALL=1 forces it, A5_INSTALL_SKIP=1 skips it.
    {
        int force = getenv("A5_INSTALL") != NULL;
        int skip = getenv("A5_INSTALL_SKIP") != NULL;
        if (!skip && (force || a5install_data_incomplete(game_dir))) {
            char master[MAX_PATH + 64];
            // dist layout first (<exe>\data\packs), then the dev layout
            const char* pack = getenv("A5_PVRT") ?
                "data\\packs\\Asphalt5_Android_FULL_PVRT_342.zip" :
                "data\\packs\\Asphalt5_Android_FULL_ATC_342.zip";
            exe_relative_path(pack, master, sizeof(master));
            if (GetFileAttributesA(master) == INVALID_FILE_ATTRIBUTES) {
                const char* devpack = getenv("A5_PVRT") ?
                    "..\\..\\data\\packs\\Asphalt5_Android_FULL_PVRT_342.zip" :
                    "..\\..\\data\\packs\\Asphalt5_Android_FULL_ATC_342.zip";
                exe_relative_path(devpack, master, sizeof(master));
            }
            if (!a5install_run(game_dir, master, scr_w, scr_h)) return 0;
        }
    }

    // boot sequence (same order as the Java app)
    uw32(BASE + 0x1f84e8, ENV_TABLE);   // mEnv
    uint32_t glr_class = alloc_str("GLResLoader");
    printf("a5host: booting...\n");
    { LARGE_INTEGER _f; if (QueryPerformanceFrequency(&_f)) g_qpc_freq = (double)_f.QuadPart; }
    if (getenv("A5_STEP_PROF")) CreateThread(NULL, 0, autosample_thread, NULL, 0, NULL);
    a5audio_init();
    a5audio_set_asset_dir(game_dir);   // background predecode of raw_*.glsnd
    { const char* rp = getenv("A5_SND_RECORD"); if (rp) a5audio_record(rp); }
    call_emulated(BASE + 0x5ebb4, (uint32_t[]){ENV_TABLE, glr_class, 0}, 3);
    printf("a5host: GLResLoader_nativeInit done\n");
    call_emulated(BASE + 0x5dbfc, (uint32_t[]){ENV_TABLE, alloc_str("GLMediaPlayer"), 0}, 3);
    printf("a5host: GLMediaPlayer_nativeInit done (playSoundID=%#x loadSoundID=%#x)\n",
           rd32(BASE + 0x1f8574), rd32(BASE + 0x1f856c));
    call_emulated(BASE + 0x5cbc4, (uint32_t[]){ENV_TABLE, 0, 0, use_atc ? 0u : 1u}, 4);
    printf("a5host: Asphalt5_nativeInit done (pvrt=%d)\n", use_atc ? 0 : 1);
    call_emulated(BASE + 0x5db58, (uint32_t[]){ENV_TABLE, 0, 0, 1, (uint32_t)scr_w, (uint32_t)scr_h, 0}, 7);
    printf("a5host: Asphalt5Renderer_nativeInit done\n");
    call_emulated(BASE + 0x5d6b4, (uint32_t[]){ENV_TABLE, 0, (uint32_t)scr_w, (uint32_t)scr_h}, 4);
    printf("a5host: nativeResize done\n");
    // A5_CALLTEST=<infile> [A5_CALLTEST_OUT=<outfile>]: batch call protocol
    // (same commands as tools/oracle.c) run on the host's own working engine -
    // the Unicorn in the standalone oracle refuses some VFP instructions that
    // this engine executes fine, so this is the diff-test oracle.
    if (getenv("A5_CALLTEST")) {
        FILE* fin = fopen(getenv("A5_CALLTEST"), "r");
        const char* outp = getenv("A5_CALLTEST_OUT");
        FILE* fout = outp ? fopen(outp, "w") : stdout;
        if (!fin) { printf("a5host: cannot open %s\n", getenv("A5_CALLTEST")); return 1; }
        static char line[1 << 20];
        static uint8_t buf[1 << 16];
        while (fgets(line, sizeof(line), fin)) {
            char cmd = line[0];
            if (cmd == 'W') {
                unsigned addr; char hex[1 << 16];
                if (sscanf(line + 1, "%x %s", &addr, hex) == 2) {
                    int n = 0;
                    for (char* s = hex; s[0] && s[1]; s += 2) {
                        unsigned v; if (sscanf(s, "%2x", &v) != 1) break;
                        buf[n++] = (uint8_t)v;
                    }
                    p_uc_mem_write(g_uc, addr, buf, (size_t)n);
                    fprintf(fout, "OK\n");
                } else fprintf(fout, "ERR\n");
            } else if (cmd == 'C') {
                unsigned func, r0 = 0, r1 = 0, r2 = 0, r3 = 0;
                int npos = 0;
                int n = sscanf(line + 1, "%x %x %x %x %x%n", &func, &r0, &r1, &r2, &r3, &npos);
                if (n < 2) { fprintf(fout, "ERR\n"); continue; }
                char* p = line + 1 + npos;   // exactly after the consumed args
                uint32_t sp = STACK + STACK_SIZE - 0x2000;
                int si = 0;
                while (p && *p && si < 64) {
                    unsigned v; if (sscanf(p, "%x", &v) != 1) break;
                    uw32(sp + (uint32_t)si * 4, v);
                    si++;
                    p = strchr(p, ' '); if (p) p++; else break;
                }
                uint32_t rc = call_emulated(BASE + func, (uint32_t[]){r0, r1, r2, r3}, 4);
                if (si > 0) { /* stack args already written above sp */ }
                if (rc == 0xFFFFFFFF) fprintf(fout, "FAULT\n");
                else fprintf(fout, "OK %08x\n", rc);
            } else if (cmd == 'R') {
                unsigned addr, len;
                if (sscanf(line + 1, "%x %x", &addr, &len) == 2 && len <= sizeof(buf)) {
                    p_uc_mem_read(g_uc, addr, buf, len);
                    for (unsigned i = 0; i < len; i++) fprintf(fout, "%02x", buf[i]);
                    fprintf(fout, "\n");
                } else fprintf(fout, "ERR\n");
            } else if (cmd == 'Q') break;
            fflush(fout);
        }
        fclose(fin);
        if (fout != stdout) fclose(fout);
        return 0;
    }
    // A5_TEST_MULT=<this_hex>:<param_hex> runs CMatrix::Mult through the
    // host's own engine (the diff-test oracle) and dumps the result matrix.
    if (getenv("A5_TEST_MULT")) {
        unsigned ta = 0x50000000, pa = 0x50000100;
        float tm[16] = {1,2,3,4, 5,6,7,8, 9,10,11,12, 13,14,15,16};
        float pm[16] = {1,0,0,0, 0,2,0,0, 0,0,3,0, 0,0,0,4};
        p_uc_mem_write(g_uc, ta, tm, sizeof(tm));
        p_uc_mem_write(g_uc, pa, pm, sizeof(pm));
        uint32_t rc2 = call_emulated(BASE + 0x13e1ac, (uint32_t[]){ta, pa, 0}, 2);
        float out[16];
        p_uc_mem_read(g_uc, ta, out, sizeof(out));
        printf("[mult] rc=%#x this=M param=D ->", rc2);
        for (int i = 0; i < 16; i++) printf(" %.2f", out[i]);
        printf("\n");
        return 0;
    }

    if (getenv("A5_VCVT_TEST")) {
        // Execute one VFP instruction word (hex) on a scratch page with
        // S0 = A5_VCVT_IN (bit pattern, default 25.5) and dump all S regs.
        // Used to pin Unicorn's exact conversion/rounding semantics.
        uint32_t word = (uint32_t)strtoul(getenv("A5_VCVT_TEST"), NULL, 16);
        uint32_t code = STACK + STACK_SIZE - 0x8000;
        p_uc_mem_write(g_uc, code, &word, 4);
        float Sv[32];
        ureg_batch_s(Sv);
        uint32_t in = 0x41CC0000u;   // 25.5
        const char* iv = getenv("A5_VCVT_IN");
        if (iv) in = (uint32_t)strtoul(iv, NULL, 16);
        memcpy(&Sv[0], &in, 4);
        memcpy(&Sv[1], &in, 4);
        memcpy(&Sv[2], &in, 4);
        memcpy(&Sv[14], &in, 4);
        // A5_VCVT_SET="s15=41200000,s8=40000000,s7=40400000": per-register setup
        const char* sv2 = getenv("A5_VCVT_SET");
        if (sv2) {
            char buf[512];
            snprintf(buf, sizeof(buf), "%s", sv2);
            char* tok = strtok(buf, ",");
            while (tok) {
                int rn; unsigned vv;
                if (sscanf(tok, "s%d=%x", &rn, &vv) == 2 && rn >= 0 && rn < 32)
                    memcpy(&Sv[rn], &vv, 4);
                tok = strtok(NULL, ",");
            }
        }
        usetreg_batch_s(Sv);
        usetreg(UC_ARM_REG_PC, code);
        const char* fpv = getenv("A5_VCVT_FPSCR");
        if (fpv) usetreg(UC_ARM_REG_FPSCR, (uint32_t)strtoul(fpv, NULL, 16));
        uc_hook hh;
        p_uc_hook_add(g_uc, &hh, UC_HOOK_CODE, (void*)fpa_stop_hook, NULL,
                      (uint64_t)(code + 4), (uint64_t)(code + 4));
        int rc = p_uc_emu_start(g_uc, code, 0, 0, 0);
        float So[32];
        ureg_batch_s(So);
        printf("[vcvt] rc=%d word=%08x in=%08x fpscr_out=%08x ->", rc, word, in, ureg(UC_ARM_REG_FPSCR));
        for (int i = 0; i < 32; i++) { uint32_t u; memcpy(&u, &So[i], 4); printf(" %08x", u); }
        printf("\n");
        return 0;
    }

    if (getenv("A5_FPA_TEST")) {
        // What does the real ARM's fstmdbx/fldmdbx (FPA extended format)
        // store/load?  Execute the single instruction and dump the words.
        // A5_FPA_TEST=1 -> the InitObj prologue instruction (0x12a334);
        // A5_FPA_TEST=<hex> -> that instruction (PC=BASE+hex, stop at +4).
        uint32_t insn = 0x12a334;
        const char* av = getenv("A5_FPA_TEST");
        if (av[0] && strcmp(av, "1") != 0) insn = (uint32_t)strtoul(av, NULL, 16);
        uint32_t sp = STACK + STACK_SIZE - 0x2000;
        float Sv[32];
        ureg_batch_s(Sv);
        // distinct pattern in every d-register (d8..d15 = S16..S31): the low
        // word carries the register index, so the dump shows which were stored
        for (int i = 16; i < 32; i += 2) {
            uint32_t lo2 = 0x00000000u | (uint32_t)(i << 8);
            uint32_t hi2 = 0x3FF80000u | (uint32_t)((i + 1) << 8);
            memcpy(&Sv[i], &lo2, 4);
            memcpy(&Sv[i + 1], &hi2, 4);
        }
        const char* hv = getenv("A5_FPA_HI");
        if (hv) { uint32_t hi2 = (uint32_t)strtoul(hv, NULL, 16); memcpy(&Sv[17], &hi2, 4); }
        const char* lv = getenv("A5_FPA_LR");
        if (lv) { uint32_t lo2 = (uint32_t)strtoul(lv, NULL, 16); memcpy(&Sv[16], &lo2, 4); }
        usetreg_batch_s(Sv);
        usetreg(UC_ARM_REG_SP, sp);
        uint32_t lrv = LR_SENTINEL;
        usetreg(UC_ARM_REG_LR, lrv);
        usetreg(UC_ARM_REG_PC, BASE + insn);
        uc_hook hh;
        p_uc_hook_add(g_uc, &hh, UC_HOOK_CODE, (void*)fpa_stop_hook, NULL,
                      (uint64_t)(BASE + insn + 4), (uint64_t)(BASE + insn + 4));
        int rc = p_uc_emu_start(g_uc, BASE + insn, 0, 0, 0);
        uint32_t sp2 = ureg(UC_ARM_REG_SP);
        printf("[fpa] rc=%d insn@%#x sp %#x -> %#x (delta %d):", rc, insn, sp, sp2, (int)(sp - sp2));
        for (int i = 0; i < 12; i++) printf(" %08x", rd32(sp2 + 4 * i));
        printf("\n");
        return 0;
    }

    if (getenv("A5_ISQRT_TEST")) {
        // differential check of the native ISqrt against the interpreter
        int bad = 0, tested = 0;
        uint32_t probes[512];
        int np = 0;
        for (uint32_t x = 0; x <= 0xFFFF && np < 256; x += 257) probes[np++] = x;
        for (uint32_t x = 0x10000; x < 0xFFFFFFFFu && np < 512; x += 0x00abcdefu) probes[np++] = x;
        for (int i = 0; i < np; i++) {
            uint32_t a = native_isqrt(probes[i]);
            uint32_t b = call_emulated(BASE + 0x16d4b8, (uint32_t[]){ probes[i] }, 1);
            tested++;
            if (a != b) {
                if (bad < 8) printf("[isqrt] MISMATCH x=%#x native=%u interp=%u\n", probes[i], a, b);
                bad++;
            }
        }
        printf("[isqrt] differential: %d/%d identical\n", tested - bad, tested);
    }
    if (getenv("A5_HSV_TEST")) {
        // differential: native vs interpreter over random + edge inputs
        int bad = 0, tested = 0;
        uint32_t seed = 12345;
        for (int i = 0; i < 4000; i++) {
            seed = seed * 1664525u + 1013904223u;
            uint32_t in = (seed >> 8) & 0xffffffu;
            uint32_t outA[3] = {0xdeadbeef, 0xdeadbeef, 0xdeadbeef}, outB[3] = {0xdeadbeef, 0xdeadbeef, 0xdeadbeef};
            uint32_t ia = STACK + STACK_SIZE - 0x4000, oa = ia + 16, ib = ia + 32, ob = ia + 48;
            p_uc_mem_write(g_uc, ia, &in, 4);
            p_uc_mem_write(g_uc, ib, &in, 4);
            native_hsv_rgbtohsv(ia, oa);
            call_emulated(BASE + 0x11622c, (uint32_t[]){ ib, ob }, 2);
            uint32_t ra[3], rb[3];
            p_uc_mem_read(g_uc, oa, ra, 12);
            p_uc_mem_read(g_uc, ob, rb, 12);
            tested++;
            if (ra[0] != rb[0] || ra[1] != rb[1] || ra[2] != rb[2]) {
                if (bad < 5) printf("[hsv] MISMATCH rgb=%#x native=%#x/%#x/%#x interp=%#x/%#x/%#x\n",
                                    in, ra[0], ra[1], ra[2], rb[0], rb[1], rb[2]);
                bad++;
            }
            uint32_t c = seed & 0xffffu, f = (seed >> 16) & 1;
            uint32_t d1 = native_hsv_decode(c, f);
            uint32_t d2 = call_emulated(BASE + 0x11613c, (uint32_t[]){ c, f }, 2);
            tested++;
            if (d1 != d2) {
                if (bad < 5) printf("[hsv] DECODE MISMATCH c=%#x f=%u native=%#x interp=%#x\n", c, f, d1, d2);
                bad++;
            }
            uint32_t e1 = native_hsv_encode(in, f, (seed >> 17) & 1);
            uint32_t e2 = call_emulated(BASE + 0x1160c8, (uint32_t[]){ in, f, (seed >> 17) & 1 }, 3);
            tested++;
            if (e1 != e2) { if (bad < 5) printf("[hsv] ENC MISMATCH %#x native=%#x interp=%#x\n", in, e1, e2); bad++; }
            {
                uint32_t ha = ia + 64, hb = ia + 80, ga = ia + 96, gb = ia + 112;
                uint32_t hv[3];
                hv[0] = (seed % 36000u); hv[1] = seed & 0x3f800000u; hv[2] = (seed >> 1) & 0x3f800000u;
                float hf[3] = { (float)(seed % 360) , (float)((seed >> 8) % 100) / 100.0f, (float)((seed >> 16) % 100) / 100.0f };
                p_uc_mem_write(g_uc, ha, hf, 12);
                p_uc_mem_write(g_uc, hb, hf, 12);
                uint32_t oA = ia + 128, oB = ia + 144;
                p_uc_mem_write(g_uc, oA, &seed, 4); p_uc_mem_write(g_uc, oB, &seed, 4);
                native_hsv_torgba(ha, oA);
                call_emulated(BASE + 0x117b78, (uint32_t[]){ hb, oB }, 2);
                uint32_t qa = 0, qb = 0;
                p_uc_mem_read(g_uc, oA, &qa, 4); p_uc_mem_read(g_uc, oB, &qb, 4);
                tested++;
                if (qa != qb) {
                    if (bad < 5) printf("[hsv] TORGBA MISMATCH h=%f s=%f v=%f native=%#x interp=%#x\n",
                                        hf[0], hf[1], hf[2], qa, qb);
                    bad++;
                }
            }
        }
        printf("[hsv] differential: %d/%d identical\n", tested - bad, tested);
    }
    a5input_init(in_call, in_rd32, in_wr32, a5gl_poll_input, a5gl_client_size,
                 in_state, in_state_ptr, ENV_TABLE, scr_w, scr_h);

    for (int frame = 0; frames == 0 || frame < frames; frame++) {
        clock_t t0 = clock();
        a5gl_set_frame(frame);
        g_host_frame = frame;
        if (vt_enabled) vt_ms += 40;
        {
            static int gate_hooked = 0;
            if (getenv("A5_NITRO_DEBUG") && !gate_hooked) {
                uint32_t game = rd32(BASE + 0x1fa798);
                uint32_t sc = game ? rd32(game + 0x1bc8) : 0;
                if (sc) {
                    uc_hook gh;
                    if (p_uc_hook_add(g_uc, &gh, 2048 /* UC_HOOK_MEM_WRITE */, (void*)gate_write_hook,
                                      NULL, (uint64_t)(sc + 0x6432c), (uint64_t)(sc + 0x64330)) == 0) {
                        gate_hooked = 1;
                        printf("[gatewr] watching scene[0x6432c] at %#x\n", sc + 0x6432c);
                    }
                }
            }
        }
        if (getenv("A5_NITRO_DEBUG") && (frame % 60) == 0) {
            {
                uint32_t game = rd32(BASE + 0x1fa798);
                uint32_t sc = game ? rd32(game + 0x1bc8) : 0;
                uint32_t io = sc ? rd32(sc + 0x181c0) : 0;
                printf("[gate] f%d scene=%#x count=%d phase=%d intro=%#x cur=%d total=%d\n",
                       frame, sc, sc ? (int)rd32(sc + 0x6432c) : 0,
                       sc ? (int)rd32(sc + 0x64334) : 0, io,
                       io ? (int)rd32(io + 0x4c) : -1, io ? (int)rd32(io + 0x3c) : -1);
            }
            uint32_t mgr = rd32(BASE + 0xafe0ec);
            uint32_t pad = mgr ? rd32(mgr + 4) : 0;
            if (pad) {
                printf("[pad] f%d held=%#x f8=%#x raw10=%#x p18=%#x p1c=%#x\n",
                       frame, rd32(pad), rd32(pad + 8), rd32(pad + 0x10),
                       rd32(pad + 0x18), rd32(pad + 0x1c));
                for (int pi = 0; pi < 4; pi++) {
                    uint32_t pp = rd32(mgr + 4 + (uint32_t)pi * 4);
                    if (pp)
                        printf("[pad%d] ptr=%#x held=%#x f4=%#x f8=%#x raw10=%#x\n", pi, pp,
                               rd32(pp), rd32(pp + 4), rd32(pp + 8), rd32(pp + 0x10));
                }
                {
                    // the nitro config: CFG::m_entries[idx] = {id, value} 8-byte entries
                    static int cfg_done = 0;
                    if (!cfg_done) {
                        cfg_done = 1;
                        uint32_t ent = rd32(BASE + 0x1f59bc);
                        printf("[cfg] m_entries=%#x\n", ent);
                        if (ent) {
                            // dump the table at the SYMBOL address too
                            for (int i = 0; i < 12; i++) {
                                uint32_t a = BASE + 0x1f59bc + (uint32_t)i * 8;
                                uint32_t w0 = rd32(a), w1 = rd32(a + 4);
                                float f0, f1; memcpy(&f0, &w0, 4); memcpy(&f1, &w1, 4);
                                printf("[cfgsym] %2d: %#010x (%10d / %12.3f)  %#010x (%10d / %12.3f)\n",
                                       i, w0, (int)w0, (double)f0, w1, (int)w1, (double)f1);
                            }
                            // and the real CFG::Get results (what UpdateNitro sees)
                            const int idxs[6] = {8, 9, 0xd, 0xe, 0x12, 0x13};
                            for (int i = 0; i < 6; i++) {
                                uint32_t v = call_emulated(BASE + 0x609b4, (uint32_t[]){ (uint32_t)idxs[i] }, 1);
                                float fv; memcpy(&fv, &v, 4);
                                printf("[cfg] Get(%#x) -> %#010x int=%d float=%.3f\n",
                                       idxs[i], v, (int)v, (double)fv);
                            }
                        }
                    }
                }
                {
                    // Scene::UpdateCars' input object: scene[0x11c90] + 0x1bc0
                    uint32_t game = rd32(BASE + 0x1fa798);
                    uint32_t sc = game ? rd32(game + 0x1bc8) : 0;
                    if (sc) {
                        uint32_t r1 = rd32(sc + 0x11c90);
                        uint32_t r3 = r1 ? rd32(r1 + 0x1bc0) : 0;
                        printf("[inp] scene=%#x s11c90=%#x +1bc0=%#x f8=%#x f10=%#x (pad0=%#x)\n",
                               sc, r1, r3, r3 ? rd32(r3 + 8) : 0, r3 ? rd32(r3 + 0x10) : 0, pad);
                    }
                }
            }
        }
        // PC keyboard + mouse -> engine input (input.c)
        a5input_frame(frame);
        // Force the control mode once the settings object exists. Default 2 =
        // the engine's screen-button control: auto-acceleration, brake, nitro,
        // and digital left/right (the same bits the on-screen buttons press, so
        // the keyboard's DPAD keys drive it directly). 1 = tilt (the
        // accelerometer / keyboard feed). 0 = pedals (gas+brake, no auto-accel).
        // Re-assert periodically: loading a save replaces the settings block.
        if (frame >= 5 && !getenv("A5_NO_TILT")) {
            static int mode_logged = 0;
            const char* cm = getenv("A5_CTRL_MODE");
            uint8_t mode = cm ? (uint8_t)atoi(cm) : 2;
            if (frame == 5 || (frame % 60) == 0) {
                p_uc_mem_write(g_uc, BASE + 0x1f85f0, &mode, 1);   // CGameSettings::controlMode
                if (!mode_logged) {
                    mode_logged = 1;
                    printf("a5host: control mode forced to %d\n", mode);
                }
            }
        }
        if (frame == 5) {
            // No hardware keyboard: the engine should not enable keyboard-only
            // paths (mHasKeyboard stays 0, its BSS default).
        }
        // Debug: A5_TEST_EXIT=<frame> calls Game::Exit (the Quit path).
        if (getenv("A5_TEST_EXIT") && frame == atoi(getenv("A5_TEST_EXIT"))) {
            printf("[exit] test call Game::Exit\n"); fflush(stdout);
            call_emulated(BASE + 0x63bf4, NULL, 0);
        }
        // Debug: A5_TEST_MOVIE=<frame> plays the intro movie mid-session
        // (A5_MOVIE_SECS limits it) to test the post-movie GL state restore.
        if (getenv("A5_TEST_MOVIE") && frame == atoi(getenv("A5_TEST_MOVIE"))) {
            char mp[700];
            const char* mf = getenv("A5_MOVIE_FILE");
            if (mf && *mf) snprintf(mp, sizeof(mp), "%s", mf);
            else snprintf(mp, sizeof(mp), "%s\\A5_Ultimate_VNFS_2_854.mp4", game_dir);
            printf("[movie] mid-session test at f%d\n", frame); fflush(stdout);
            a5movie_play(mp, scr_w, scr_h);
        }
        // Debug: A5_FORCE_SAVE=<frame> sets the game's save-dirty flag so the
        // next Game::SaveData writes data.sav (verifies the save round-trip).
        if (getenv("A5_FORCE_SAVE") && frame == atoi(getenv("A5_FORCE_SAVE"))) {
            uint32_t g = rd32(BASE + 0x1fa798);
            uint8_t one = 1;
            p_uc_mem_write(g_uc, g + 0x481, &one, 1);
            uint32_t sr = call_emulated(BASE + 0x70728, (uint32_t[]){g, 1, 0}, 2);
            printf("a5host: forced save -> SaveData returned %#x\n", sr);
        }
        // A5_SAMPLE_LOAD: restrict PC sampling to loading frames (the render
        // call below belongs to the loading screen when a load is active).
        if (frame == 0) g_sample_load_only = getenv("A5_SAMPLE_LOAD") ? 1 : 0;
        g_in_load = (g_load_state != 0);
        clock_t t_r0 = clock();
        uint32_t rc = call_emulated(BASE + 0x5db48, NULL, 0);
        double dt_render = (double)(clock() - t_r0) / CLOCKS_PER_SEC;
        if (rc == 0xFFFFFFFF) { printf("a5host: nativeRender fault at f%d\n", frame); break; }

        // Periodic TCG flush: this Unicorn build commits the code buffer in
        // 4MB chunks on demand and never wraps the code pointer itself, so the
        // generated code would eventually walk out of the buffer reservation
        // (fatal AV inside unicorn.dll).  A5_TB_FLUSH=<frames> overrides the
        // interval (0 disables).
        {
            static int flush_every = -1;
            if (flush_every < 0) {
                const char* fe = getenv("A5_TB_FLUSH");
                // Default 50 frames: this build's TCG code pointer advances
                // monotonically through the 2 GB reservation and a long session
                // eventually faults inside unicorn.dll (~frame 1000).  A
                // periodic TB flush keeps the pointer bounded; A5_TB_FLUSH=0
                // disables it (A5_TB_FLUSH=<n> overrides the interval).
                flush_every = fe ? atoi(fe) : 50;
            }
            if (flush_every > 0 && frame > 0 && (frame % flush_every) == 0)
                uc_flush_tb(g_uc);
        }
        if (getenv("A5_UCW_TRACE")) {
            static unsigned long long last = 0;
            static unsigned long long last_e = 0;
            if ((frame % 50) == 0) {
                printf("[ucw] frame %d: +%llu uc_mem_write, +%llu uc_emu_start calls\n",
                       frame, g_ucw_count - last, g_emu_starts - last_e);
                last = g_ucw_count;
                last_e = g_emu_starts;
            }
        }
        if (getenv("A5_UCW_LOG")) { g_ucw_log = 1; if (g_ucw_logged >= 300) g_ucw_log = 0; }
        // The trailer/intro movie requested by the engine this frame: play it
        // now (between frames, so the GL state is clean) and then let the
        // engine advance (movie.c clears game+0x1d72 via the flag below).
        if (g_movie_pending) {
            g_movie_pending = 0;
            a5movie_play(g_movie_path, scr_w, scr_h);
            uint32_t gm = rd32(BASE + 0x1fa798);
            if (gm) uw32(gm + 0x1d72, 0);
        }
        // Fast load: the engine advances the loading progress ONE step per
        // frame (1407 steps => 30-60 s of loading screen). Run extra
        // GS_LoadGame::Update calls per frame - the final step is left to the
        // engine's own call so the state switch happens normally.
        //
        // Track the live GS_LoadGame object here, not only from the state-
        // transition hook: re-entering a race reuses the state and produced no
        // push/change notification, so the second load ran at 1 step/frame.
        {
            uint32_t gm = rd32(BASE + 0x1fa798);
            uint32_t st = 0;
            if (gm) {
                int32_t ix = (int32_t)rd32(gm + 0x1d38);
                if (ix >= 0) st = rd32(gm + 0x1d3c + (uint32_t)ix * 4);
            }
            g_load_state = (st && rd32(st) == BASE + 0x1efe18) ? st : 0;
        }
        {
            static int was_load = 0;
            if (g_load_state) was_load = 1;
            else if (was_load) { was_load = 0; a5gl_set_title_progress(-1); }
        }
        clock_t t_load0 = clock();
        if (g_load_state && !getenv("A5_NO_FASTLOAD")) {
            // A5_LOAD_BUDGET=<seconds> caps the extra loading work per frame
            // (0 = the default: up to 11 steps, which merges the atomic
            // engine steps into one short block instead of several hitches).
            double budget = 0.0;
            { const char* lb = getenv("A5_LOAD_BUDGET"); if (lb) budget = atof(lb); }
            for (int k = 0; k < 11; k++) {
                if (k > 0 && budget > 0.0 &&
                    (double)(clock() - t_load0) / CLOCKS_PER_SEC >= budget) break;
                uint32_t prog = rd32(g_load_state + 0x78);
                uint32_t target = rd32(g_load_state + 0x7c);
                if (prog + 1 >= target) break;
                clock_t t_step = clock();
                g_step_prof = getenv("A5_STEP_PROF") ? 1 : 0;
                g_gl_ticks = g_shim_ticks = 0;
                g_gl_calls = g_shim_calls = 0;
                if (g_step_prof) {
                    memset((void*)g_autosample_hist, 0, sizeof(g_autosample_hist));
                    memset(g_shim_counts, 0, sizeof(g_shim_counts));
                    memset(g_lr_cnt, 0, sizeof(g_lr_cnt));
                    memset(g_wcur_cnt, 0, sizeof(g_wcur_cnt));
                    g_lr_n = 0;
                    g_last_auto = 0;
                    g_autosample_run = 1;
                }
                if (getenv("A5_LOAD_PROF"))
                    call_emulated_sliced(BASE + 0xbfae0, (uint32_t[]){g_load_state, 0}, 1);
                else if (getenv("A5_LOAD_SLICE"))
                    call_emulated_timeout(BASE + 0xbfae0, (uint32_t[]){g_load_state, 0}, 1, 1);
                else
                    call_emulated(BASE + 0xbfae0, (uint32_t[]){g_load_state, 0}, 1);
                g_autosample_run = 0;
                double dt_step = (double)(clock() - t_step) / CLOCKS_PER_SEC;
                if (dt_step > 0.12) {
                    uint32_t np = rd32(g_load_state + 0x78);
                    printf("[loadstep] f%d k=%d progress %u -> %u took %.2fs last_auto=%#x", frame, k, prog, np, dt_step, (uint32_t)g_last_auto);
                    if (g_step_prof) {
                        printf(" (gl %.2fs/%llu, shim %.2fs/%llu)", step_secs(g_gl_ticks),
                               g_gl_calls, step_secs(g_shim_ticks), g_shim_calls);
                        for (int r = 0; r < 3; r++) {
                            int best = -1; unsigned long long bv = 0;
                            for (int i = 0; i < 256; i++)
                                if (g_shim_counts[i] > bv) { bv = g_shim_counts[i]; best = i; }
                            if (best < 0 || !bv) break;
                            const char* nm = "?";
                            for (size_t si = 0; si < sizeof(SHIM_TABLE)/sizeof(SHIM_TABLE[0]); si++)
                                if (SHIM_TABLE[si].id == best) { nm = SHIM_TABLE[si].name; break; }
                            printf(" %s:%llu", nm, bv);
                            g_shim_counts[best] = 0;
                        }
                        for (int r = 0; r < 3; r++) {
                            int best = -1; uint32_t bv = 0;
                            for (int i = 0; i < g_lr_n; i++)
                                if (g_lr_cnt[i] > bv) { bv = g_lr_cnt[i]; best = i; }
                            if (best < 0 || !bv) break;
                            printf(" ilr:%#x:%u", g_lr_addr[best], bv);
                            g_lr_cnt[best] = 0;
                        }
                        for (int r = 0; r < 3; r++) {
                            int best = -1; uint32_t bv = 0;
                            for (int i = 0; i < 2048; i++)
                                if (g_wcur_cnt[i] > bv) { bv = g_wcur_cnt[i]; best = i; }
                            if (best < 0 || !bv) break;
                            printf(" cur:%#x:%u", best < (int)AUTO_N ? auto_addrs[best] : 0, bv);
                            g_wcur_cnt[best] = 0;
                        }
                        for (int r = 0; r < 5; r++) {
                            int best = -1; uint32_t bv = 0;
                            for (int i = 0; i < (int)AUTO_N; i++)
                                if (g_autosample_hist[i] > bv) { bv = g_autosample_hist[i]; best = i; }
                            if (best < 0 || !bv) break;
                            printf(" %#x:%u", auto_addrs[best], bv);
                            g_autosample_hist[best] = 0;
                        }
                    }
                    printf("\n");
                    fflush(stdout);
                }
            }
        }
        double dt_load = (double)(clock() - t_load0) / CLOCKS_PER_SEC;
        double dt = (double)(clock() - t0) / CLOCKS_PER_SEC;
        g_last_frame = frame;
        if (dt > 0.25) {
            uint32_t pg = g_load_state ? rd32(g_load_state + 0x78) : 0;
            uint32_t tg = g_load_state ? rd32(g_load_state + 0x7c) : 0;
            printf("[slow] f%d total=%.2fs load=%.2fs render=%.2fs state=%s progress=%u/%u\n",
                   frame, dt, dt_load, dt_render, g_cur_state, pg, tg);
            fflush(stdout);
        }
        if (frames != 0 || (frame % 100) == 0) printf("a5host: frame %d (%.3fs) ticks=%llu\n", frame, dt, (unsigned long long)g_tick_count);
        if (getenv("A5_NATIVE_HUD") && (frame % 60) == 0) {
            uint64_t tot = g_nat_native + g_nat_gated;
            char tb[128];
            snprintf(tb, sizeof(tb), "Asphalt 5 - native %.1f%%",
                     tot ? 100.0 * (double)g_nat_native / (double)tot : 100.0);
            a5gl_set_title_text(tb);
        }
        if (g_status_log && (frame % 120) == 0) {
            uint32_t prog = g_load_state ? rd32(g_load_state + 0x78) : 0;
            uint32_t tgt = g_load_state ? rd32(g_load_state + 0x7c) : 0;
            char sbuf[160]; a5audio_status(sbuf, sizeof(sbuf));
            fprintf(g_status_log, "frame %d state=%s load=%u/%u | %s\n", frame, g_cur_state, prog, tgt, sbuf);
            fflush(g_status_log);
        }
        if (shot && frame == shot_frame) a5gl_screenshot_bmp(shot);
        { // SP sanity: the emulated stack pointer must stay inside the stack
          // region; a zero/garbage SP means something corrupted the engine's
          // stack (A5_SP_CHECK=1 to report).
          static int spchk = -1;
          if (spchk == -1) spchk = getenv("A5_SP_CHECK") ? 1 : 0;
          if (spchk && frame > 10) {
              uint32_t sp = ureg(UC_ARM_REG_SP);
              if (sp < STACK || sp >= STACK + STACK_SIZE) {
                  printf("a5host: [spcheck] frame %d SP=%#x OUT OF RANGE (state=%s)\n", frame, sp, g_cur_state);
              }
          }
        }
        { const char* ud = getenv("A5_UI_DUMP_FRAME");
          static int ui_dumped = 0;
          if (ud && !ui_dumped && frame == atoi(ud)) { ui_dumped = 1; ui_dump(); } }
        { // A5_TRACE=<file>: per-frame collision state of the first car seen by
          // the collision native - ON/OFF runs must produce identical traces.
          static FILE* tf = NULL; static int trace_init = 0;
          if (!trace_init) {
              trace_init = 1;
              const char* tp = getenv("A5_TRACE");
              if (tp) { tf = fopen(tp, "w"); printf("a5host: tracing to %s\n", tp); }
          }
          if (tf && g_trace_car) {
              fprintf(tf, "%d %08x", frame, g_trace_car);
              const uint32_t offs[] = {0x3c8,0x3cc,0x3d0,0x3d4,0x3d8,0x3dc,0x240,0x250,0x484,0x4b0,0x4b4,0xb4,
                                       0x214,0x218,0x21c,0x220,0x224,0x228,0x22c,0x230,0x234,0x238,0x23c};
              for (size_t k = 0; k < sizeof(offs)/sizeof(offs[0]); k++)
                  fprintf(tf, " %08x", rd32(g_trace_car + offs[k]));
              fprintf(tf, "\n");
          }
        }
        if (getenv("A5_GATE_WATCH") && frame == 60) {
            uint32_t g = rd32(BASE + 0x1fa798);
            if (g) {
                uc_hook gh;
                p_uc_hook_add(g_uc, &gh, 2048 /* UC_HOOK_MEM_WRITE */, (void*)gate_watch_hook, NULL,
                              (uint64_t)(g + 0x849c), (uint64_t)(g + 0x849f));
                printf("[gatew] watching game+0x849c (game=%#x)\n", g);
            }
        }
        if (frame == 60) a5gl_probe_pixels();
        // A5_NITRO_DEBUG: trace the pad's pressed/held nibbles + host latch.
        if (getenv("A5_NITRO_DEBUG") && frame >= 400) {
            uint32_t game = rd32(BASE + 0x1fa798);
            uint32_t mgr = game ? rd32(game + 0x1bc0) : 0;
            if (mgr) {
                uint32_t pr = rd32(mgr + 8), hd = rd32(mgr + 0x10);
                static uint32_t lp = 0xFFFFFFFFu, lh = 0xFFFFFFFFu, ll = 0xFFFFFFFFu;
                if (pr != lp || hd != lh || g_press_latch != ll) {
                    printf("[pad] f%d pressed=%#x held=%#x latch=%#x ticks=%llu\n",
                           frame, pr, hd, g_press_latch,
                           (unsigned long long)g_tick_count);
                    fflush(stdout);
                    lp = pr; lh = hd; ll = g_press_latch;
                }
            }
        }
        if (frame == 330) {
            // the engine's global forced car color (Shader::staticForcedR/G/B/A)
            float fr, fg, fb, fa;
            p_uc_mem_read(g_uc, BASE + 0x1f7c30, &fr, 4);
            p_uc_mem_read(g_uc, BASE + 0x1f7c34, &fg, 4);
            p_uc_mem_read(g_uc, BASE + 0x1f7c38, &fb, 4);
            p_uc_mem_read(g_uc, BASE + 0x1f7c3c, &fa, 4);
            printf("[forced] staticForced = (%.3f, %.3f, %.3f, %.3f)\n", fr, fg, fb, fa);
        }
        if (live_shot && frame >= 4) {
            static int shot_every = -1;
            if (shot_every == -1) {
                const char* se = getenv("A5BOOT_SHOT_EVERY");
                shot_every = se ? atoi(se) : 0;
                if (shot_every < 0) shot_every = 0;
            }
            // A5BOOT_SHOT_TICKS=<n>: one screenshot when the logic tick count
            // reaches n (frame-independent A/B for configurations that load at
            // different speeds)
            static long shot_ticks = -2;
            static int tick_shot_done = 0;
            if (shot_ticks == -2) {
                const char* st2 = getenv("A5BOOT_SHOT_TICKS");
                shot_ticks = st2 ? atol(st2) : -1;
            }
            if (shot_ticks >= 0 && !tick_shot_done && (long)g_tick_count >= shot_ticks) {
                tick_shot_done = 1;
                char lpath[600];
                snprintf(lpath, sizeof(lpath), "%s_ticks%ld.bmp", live_shot, (long)g_tick_count);
                a5gl_screenshot_bmp(lpath);
                printf("a5host: tick shot at frame %d (ticks=%lld): %s\n",
                       frame, (long long)g_tick_count, lpath);
            }
            int take = 0;
            if (shot_ticks >= 0) take = 0;   // tick-shot mode: no periodic shots
            else if (shot_every > 0) take = (frame % shot_every) == 0;
            else take = ((frame < 100 && (frame % 10) == 0) || (frame % 100) == 0);
            if (take) {
                char lpath[600];
                snprintf(lpath, sizeof(lpath), "%s_%04d.bmp", live_shot, frame);
                a5gl_screenshot_bmp(lpath);
            }
        }
        a5gl_swap();
        // ---- frame cap (A5_FPS, default 60; 0 = unlimited) ----------------
        // The engine advances its logic at ~60 Hz but will render as fast as
        // the GPU allows.  Presenting at 60 keeps one logic tick per frame,
        // which the input edge/latch logic (nitro!) expects.
        {
            static int fps_cap = -1;
            static double fps_next = 0.0;
            if (fps_cap < 0) {
                const char* f = getenv("A5_FPS");
                if (f) {
                    fps_cap = atoi(f);
                } else {
                    // Default to the desktop refresh rate (120/144 Hz panels
                    // get 120/144; a 60 Hz panel stays at 60).  Logic and
                    // input are frame-rate independent, so this is safe.
                    DEVMODEA dm;
                    memset(&dm, 0, sizeof(dm));
                    dm.dmSize = sizeof(dm);
                    fps_cap = 60;
                    if (EnumDisplaySettingsA(NULL, ENUM_CURRENT_SETTINGS, &dm) &&
                        dm.dmDisplayFrequency > 1)
                        fps_cap = (int)dm.dmDisplayFrequency;
                    if (fps_cap < 30) fps_cap = 60;
                    if (fps_cap > 240) fps_cap = 240;
                }
                if (fps_cap < 0) fps_cap = 0;
                if (fps_cap > 0) timeBeginPeriod(1);
                printf("a5host: fps cap %d%s\n", fps_cap,
                       fps_cap ? "" : " (unlimited)");
            }
            if (fps_cap > 0 && g_qpc_freq > 0.0) {
                LARGE_INTEGER q;
                QueryPerformanceCounter(&q);
                double now = (double)q.QuadPart / g_qpc_freq;
                double period = 1.0 / (double)fps_cap;
                if (fps_next <= 0.0) fps_next = now;
                fps_next += period;
                double wait = fps_next - now;
                if (wait > 0.0015)
                    Sleep((DWORD)((wait - 0.0005) * 1000.0));
                for (;;) {
                    QueryPerformanceCounter(&q);
                    now = (double)q.QuadPart / g_qpc_freq;
                    if (now >= fps_next - 0.00035) break;
                    Sleep(0);
                }
                // A long stall (loading step, movie) must not make the loop
                // try to catch up with a burst of frames.
                if (now > fps_next + 0.250) fps_next = now;
            }
        }
        if (!a5gl_poll()) { printf("a5host: window closed\n"); break; }
    }
    printf("a5host: done\n");
    if (getenv("A5_SAMPLE")) sample_dump();
    if (getenv("A5_NEST_PROF")) nest_dump();
    if (getenv("A5_LOAD_PROF")) loadprof_dump();
    if (getenv("A5_NATIVE_REPORT")) native_report_dump();
    if (getenv("A5_HOST_REPORT")) {
        printf("[host] calls native=%llu arm=%llu targets=%d emu_starts=%llu\n",
               (unsigned long long)g_host_native, (unsigned long long)g_host_emu,
               g_host_emu_n, (unsigned long long)g_emu_starts);
        for (int r = 0; r < 20; r++) {
            int best = -1; uint64_t bv = 0;
            for (int i = 0; i < g_host_emu_n; i++)
                if (g_host_emu_cnt[i] > bv) { bv = g_host_emu_cnt[i]; best = i; }
            if (best < 0 || !bv) break;
            printf("[host] emu %#x x%llu\n", g_host_emu_addr[best],
                   (unsigned long long)bv);
            g_host_emu_cnt[best] = 0;
        }
    }
    if (arm_prof_on) {
        printf("[armprof] executions per candidate function:\n");
        for (int i = 0; i < ARM_PROF_N; i++)
            if (arm_prof_counts[i])
                printf("[armprof] %-40s %llu\n", arm_prof_tab[i].name, (unsigned long long)arm_prof_counts[i]);
    }
    // save progress on exit (a no-op unless something changed: the game's
    // dirty flag at game+0x481 gates Game::SaveData)
    {
        uint32_t g = rd32(BASE + 0x1fa798);
        if (g) {
            uint8_t dirty = 0;
            p_uc_mem_read(g_uc, g + 0x481, &dirty, 1);
            if (dirty) {
                call_emulated(BASE + 0x70728, (uint32_t[]){g, 1, 0}, 2);
                printf("a5host: progress saved on exit\n");
            }
        }
    }
    {
        char sbuf[200];
        a5audio_status(sbuf, sizeof(sbuf));
        printf("[snd] %s\n", sbuf);
    }
    a5gl_dump_stats();
    a5audio_shutdown();
    if (g_status_log) { fprintf(g_status_log, "exit\n"); fclose(g_status_log); g_status_log = NULL; }
    // Hard guarantee that no process lingers (audio/GL teardown can stall on
    // some drivers; a leftover instance slows the next launch to a crawl).
    fflush(stdout);   // ExitProcess skips the CRT flush - keep the log intact
    ExitProcess(0);
    return 0;
}
