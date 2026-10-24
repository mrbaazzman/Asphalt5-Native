// installer.c - the phone's first-run GameInstaller, natively on PC.
//
// On a real phone the APK's GameInstaller activity runs before the game: it
// checks /sdcard/gameloft/games/asphalt5/ for the game data, asks whether to
// download, downloads the master data file over HTTP (a zlib stream of
// concatenated files), writes each file into the data directory and then
// launches the game.  This module reproduces that flow on the PC:
//
//   - the data directory is the host's game_dir (the same mapping the engine
//     uses for /sdcard/gameloft/games/asphalt5/)
//   - the file list (names + exact sizes) is the DEX's own table
//     (installer_resources.h, extracted from classes.dex)
//   - the master file (data/packs/Asphalt5_Android_FULL_ATC_342.zip) is served
//     over real HTTP from a local loopback server (dl.gameloft.com is long
//     dead) and inflated with the public-domain puff inflater
//   - the UI uses the APK's own installer sprites (gameloft_logo,
//     interface_menu, font_menu) and the real strings
//
// Entry points used by a5host.c:
//   a5install_data_incomplete(game_dir)  -> 1 when files are missing
//   a5install_run(game_dir, master, w, h) -> 1 = continue to the game, 0 = quit
#include <winsock2.h>
#include <windows.h>
#include <GL/gl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "installer_resources.h"
#ifdef A5_DATA_LEGACY
// Generated per version profile: the exact name/size manifest + master URL
// from that APK's GameInstaller (e.g. 3.3.7's 345-file PVRT pack).
#include "a5data_profile.h"
#define A5_DATA_COUNT A5_DATA_LEGACY_COUNT
#define A5_DATA_RES   a5_data_legacy_res
#else
#define A5_DATA_COUNT A5_RES_ATC_COUNT
#define A5_DATA_RES   a5_res_atc
#endif
#include "puff.h"
#include "../gl/a5gl.h"

// ---------------------------------------------------------------- sprite
// BSPRITE_v003: see analysis/tools/test_bsprite_parse.py for the layout.
typedef struct { int x, y, w, h; } BsMod;
typedef struct { unsigned char idx; short dx, dy; unsigned char fl; } BsFMod;
typedef struct {
    int nmod, nfm, nfr;
    BsMod* mods;
    BsFMod* fmods;
    short* frame_nfm;
    short* frame_start;
    unsigned char* frame_rc;
    int sw, sh;
    unsigned char* sheet;      // RGBA
    GLuint tex;
} BsSprite;

static unsigned char* read_file(const char* path, size_t* len) {
    FILE* f = fopen(path, "rb");
    if (!f) return NULL;
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    unsigned char* b = (unsigned char*)malloc(n ? n : 1);
    if (b && n) fread(b, 1, n, f);
    fclose(f);
    if (len) *len = (size_t)n;
    return b;
}

static int bs_load(BsSprite* s, const char* dir, const char* name) {
    memset(s, 0, sizeof(*s));
    char p[512];
    snprintf(p, sizeof(p), "%s\\%s.bsprite", dir, name);
    size_t len = 0;
    unsigned char* d = read_file(p, &len);
    if (!d) { printf("[installer] missing %s\n", p); return 0; }
    int o = 2;                                     // version(2 bytes)
    o += 4;                                        // flags
    s->nmod = d[o] | (d[o + 1] << 8); o += 2;
    s->mods = (BsMod*)calloc(s->nmod ? s->nmod : 1, sizeof(BsMod));
    for (int i = 0; i < s->nmod; i++) {
        s->mods[i].x = d[o] | (d[o + 1] << 8);
        s->mods[i].y = d[o + 2] | (d[o + 3] << 8);
        s->mods[i].w = d[o + 4] | (d[o + 5] << 8);
        s->mods[i].h = d[o + 6] | (d[o + 7] << 8);
        o += 8;
    }
    s->nfm = d[o] | (d[o + 1] << 8); o += 2;
    s->fmods = (BsFMod*)calloc(s->nfm ? s->nfm : 1, sizeof(BsFMod));
    for (int i = 0; i < s->nfm; i++) {
        s->fmods[i].idx = d[o];
        s->fmods[i].dx = (short)(d[o + 1] | (d[o + 2] << 8));
        s->fmods[i].dy = (short)(d[o + 3] | (d[o + 4] << 8));
        s->fmods[i].fl = d[o + 5];
        o += 6;
    }
    s->nfr = d[o] | (d[o + 1] << 8); o += 2;
    s->frame_nfm = (short*)calloc(s->nfr ? s->nfr : 1, sizeof(short));
    s->frame_start = (short*)calloc(s->nfr ? s->nfr : 1, sizeof(short));
    for (int i = 0; i < s->nfr; i++) {
        s->frame_nfm[i] = (short)(d[o] | (d[o + 1] << 8));
        s->frame_start[i] = (short)(d[o + 2] | (d[o + 3] << 8));
        o += 4;
    }
    s->frame_rc = (unsigned char*)malloc(s->nfr * 4 + 4);
    memcpy(s->frame_rc, d + o, s->nfr * 4);
    o += s->nfr * 4;
    free(d);
    // the sheet: <name>_01.rgba + <name>_01.size
    snprintf(p, sizeof(p), "%s\\%s_01.size", dir, name);
    FILE* sf = fopen(p, "r");
    if (!sf) { printf("[installer] missing %s\n", p); return 0; }
    if (fscanf(sf, "%d %d", &s->sw, &s->sh) != 2) { fclose(sf); return 0; }
    fclose(sf);
    snprintf(p, sizeof(p), "%s\\%s_01.rgba", dir, name);
    size_t rl = 0;
    s->sheet = read_file(p, &rl);
    if (!s->sheet || rl < (size_t)s->sw * s->sh * 4) { printf("[installer] bad sheet %s\n", p); return 0; }
    glGenTextures(1, &s->tex);
    glBindTexture(GL_TEXTURE_2D, s->tex);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, s->sw, s->sh, 0, GL_RGBA, GL_UNSIGNED_BYTE, s->sheet);
    printf("[installer] sprite %s: %d modules, %d frames, sheet %dx%d\n", name, s->nmod, s->nfr, s->sw, s->sh);
    return 1;
}

static void bs_quad(BsSprite* s, int mx, int my, int mw, int mh, int dx, int dy, int flip_x, int flip_y) {
    float u0 = (float)mx / s->sw, v0 = (float)my / s->sh;
    float u1 = (float)(mx + mw) / s->sw, v1 = (float)(my + mh) / s->sh;
    if (flip_x) { float t = u0; u0 = u1; u1 = t; }
    if (flip_y) { float t = v0; v0 = v1; v1 = t; }
    glTexCoord2f(u0, v0); glVertex2i(dx, dy);
    glTexCoord2f(u1, v0); glVertex2i(dx + mw, dy);
    glTexCoord2f(u1, v1); glVertex2i(dx + mw, dy + mh);
    glTexCoord2f(u0, v1); glVertex2i(dx, dy + mh);
}

static void bs_draw_frame(BsSprite* s, int frame, int x, int y) {
    if (frame < 0 || frame >= s->nfr) return;
    glBindTexture(GL_TEXTURE_2D, s->tex);
    glBegin(GL_QUADS);
    int n = s->frame_nfm[frame], st = s->frame_start[frame];
    for (int i = 0; i < n; i++) {
        BsFMod* fm = &s->fmods[st + i];
        int mi = fm->idx | ((fm->fl & 192) << 2);
        if (mi >= s->nmod) continue;
        BsMod* m = &s->mods[mi];
        bs_quad(s, m->x, m->y, m->w, m->h, x + fm->dx, y + fm->dy, 0, 0);
    }
    glEnd();
}

static void bs_frame_rect(BsSprite* s, int frame, int* fx, int* fy, int* fw, int* fh) {
    int x0 = 1 << 30, y0 = 1 << 30, x1 = -(1 << 30), y1 = -(1 << 30);
    if (frame >= 0 && frame < s->nfr) {
        int n = s->frame_nfm[frame], st = s->frame_start[frame];
        for (int i = 0; i < n; i++) {
            BsFMod* fm = &s->fmods[st + i];
            int mi = fm->idx | ((fm->fl & 192) << 2);
            if (mi >= s->nmod) continue;
            BsMod* m = &s->mods[mi];
            if (fm->dx < x0) x0 = fm->dx;
            if (fm->dy < y0) y0 = fm->dy;
            if (fm->dx + m->w > x1) x1 = fm->dx + m->w;
            if (fm->dy + m->h > y1) y1 = fm->dy + m->h;
        }
    }
    if (x1 < x0) { x0 = y0 = x1 = y1 = 0; }
    *fx = x0; *fy = y0; *fw = x1 - x0; *fh = y1 - y0;
}

static int bs_frame_w(BsSprite* s, int frame) {
    int fx, fy, fw, fh;
    bs_frame_rect(s, frame, &fx, &fy, &fw, &fh);
    return fw;
}
static int bs_frame_h(BsSprite* s, int frame) {
    int fx, fy, fw, fh;
    bs_frame_rect(s, frame, &fx, &fy, &fw, &fh);
    return fh;
}

// ---------------------------------------------------------------- font
#include "../../assets/installer/font_map.h"   // a5_font_map[256]: char -> font_menu fmodule index

// The installer font is uppercase-only; ASprite_A5::GetModuleByChar folds
// lowercase (and the 224..252 accented range) to uppercase.
static int font_fold(int ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 224 && ch <= 252)) ch -= 32;
    return ch;
}

static int font_advance(BsSprite* f, int ch) {
    // the Java: xx += (_modules_w[mi] - _fmodules[off+1]) + _fmodules[1] + 1
    // _fmodules[1] is the FIRST fmodule's dx (4 shorts per entry).
    int base = f->fmods[0].dx;
    if (ch == ' ') return f->mods[0].w + base + 1;
    int fm = a5_font_map[font_fold(ch) & 255];
    if (fm < 0 || fm >= f->nfm) return 0;
    int mi = f->fmods[fm].idx | ((f->fmods[fm].fl & 192) << 2);
    return (mi < f->nmod ? f->mods[mi].w : 0) - f->fmods[fm].dx + base + 1;
}

static int font_text_w(BsSprite* f, const char* s, int n) {
    int w = 0;
    for (int i = 0; i < n && s[i]; i++) w += font_advance(f, (unsigned char)s[i]);
    return w;
}

static void font_line(BsSprite* f, const char* s, int n, int x, int y) {
    glBindTexture(GL_TEXTURE_2D, f->tex);
    glBegin(GL_QUADS);
    int xx = x;
    for (int i = 0; i < n && s[i]; i++) {
        int ch = (unsigned char)s[i];
        if (ch == ' ') { xx += font_advance(f, ch); continue; }
        int fm = a5_font_map[font_fold(ch) & 255];
        if (fm < 0 || fm >= f->nfm) continue;
        BsFMod* g = &f->fmods[fm];
        int mi = g->idx | ((g->fl & 192) << 2);
        if (mi >= f->nmod) continue;
        BsMod* m = &f->mods[mi];
        bs_quad(f, m->x, m->y, m->w, m->h, xx + g->dx, y + g->dy, 0, 0);
        xx += font_advance(f, ch);
    }
    glEnd();
}

// draw a text, centred when centered != 0; '\n' breaks lines, long lines wrap
// at spaces to fit maxw pixels (like the Java's WrapText + DrawWrap).
static void font_draw(BsSprite* f, const char* s, int x, int y, int centered, int maxw) {
    const char* p = s;
    int line_y = y;
    while (*p) {
        // the next line: up to '\n' or the wrap width
        const char* e = p;
        while (*e && *e != '\n') e++;
        int n = (int)(e - p);
        if (maxw > 0) {
            while (n > 0 && font_text_w(f, p, n) > maxw) {
                int brk = n;
                while (brk > 0 && p[brk - 1] != ' ') brk--;
                if (brk <= 0) break;
                n = brk - 1;
            }
        }
        int w = font_text_w(f, p, n);
        int lx = centered ? x - w / 2 : x;
        font_line(f, p, n, lx, line_y);
        line_y += bs_frame_h(f, 0) > 0 ? 22 : 20;
        p = e;
        if (*p == '\n') p++;
        // skip leading spaces of the next line
        while (*p == ' ') p++;
    }
}

// ---------------------------------------------------------------- strings
// The real installer strings (res/values/strings.xml, English).
static const char* S_DOWNLOAD_FILES =
    "This game requires additional data to run on your phone.\nDo you want to launch the download?";
static const char* S_DOWNLOADING = "Please do not turn off your phone while the download is in progress.";
static const char* S_INITIALIZING = "Initializing...";
static const char* S_DOWNLOADING_FILES = "Downloading...";
static const char* S_SUCCESS =
    "The files have been succesfully downloaded. \n\n\n\n\nTouch the screen to continue.";
static const char* S_YES = "YES";
static const char* S_NO = "NO";

// ---------------------------------------------------------------- HTTP
// The local fallback server (used when the official servers are unreachable,
// or with A5_INSTALL_LOCAL=1): serves the master data file over loopback HTTP
// so the flow still works offline.
static volatile LONG srv_stop = 0;
static char srv_path[512];
static int srv_port = 8123;

static DWORD WINAPI server_thread(LPVOID arg) {
    WSADATA wsa;
    WSAStartup(MAKEWORD(2, 2), &wsa);
    SOCKET ls = socket(AF_INET, SOCK_STREAM, 0);
    if (ls == INVALID_SOCKET) return 1;
    int yes = 1;
    setsockopt(ls, SOL_SOCKET, SO_REUSEADDR, (const char*)&yes, sizeof(yes));
    struct sockaddr_in a;
    memset(&a, 0, sizeof(a));
    a.sin_family = AF_INET;
    a.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
    a.sin_port = htons((u_short)srv_port);
    if (bind(ls, (struct sockaddr*)&a, sizeof(a)) != 0) { closesocket(ls); return 1; }
    listen(ls, 4);
    printf("[installer] local fallback server on http://127.0.0.1:%d/\n", srv_port);
    while (!srv_stop) {
        fd_set rf;
        FD_ZERO(&rf);
        FD_SET(ls, &rf);
        struct timeval tv = { 0, 200000 };
        if (select(0, &rf, NULL, NULL, &tv) <= 0) continue;
        SOCKET cs = accept(ls, NULL, NULL);
        if (cs == INVALID_SOCKET) continue;
        char req[1024];
        int n = recv(cs, req, sizeof(req) - 1, 0);
        if (n > 0) {
            req[n] = 0;
            FILE* f = fopen(srv_path, "rb");
            if (f) {
                fseek(f, 0, SEEK_END);
                long sz = ftell(f);
                fseek(f, 0, SEEK_SET);
                char hdr[256];
                int hn = snprintf(hdr, sizeof(hdr),
                                  "HTTP/1.0 200 OK\r\nContent-Type: application/octet-stream\r\n"
                                  "Content-Length: %ld\r\nConnection: close\r\n\r\n", sz);
                send(cs, hdr, hn, 0);
                char* buf = (char*)malloc(1 << 16);
                while (!srv_stop) {
                    size_t got = fread(buf, 1, 1 << 16, f);
                    if (!got) break;
                    size_t off = 0;
                    while (off < got) {
                        int s = send(cs, buf + off, (int)(got - off), 0);
                        if (s <= 0) { off = got; break; }
                        off += (size_t)s;
                    }
                }
                free(buf);
                fclose(f);
            } else {
                const char* r = "HTTP/1.0 404 Not Found\r\nContent-Length: 0\r\n\r\n";
                send(cs, r, (int)strlen(r), 0);
            }
        }
        closesocket(cs);
    }
    closesocket(ls);
    return 0;
}

// A streaming HTTP GET with redirect following: one http_step() per frame
// keeps the installer UI alive while the master data file downloads.
typedef struct {
    SOCKET s;
    unsigned char* buf;
    size_t len, cap;
    long long total;          // Content-Length (the body), -1 when unknown
    int header_done, done, fail;
    int redirect;             // set when a Location: header arrives
    char next_url[512];
    char cur_url[512];
} HttpDl;

static int url_parse(const char* url, char* host, int hostsz, int* port, char* path, int pathsz) {
    if (strncmp(url, "http://", 7) != 0) return 0;
    const char* p = url + 7;
    const char* slash = strchr(p, '/');
    if (!slash) return 0;
    const char* colon = memchr(p, ':', (size_t)(slash - p));
    size_t hl = colon ? (size_t)(colon - p) : (size_t)(slash - p);
    if (hl >= (size_t)hostsz) return 0;
    memcpy(host, p, hl); host[hl] = 0;
    *port = colon ? atoi(colon + 1) : 80;
    snprintf(path, pathsz, "%s", slash);
    return 1;
}

static int http_begin_url(HttpDl* d, const char* url) {
    char host[256], path[512];
    int port = 80;
    if (!url_parse(url, host, sizeof(host), &port, path, sizeof(path))) return 0;
    // a fresh request: reset the response state (redirects re-enter here)
    d->len = 0;
    d->total = -1;
    d->header_done = 0;
    d->done = 0;
    d->fail = 0;
    snprintf(d->cur_url, sizeof(d->cur_url), "%s", url);
    WSADATA wsa;
    WSAStartup(MAKEWORD(2, 2), &wsa);
    d->s = socket(AF_INET, SOCK_STREAM, 0);
    if (d->s == INVALID_SOCKET) return 0;
    struct hostent* he = gethostbyname(host);
    if (!he) { closesocket(d->s); d->s = INVALID_SOCKET; return 0; }
    struct sockaddr_in a;
    memset(&a, 0, sizeof(a));
    a.sin_family = AF_INET;
    a.sin_addr = *(struct in_addr*)he->h_addr;
    a.sin_port = htons((u_short)port);
    if (connect(d->s, (struct sockaddr*)&a, sizeof(a)) != 0) { closesocket(d->s); d->s = INVALID_SOCKET; return 0; }
    char req[1024];
    int rn = snprintf(req, sizeof(req),
                      "GET %s HTTP/1.0\r\nHost: %s\r\nUser-Agent: Asphalt5-Installer\r\n"
                      "Connection: close\r\n\r\n", path, host);
    send(d->s, req, rn, 0);
    printf("[installer] GET %s\n", url);
    return 1;
}

// one step: read up to 256 KB; returns 1 while in progress
static int http_step(HttpDl* d) {
    if (d->done || d->fail) return 0;
    if (d->len + (256 << 10) + 4096 > d->cap) {
        d->cap = d->cap ? d->cap * 2 : (1 << 20);
        d->buf = (unsigned char*)realloc(d->buf, d->cap);
    }
    int got = recv(d->s, (char*)d->buf + d->len, 256 << 10, 0);
    if (got <= 0) { d->done = 1; closesocket(d->s); d->s = INVALID_SOCKET; return 0; }
    d->len += (size_t)got;
    if (!d->header_done) {
        unsigned char* hp = NULL;
        for (size_t i = 0; i + 4 <= d->len; i++)
            if (d->buf[i] == '\r' && d->buf[i+1] == '\n' && d->buf[i+2] == '\r' && d->buf[i+3] == '\n') { hp = d->buf + i; break; }
        if (hp) {
            // status + headers
            d->buf[d->len < d->cap ? d->len : d->cap - 1] = 0;
            char* hdr = (char*)d->buf;
            int code = 0;
            if (sscanf(hdr, "HTTP/%*d.%*d %d", &code) == 1) {
                if (code >= 300 && code < 400) {
                    char* loc = strstr(hdr, "Location:");
                    if (!loc) loc = strstr(hdr, "location:");
                    if (loc) {
                        loc += 9;
                        while (*loc == ' ') loc++;
                        char* e = loc;
                        while (*e && *e != '\r' && *e != '\n') e++;
                        *e = 0;
                        snprintf(d->next_url, sizeof(d->next_url), "%s", loc);
                        d->redirect = 1;
                    }
                } else if (code != 200) {
                    d->fail = 1;
                }
                char* cl = strstr(hdr, "Content-Length:");
                if (!cl) cl = strstr(hdr, "content-length:");
                if (cl) d->total = _atoi64(cl + 15);
            }
            size_t off = (size_t)(hp + 4 - d->buf);
            memmove(d->buf, d->buf + off, d->len - off);
            d->len -= off;
            d->header_done = 1;
            if (d->redirect || d->fail) { closesocket(d->s); d->s = INVALID_SOCKET; d->done = 1; return 0; }
        }
    }
    return 1;
}

// ---- inflate worker: puff on a thread so the installer UI stays responsive
// (the 153 MB inflate takes tens of seconds; a frozen window looks hung).
static unsigned char* g_infl_src;
static size_t g_infl_srclen;
static unsigned char* g_infl_dst;
static unsigned long g_infl_dstlen, g_infl_out, g_infl_in;
static volatile LONG g_infl_done = 0;
static volatile LONG g_infl_rc = -999;

static DWORD WINAPI inflate_thread(LPVOID p) {
    unsigned long out = g_infl_dstlen, in = (unsigned long)g_infl_srclen;
    int rc = puff(g_infl_dst, &out, g_infl_src, &in);   // src already skips the zlib header
    g_infl_out = out;
    g_infl_in = in;
    g_infl_rc = rc;
    InterlockedExchange(&g_infl_done, 1);
    return 0;
}

// ---------------------------------------------------------------- data check
static long long file_size(const char* path) {
    FILE* f = fopen(path, "rb");
    if (!f) return -1;
    fseek(f, 0, SEEK_END);
    long long n = ftell(f);
    fclose(f);
    return n;
}

// The Java isRequiredFile: missing or wrong-size files are required. The
// .glsnd entries are satisfied by a sibling .ogg (the engine's rename rule).
static int file_required(const char* dir, const char* name, long long size) {
    char p[700];
    snprintf(p, sizeof(p), "%s\\%s", dir, name);
    size_t nl = strlen(name);
    if (nl > 6 && strcmp(name + nl - 6, ".glsnd") == 0) {
        char ogg[700];
        snprintf(ogg, sizeof(ogg), "%s\\%.*s.ogg", dir, (int)(nl - 6), name);
        if (file_size(ogg) >= 0) return 0;
    }
    return file_size(p) == size ? 0 : 1;
}

int a5install_data_incomplete(const char* game_dir) {
#if defined(A5_TOLERANT_DATA) && !defined(A5_DATA_LEGACY)
    // Other engine builds use a different data manifest than the 3.4.1 list
    // in installer_resources.h.  Accept a populated data folder when the core
    // archives are present instead of comparing every file size.
    static const char* core[] = { "textures", "gamecfg.bar", "ia.bar", "strings.bar" };
    int present = 0;
    for (size_t i = 0; i < sizeof(core) / sizeof(core[0]); i++) {
        char p[700];
        snprintf(p, sizeof(p), "%s\\%s", game_dir, core[i]);
        if (file_size(p) > 0) present++;
    }
    printf("[installer] data check: %d/%d core files present in %s\n",
           present, (int)(sizeof(core) / sizeof(core[0])), game_dir);
    return present ? 0 : 1;
#else
    int missing = 0;
    for (int i = 0; i < A5_DATA_COUNT; i++)
        if (file_required(game_dir, A5_DATA_RES[i].name, A5_DATA_RES[i].size)) missing++;
    printf("[installer] data check: %d/%d files missing in %s\n",
           missing, A5_DATA_COUNT, game_dir);
    return missing;
#endif
}

// ---------------------------------------------------------------- run
#define ST_LOGO     3
#define ST_QUESTION 5
#define ST_DOWNLOAD 6
#define ST_SUCCESS  7
#define ST_DONE     10

int a5install_run(const char* game_dir, const char* master, int w, int h) {
    setvbuf(stdout, NULL, _IONBF, 0);   // keep the log even if the process is killed
    printf("[installer] first-run installer: dir=%s master=%s screen=%dx%d\n", game_dir, master, w, h);
    CreateDirectoryA(game_dir, NULL);
    // extract the data dir's parents too (the loop misses the leaf itself)
    {
        char tmp[700];
        snprintf(tmp, sizeof(tmp), "%s", game_dir);
        for (char* c = tmp + 3; *c; c++)
            if (*c == '\\') { *c = 0; CreateDirectoryA(tmp, NULL); *c = '\\'; }
        CreateDirectoryA(game_dir, NULL);
    }

    // the installer assets live next to the exe (extracted from the APK);
    // fall back to the CWD-relative path for dev runs
    char adir[512] = {0};
    {
        const char* aenv = getenv("A5_INSTALLER_ASSETS");
        if (aenv && *aenv) {
            // end-user setup stores the APK's installer sprites outside the
            // game folder so the install directory has no APK files
            snprintf(adir, sizeof(adir), "%s", aenv);
        } else {
            char exe[MAX_PATH] = {0};
            if (GetModuleFileNameA(NULL, exe, sizeof(exe))) {
                char* slash = strrchr(exe, '\\');
                if (slash) { *slash = 0; snprintf(adir, sizeof(adir), "%s\\assets\\installer", exe); }
            }
            char probe[600];
            snprintf(probe, sizeof(probe), "%s\\gameloft_logo.bsprite", adir);
            if (file_size(probe) < 0) {
                const char* la = getenv("LOCALAPPDATA");
                if (la && *la)
                    snprintf(adir, sizeof(adir), "%s\\Asphalt5\\installer_assets", la);
                else
                    snprintf(adir, sizeof(adir), "assets\\installer");
            }
        }
    }
    BsSprite logo, ui, font;
    if (!bs_load(&logo, adir, "gameloft_logo") ||
        !bs_load(&ui, adir, "interface_menu") ||
        !bs_load(&font, adir, "font_menu")) {
        printf("[installer] assets missing (%s) - cannot run the installer UI\n", adir);
        return 1;   // let the game try anyway
    }

    // the loopback data server
    snprintf(srv_path, sizeof(srv_path), "%s", master);
    srv_stop = 0;
    HANDLE th = CreateThread(NULL, 0, server_thread, NULL, 0, NULL);
    Sleep(120);

    int state = ST_LOGO;
    int logo_ms = 0, t_prev = (int)GetTickCount();
    int btn_yes = -1, btn_no = -1, hover = 0;
    int down_x = -1, down_y = -1;
    // A5_INSTALL_AUTO=1: scripted test - auto-answer YES and auto-continue.
    int auto_mode = getenv("A5_INSTALL_AUTO") != NULL;
    int auto_ms = 0;

    // download machinery
    unsigned char* raw = NULL; size_t raw_len = 0;
    int dl_phase = 0;              // 0 idle, 1 begin, 2 inflate, 3 write, 4 done, 5 streaming
    int dl_file = 0;
    long long dl_off = 0;
    int fail = 0;
    HttpDl dl;
    memset(&dl, 0, sizeof(dl));
    int dl_hops = 0;
    HANDLE infl_th = NULL;
    char url_atc[512] = "", url_pvrt[512] = "";
    int force_local = getenv("A5_INSTALL_LOCAL") != NULL;
    // the download links the real installer reads from res/raw/datalink.txt:
    // "<ATC url>?<PVRT url>"
#ifndef A5_DATA_LEGACY
    {
        char p[600];
        snprintf(p, sizeof(p), "%s\\datalink.txt", adir);
        size_t ll = 0;
        unsigned char* ld = read_file(p, &ll);
        if (ld) {
            char* q = strchr((char*)ld, '?');
            if (q) { *q = 0; snprintf(url_pvrt, sizeof(url_pvrt), "%s", q + 1); }
            // strip whitespace/newlines
            char* e = (char*)ld; while (*e && *e != '\r' && *e != '\n') e++; *e = 0;
            snprintf(url_atc, sizeof(url_atc), "%s", (char*)ld);
            printf("[installer] datalink: ATC=%s\n[installer] datalink: PVRT=%s\n", url_atc, url_pvrt);
            free(ld);
        }
    }
#endif
    int use_pvrt = getenv("A5_PVRT") != NULL;
#ifdef A5_DATA_LEGACY
    // Profile URLs from the APK's own GameInstaller (3.3.7 is PVRT-only).
    if (!url_pvrt[0]) snprintf(url_pvrt, sizeof(url_pvrt), "%s", A5_DATA_URL_PVRT);
    if (!url_atc[0]) snprintf(url_atc, sizeof(url_atc), "%s", A5_DATA_URL_ATC);
#endif
#ifdef A5_DEFAULT_PVRT
    if (!getenv("A5_ATC")) use_pvrt = 1;
    if (getenv("A5_PVRT")) use_pvrt = 1;
#endif
    int dl_started = 0;

    int running = 1;
    while (running && state != ST_DONE) {
        int now = (int)GetTickCount();
        int dt = now - t_prev; t_prev = now;
        if (dt < 0) dt = 0;

        // input
        int evt, mx, my;
        while (a5gl_poll_input(&evt, &mx, &my)) {
            if (evt == 0) { down_x = mx; down_y = my; }
            else if (evt == 1) {
                // a tap = a click if it did not move much
                int dx = mx - down_x, dy = my - down_y;
                if (down_x >= 0 && dx * dx + dy * dy < 30 * 30) {
                    if (state == ST_LOGO) state = ST_QUESTION;
                    else if (state == ST_QUESTION) {
                        if (btn_yes >= 0 && mx >= btn_yes && mx <= btn_yes + bs_frame_w(&ui, 8) &&
                            my >= h / 2 + 65 && my <= h / 2 + 65 + bs_frame_h(&ui, 8)) {
                            state = ST_DOWNLOAD; dl_phase = 1;
                        } else if (btn_no >= 0 && mx >= btn_no && mx <= btn_no + bs_frame_w(&ui, 8) &&
                                   my >= h / 2 + 65 && my <= h / 2 + 65 + bs_frame_h(&ui, 8)) {
                            running = 0;
                        }
                    } else if (state == ST_SUCCESS) state = ST_DONE;
                }
                down_x = down_y = -1;
            }
        }

        // state logic
        if (state == ST_LOGO) {
            logo_ms += dt;
            if (logo_ms > 2500) state = ST_QUESTION;
        } else if (state == ST_QUESTION && auto_mode) {
            auto_ms += dt;
            if (auto_ms > 800) { state = ST_DOWNLOAD; dl_phase = 1; }
        } else if (state == ST_SUCCESS && auto_mode) {
            auto_ms += dt;
            if (auto_ms > 1500) state = ST_DONE;
        } else if (state == ST_DOWNLOAD) {
            if (dl_phase == 1) {   // begin the download (official servers first)
                char url[512];
                const char* remote = use_pvrt ? url_pvrt : url_atc;
                if (force_local || !remote[0]) {
                    snprintf(url, sizeof(url), "http://127.0.0.1:%d/data", srv_port);
                } else {
                    snprintf(url, sizeof(url), "%s", remote);
                }
                if (!http_begin_url(&dl, url)) {
                    if (!force_local && remote[0]) {
                        printf("[installer] official server unreachable - using the local fallback\n");
                        snprintf(url, sizeof(url), "http://127.0.0.1:%d/data", srv_port);
                        if (!http_begin_url(&dl, url)) fail = 1;
                    } else fail = 1;
                }
                dl_started = 1;
                dl_phase = fail ? 4 : 5;
            } else if (dl_phase == 5) {   // streaming the master file
                int more = http_step(&dl);
                if (!more) {
                    if (dl.redirect && dl_hops < 5) {
                        dl_hops++;
                        printf("[installer] redirect -> %s\n", dl.next_url);
                        http_begin_url(&dl, dl.next_url);
                        dl.redirect = 0;
                    } else if (dl.fail || dl.len < 1024) {
                        fail = 1;
                        dl_phase = 4;
                    } else {
                        printf("[installer] downloaded %zu bytes\n", dl.len);
                        dl_phase = 2;
                    }
                }
            } else if (dl_phase == 2) {  // inflate on a worker thread (the UI stays live)
                if (!infl_th) {
                    unsigned long out = 0;
                    for (int i = 0; i < A5_DATA_COUNT; i++) out += (unsigned long)A5_DATA_RES[i].size;
                    raw = (unsigned char*)malloc(out ? out : 1);
                    raw_len = out;
                    g_infl_src = dl.buf + 2;            // skip the 2-byte zlib header
                    g_infl_srclen = dl.len - 2;
                    g_infl_dst = raw;
                    g_infl_dstlen = out;
                    g_infl_done = 0;
                    g_infl_rc = -999;
                    infl_th = CreateThread(NULL, 0, inflate_thread, NULL, 0, NULL);
                    printf("[installer] inflating %zu -> %lu bytes (worker thread)\n", g_infl_srclen, out);
                    fflush(stdout);
                } else if (g_infl_done) {
                    printf("[installer] inflate rc=%d out=%lu/%lu in=%lu/%zu\n",
                           (int)g_infl_rc, g_infl_out, g_infl_dstlen, g_infl_in, g_infl_srclen);
                    fflush(stdout);
                    if (g_infl_rc != 0 || g_infl_out != g_infl_dstlen) fail = 1;
                    CloseHandle(infl_th);
                    infl_th = NULL;
                    free(dl.buf);
                    dl.buf = NULL;
                    dl_phase = fail ? 4 : 3;
                }
            } else if (dl_phase == 3) {  // write files (a slice per frame for the UI)
                long long budget = 6LL << 20;
                while (budget > 0 && dl_file < A5_DATA_COUNT) {
                    const A5ResEntry* e = &A5_DATA_RES[dl_file];
                    long long left = (long long)e->size - dl_off;
                    long long chunk = left < budget ? left : budget;
                    char p[700];
                    snprintf(p, sizeof(p), "%s\\%s", game_dir, e->name);
                    FILE* f = fopen(p, dl_off == 0 ? "wb" : "r+b");
                    if (!f && dl_off == 0) f = fopen(p, "wb");
                    if (f) {
                        if (dl_off > 0) _fseeki64(f, dl_off, SEEK_SET);
                        long long base = 0;
                        for (int k = 0; k < dl_file; k++) base += A5_DATA_RES[k].size;
                        fwrite(raw + base + dl_off, 1, (size_t)chunk, f);
                        fclose(f);
                    } else {
                        if (!fail) { printf("[installer] cannot write %s\n", p); fflush(stdout); }
                        fail = 1;
                    }
                    dl_off += chunk;
                    budget -= chunk;
                    if (dl_off >= (long long)e->size) { dl_file++; dl_off = 0; }
                    if (fail) break;
                }
                if (fail || dl_file >= A5_DATA_COUNT) { dl_phase = 4; if (fail) running = 0; else state = ST_SUCCESS; }
            }
        }

        // ---------------- render
        glViewport(0, 0, w, h);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        glOrtho(0, w, h, 0, -1, 1);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glDisable(GL_DEPTH_TEST);
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glEnable(GL_TEXTURE_2D);
        glColor4f(1, 1, 1, 1);

        glClearColor(0, 0, 0, 1);
        glClear(GL_COLOR_BUFFER_BIT);

        if (state == ST_LOGO) {
            bs_draw_frame(&logo, 0, w / 2, h / 2);
        } else if (state == ST_QUESTION || state == ST_DOWNLOAD || state == ST_SUCCESS) {            bs_draw_frame(&ui, 0, 0, 0);              // the background
            bs_draw_frame(&ui, 7, w / 2, h / 2);      // the window
            const char* title = state == ST_QUESTION ? S_DOWNLOAD_FILES :
                                state == ST_DOWNLOAD ? (dl_phase == 2 ? S_INITIALIZING : S_DOWNLOADING_FILES) :
                                S_SUCCESS;
            font_draw(&font, title, w / 2, (h / 2) + 30 - bs_frame_h(&ui, 7) / 2 + 40, 1, w - (w >> 2));
            if (state == ST_QUESTION) {
                int fw = bs_frame_w(&ui, 8);
                btn_yes = (w / 3) - fw / 2;
                btn_no = ((w / 3) * 2) - fw / 2 - 40;
                int by = (h / 2) + 65;
                bs_draw_frame(&ui, hover == 1 ? 9 : 8, btn_yes, by);
                font_draw(&font, S_YES, btn_yes, by, 1, 0);
                bs_draw_frame(&ui, hover == 2 ? 9 : 8, btn_no, by);
                font_draw(&font, S_NO, btn_no, by, 1, 0);
            } else if (state == ST_DOWNLOAD) {
                // the loading bar (the Java drawLoadingBar layout)
                int bx = w >> 2, by = h - 70;
                bs_draw_frame(&ui, 1, bx, by);
                int fw = bs_frame_w(&ui, 3), fh = bs_frame_h(&ui, 3);
                int level;
                if (dl_phase == 5) {
                    long long tot = dl.total > 0 ? dl.total : (long long)dl.len + 1;
                    level = (int)((long long)dl.len * fw / tot);
                } else {
                    level = (int)((long long)(dl_file + 1) * fw / A5_DATA_COUNT);
                }
                if (level > fw) level = fw;
                if (level < 0) level = 0;
                glEnable(GL_SCISSOR_TEST);
                glScissor(bx, h - (by + fh), level, fh);
                bs_draw_frame(&ui, 3, bx - 2 - (fw - level), by);
                glDisable(GL_SCISSOR_TEST);
                bs_draw_frame(&ui, 5, bx - 2 + level, by);
                bs_draw_frame(&ui, 2, bx - 2 + 1, by);
                char buf[128];
                if (dl_phase == 5)
                    snprintf(buf, sizeof(buf), "%lld / %lld KB", (long long)(dl.len / 1024),
                             dl.total > 0 ? dl.total / 1024 : 0);
                else if (dl_phase == 2) {
                    static const char* dots[] = { "", ".", "..", "..." };
                    snprintf(buf, sizeof(buf), "Initializing%s", dots[(now / 400) & 3]);
                } else
                    snprintf(buf, sizeof(buf), "%d / %d files", dl_file, A5_DATA_COUNT);
                font_draw(&font, buf, w / 2, h - 100, 1, 0);
            }
        }

        a5gl_swap();
        if (!a5gl_poll()) { running = 0; break; }
        // A5_INSTALL_SHOT=<prefix>: one screenshot per state (evidence)
        {
            static int shot_state = -1;
            const char* sp = getenv("A5_INSTALL_SHOT");
            if (sp && state != shot_state && state != ST_DONE) {
                shot_state = state;
                char p[600];
                snprintf(p, sizeof(p), "%s_state%d.bmp", sp, state);
                a5gl_screenshot_bmp(p);
            }
        }
        Sleep(16);
    }

    if (th) { srv_stop = 1; WaitForSingleObject(th, 2000); CloseHandle(th); }
    if (infl_th) { WaitForSingleObject(infl_th, 120000); CloseHandle(infl_th); }
    if (dl.s != INVALID_SOCKET && dl.s != 0) closesocket(dl.s);
    free(dl.buf);
    free(raw);
    if (fail) {
        printf("[installer] download failed\n");
        MessageBoxA(NULL, "The game data download failed.\nRun a5host.exe again to retry.",
                    "Asphalt 5 installer", MB_OK | MB_ICONERROR);
        return 0;
    }
    printf("[installer] data ready - starting the game\n");
    // canonical GL state + invalidate the bridge's state shadow (the installer
    // UI drew with raw GL before the engine booted)
    glDisable(GL_BLEND);
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_SCISSOR_TEST);
    glBindTexture(GL_TEXTURE_2D, 0);
    a5gl_state_invalidate();
    return 1;
}
