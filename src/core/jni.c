#define _CRT_SECURE_NO_WARNINGS
#include "guest.h"
#include "audio.h"
#include "platform/movie.h"

#include <windows.h>
#include <stdlib.h>

/*
 * Host JNIEnv.
 *
 * The native library is a normal Android JNI consumer: it caches method IDs
 * and calls through a function table.  Instead of shipping a Java runtime we
 * build a small guest-side JNIEnv whose entries are synthetic guest addresses.
 * The translator dispatches those addresses to jni_dispatch(), preserving the
 * original native call sites byte-for-byte.
 */

#define JNI_ENV_ADDR   0x70001000u
#define JNI_TABLE_ADDR 0x70001080u
#define JNI_STUB_BASE  0x72000000u
#define JNI_METHOD_TAG 0x60000000u

typedef struct {
    uint32_t tag;
    uint32_t len;
    char data[1];
} GuestString;
typedef struct {
    uint32_t tag;
    uint32_t len;
    uint8_t data[1];
} GuestArray;

#define TAG_STRING 0x4A535452u
#define TAG_ARRAY  0x4A415252u

typedef struct { char name[96]; char sig[96]; } MethodRec;
static MethodRec g_methods[256];
static int g_method_count;

static char g_jni_path[2048];

/* Local/global reference tracking for guest strings and arrays.  The game
 * may keep a global ref after deleting the local one, so freeing on
 * DeleteLocalRef alone would leave the global ref dangling. */
#define JNI_REF_MAX 8192
typedef struct { uint32_t p; unsigned short local, global; } JniRef;
static JniRef g_refs[JNI_REF_MAX];
static int g_ref_count;

static int guest_ptr(uint32_t p)
{
    return p >= 0x11000000u && p < guest_heap_top();
}

/* Race-time refs are kept until the race ends, then freed in one batch.
 * Menu/loading refs are kept for the process lifetime because 3.4.1 still
 * reads some of them after DeleteLocalRef. */
#define JNI_DEFER_MAX 131072
static uint32_t g_menu_deferred[JNI_DEFER_MAX];
static int g_menu_deferred_n;
static uint32_t g_race_deferred[JNI_DEFER_MAX];
static int g_race_deferred_n;

static void defer_list_free(uint32_t *list, int *count)
{
    for (int i = 0; i < *count; i++)
        guest_free(list[i]);
    *count = 0;
}

void jni_free_menu_deferred(void)
{
    defer_list_free(g_menu_deferred, &g_menu_deferred_n);
}

void jni_free_race_deferred(void)
{
    defer_list_free(g_race_deferred, &g_race_deferred_n);
}

void jni_free_deferred(void)
{
    jni_free_menu_deferred();
    jni_free_race_deferred();
}

static void jni_defer(uint32_t p, int race)
{
    uint32_t *list = race ? g_race_deferred : g_menu_deferred;
    int *count = race ? &g_race_deferred_n : &g_menu_deferred_n;
    if (*count < JNI_DEFER_MAX)
        list[(*count)++] = p;
    else
        guest_free(p);
}

static JniRef *ref_find(uint32_t p)
{
    for (int i = 0; i < g_ref_count; i++)
        if (g_refs[i].p == p) return &g_refs[i];
    return NULL;
}

static void ref_track(uint32_t p)
{
    JniRef *r;
    if (!guest_ptr(p)) return;
    r = ref_find(p);
    if (r) {
        if (r->local < 0xffff) r->local++;
        return;
    }
    if (g_ref_count >= JNI_REF_MAX) return;
    r = &g_refs[g_ref_count++];
    r->p = p;
    r->local = 1;
    r->global = 0;
}

static void ref_global(uint32_t p)
{
    JniRef *r;
    if (!guest_ptr(p)) return;
    r = ref_find(p);
    if (!r) {
        if (g_ref_count >= JNI_REF_MAX) return;
        r = &g_refs[g_ref_count++];
        r->p = p;
        r->local = 1;
        r->global = 0;
    }
    if (r->global < 0xffff) r->global++;
}

static int ref_remove(JniRef *r)
{
    int i = (int)(r - g_refs);
    g_refs[i] = g_refs[--g_ref_count];
    return 1;
}

static int ref_drop_local(uint32_t p)
{
    JniRef *r = ref_find(p);
    if (!r) return 0;
    if (r->local) r->local--;
    if (!r->local && !r->global) return ref_remove(r);
    return 0;
}

static int ref_drop_global(uint32_t p)
{
    JniRef *r = ref_find(p);
    if (!r) return 0;
    if (r->global) r->global--;
    if (!r->local && !r->global) return ref_remove(r);
    return 0;
}

static const char *jstr(uint32_t h)
{
    if (!h) return "";
    GuestString *s = (GuestString *)G(h);
    if (s->tag != TAG_STRING) return "";
    return s->data;
}

static uint32_t make_string(const char *s)
{
    size_t n = s ? strlen(s) : 0;
    uint32_t p = guest_alloc(sizeof(GuestString) + n);
    GuestString *g = (GuestString *)G(p);
    g->tag = TAG_STRING; g->len = (uint32_t)n;
    if (n) memcpy(g->data, s, n);
    g->data[n] = 0;
    ref_track(p);
    return p;
}

static uint32_t make_array(const void *data, size_t n)
{
    uint32_t p = guest_alloc(sizeof(GuestArray) + n);
    GuestArray *a = (GuestArray *)G(p);
    a->tag = TAG_ARRAY; a->len = (uint32_t)n;
    if (n && data) memcpy(a->data, data, n);
    ref_track(p);
    return p;
}

static GuestArray *get_array(uint32_t p)
{
    if (!p) return NULL;
    GuestArray *a = (GuestArray *)G(p);
    return a->tag == TAG_ARRAY ? a : NULL;
}

static uint32_t find_method(const char *name, const char *sig)
{
    for (int i = 0; i < g_method_count; i++)
        if (!strcmp(g_methods[i].name, name)) return JNI_METHOD_TAG | (uint32_t)i;
    if (g_method_count >= 256) return 0;
    int i = g_method_count++;
    strncpy(g_methods[i].name, name, 95);
    strncpy(g_methods[i].sig, sig ? sig : "", 95);
    if (getenv("A5_SND_DEBUG"))
        fprintf(stderr, "[jni] lookup %s %s -> %08x\n", name, sig ? sig : "",
                JNI_METHOD_TAG | (uint32_t)i);
    return JNI_METHOD_TAG | (uint32_t)i;
}

static const char *method_name(uint32_t id)
{
    if ((id & 0xFF000000u) != JNI_METHOD_TAG) return "";
    uint32_t i = id & 0xFFFFFFu;
    return i < (uint32_t)g_method_count ? g_methods[i].name : "";
}

/* ---- resource lookup -------------------------------------------------- */

static int exists(const char *p)
{
    DWORD a = GetFileAttributesA(p);
    return a != INVALID_FILE_ATTRIBUTES && !(a & FILE_ATTRIBUTE_DIRECTORY);
}

static uint8_t *read_host_file(const char *path, size_t *out_len)
{
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    if (n < 0) { fclose(f); return NULL; }
    uint8_t *p = (uint8_t *)malloc((size_t)n ? (size_t)n : 1);
    if (!p) { fclose(f); return NULL; }
    if (n && fread(p, 1, (size_t)n, f) != (size_t)n) { free(p); fclose(f); return NULL; }
    fclose(f); *out_len = (size_t)n; return p;
}

static uint8_t *load_resource(const char *name, size_t *out_len)
{
    const char *q = name;
    while (*q == '.' || *q == '/') q++;
    const char *base = strrchr(q, '/'); base = base ? base + 1 : q;
    const char *cands[40]; char buf[40][2048]; int n = 0;
    const char *la = getenv("LOCALAPPDATA");
    if (la && *la) {
        snprintf(buf[14], sizeof(buf[14]), "%s\\Asphalt5\\engine\\apk\\res\\raw\\%s", la, base);
        cands[n++] = buf[14];
        snprintf(buf[15], sizeof(buf[15]), "%s\\Asphalt5\\engine\\apk\\assets\\%s", la, q);
        cands[n++] = buf[15];
        snprintf(buf[16], sizeof(buf[16]), "%s\\Asphalt5\\engine\\apk337\\assets\\%s", la, q);
        cands[n++] = buf[16];
        snprintf(buf[27], sizeof(buf[27]), "%s\\Asphalt5\\engine\\apk341\\assets\\%s", la, q);
        cands[n++] = buf[27];
        snprintf(buf[28], sizeof(buf[28]), "%s\\Asphalt5\\engine\\apk341\\res\\raw\\%s", la, base);
        cands[n++] = buf[28];
    }
    { const char *root = getenv("A5_DATA_DIR");
      if (root && *root) {
          snprintf(buf[17], sizeof(buf[17]), "%s/%s", root, q); cands[n++] = buf[17];
          snprintf(buf[18], sizeof(buf[18]), "%s/%s", root, base); cands[n++] = buf[18];
      } }
    snprintf(buf[29], sizeof(buf[29]), "engine/apk341/assets/%s", q); cands[n++] = buf[29];
    snprintf(buf[30], sizeof(buf[30]), "engine/apk341/res/raw/%s", base); cands[n++] = buf[30];
    snprintf(buf[31], sizeof(buf[31]), "gamefiles/apk341/res/raw/%s", base); cands[n++] = buf[31];
    snprintf(buf[0], sizeof(buf[0]), "engine/apk337/assets/%s", q); cands[n++] = buf[0];
    snprintf(buf[1], sizeof(buf[1]), "engine/apk/assets/%s", q); cands[n++] = buf[1];
    snprintf(buf[12], sizeof(buf[12]), "gamefiles/apk337/assets/%s", q); cands[n++] = buf[12];
    snprintf(buf[13], sizeof(buf[13]), "gamefiles/apk/assets/%s", q); cands[n++] = buf[13];
    snprintf(buf[19], sizeof(buf[19]), "engine/apk337/res/raw/%s", base); cands[n++] = buf[19];
    snprintf(buf[20], sizeof(buf[20]), "gamefiles/apk337/res/raw/%s", base); cands[n++] = buf[20];
    snprintf(buf[21], sizeof(buf[21]), "original/apk337/res/raw/%s", base); cands[n++] = buf[21];
    snprintf(buf[22], sizeof(buf[22]), "work/apk337/res/raw/%s", base); cands[n++] = buf[22];
    snprintf(buf[23], sizeof(buf[23]), "engine/apk/res/raw/%s", base); cands[n++] = buf[23];
    snprintf(buf[24], sizeof(buf[24]), "gamefiles/apk/res/raw/%s", base); cands[n++] = buf[24];
    snprintf(buf[25], sizeof(buf[25]), "original/apk/res/raw/%s", base); cands[n++] = buf[25];
    snprintf(buf[26], sizeof(buf[26]), "work/apk/res/raw/%s", base); cands[n++] = buf[26];
    snprintf(buf[32], sizeof(buf[32]), "gamefiles/GloftA5HD341/%s", q); cands[n++] = buf[32];
    snprintf(buf[33], sizeof(buf[33]), "gamefiles/GloftA5HD341/%s", base); cands[n++] = buf[33];
    snprintf(buf[34], sizeof(buf[34]), "assets/GloftA5HD341/%s", q); cands[n++] = buf[34];
    snprintf(buf[35], sizeof(buf[35]), "assets/GloftA5HD341/%s", base); cands[n++] = buf[35];
    snprintf(buf[2], sizeof(buf[2]), "gamefiles/GloftA5HD337/%s", q); cands[n++] = buf[2];
    snprintf(buf[3], sizeof(buf[3]), "gamefiles/GloftA5HD337/%s", base); cands[n++] = buf[3];
    snprintf(buf[4], sizeof(buf[4]), "assets/GloftA5HD337/%s", q); cands[n++] = buf[4];
    snprintf(buf[5], sizeof(buf[5]), "assets/GloftA5HD337/%s", base); cands[n++] = buf[5];
    snprintf(buf[6], sizeof(buf[6]), "original/apk337/assets/%s", q); cands[n++] = buf[6];
    snprintf(buf[7], sizeof(buf[7]), "work/apk337/assets/%s", q); cands[n++] = buf[7];
    snprintf(buf[8], sizeof(buf[8]), "gamefiles/GloftA5HD/%s", q); cands[n++] = buf[8];
    snprintf(buf[9], sizeof(buf[9]), "assets/GloftA5HD/%s", q); cands[n++] = buf[9];
    snprintf(buf[10], sizeof(buf[10]), "GloftA5HD337/%s", q); cands[n++] = buf[10];
    snprintf(buf[11], sizeof(buf[11]), "GloftA5HD/%s", q); cands[n++] = buf[11];
    for (int i = 0; i < n; i++) {
        snprintf(g_jni_path, sizeof(g_jni_path), "%s", cands[i]);
        if (exists(g_jni_path)) {
            if (g_verbose) fprintf(stderr, "[jni] resource %s -> %s\n", name, g_jni_path);
            return read_host_file(g_jni_path, out_len);
        }
    }
    if (g_verbose) fprintf(stderr, "[jni] resource MISS %s\n", name);
    return NULL;
}

static uint32_t resource_full(const char *name)
{
    size_t n = 0; uint8_t *p = load_resource(name, &n);
    if (!p) return 0;
    uint32_t h = make_array(p, n); free(p); return h;
}

static uint32_t resource_bytes(const char *name, uint32_t off, uint32_t len)
{
    size_t n = 0; uint8_t *p = load_resource(name, &n);
    if (!p) return 0;
    uint32_t h = 0;
    if (off < n) { uint32_t c = (uint32_t)(n - off); if (c > len) c = len; h = make_array(p + off, c); }
    free(p); return h;
}

static uint32_t resource_len(const char *name)
{
    size_t n = 0; uint8_t *p = load_resource(name, &n);
    free(p); return (uint32_t)n;
}

/* ---- audio bridge ------------------------------------------------------ *
 * The engine's SoundManager calls the Java GLMediaPlayer static methods
 * (loadSound/playSound/...).  The Java layer is not present, so these calls
 * are routed to the native WinMM/stb_vorbis backend in audio.c.  The assets
 * are raw_%03d.ogg in GloftA5HD (the same fallback the Java code uses).
 * ----------------------------------------------------------------------- */

static int g_audio_ready;

static const char *audio_asset_dir(void)
{
    static const char *dirs[] = {
        "gamefiles/GloftA5HD341", "assets/GloftA5HD341", "GloftA5HD341",
        "gamefiles/GloftA5HD337", "assets/GloftA5HD337", "GloftA5HD337",
        "gamefiles/GloftA5HD", "assets/GloftA5HD", "GloftA5HD"
    };
    static char chosen[512];
    if (chosen[0]) return chosen;
    const char *root = getenv("A5_DATA_DIR");
    if (root && *root) {
        char probe[600];
        snprintf(probe, sizeof(probe), "%s/raw_000.ogg", root);
        DWORD a = GetFileAttributesA(probe);
        if (a != INVALID_FILE_ATTRIBUTES && !(a & FILE_ATTRIBUTE_DIRECTORY)) {
            snprintf(chosen, sizeof(chosen), "%s", root);
            return chosen;
        }
    }
    for (int i = 0; i < (int)(sizeof(dirs) / sizeof(dirs[0])); i++) {
        char probe[600];
        snprintf(probe, sizeof(probe), "%s/raw_000.ogg", dirs[i]);
        DWORD a = GetFileAttributesA(probe);
        if (a != INVALID_FILE_ATTRIBUTES && !(a & FILE_ATTRIBUTE_DIRECTORY)) {
            snprintf(chosen, sizeof(chosen), "%s", dirs[i]);
            return chosen;
        }
    }
    return NULL;
}

static void audio_ensure_init(void)
{
    if (g_audio_ready) return;
    g_audio_ready = 1;
    if (a5audio_init() != 0) return;
    const char *dir = audio_asset_dir();
    if (dir) a5audio_set_asset_dir(dir);
    { const char *rp = getenv("A5_SND_RECORD"); if (rp && *rp) a5audio_record(rp); }
    if (getenv("A5_SND_DEBUG"))
        fprintf(stderr, "[snd] host audio up (dir=%s)\n", dir ? dir : "(none)");
}

static int audio_load_id(int id, int is_big)
{
    audio_ensure_init();
    if (id < 0 || id >= 256) return 0;
    if (a5audio_loaded(id)) return 1;
    const char *dir = audio_asset_dir();
    if (!dir) return 0;
    char path[700];
    snprintf(path, sizeof(path), "%s/raw_%03d.ogg", dir, id);
    FILE *f = fopen(path, "rb");
    if (!f) {
        if (getenv("A5_SND_DEBUG")) fprintf(stderr, "[snd] missing %s\n", path);
        return 0;
    }
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    if (n <= 0 || n > (64L << 20)) { fclose(f); return 0; }
    unsigned char *p = (unsigned char *)malloc((size_t)n);
    if (!p) { fclose(f); return 0; }
    if (fread(p, 1, (size_t)n, f) != (size_t)n) { free(p); fclose(f); return 0; }
    fclose(f);
    a5audio_load(id, p, (int)n, is_big);
    free(p);
    if (getenv("A5_SND_DEBUG"))
        fprintf(stderr, "[snd] load id=%d (%ld bytes, %s)\n", id, n,
                is_big ? "music" : "sfx");
    return 1;
}

static int audio_is_loaded(int id)
{
    audio_ensure_init();
    return a5audio_loaded(id);
}

/* ---- JNI dispatch ----------------------------------------------------- */

static void jni_dispatch(CPU *cpu, unsigned index)
{
    uint32_t a0 = cpu->r[0], a1 = cpu->r[1], a2 = cpu->r[2], a3 = cpu->r[3];
    if (getenv("A5_SND_DEBUG"))
        fprintf(stderr, "[jni] entry %u a0=%08x a1=%08x a2=%08x a3=%08x\n",
                index, a0, a1, a2, a3);
    switch (index) {
    case 4: cpu->r[0] = 0x00010006u; return;                 /* GetVersion */
    case 6: cpu->r[0] = 0x1001u; return;                     /* FindClass */
    case 15: cpu->r[0] = 0; return;                          /* ExceptionOccurred */
    case 17: return;                                         /* ExceptionClear */
    case 21:                                                 /* NewGlobalRef */
        if (a1) ref_global(a1);
        cpu->r[0] = a1;
        return;
    case 22:                                                 /* DeleteGlobalRef */
        if (a1 && ref_drop_global(a1)) {
            GuestString *s = (GuestString *)G(a1);
            if (getenv("A5_NO_JNI_FREE")) return;
            if (s->tag == TAG_ARRAY)
                jni_defer(a1, platform_buttons_mode());
            /* Strings are kept: 3.4.1 reads some of them after deletion. */
        }
        return;
    case 23: {                                               /* DeleteLocalRef */
        if (getenv("A5_NO_JNI_FREE")) return;
        if (a1 && ref_drop_local(a1)) {
            GuestString *s = (GuestString *)G(a1);
            if (s->tag == TAG_ARRAY)
                jni_defer(a1, platform_buttons_mode());
            /* Strings are kept: 3.4.1 reads some of them after deletion. */
        }
        return;
    }
    case 31: cpu->r[0] = 0x1001u; return;                    /* GetObjectClass */
    case 33: {                                               /* GetMethodID */
        const char *n = (const char *)G(a2), *s = (const char *)G(a3);
        cpu->r[0] = find_method(n, s); return;
    }
    case 113: {                                              /* GetStaticMethodID */
        const char *n = (const char *)G(a2), *s = (const char *)G(a3);
        cpu->r[0] = find_method(n, s); return;
    }
    case 114: {                                              /* CallStaticObjectMethod */
        const char *m = method_name(a2);
        if (!strcmp(m, "getResourceFull")) { cpu->r[0] = resource_full(jstr(a3)); return; }
        if (!strcmp(m, "getResourceBytes")) {
            uint32_t off = rd32(cpu->r[13] + 0), len = rd32(cpu->r[13] + 4);
            cpu->r[0] = resource_bytes(jstr(a3), off, len); return;
        }
        if (!strcmp(m, "GetDoubleOptionText1") || !strcmp(m, "GetDoubleOptionText2") || !strcmp(m, "GetDoubleOptionText3")) {
            cpu->r[0] = make_string(""); return;
        }
        cpu->r[0] = 0; return;
    }
    case 129: {                                              /* CallStaticIntMethod */
        const char *m = method_name(a2);
        if (!strcmp(m, "getResourceLength")) { cpu->r[0] = resource_len(jstr(a3)); return; }
        if (!strcmp(m, "IsDemo") || !strcmp(m, "IsDoubleOption")) { cpu->r[0] = 0; return; }
        if (!strcmp(m, "isSoundLoaded") || !strcmp(m, "isSoundLoadedBig")) {
            cpu->r[0] = audio_is_loaded((int)a3) ? 0u : (uint32_t)-1;
            return;
        }
        cpu->r[0] = 0; return;
    }
    case 117: cpu->r[0] = 0; return;                         /* CallStaticBooleanMethod */
    case 141: {                                              /* CallStaticVoidMethod */
        const char *m = method_name(a2);
        if (g_verbose) fprintf(stderr, "[jni] call %s\n", m);
        if (getenv("A5_SND_DEBUG"))
            fprintf(stderr, "[jni] CallStaticVoid id=%08x name=%s\n", a2, m);
        if (!strcmp(m, "loadMovie")) {
            /* GS_TrailerMovie asks Java to launch the full-screen video
             * activity.  Record it; main.c plays it between frames and then
             * clears Game+0x1d72. */
            movie_request(jstr(a3));
            return;
        }
        if (!strcmp(m, "ResumeMovie")) return;   /* no paused movie state */
        if (!strcmp(m, "initSoundPoolArray")) { audio_ensure_init(); return; }
        if (strncmp(m, "loadSound", 9) == 0 || strncmp(m, "playSound", 9) == 0 ||
            strncmp(m, "stopSound", 9) == 0 || strncmp(m, "pauseSound", 10) == 0 ||
            strncmp(m, "resumeSound", 11) == 0 || strncmp(m, "unloadSound", 11) == 0 ||
            strncmp(m, "setVolume", 9) == 0 || strncmp(m, "setPitch", 8) == 0 ||
            strcmp(m, "setLoopBig") == 0 || strcmp(m, "resetSound") == 0 ||
            strcmp(m, "stopAllSounds") == 0 || strcmp(m, "stopAllPool") == 0 ||
            strcmp(m, "stopAllBig") == 0 || strcmp(m, "destroySoundPool") == 0) {
            int id = (int)a3;
            int arg1 = (int)rd32(cpu->r[13]);
            double st0 = 0, st8 = 0;
            memcpy(&st0, G(cpu->r[13]), 8);
            memcpy(&st8, G(cpu->r[13] + 8), 8);
            int is_big = strstr(m, "Big") != NULL;
            int inst = is_big ? 0 : arg1;
            float f1 = (float)(is_big ? st0 : st8);
            if (getenv("A5_SND_DEBUG"))
                fprintf(stderr, "[snd] jni %s id=%d arg1=%d vol=%.3f\n", m, id, arg1, f1);
            if (strncmp(m, "loadSound", 9) == 0) {
                audio_load_id(id, is_big);
            } else if (strncmp(m, "playSound", 9) == 0) {
                a5audio_play(id, inst, f1 > 0.0f ? f1 : 1.0f, is_big);
            } else if (strncmp(m, "stopSound", 9) == 0) {
                a5audio_stop(id, inst, is_big);
            } else if (strncmp(m, "pauseSound", 10) == 0) {
                a5audio_pause(id, inst, 1, is_big);
            } else if (strncmp(m, "resumeSound", 11) == 0) {
                a5audio_pause(id, inst, 0, is_big);
            } else if (strncmp(m, "unloadSound", 11) == 0) {
                a5audio_unload(id);
            } else if (strncmp(m, "setVolume", 9) == 0) {
                a5audio_set_vol(id, inst, f1, is_big);
            } else if (strncmp(m, "setPitch", 8) == 0) {
                a5audio_set_pitch(id, inst, f1, is_big);
            } else if (strcmp(m, "setLoopBig") == 0) {
                /* big sounds loop by default; honour an explicit disable later */
            } else if (strcmp(m, "resetSound") == 0 || strcmp(m, "stopAllSounds") == 0 ||
                       strcmp(m, "destroySoundPool") == 0) {
                a5audio_stop_all(0);
            } else if (strcmp(m, "stopAllPool") == 0) {
                a5audio_stop_all(1);
            } else if (strcmp(m, "stopAllBig") == 0) {
                a5audio_stop_all(2);
            }
            return;
        }
        return;
    }
    case 167: cpu->r[0] = make_string((const char *)G(a1)); return; /* NewStringUTF */
    case 169: {                                              /* GetStringUTFChars */
        /* GuestString is {tag, len, data}; return a guest pointer to data,
         * not the low 32 bits of the host address. */
        cpu->r[0] = a1 ? a1 + 8u : 0; return;
    }
    case 170: return;                                        /* ReleaseStringUTFChars */
    case 171: {                                              /* GetArrayLength */
        GuestArray *a = get_array(a1); cpu->r[0] = a ? a->len : 0; return;
    }
    case 176: cpu->r[0] = make_array(NULL, a1); return;      /* NewByteArray */
    case 200: {                                              /* GetByteArrayRegion */
        GuestArray *a = get_array(a1);
        uint32_t off = a2, len = a3, dst = rd32(cpu->r[13] + 0);
        if (a && off < a->len) { uint32_t c = a->len - off; if (c > len) c = len; memcpy(G(dst), a->data + off, c); }
        return;
    }
    case 204: {                                              /* SetByteArrayRegion */
        GuestArray *a = get_array(a1);
        uint32_t off = a2, len = a3, src = rd32(cpu->r[13] + 0);
        if (a && off < a->len) { uint32_t c = a->len - off; if (c > len) c = len; memcpy(a->data + off, G(src), c); }
        return;
    }
    case 219: if (a1) wr32(a1, 0x1002); cpu->r[0] = 0; return; /* GetJavaVM */
    case 228: cpu->r[0] = 0; return;                         /* ExceptionCheck */
    default:
        if (g_verbose) fprintf(stderr, "[jni] unhandled entry %u\n", index);
        cpu->r[0] = 0; return;
    }
}

static void jni_entry(CPU *cpu)
{
    unsigned idx = (unsigned)((cpu->pc - JNI_STUB_BASE) / 16u);
    jni_dispatch(cpu, idx);
}

void jni_init(void)
{
    wr32(JNI_ENV_ADDR, JNI_TABLE_ADDR);
    for (unsigned i = 0; i < 256; i++) {
        uint32_t a = JNI_STUB_BASE + i * 16u;
        wr32(JNI_TABLE_ADDR + i * 4u, a);
        guest_register_entry(a, jni_entry, "jni");
    }
    g_method_count = 0;
}

uint32_t jni_env_addr(void) { return JNI_ENV_ADDR; }

void jni_dump_methods(void)
{
    for (int i = 0; i < g_method_count; i++)
        fprintf(stderr, "[jni] method %2d %s %s\n", i, g_methods[i].name, g_methods[i].sig);
}
