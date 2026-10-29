/* Asphalt 5 HD 3.3.7 / 3.4.1 - first-run game installer (native)
 *
 * This is a native port of the Android GameInstaller activity.  It renders the
 * same blue "interface_menu" background, panels, buttons and bitmap font from
 * the APK's res/raw folder, downloads the official PVRTC stream, splits it
 * into the files listed by the GameInstaller manifest, and then lets the game
 * continue booting.  No separate installer executable is used.
 */

#define WIN32_LEAN_AND_MEAN
#if defined(RECOMP_TARGET_337) || defined(RECOMP_TARGET_341)
#include <windows.h>
#include <mmsystem.h>
#include <commctrl.h>
#include <commdlg.h>
#include <wininet.h>
#include <bcrypt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <stdint.h>
#include <math.h>

#define STB_IMAGE_IMPLEMENTATION
#include "../third_party/stb/stb_image.h"
#include "../third_party/miniz/miniz.h"

typedef struct stb_vorbis stb_vorbis;
extern int stb_vorbis_decode_filename(const char *filename, int *channels, int *sample_rate, short **output);

#define APP_TITLE "Asphalt 5 HD"
#if defined(RECOMP_TARGET_341)
#define MANIFEST_NAME "GloftA5HD341.manifest"
#define DATA_FOLDER "GloftA5HD341"
#define CACHE_NAME "AndroidResources_PVRT_341.zip"
#define DATA_VERSION_TEXT "Asphalt 5 HD 3.4.1 game data"
#else
#define MANIFEST_NAME "GloftA5HD337.manifest"
#define DATA_FOLDER "GloftA5HD337"
#define CACHE_NAME "AndroidResources_PVRT.zip"
#define DATA_VERSION_TEXT "Asphalt 5 HD 3.3.7 game data"
#endif
#if defined(RECOMP_TARGET_341)
#define UI_W 1024
#define UI_H 576
#else
#define UI_W 1024
#define UI_H 600
#endif
#define UI_WIN_W 1280
#define UI_WIN_H 750

#ifndef MZ_DEFAULT_WINDOW_BITS
#define MZ_DEFAULT_WINDOW_BITS 15
#endif

/* ------------------------------------------------------------------ */
/* GameInstaller manifest + pack handling                             */
/* ------------------------------------------------------------------ */

typedef struct {
    char *name;
    unsigned long long size;
} Entry;

static Entry *g_entries;
static int g_entry_count;
static unsigned long long g_total_size;
static unsigned long long g_compressed_size;
static unsigned long long g_uncompressed_size;
static char g_url[1024];
static char g_sha256[65];
static char g_exe_dir[MAX_PATH];
static char g_manifest_path[MAX_PATH];
static char g_local_pack[MAX_PATH];
static char g_ui_dir[MAX_PATH];
static int g_manifest_loaded;

static void log_line(const char *fmt, ...);

static uint32_t ui_rd32(const unsigned char *p)
{
    return (uint32_t)p[0] | ((uint32_t)p[1] << 8) |
           ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}

static uint16_t ui_rd16(const unsigned char *p)
{
    return (uint16_t)((uint16_t)p[0] | ((uint16_t)p[1] << 8));
}

/* The setup appends a small archive of the APK's installer art directly to
 * Asphalt5.exe.  Extract it to %LOCALAPPDATA% for the installer window so the
 * install folder contains only Asphalt5.exe and gamefiles/. */
static int extract_embedded_ui(void)
{
    char exe[MAX_PATH], dir[MAX_PATH];
    DWORD n = GetModuleFileNameA(NULL, exe, sizeof(exe));
    FILE *f;
    unsigned char *buf = NULL;
    unsigned char so_foot[16], ui_foot[16];
    const unsigned char so_magic[8] = { 'A', '5', 'S', 'O', 0, 0, 0, 0 };
    const unsigned char ui_magic[8] = { 'A', '5', 'U', 'I', 0, 0, 0, 0 };
    const unsigned char arc_magic[8] = { 'A', '5', 'U', 'I', '1', 0, 0, 0 };
    long total;
    uint64_t so_len = 0, ui_len = 0;
    long arc_off, ui_foot_off;
    const unsigned char *p, *q, *end;
    uint32_t count, i;
    const char *la;

    if (n == 0 || n >= sizeof(exe)) return 0;
    f = fopen(exe, "rb");
    if (!f) return 0;
    if (fseek(f, 0, SEEK_END) != 0) { fclose(f); return 0; }
    total = ftell(f);
    if (total < 64 || fseek(f, 0, SEEK_SET) != 0) { fclose(f); return 0; }
    buf = (unsigned char *)malloc((size_t)total);
    if (!buf) { fclose(f); return 0; }
    if (fread(buf, 1, (size_t)total, f) != (size_t)total) {
        free(buf); fclose(f); return 0;
    }
    fclose(f);

    memcpy(so_foot, buf + total - 16, 16);
    if (memcmp(so_foot, so_magic, 8) != 0) { free(buf); return 0; }
    memcpy(&so_len, so_foot + 8, 8);
    if (so_len == 0 || so_len + 32 > (uint64_t)total) { free(buf); return 0; }
    ui_foot_off = total - 16 - (long)so_len - 16;
    if (ui_foot_off < 0) { free(buf); return 0; }
    memcpy(ui_foot, buf + ui_foot_off, 16);
    if (memcmp(ui_foot, ui_magic, 8) != 0) { free(buf); return 0; }
    memcpy(&ui_len, ui_foot + 8, 8);
    if (ui_len == 0 || ui_len > (uint64_t)(ui_foot_off)) { free(buf); return 0; }
    arc_off = ui_foot_off - (long)ui_len;
    p = buf + arc_off;
    if (memcmp(p, arc_magic, 8) != 0) { free(buf); return 0; }
    count = ui_rd32(p + 8);
    if (count < 1 || count > 64) { free(buf); return 0; }

    la = getenv("LOCALAPPDATA");
    if (la && *la) {
#if defined(RECOMP_TARGET_341)
        snprintf(dir, sizeof(dir), "%s\\Asphalt5\\ui341", la);
#else
        snprintf(dir, sizeof(dir), "%s\\Asphalt5\\ui337", la);
#endif
    } else {
        char tmp[MAX_PATH];
        DWORD tn = GetTempPathA(sizeof(tmp), tmp);
        if (tn == 0 || tn >= sizeof(tmp)) { free(buf); return 0; }
        snprintf(dir, sizeof(dir), "%sAsphalt5UI", tmp);
    }
    CreateDirectoryA(dir, NULL);
    q = p + 12;
    end = buf + ui_foot_off;
    for (i = 0; i < count; i++) {
        uint16_t nl;
        uint32_t sz;
        char name[160], path[MAX_PATH];
        FILE *o;
        if (q + 2 > end) { free(buf); return 0; }
        nl = ui_rd16(q); q += 2;
        if (nl == 0 || nl > 128 || q + nl + 4 > end) { free(buf); return 0; }
        memcpy(name, q, nl); name[nl] = 0; q += nl;
        if (strstr(name, "..") || strchr(name, '/') || strchr(name, '\\') || strchr(name, ':')) {
            free(buf); return 0;
        }
        sz = ui_rd32(q); q += 4;
        if (sz > (uint32_t)(end - q)) { free(buf); return 0; }
        snprintf(path, sizeof(path), "%s\\%s", dir, name);
        o = fopen(path, "wb");
        if (!o) { free(buf); return 0; }
        if (sz && fwrite(q, 1, sz, o) != sz) { fclose(o); free(buf); return 0; }
        fclose(o);
        q += sz;
    }
    snprintf(g_ui_dir, sizeof(g_ui_dir), "%s", dir);
    log_line("embedded installer UI: %s", g_ui_dir);
    free(buf);
    return 1;
}

static void cleanup_ui_dir(void)
{
    static const char *names[] = {
        "interface_menu.bsprite", "interface_menu_01.png",
        "font_menu.bsprite", "font_menu_01.png",
        "gameloft_logo_01.png", "installer_000.ogg",
        MANIFEST_NAME, NULL
    };
    int i;
    if (!g_ui_dir[0]) return;
    for (i = 0; names[i]; i++) {
        char path[MAX_PATH];
        snprintf(path, sizeof(path), "%s\\%s", g_ui_dir, names[i]);
        DeleteFileA(path);
    }
    RemoveDirectoryA(g_ui_dir);
    g_ui_dir[0] = 0;
}

static void log_line(const char *fmt, ...)
{
    char path[MAX_PATH];
    const char *la = getenv("LOCALAPPDATA");
    FILE *f;
    va_list ap;
    if (la && *la) snprintf(path, sizeof(path), "%s\\Asphalt5", la);
    else strcpy(path, ".");
    CreateDirectoryA(path, NULL);
    strncat(path, "\\installer.log", sizeof(path) - strlen(path) - 1);
    f = fopen(path, "a");
    if (!f) return;
    va_start(ap, fmt);
    vfprintf(f, fmt, ap);
    va_end(ap);
    fputc('\n', f);
    fclose(f);
}

static int file_exists(const char *path)
{
    DWORD a = GetFileAttributesA(path);
    return a != INVALID_FILE_ATTRIBUTES && !(a & FILE_ATTRIBUTE_DIRECTORY);
}

static int parse_manifest(void)
{
    FILE *f;
    char line[1024];

    if (g_manifest_loaded) return g_entry_count > 0;
    f = NULL;
    if (g_ui_dir[0]) {
        snprintf(g_manifest_path, sizeof(g_manifest_path), "%s\\%s", g_ui_dir, MANIFEST_NAME);
        f = fopen(g_manifest_path, "rb");
    }
    if (!f) {
        snprintf(g_manifest_path, sizeof(g_manifest_path), "%s\\%s", g_exe_dir, MANIFEST_NAME);
        f = fopen(g_manifest_path, "rb");
    }
    if (!f) return 0;
    if (!fgets(line, sizeof(line), f) || strncmp(line, "A5DATA1", 7) != 0) {
        fclose(f);
        return 0;
    }
    while (fgets(line, sizeof(line), f)) {
        char *nl = strpbrk(line, "\r\n");
        char *tab;
        unsigned long long sz;
        char *name;
        Entry *e;
        if (nl) *nl = 0;
        if (!line[0]) continue;
        if (!strncmp(line, "url=", 4)) {
            snprintf(g_url, sizeof(g_url), "%s", line + 4);
            continue;
        }
        if (!strncmp(line, "compressed=", 11)) {
            g_compressed_size = _strtoui64(line + 11, NULL, 10);
            continue;
        }
        if (!strncmp(line, "uncompressed=", 13)) {
            g_uncompressed_size = _strtoui64(line + 13, NULL, 10);
            continue;
        }
        if (!strncmp(line, "sha256=", 7)) {
            snprintf(g_sha256, sizeof(g_sha256), "%s", line + 7);
            continue;
        }
        tab = strchr(line, '\t');
        if (!tab) continue;
        *tab = 0;
        sz = _strtoui64(line, NULL, 10);
        name = tab + 1;
        if (!*name) continue;
        if (strstr(name, "..") || strchr(name, '/') || strchr(name, '\\') || strchr(name, ':'))
            continue;
        e = (Entry *)realloc(g_entries, sizeof(Entry) * (size_t)(g_entry_count + 1));
        if (!e) { fclose(f); return 0; }
        g_entries = e;
        g_entries[g_entry_count].name = _strdup(name);
        g_entries[g_entry_count].size = sz;
        g_entry_count++;
        g_total_size += sz;
    }
    fclose(f);
    g_manifest_loaded = 1;
    return g_entry_count > 0 && g_url[0] != 0;
}

static int sha256_file(const char *path, char out[65])
{
    BCRYPT_ALG_HANDLE alg = NULL;
    BCRYPT_HASH_HANDLE hash = NULL;
    PUCHAR obj = NULL;
    UCHAR digest[32];
    DWORD cb = 0, cb_hash = 32, cb_data = 0, i;
    FILE *f;
    unsigned char buf[1 << 20];
    size_t n;
    int ok = 0;

    if (BCryptOpenAlgorithmProvider(&alg, BCRYPT_SHA256_ALGORITHM, NULL, 0) < 0) return 0;
    BCryptGetProperty(alg, BCRYPT_OBJECT_LENGTH, (PUCHAR)&cb, sizeof(cb), &cb_data, 0);
    obj = (PUCHAR)malloc(cb ? cb : 1);
    if (!obj) goto done;
    BCryptGetProperty(alg, BCRYPT_HASH_LENGTH, (PUCHAR)&cb_hash, sizeof(cb_hash), &cb_data, 0);
    if (BCryptCreateHash(alg, &hash, obj, cb, NULL, 0, 0) < 0) goto done;
    f = fopen(path, "rb");
    if (!f) goto done;
    while ((n = fread(buf, 1, sizeof(buf), f)) > 0) {
        if (BCryptHashData(hash, buf, (ULONG)n, 0) < 0) { fclose(f); goto done; }
    }
    fclose(f);
    if (BCryptFinishHash(hash, digest, cb_hash, 0) < 0) goto done;
    for (i = 0; i < cb_hash && i < 32; i++)
        sprintf(out + i * 2, "%02x", digest[i]);
    out[cb_hash * 2] = 0;
    ok = 1;
done:
    if (hash) BCryptDestroyHash(hash);
    if (obj) free(obj);
    if (alg) BCryptCloseAlgorithmProvider(alg, 0);
    return ok;
}

static int cached_pack_ok(const char *path)
{
    char sha[65];
    if (!file_exists(path)) return 0;
    if (g_compressed_size) {
        HANDLE h = CreateFileA(path, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
        LARGE_INTEGER sz;
        if (h == INVALID_HANDLE_VALUE) return 0;
        if (!GetFileSizeEx(h, &sz)) { CloseHandle(h); return 0; }
        CloseHandle(h);
        if ((unsigned long long)sz.QuadPart != g_compressed_size) return 0;
    }
    if (g_sha256[0] && sha256_file(path, sha)) {
        if (_stricmp(sha, g_sha256) != 0) return 0;
    }
    return 1;
}

/* ------------------------------------------------------------------ */
/* Graphical installer UI                                             */
/* ------------------------------------------------------------------ */

enum {
    ST_LOGO = 0,
    ST_PROMPT,
    ST_DOWNLOAD,
    ST_INSTALL,
    ST_SUCCESS,
    ST_ERROR,
    ST_SDCARD,
    ST_CLOSED
};

enum {
    ACT_NONE = 0,
    ACT_DOWNLOAD,
    ACT_CANCEL,
    ACT_RETRY,
    ACT_CONTINUE
};

typedef struct { int x, y, w, h; } RectI;

static HWND g_hwnd;
static HDC g_memdc;
static HBITMAP g_dib;
static uint32_t *g_fb;
static int g_fb_w = UI_W, g_fb_h = UI_H;
static int g_client_w = UI_W, g_client_h = UI_H;
static int g_state = ST_PROMPT;
static int g_progress;
static char g_message[2048];
static char g_percent[64];
static char g_left_label[64], g_right_label[64];
static int g_left_action, g_right_action;
static int g_hover_left, g_hover_right, g_pressed_left, g_pressed_right;
static int g_result = 1;
static volatile int g_cancel;

static unsigned char *g_iface_px, *g_font_px, *g_logo_px;
static int g_iface_w, g_iface_h, g_font_w, g_font_h, g_logo_w, g_logo_h;
static char g_asset_dir[MAX_PATH];
static void *g_wav_data;
static int g_wav_len;
static RectI g_iface[512]; static int g_iface_n;
static RectI g_font[512];  static int g_font_n;
static int g_assets_ok;
static int g_install_base;

typedef RectI Glyph;
static Glyph g_glyph[128];

static void build_font_map(void)
{
    int c;
    for (c = 0; c < 128; c++) { g_glyph[c].x = g_glyph[c].y = g_glyph[c].w = g_glyph[c].h = 0; }
    for (c = '0'; c <= '9'; c++) g_glyph[c] = g_font[16 + c - '0'];
    for (c = 'A'; c <= 'Z'; c++) g_glyph[c] = g_font[97 + c - 'A'];
    g_glyph['.'] = g_font[14];
    g_glyph['%'] = g_font[5];
    g_glyph['?'] = g_font[31];
    g_glyph['/'] = g_font[15];
    {
        int ch;
        for (ch = 0; ch < 128; ch++) {
            int x, y, minx, miny, maxx, maxy;
            RectI r = g_glyph[ch];
            if (r.w <= 1 || r.h <= 1 || r.x < 0 || r.y < 0) continue;
            minx = r.x + r.w; miny = r.y + r.h; maxx = -1; maxy = -1;
            for (y = r.y; y < r.y + r.h && y < g_font_h; y++) {
                for (x = r.x; x < r.x + r.w && x < g_font_w; x++) {
                    const unsigned char *fp = &g_font_px[(y * g_font_w + x) * 4];
                    if (fp[3] >= 128 && (int)fp[0] + fp[1] + fp[2] > 200) {
                        if (x < minx) minx = x;
                        if (y < miny) miny = y;
                        if (x > maxx) maxx = x;
                        if (y > maxy) maxy = y;
                    }
                }
            }
            if (maxx >= minx) {
                g_glyph[ch].x = minx;
                g_glyph[ch].y = miny;
                g_glyph[ch].w = maxx - minx + 1;
                g_glyph[ch].h = maxy - miny + 1;
            }
        }
    }
}

static RectI g_btn_left, g_btn_right, g_panel;

static const char *ASSET_PATHS[] = {
    "engine\\apk341\\res\\raw",
    "gamefiles\\apk341\\res\\raw",
    "original\\apk341\\res\\raw",
    "work\\apk341\\res\\raw",
    "engine\\apk337\\res\\raw",
    "gamefiles\\apk337\\res\\raw",
    "original\\apk337\\res\\raw",
    "work\\apk337\\res\\raw",
    NULL
};

static void load_bsprite(const char *path, RectI *out, int *count, int max)
{
    FILE *f = fopen(path, "rb");
    unsigned char *buf;
    long n;
    int cnt, i;
    *count = 0;
    if (!f) return;
    fseek(f, 0, SEEK_END);
    n = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (n < 8) { fclose(f); return; }
    buf = (unsigned char *)malloc((size_t)n);
    if (!buf) { fclose(f); return; }
    if (fread(buf, 1, (size_t)n, f) != (size_t)n) { free(buf); fclose(f); return; }
    fclose(f);
    cnt = buf[6] | (buf[7] << 8);
    if (cnt > max) cnt = max;
    for (i = 0; i < cnt; i++) {
        const unsigned char *p = buf + 8 + i * 8;
        out[i].x = p[0] | (p[1] << 8);
        out[i].y = p[2] | (p[3] << 8);
        out[i].w = p[4] | (p[5] << 8);
        out[i].h = p[6] | (p[7] << 8);
    }
    *count = cnt;
    free(buf);
}

static int try_load_assets(const char *base)
{
    char path[MAX_PATH];
    snprintf(path, sizeof(path), "%s\\interface_menu.bsprite", base);
    if (!file_exists(path)) return 0;
    load_bsprite(path, g_iface, &g_iface_n, 512);
    snprintf(path, sizeof(path), "%s\\interface_menu_01.png", base);
    g_iface_px = stbi_load(path, &g_iface_w, &g_iface_h, NULL, 4);
    snprintf(path, sizeof(path), "%s\\font_menu.bsprite", base);
    load_bsprite(path, g_font, &g_font_n, 512);
    snprintf(path, sizeof(path), "%s\\font_menu_01.png", base);
    g_font_px = stbi_load(path, &g_font_w, &g_font_h, NULL, 4);
    snprintf(path, sizeof(path), "%s\\gameloft_logo_01.png", base);
    g_logo_px = stbi_load(path, &g_logo_w, &g_logo_h, NULL, 4);
    if (g_iface_px && g_font_px && g_iface_n > 38 && g_font_n > 90) {
        snprintf(g_asset_dir, sizeof(g_asset_dir), "%s", base);
        build_font_map();
        g_assets_ok = 1;
        log_line("installer assets: %s", base);
        return 1;
    }
    if (g_iface_px) { stbi_image_free(g_iface_px); g_iface_px = NULL; }
    if (g_font_px) { stbi_image_free(g_font_px); g_font_px = NULL; }
    if (g_logo_px) { stbi_image_free(g_logo_px); g_logo_px = NULL; }
    return 0;
}

static int load_assets(void)
{
    char base[MAX_PATH];
    int i;
    if (g_ui_dir[0] && try_load_assets(g_ui_dir)) return 1;
    for (i = 0; ASSET_PATHS[i]; i++) {
        snprintf(base, sizeof(base), "%s\\%s", g_exe_dir, ASSET_PATHS[i]);
        if (try_load_assets(base)) return 1;
    }
    log_line("installer assets not found");
    return 0;
}

static inline uint32_t rgb(int r, int g, int b)
{
    if (r < 0) r = 0;
    if (r > 255) r = 255;
    if (g < 0) g = 0;
    if (g > 255) g = 255;
    if (b < 0) b = 0;
    if (b > 255) b = 255;
    return ((uint32_t)r << 16) | ((uint32_t)g << 8) | (uint32_t)b;
}

static inline void put_px(int x, int y, int r, int g, int b, int a)
{
    uint32_t *p;
    uint32_t d;
    int dr, dg, db;
    if (x < 0 || y < 0 || x >= g_fb_w || y >= g_fb_h || a <= 0) return;
    p = &g_fb[y * g_fb_w + x];
    d = *p;
    dr = (d >> 16) & 0xff; dg = (d >> 8) & 0xff; db = d & 0xff;
    dr = (r * a + dr * (255 - a)) / 255;
    dg = (g * a + dg * (255 - a)) / 255;
    db = (b * a + db * (255 - a)) / 255;
    *p = rgb(dr, dg, db);
}

static void fill_rect(int x, int y, int w, int h, int r, int g, int b, int a)
{
    int yy, xx;
    for (yy = 0; yy < h; yy++)
        for (xx = 0; xx < w; xx++)
            put_px(x + xx, y + yy, r, g, b, a);
}

static void blit_region(const unsigned char *px, int pw, int ph,
                        int sx, int sy, int sw, int sh,
                        int dx, int dy, int dw, int dh, int alpha)
{
    int x, y;
    if (!px || sw <= 0 || sh <= 0 || dw <= 0 || dh <= 0) return;
    for (y = 0; y < dh; y++) {
        float fy = (float)sy + ((float)y + 0.5f) * (float)sh / (float)dh - 0.5f;
        int y0 = (int)floorf(fy);
        float wy = fy - (float)y0;
        int y1;
        if (y0 < sy) { y0 = sy; wy = 0.0f; }
        if (y0 > sy + sh - 1) y0 = sy + sh - 1;
        y1 = y0 + 1; if (y1 > sy + sh - 1) y1 = sy + sh - 1;
        for (x = 0; x < dw; x++) {
            float fx = (float)sx + ((float)x + 0.5f) * (float)sw / (float)dw - 0.5f;
            int x0 = (int)floorf(fx);
            float wx = fx - (float)x0;
            int x1;
            const unsigned char *p00, *p10, *p01, *p11;
            float w00, w10, w01, w11, asum, rsum, gsum, bsum, aout;
            if (x0 < sx) { x0 = sx; wx = 0.0f; }
            if (x0 > sx + sw - 1) x0 = sx + sw - 1;
            x1 = x0 + 1; if (x1 > sx + sw - 1) x1 = sx + sw - 1;
            w00 = (1.0f - wx) * (1.0f - wy);
            w10 = wx * (1.0f - wy);
            w01 = (1.0f - wx) * wy;
            w11 = wx * wy;
            p00 = px + ((size_t)y0 * pw + x0) * 4;
            p10 = px + ((size_t)y0 * pw + x1) * 4;
            p01 = px + ((size_t)y1 * pw + x0) * 4;
            p11 = px + ((size_t)y1 * pw + x1) * 4;
            asum = p00[3] * w00 + p10[3] * w10 + p01[3] * w01 + p11[3] * w11;
            if (asum < 1.0f) continue;
            rsum = (p00[0] * p00[3] * w00 + p10[0] * p10[3] * w10 +
                    p01[0] * p01[3] * w01 + p11[0] * p11[3] * w11) / asum;
            gsum = (p00[1] * p00[3] * w00 + p10[1] * p10[3] * w10 +
                    p01[1] * p01[3] * w01 + p11[1] * p11[3] * w11) / asum;
            bsum = (p00[2] * p00[3] * w00 + p10[2] * p10[3] * w10 +
                    p01[2] * p01[3] * w01 + p11[2] * p11[3] * w11) / asum;
            aout = asum / 255.0f * (float)alpha / 255.0f;
            if (aout <= 0.0f) continue;
            put_px(dx + x, dy + y, (int)(rsum + 0.5f), (int)(gsum + 0.5f),
                   (int)(bsum + 0.5f), (int)(aout * 255.0f + 0.5f));
        }
    }
}

static void draw_iface(int idx, int dx, int dy, int dw, int dh, int alpha)
{
    RectI r;
#if defined(RECOMP_TARGET_341)
    /* The 3.4.1 interface sheet starts with a 10-tile background and the
     * dialog/button sprites are shifted by 10 (buttons by 11). */
    if (idx >= 0) idx = idx >= 30 ? idx + 11 : idx + 10;
#endif
    if (!g_assets_ok || idx < 0 || idx >= g_iface_n) return;
    r = g_iface[idx];
    blit_region(g_iface_px, g_iface_w, g_iface_h, r.x, r.y, r.w, r.h,
                dx, dy, dw, dh, alpha);
}

static void draw_text_glyph(unsigned char c, int dx, int dy, int scale, int alpha)
{
    Glyph r;
    int dw, dh;
    if (c >= 'a' && c <= 'z') c = (unsigned char)(c - 'a' + 'A');
    if (c < 32 || c > 126) c = '?';
    if (c == ' ') return;
    r = g_glyph[c];
    if (r.w <= 0) r = g_glyph['?'];
    dw = (r.w * scale) / 10;
    dh = (r.h * scale) / 10;
    blit_region(g_font_px, g_font_w, g_font_h, r.x, r.y, r.w, r.h,
                dx, dy, dw, dh, alpha);
}

static void draw_panel(int x, int y, int w, int h)
{
    int e = 44, v = 64;
    if (w < 2 * e + 8 || h < 2 * v + 8) return;
    fill_rect(x + e, y + v, w - 2 * e, h - 2 * v, 7, 20, 34, 210);
    draw_iface(18, x, y, e, v, 255);
    draw_iface(20, x + w - e, y, e, v, 255);
    draw_iface(19, x, y + h - v, e, v, 255);
    draw_iface(21, x + w - e, y + h - v, e, v, 255);
    draw_iface(22, x + e, y, w - 2 * e, v, 255);
    draw_iface(23, x + e, y + h - v, w - 2 * e, v, 255);
    draw_iface(24, x, y + v, e, h - 2 * v, 255);
    draw_iface(29, x + w - e, y + v, e, h - 2 * v, 255);
}

static int text_line_height(int scale)
{
    return (22 * scale) / 10;
}

static int text_width(const char *s, int scale)
{
    int w = 0;
    while (*s) {
        unsigned char c = (unsigned char)*s++;
        Glyph g;
        if (c >= 'a' && c <= 'z') c = (unsigned char)(c - 'a' + 'A');
        if (c < 32 || c > 126) c = '?';
        if (c == ' ') { w += (7 * scale) / 10; continue; }
        g = g_glyph[c];
        if (g.w <= 0) g = g_glyph['?'];
        w += (g.w * scale) / 10 + (1 * scale) / 10;
    }
    return w;
}

static void draw_text_line(const char *s, int cx, int y, int scale, int color, int shadow)
{
    int total = text_width(s, scale);
    int x = cx - total / 2;
    while (*s) {
        unsigned char c = (unsigned char)*s++;
        Glyph g;
        if (c >= 'a' && c <= 'z') c = (unsigned char)(c - 'a' + 'A');
        if (c < 32 || c > 126) c = '?';
        if (c == ' ') { x += (7 * scale) / 10; continue; }
        g = g_glyph[c];
        if (g.w <= 0) g = g_glyph['?'];
        (void)shadow;
        {
            int dh = (g.h * scale) / 10;
            draw_text_glyph(c, x, y + text_line_height(scale) - dh, scale, 255);
        }
        x += (g.w * scale) / 10 + (1 * scale) / 10;
    }
    (void)color;
}

static void draw_text_block(const char *text, int cx, int y, int max_w, int scale, int line_gap)
{
    char line[1024];
    char word[256];
    char upper[2048];
    const char *p;
    int n = 0;
    size_t i;

    for (i = 0; text[i] && i < sizeof(upper) - 1; i++) {
        unsigned char c = (unsigned char)text[i];
        if (c >= 'a' && c <= 'z') c = (unsigned char)(c - 'a' + 'A');
        upper[i] = (char)c;
    }
    upper[i] = 0;

    line[0] = 0;
    n = 0;
    p = upper;
    while (*p) {
        int wl = 0;
        while (*p == ' ' || *p == '\n') {
            if (*p == '\n') {
                if (line[0]) draw_text_line(line, cx, y, scale, 0xffffff, 1);
                y += text_line_height(scale) + line_gap;
                line[0] = 0; n = 0;
            }
            p++;
        }
        while (p[wl] && p[wl] != ' ' && p[wl] != '\n' && wl < (int)sizeof(word) - 1) wl++;
        if (!wl) break;
        memcpy(word, p, (size_t)wl);
        word[wl] = 0;
        {
            char test[1024];
            int tw;
            if (n) {
                snprintf(test, sizeof(test), "%s %s", line, word);
            } else {
                snprintf(test, sizeof(test), "%s", word);
            }
            tw = text_width(test, scale);
            if (n && tw > max_w) {
                draw_text_line(line, cx, y, scale, 0xffffff, 1);
                y += text_line_height(scale) + line_gap;
                snprintf(line, sizeof(line), "%s", word);
                n = (int)strlen(line);
            } else {
                snprintf(line, sizeof(line), "%s", test);
                n = (int)strlen(line);
            }
        }
        p += wl;
    }
    if (line[0]) draw_text_line(line, cx, y, scale, 0xffffff, 1);
}

static void draw_button(RectI r, const char *label, int hover, int pressed)
{
    int mid, cap_l = 29, cap_r = 35;
    int i0 = hover || pressed ? 34 : 30;
    int i1 = hover || pressed ? 36 : 32;
    int i2 = hover || pressed ? 35 : 31;
    int s = pressed ? 230 : 255;
    if (r.w < cap_l + cap_r + 4) return;
    mid = r.w - cap_l - cap_r;
    draw_iface(i0, r.x, r.y, cap_l, r.h, s);
    draw_iface(i1, r.x + cap_l, r.y, mid, r.h, s);
    draw_iface(i2, r.x + r.w - cap_r, r.y, cap_r, r.h, s);
    if (label && *label)
        draw_text_line(label, r.x + r.w / 2 + (cap_l - cap_r) / 2,
                       r.y + (r.h - text_line_height(12)) / 2, 12, 0xffffff, 0);
}

static void compose_screen(void)
{
    int i;
    for (i = 0; i < g_fb_w * g_fb_h; i++) g_fb[i] = rgb(0, 0, 0);
    if (g_state == ST_LOGO) {
        if (g_logo_px) {
            int side = (g_fb_w < g_fb_h ? g_fb_w : g_fb_h) * 4 / 5;
            int dx = (g_fb_w - side) / 2, dy = (g_fb_h - side) / 2;
            blit_region(g_logo_px, g_logo_w, g_logo_h, 0, 0, g_logo_w, g_logo_h,
                        dx, dy, side, side, 255);
        }
        return;
    }
#if defined(RECOMP_TARGET_341)
    if (g_iface_px)
        blit_region(g_iface_px, g_iface_w, g_iface_h, 0, 0, g_iface_w, 480,
                    0, 0, g_fb_w, g_fb_h, 255);
#else
    if (g_assets_ok)
        draw_iface(38, 0, 0, g_fb_w, g_fb_h, 255);
#endif

    if (g_state != ST_DOWNLOAD && g_state != ST_INSTALL) {
        g_panel.x = g_fb_w / 20;
        g_panel.y = g_fb_h / 4;
        g_panel.w = g_fb_w - g_fb_w / 10;
        g_panel.h = g_fb_h / 2;
        draw_panel(g_panel.x, g_panel.y, g_panel.w, g_panel.h);
        draw_text_block(g_message, g_fb_w / 2, g_panel.y + 58, g_panel.w - 40, 12, 6);
        g_btn_left.w = 230; g_btn_left.h = 56;
        g_btn_right.w = 230; g_btn_right.h = 56;
        g_btn_left.y = g_panel.y + g_panel.h - 82;
        g_btn_right.y = g_btn_left.y;
        if (g_right_action != ACT_NONE) {
            g_btn_left.x = g_fb_w / 2 - 250;
            g_btn_right.x = g_fb_w / 2 + 20;
            draw_button(g_btn_left, g_left_label, g_hover_left, g_pressed_left);
            draw_button(g_btn_right, g_right_label, g_hover_right, g_pressed_right);
        } else if (g_left_action != ACT_NONE) {
            g_btn_left.x = g_fb_w / 2 - 115;
            g_btn_right.x = 0;
            draw_button(g_btn_left, g_left_label, g_hover_left, g_pressed_left);
        }
    } else {
        int bx = g_fb_w / 4, by = g_fb_h - 70, bw = g_fb_w / 2, bh = 26;
        draw_text_block(g_message, g_fb_w / 2, 60, g_fb_w - 200, 11, 6);
        fill_rect(bx, by, bw, bh, 4, 10, 18, 230);
        draw_iface(1, bx, by, bw, bh, 255);
        if (g_progress > 0) {
            int pw = bw * g_progress / 100;
            if (pw > 0) draw_iface(3, bx, by, pw, bh, 255);
        }
        draw_iface(2, bx, by, 14, bh, 255);
        draw_iface(5, bx + bw - 14, by, 14, bh, 255);
        if (g_percent[0])
            draw_text_line(g_percent, g_fb_w / 2, by - 30, 12, 0xffffff, 0);
        g_btn_left.w = 180; g_btn_left.h = 50;
        g_btn_left.x = g_fb_w - 240;
        g_btn_left.y = g_fb_h - 140;
        g_btn_right.x = 0; g_btn_right.w = 0;
        if (g_left_action != ACT_NONE)
            draw_button(g_btn_left, g_left_label, g_hover_left, g_pressed_left);
    }
}

static void save_ppm(const char *path)
{
    FILE *f = fopen(path, "wb");
    int i;
    if (!f) return;
    fprintf(f, "P6\n%d %d\n255\n", g_fb_w, g_fb_h);
    for (i = 0; i < g_fb_w * g_fb_h; i++) {
        unsigned char rgbv[3];
        uint32_t c = g_fb[i];
        rgbv[0] = (unsigned char)((c >> 16) & 0xff);
        rgbv[1] = (unsigned char)((c >> 8) & 0xff);
        rgbv[2] = (unsigned char)(c & 0xff);
        fwrite(rgbv, 1, 3, f);
    }
    fclose(f);
}

static void redraw(void)
{
    HDC hdc;
    PAINTSTRUCT ps;
    BITMAPINFO bmi;
    if (!g_hwnd) return;
    compose_screen();
    {
        static int shot_done;
        const char *shot = getenv("A5_UI_SHOT");
        if (shot && *shot && !shot_done) { save_ppm(shot); shot_done = 1; }
    }
    hdc = BeginPaint(g_hwnd, &ps);
    SetStretchBltMode(hdc, HALFTONE);
    StretchBlt(hdc, 0, 0, g_client_w, g_client_h, g_memdc, 0, 0, g_fb_w, g_fb_h, SRCCOPY);
    EndPaint(g_hwnd, &ps);
    (void)bmi;
}

static void schedule_redraw(void)
{
    if (g_hwnd) {
        InvalidateRect(g_hwnd, NULL, FALSE);
        UpdateWindow(g_hwnd);
    }
}

static void set_message(const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(g_message, sizeof(g_message), fmt, ap);
    va_end(ap);
    schedule_redraw();
}

static void set_buttons(const char *l, int la, const char *r, int ra)
{
    snprintf(g_left_label, sizeof(g_left_label), "%s", l ? l : "");
    snprintf(g_right_label, sizeof(g_right_label), "%s", r ? r : "");
    g_left_action = la;
    g_right_action = ra;
    g_hover_left = g_hover_right = g_pressed_left = g_pressed_right = 0;
}

static void play_installer_music(void)
{
    char path[MAX_PATH];
    int ch = 0, rate = 0;
    short *pcm = NULL;
    int frames;
    unsigned char *wav;
    int data_size;
    int i;
    if (!g_asset_dir[0]) return;
    snprintf(path, sizeof(path), "%s\\installer_000.ogg", g_asset_dir);
    if (!file_exists(path)) return;
    frames = stb_vorbis_decode_filename(path, &ch, &rate, &pcm);
    if (frames <= 0 || !pcm || ch <= 0) { if (pcm) free(pcm); return; }
    data_size = frames * ch * 2;
    wav = (unsigned char *)malloc((size_t)data_size + 44);
    if (!wav) { free(pcm); return; }
    memcpy(wav, "RIFF", 4);
    { uint32_t v = (uint32_t)(data_size + 36); memcpy(wav + 4, &v, 4); }
    memcpy(wav + 8, "WAVEfmt ", 8);
    { uint32_t v = 16; memcpy(wav + 16, &v, 4); }
    { uint16_t v = 1; memcpy(wav + 20, &v, 2); }
    { uint16_t v = (uint16_t)ch; memcpy(wav + 22, &v, 2); }
    { uint32_t v = (uint32_t)rate; memcpy(wav + 24, &v, 4); }
    { uint32_t v = (uint32_t)(rate * ch * 2); memcpy(wav + 28, &v, 4); }
    { uint16_t v = (uint16_t)(ch * 2); memcpy(wav + 32, &v, 2); }
    { uint16_t v = 16; memcpy(wav + 34, &v, 2); }
    memcpy(wav + 36, "data", 4);
    { uint32_t v = (uint32_t)data_size; memcpy(wav + 40, &v, 4); }
    memcpy(wav + 44, pcm, (size_t)data_size);
    free(pcm);
    g_wav_data = wav;
    g_wav_len = data_size + 44;
    PlaySoundA((LPCSTR)wav, NULL, SND_MEMORY | SND_ASYNC | SND_LOOP | SND_NODEFAULT);
    log_line("installer music: %s (%d frames, %d Hz, %d ch)", path, frames, rate, ch);
    (void)i;
}

static void state_logo(void)
{
    g_state = ST_LOGO;
    g_left_action = g_right_action = ACT_NONE;
    schedule_redraw();
}

static void state_prompt(void)
{
    g_state = ST_PROMPT;
    g_progress = 0; g_percent[0] = 0;
    set_message("THIS GAME REQUIRES ADDITIONAL DATA TO RUN.\n"
                "DO YOU WANT TO LAUNCH THE DOWNLOAD?");
    set_buttons("DOWNLOAD", ACT_DOWNLOAD, "CANCEL", ACT_CANCEL);
}

static void state_sdcard(void)
{
    g_state = ST_SDCARD;
    g_progress = 0; g_percent[0] = 0;
    set_message("AN SD CARD WITH AT LEAST 156MB FREE IS REQUIRED IN ORDER TO DOWNLOAD THE NEW CONTENT.");
    set_buttons("RETRY", ACT_RETRY, "CANCEL", ACT_CANCEL);
}

static void state_error(void)
{
    g_state = ST_ERROR;
    g_progress = 0; g_percent[0] = 0;
    set_message("AN ERROR HAS OCCURRED INSTALLING THE FILES.\nWOULD YOU LIKE TO TRY AGAIN?");
    set_buttons("RETRY", ACT_RETRY, "CANCEL", ACT_CANCEL);
}

static void state_success(void)
{
    g_state = ST_SUCCESS;
    set_message("THE FILES HAVE BEEN SUCCESSFULLY DOWNLOADED.");
    set_buttons("CONTINUE", ACT_CONTINUE, NULL, ACT_NONE);
    if (getenv("A5_UI_AUTO")) PostMessageA(g_hwnd, WM_APP + 2, 0, 0);
}

static void ui_status(const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(g_message, sizeof(g_message), fmt, ap);
    va_end(ap);
    schedule_redraw();
}

static void ui_progress(int pct)
{
    g_progress = pct;
    snprintf(g_percent, sizeof(g_percent), "%d%%", pct);
    schedule_redraw();
}

static int ui_pump(void)
{
    MSG msg;
    while (PeekMessageA(&msg, NULL, 0, 0, PM_REMOVE)) {
        if (msg.message == WM_QUIT) return 0;
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
    return !g_cancel;
}

/* ------------------------------------------------------------------ */
/* Download + split                                                   */
/* ------------------------------------------------------------------ */

static int download_pack(const char *dest)
{
    HINTERNET net, url;
    char part[MAX_PATH];
    FILE *f;
    unsigned char buf[256 * 1024];
    unsigned long long done = 0;
    DWORD total = 0, sz = sizeof(total);
    int ok = 0;

    snprintf(part, sizeof(part), "%s.part", dest);
    DeleteFileA(part);
    net = InternetOpenA("Asphalt5/1.0", INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
    if (!net) { ui_status("COULD NOT INITIALISE THE NETWORK."); return 0; }
    DeleteUrlCacheEntryA(g_url);
    url = InternetOpenUrlA(net, g_url, NULL, 0,
                           INTERNET_FLAG_RELOAD | INTERNET_FLAG_NO_CACHE_WRITE |
                           INTERNET_FLAG_PRAGMA_NOCACHE | INTERNET_FLAG_NO_UI, 0);
    if (!url) {
        ui_status("COULD NOT OPEN THE DOWNLOAD URL.");
        InternetCloseHandle(net);
        return 0;
    }
    if (HttpQueryInfoA(url, HTTP_QUERY_CONTENT_LENGTH | HTTP_QUERY_FLAG_NUMBER,
                       &total, &sz, NULL))
        g_compressed_size = total;
    f = fopen(part, "wb");
    if (!f) {
        ui_status("COULD NOT CREATE THE DOWNLOAD FILE.");
        InternetCloseHandle(url);
        InternetCloseHandle(net);
        return 0;
    }
    ui_status("DOWNLOADING GAME DATA...");
    log_line("download start: %s", g_url);
    while (!g_cancel) {
        DWORD n = 0;
        if (!InternetReadFile(url, buf, sizeof(buf), &n)) {
            ui_status("DOWNLOAD FAILED.");
            break;
        }
        if (n == 0) { ok = 1; break; }
        if (fwrite(buf, 1, n, f) != n) break;
        done += n;
        if (g_compressed_size)
            ui_progress((int)(80ull * done / g_compressed_size));
        snprintf(g_percent, sizeof(g_percent), "%llu / %llu MB",
                 done >> 20, g_compressed_size ? (g_compressed_size >> 20) : 0);
        ui_status("PLEASE DO NOT TURN OFF YOUR PC WHILE THE DOWNLOAD IS IN PROGRESS.");
        if (!ui_pump()) break;
    }
    fclose(f);
    InternetCloseHandle(url);
    InternetCloseHandle(net);
    if (g_cancel) { DeleteFileA(part); return 0; }
    if (!ok) { DeleteFileA(part); return 0; }
    if (g_compressed_size && done != g_compressed_size) {
        ui_status("THE DOWNLOADED FILE HAS THE WRONG SIZE.");
        DeleteFileA(part);
        return 0;
    }
    if (g_sha256[0]) {
        char sha[65];
        ui_status("VERIFYING GAME DATA...");
        if (!sha256_file(part, sha) || _stricmp(sha, g_sha256) != 0) {
            char bad[MAX_PATH];
            snprintf(bad, sizeof(bad), "%s.bad", dest);
            DeleteFileA(bad);
            MoveFileA(part, bad);
            log_line("download hash mismatch: got %s expected %s", sha, g_sha256);
            return 0;
        }
    }
    DeleteFileA(dest);
    if (!MoveFileA(part, dest)) { DeleteFileA(part); return 0; }
    log_line("download complete: %llu bytes", done);
    return 1;
}

static int inflate_split(const char *pack, const char *outdir)
{
    FILE *in = NULL, *out = NULL;
    mz_stream z;
    unsigned char *inbuf = NULL;
    unsigned char outbuf[256 * 1024];
    int ret = 0;
    unsigned long long total = 0;
    int i;
    int eof = 0;

    if (g_entry_count <= 0) return 0;
    CreateDirectoryA(outdir, NULL);
    in = fopen(pack, "rb");
    if (!in) { ui_status("COULD NOT OPEN THE DATA PACK."); return 0; }
    inbuf = (unsigned char *)malloc(256 * 1024);
    if (!inbuf) { fclose(in); return 0; }
    memset(&z, 0, sizeof(z));
    if (mz_inflateInit2(&z, MZ_DEFAULT_WINDOW_BITS) != MZ_OK) {
        ui_status("COULD NOT INITIALISE THE INFLATER.");
        goto done;
    }
    ui_status("INSTALLING GAME DATA...");
    for (i = 0; i < g_entry_count; i++) {
        char path[MAX_PATH];
        unsigned long long left = g_entries[i].size;
        snprintf(path, sizeof(path), "%s\\%s", outdir, g_entries[i].name);
        out = fopen(path, "wb");
        if (!out) { ui_status("COULD NOT CREATE %s", g_entries[i].name); goto done; }
        while (left > 0) {
            size_t want;
            int produced;
            if (z.avail_in == 0 && !eof) {
                size_t n = fread(inbuf, 1, 256 * 1024, in);
                if (n == 0) { ui_status("THE DATA PACK IS TRUNCATED."); goto done; }
                z.next_in = inbuf;
                z.avail_in = (unsigned int)n;
            }
            want = left > sizeof(outbuf) ? sizeof(outbuf) : (size_t)left;
            z.next_out = outbuf;
            z.avail_out = (unsigned int)want;
            ret = mz_inflate(&z, MZ_NO_FLUSH);
            if (ret != MZ_OK && ret != MZ_STREAM_END) {
                ui_status("THE DATA PACK IS CORRUPT.");
                goto done;
            }
            produced = (int)(want - z.avail_out);
            if (produced > 0) {
                if (fwrite(outbuf, 1, (size_t)produced, out) != (size_t)produced) {
                    ui_status("COULD NOT WRITE %s", g_entries[i].name);
                    goto done;
                }
                left -= (unsigned long long)produced;
                total += (unsigned long long)produced;
            }
            if (ret == MZ_STREAM_END && left > 0) {
                ui_status("THE DATA PACK ENDED TOO EARLY.");
                goto done;
            }
            if ((i & 15) == 0) {
                ui_progress(g_install_base + (int)((100 - g_install_base) * (unsigned long long)i / (unsigned long long)g_entry_count));
                if (!ui_pump()) goto done;
            }
        }
        fclose(out);
        out = NULL;
    }
    if (total != g_total_size) {
        ui_status("INSTALLED SIZE MISMATCH.");
        goto done;
    }
    {
        char marker[MAX_PATH];
        FILE *mf;
        snprintf(marker, sizeof(marker), "%s\\installation.ok", outdir);
        mf = fopen(marker, "wb");
        if (mf) { fputs(DATA_VERSION_TEXT "\n", mf); fclose(mf); }
    }
    ui_progress(100);
    ret = 1;
done:
    if (out) fclose(out);
    if (in) fclose(in);
    free(inbuf);
    mz_inflateEnd(&z);
    return ret;
}

static int data_present(void)
{
    char path[MAX_PATH];
    snprintf(path, sizeof(path), "%s\\gamefiles\\%s\\installation.ok", g_exe_dir, DATA_FOLDER);
    if (file_exists(path)) return 1;
    snprintf(path, sizeof(path), "%s\\assets\\%s\\installation.ok", g_exe_dir, DATA_FOLDER);
    return file_exists(path);
}

static void do_install(void)
{
    char outdir[MAX_PATH], cache[MAX_PATH];
    const char *pack = g_local_pack;
    ULARGE_INTEGER free_bytes;

    if (!parse_manifest()) {
        state_error();
        return;
    }
    snprintf(outdir, sizeof(outdir), "%s\\gamefiles\\%s", g_exe_dir, DATA_FOLDER);
    {
        char gf[MAX_PATH];
        snprintf(gf, sizeof(gf), "%s\\gamefiles", g_exe_dir);
        CreateDirectoryA(gf, NULL);
    }
    if (!GetDiskFreeSpaceExA(g_exe_dir, &free_bytes, NULL, NULL) ||
        free_bytes.QuadPart < 200ull * 1024 * 1024) {
        state_sdcard();
        return;
    }
    g_install_base = 0;
    if (pack[0] == 0) {
        const char *la = getenv("LOCALAPPDATA");
        char dir[MAX_PATH];
        if (la && *la) snprintf(dir, sizeof(dir), "%s\\Asphalt5", la);
        else strcpy(dir, g_exe_dir);
        CreateDirectoryA(dir, NULL);
        snprintf(cache, sizeof(cache), "%s\\" CACHE_NAME, dir);
        if (getenv("A5_USE_CACHE") && cached_pack_ok(cache)) {
            pack = cache;
            g_install_base = 80;
        } else {
            g_state = ST_DOWNLOAD;
            set_buttons("CANCEL", ACT_CANCEL, NULL, ACT_NONE);
            g_progress = 0; g_percent[0] = 0;
            ui_progress(0);
            if (!download_pack(cache)) {
                if (!g_local_pack[0]) { state_error(); return; }
                pack = g_local_pack;
            } else {
                pack = cache;
                g_install_base = 80;
            }
        }
    }
    if (g_cancel && !g_local_pack[0]) { g_result = 1; DestroyWindow(g_hwnd); return; }
    g_state = ST_INSTALL;
    set_buttons("CANCEL", ACT_CANCEL, NULL, ACT_NONE);
    g_progress = g_install_base;
    if (inflate_split(pack, outdir)) {
        state_success();
    } else {
        state_error();
    }
}

/* ------------------------------------------------------------------ */
/* Window + input                                                     */
/* ------------------------------------------------------------------ */

static void map_mouse(LPARAM lp, int *fx, int *fy)
{
    int mx = (short)LOWORD(lp), my = (short)HIWORD(lp);
    *fx = mx * g_fb_w / (g_client_w ? g_client_w : 1);
    *fy = my * g_fb_h / (g_client_h ? g_client_h : 1);
}

static int hit(RectI r, int x, int y)
{
    return x >= r.x && x < r.x + r.w && y >= r.y && y < r.y + r.h;
}

static void do_action(int action)
{
    switch (action) {
    case ACT_DOWNLOAD:
    case ACT_RETRY:
        g_cancel = 0;
        do_install();
        break;
    case ACT_CANCEL:
        g_cancel = 1;
        g_result = 1;
        DestroyWindow(g_hwnd);
        break;
    case ACT_CONTINUE:
        g_result = 0;
        DestroyWindow(g_hwnd);
        break;
    }
}

static LRESULT CALLBACK wnd_proc(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp)
{
    switch (msg) {
    case WM_CREATE:
        g_hwnd = hwnd;
        play_installer_music();
        state_logo();
        SetTimer(hwnd, 1, 2600, NULL);
        return 0;
    case WM_TIMER:
        KillTimer(hwnd, 1);
        state_prompt();
        if (getenv("A5_UI_AUTO")) PostMessageA(hwnd, WM_APP + 1, 0, 0);
        return 0;
    case WM_APP + 1:
        if (getenv("A5_UI_AUTO")) { g_cancel = 0; do_install(); }
        return 0;
    case WM_APP + 2:
        if (getenv("A5_UI_AUTO")) { g_result = 0; DestroyWindow(hwnd); }
        return 0;
    case WM_PAINT:
        redraw();
        return 0;
    case WM_MOUSEMOVE: {
        int x, y;
        map_mouse(lp, &x, &y);
        g_hover_left = g_left_action && hit(g_btn_left, x, y);
        g_hover_right = g_right_action && hit(g_btn_right, x, y);
        schedule_redraw();
        return 0;
    }
    case WM_LBUTTONDOWN: {
        int x, y;
        map_mouse(lp, &x, &y);
        g_pressed_left = g_left_action && hit(g_btn_left, x, y);
        g_pressed_right = g_right_action && hit(g_btn_right, x, y);
        schedule_redraw();
        return 0;
    }
    case WM_LBUTTONUP: {
        int x, y;
        map_mouse(lp, &x, &y);
        {
            int pl = g_pressed_left, pr = g_pressed_right;
            g_pressed_left = g_pressed_right = 0;
            if (pl && g_left_action && hit(g_btn_left, x, y)) do_action(g_left_action);
            else if (pr && g_right_action && hit(g_btn_right, x, y)) do_action(g_right_action);
        }
        schedule_redraw();
        return 0;
    }
    case WM_CLOSE:
        g_cancel = 1;
        g_result = 1;
        DestroyWindow(hwnd);
        return 0;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProcA(hwnd, msg, wp, lp);
}

static void centre_window(HWND hwnd, int w, int h)
{
    int sw = GetSystemMetrics(SM_CXSCREEN), sh = GetSystemMetrics(SM_CYSCREEN);
    SetWindowPos(hwnd, NULL, (sw - w) / 2, (sh - h) / 2, w, h,
                 SWP_NOZORDER | SWP_NOACTIVATE);
}

int data_install_run(const char *local_pack)
{
    WNDCLASSA wc;
    HWND hwnd;
    MSG msg;
    char exe[MAX_PATH];
    DWORD n;
    RECT r;
    HINSTANCE inst = GetModuleHandleA(NULL);

    n = GetModuleFileNameA(NULL, exe, sizeof(exe));
    if (n == 0 || n >= sizeof(exe)) return 1;
    {
        char *slash = strrchr(exe, '\\');
        if (slash) *slash = 0;
        snprintf(g_exe_dir, sizeof(g_exe_dir), "%s", exe);
    }
    if (local_pack && *local_pack)
        snprintf(g_local_pack, sizeof(g_local_pack), "%s", local_pack);

    if (data_present()) return 0;

    extract_embedded_ui();
    load_assets();
    {
        BITMAPINFO bmi;
        memset(&bmi, 0, sizeof(bmi));
        bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
        bmi.bmiHeader.biWidth = g_fb_w;
        bmi.bmiHeader.biHeight = -g_fb_h;
        bmi.bmiHeader.biPlanes = 1;
        bmi.bmiHeader.biBitCount = 32;
        bmi.bmiHeader.biCompression = BI_RGB;
        g_dib = CreateDIBSection(NULL, &bmi, DIB_RGB_COLORS, (void **)&g_fb, NULL, 0);
        if (!g_dib || !g_fb) return 1;
        g_memdc = CreateCompatibleDC(NULL);
        SelectObject(g_memdc, g_dib);
    }

    InitCommonControls();
    memset(&wc, 0, sizeof(wc));
    wc.lpfnWndProc = wnd_proc;
    wc.hInstance = inst;
    wc.hCursor = LoadCursorA(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.lpszClassName = "Asphalt5GameInstaller";
    RegisterClassA(&wc);

    {
        DWORD style = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX;
        RECT wr = { 0, 0, UI_W, UI_H };
        int ww, wh;
        AdjustWindowRect(&wr, style, FALSE);
        ww = wr.right - wr.left;
        wh = wr.bottom - wr.top;
        hwnd = CreateWindowExA(0, "Asphalt5GameInstaller", APP_TITLE,
                               style, CW_USEDEFAULT, CW_USEDEFAULT, ww, wh,
                               NULL, NULL, inst, NULL);
        if (!hwnd) return 1;
        centre_window(hwnd, ww, wh);
    }
    if (!hwnd) return 1;
    GetClientRect(hwnd, &r);
    g_client_w = r.right - r.left;
    g_client_h = r.bottom - r.top;
    ShowWindow(hwnd, SW_SHOWNORMAL);
    UpdateWindow(hwnd);

    while (GetMessageA(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
    PlaySoundA(NULL, NULL, 0);
    if (g_wav_data) { free(g_wav_data); g_wav_data = NULL; }
    if (g_memdc) DeleteDC(g_memdc);
    if (g_dib) DeleteObject(g_dib);
    if (g_iface_px) stbi_image_free(g_iface_px);
    if (g_font_px) stbi_image_free(g_font_px);
    if (g_logo_px) stbi_image_free(g_logo_px);
    cleanup_ui_dir();
    return g_result;
}

#endif /* RECOMP_TARGET_337 / RECOMP_TARGET_341 */
