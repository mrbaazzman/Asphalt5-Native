/* movie.c - MP4 playback for the engine's intro/trailer and career movies.
 *
 * On the phone GS_TrailerMovie::Create calls nativeLoadMovie ->
 * GLMediaPlayer.loadMovie, launches a full-screen MyVideoView activity and
 * waits on Game+0x1d72 until the activity finishes.  The host records the
 * request in the JNI shim, plays it between engine frames with Media
 * Foundation, and clears that flag when playback ends or is skipped.
 *
 * Video is decoded to RGB32 and drawn letterboxed through the existing WGL
 * context; audio is decoded to PCM, resampled to the mixer's 44.1 kHz stereo
 * format and fed into the WinMM movie ring.  The engine is not running while
 * the movie is on screen, so this function owns the GL context and window
 * message pump for its duration.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <mfapi.h>
#include <mfidl.h>
#include <mferror.h>
#include <mfreadwrite.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <GL/gl.h>

#include "../gl/gl_internal.h"
#include "audio.h"
#include "movie.h"

#ifndef GL_BGRA
#define GL_BGRA 0x80E1
#endif
#ifndef GL_CLAMP_TO_EDGE
#define GL_CLAMP_TO_EDGE 0x812F
#endif

static GLuint s_tex;
static UINT32 s_tex_w, s_tex_h;

/* ---- presentation ------------------------------------------------------ */

static void movie_shot(const char *prefix, int n, int w, int h)
{
    if (!prefix || !*prefix || w <= 0 || h <= 0) return;
    unsigned char *pixels = (unsigned char *)malloc((size_t)w * (size_t)h * 3);
    if (!pixels) return;

    glPixelStorei(GL_PACK_ALIGNMENT, 1);
    glReadBuffer(GL_BACK);
    glReadPixels(0, 0, w, h, GL_RGB, GL_UNSIGNED_BYTE, pixels);

    char path[700];
    snprintf(path, sizeof(path), "%s_%d.ppm", prefix, n);
    FILE *f = fopen(path, "wb");
    if (f) {
        fprintf(f, "P6\n%d %d\n255\n", w, h);
        for (int y = h - 1; y >= 0; y--)
            fwrite(pixels + (size_t)y * (size_t)w * 3, 1, (size_t)w * 3, f);
        fclose(f);
        fprintf(stderr, "[movie] shot %s\n", path);
    }
    free(pixels);
}

static void present_frame(const BYTE *data, UINT32 fw, UINT32 fh, int w, int h)
{
    if (pglActiveTexture) pglActiveTexture(GL_TEXTURE0);
    g_active_tex_unit = 0;

    if (!s_tex) {
        glGenTextures(1, &s_tex);
        glBindTexture(GL_TEXTURE_2D, s_tex);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)fw, (GLsizei)fh, 0,
                     GL_BGRA, GL_UNSIGNED_BYTE, data);
        s_tex_w = fw; s_tex_h = fh;
    } else {
        glBindTexture(GL_TEXTURE_2D, s_tex);
        glPixelStorei(GL_UNPACK_ALIGNMENT, 4);
        if (fw != s_tex_w || fh != s_tex_h) {
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)fw, (GLsizei)fh, 0,
                         GL_BGRA, GL_UNSIGNED_BYTE, data);
            s_tex_w = fw; s_tex_h = fh;
        } else {
            glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, (GLsizei)fw, (GLsizei)fh,
                            GL_BGRA, GL_UNSIGNED_BYTE, data);
        }
    }
    g_tex_bind[0] = (GLint)s_tex;
    g_cur_tex_binding = (GLint)s_tex;

    glDisable(GL_BLEND);
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_SCISSOR_TEST);
    glDisable(GL_CULL_FACE);
    glDisable(GL_LIGHTING);
    glDisable(GL_FOG);
    glDisable(GL_ALPHA_TEST);
    glDisable(GL_STENCIL_TEST);
    glDisable(GL_TEXTURE_GEN_S);
    glDisable(GL_TEXTURE_GEN_T);
    glColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
    glDisableClientState(GL_VERTEX_ARRAY);
    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    glDisableClientState(GL_COLOR_ARRAY);
    glDisableClientState(GL_NORMAL_ARRAY);
    glEnable(GL_TEXTURE_2D);
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);
    glColor4f(1, 1, 1, 1);

    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, w, h, 0, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    float va = (float)fw / (float)fh;
    float sa = (float)w / (float)h;
    int dw, dh;
    if (va > sa) { dw = w; dh = (int)(w / va); }
    else         { dh = h; dw = (int)(h * va); }
    int dx = (w - dw) / 2;
    int dy = (h - dh) / 2;

    glBegin(GL_QUADS);
    /* MF's RGB32 video processor output is top-down. */
    glTexCoord2f(0, 0); glVertex2i(dx, dy);
    glTexCoord2f(1, 0); glVertex2i(dx + dw, dy);
    glTexCoord2f(1, 1); glVertex2i(dx + dw, dy + dh);
    glTexCoord2f(0, 1); glVertex2i(dx, dy + dh);
    glEnd();
}

/* ---- Media Foundation helpers ----------------------------------------- */

static int find_stream(IMFSourceReader *rd, const GUID *major)
{
    for (DWORD i = 0; ; i++) {
        IMFMediaType *mt = NULL;
        HRESULT hr = rd->lpVtbl->GetNativeMediaType(rd, i, 0, &mt);
        if (hr == MF_E_INVALIDSTREAMNUMBER || FAILED(hr)) break;
        GUID maj = {0};
        mt->lpVtbl->GetGUID(mt, &MF_MT_MAJOR_TYPE, &maj);
        mt->lpVtbl->Release(mt);
        if (IsEqualGUID(&maj, major)) return (int)i;
    }
    return -1;
}

static void media_frame_size(IMFMediaType *mt, UINT32 *w, UINT32 *h)
{
    UINT64 sz = 0;
    *w = *h = 0;
    if (mt && SUCCEEDED(mt->lpVtbl->GetUINT64(mt, &MF_MT_FRAME_SIZE, &sz))) {
        *w = (UINT32)(sz >> 32);
        *h = (UINT32)(sz & 0xFFFFFFFF);
    }
}

/* MF delivers the clip's native PCM rate (career videos are 22050 Hz) while
 * the mixer always wants 44100 stereo.  NULL means the input already fits. */
static short *movie_resample(const short *in, int in_frames, int ch, int rate,
                             int *out_frames)
{
    *out_frames = 0;
    if (in_frames <= 0 || ch <= 0) return NULL;
    if (rate == 44100 && ch == 2) {
        *out_frames = in_frames;
        return NULL;
    }
    long long of = (long long)in_frames * 44100 / (rate > 0 ? rate : 44100);
    if (of < 1) of = 1;
    short *out = (short *)malloc((size_t)of * 2 * sizeof(short));
    if (!out) return NULL;
    double step = (double)(rate > 0 ? rate : 44100) / 44100.0;
    for (long long i = 0; i < of; i++) {
        double sp = (double)i * step;
        int i0 = (int)sp;
        double fr = sp - i0;
        if (i0 >= in_frames) i0 = in_frames - 1;
        int i1 = (i0 + 1 < in_frames) ? i0 + 1 : i0;
        short l0 = in[(size_t)i0 * ch];
        short r0 = in[(size_t)i0 * ch + (ch >= 2 ? 1 : 0)];
        short l1 = in[(size_t)i1 * ch];
        short r1 = in[(size_t)i1 * ch + (ch >= 2 ? 1 : 0)];
        out[i * 2]     = (short)(l0 + (l1 - l0) * fr);
        out[i * 2 + 1] = (short)(r0 + (r1 - r0) * fr);
    }
    *out_frames = (int)of;
    return out;
}

/* ---- playback ---------------------------------------------------------- */

int movie_play(const char *path, int w, int h)
{
    if (!path || !*path) return 0;
    if (getenv("A5_NO_MOVIE") || getenv("RECOMP_NO_MOVIE")) {
        fprintf(stderr, "[movie] disabled (A5_NO_MOVIE/RECOMP_NO_MOVIE)\n");
        return 0;
    }

    int audio_ok = (a5audio_init() == 0);
    if (!audio_ok)
        fprintf(stderr, "[movie] audio backend unavailable; playing silent\n");

    wchar_t wpath[1024];
    MultiByteToWideChar(CP_UTF8, 0, path, -1, wpath, 1024);

    HRESULT hr = MFStartup(MF_VERSION, MFSTARTUP_NOSOCKET);
    if (FAILED(hr)) {
        fprintf(stderr, "[movie] MFStartup failed %#lx\n", (unsigned long)hr);
        return 0;
    }

    IMFSourceReader *rd = NULL;
    IMFAttributes *attrs = NULL;
    int played = 0;
    int gl_pushed = 0;
    int vstream = -1, astream = -1;
    UINT32 fw = 0, fh = 0;
    UINT32 a_native_rate = 44100, a_native_ch = 2, a_out_ch = 2;

    MFCreateAttributes(&attrs, 1);
    if (attrs)
        attrs->lpVtbl->SetUINT32(attrs, &MF_SOURCE_READER_ENABLE_VIDEO_PROCESSING, TRUE);
    hr = MFCreateSourceReaderFromURL(wpath, attrs, &rd);
    if (attrs) { attrs->lpVtbl->Release(attrs); attrs = NULL; }
    if (FAILED(hr) || !rd) {
        fprintf(stderr, "[movie] cannot open %s (hr=%#lx)\n", path, (unsigned long)hr);
        goto cleanup;
    }
    fprintf(stderr, "[movie] playing %s\n", path);

    vstream = find_stream(rd, &MFMediaType_Video);
    astream = find_stream(rd, &MFMediaType_Audio);

    if (vstream >= 0) {
        IMFMediaType *vt = NULL;
        MFCreateMediaType(&vt);
        vt->lpVtbl->SetGUID(vt, &MF_MT_MAJOR_TYPE, &MFMediaType_Video);
        vt->lpVtbl->SetGUID(vt, &MF_MT_SUBTYPE, &MFVideoFormat_RGB32);
        hr = rd->lpVtbl->SetCurrentMediaType(rd, (DWORD)vstream, NULL, vt);
        vt->lpVtbl->Release(vt);

        IMFMediaType *cur = NULL;
        if (SUCCEEDED(rd->lpVtbl->GetCurrentMediaType(rd, (DWORD)vstream, &cur)) && cur) {
            media_frame_size(cur, &fw, &fh);
            cur->lpVtbl->Release(cur);
        }
        if (!fw || !fh) {
            IMFMediaType *nat = NULL;
            if (SUCCEEDED(rd->lpVtbl->GetNativeMediaType(rd, (DWORD)vstream, 0, &nat)) && nat) {
                media_frame_size(nat, &fw, &fh);
                nat->lpVtbl->Release(nat);
            }
        }
        if (FAILED(hr) || !fw || !fh) {
            fprintf(stderr, "[movie] video decode setup failed (hr=%#lx, %ux%u)\n",
                    (unsigned long)hr, fw, fh);
            vstream = -1;
        } else {
            fprintf(stderr, "[movie] video stream %d: %ux%u RGB32\n", vstream, fw, fh);
        }
    } else {
        fprintf(stderr, "[movie] no video stream\n");
    }
    if (vstream < 0) goto cleanup;

    if (astream >= 0) {
        IMFMediaType *nat = NULL;
        if (SUCCEEDED(rd->lpVtbl->GetNativeMediaType(rd, (DWORD)astream, 0, &nat)) && nat) {
            UINT32 r = 0, c = 0;
            nat->lpVtbl->GetUINT32(nat, &MF_MT_AUDIO_SAMPLES_PER_SECOND, &r);
            nat->lpVtbl->GetUINT32(nat, &MF_MT_AUDIO_NUM_CHANNELS, &c);
            if (r) a_native_rate = r;
            if (c) a_native_ch = c;
            nat->lpVtbl->Release(nat);
        }
        a_out_ch = a_native_ch >= 2 ? 2 : 1;

        IMFMediaType *at = NULL;
        MFCreateMediaType(&at);
        at->lpVtbl->SetGUID(at, &MF_MT_MAJOR_TYPE, &MFMediaType_Audio);
        at->lpVtbl->SetGUID(at, &MF_MT_SUBTYPE, &MFAudioFormat_PCM);
        at->lpVtbl->SetUINT32(at, &MF_MT_AUDIO_NUM_CHANNELS, a_out_ch);
        at->lpVtbl->SetUINT32(at, &MF_MT_AUDIO_SAMPLES_PER_SECOND, a_native_rate);
        at->lpVtbl->SetUINT32(at, &MF_MT_AUDIO_BITS_PER_SAMPLE, 16);
        at->lpVtbl->SetUINT32(at, &MF_MT_AUDIO_BLOCK_ALIGNMENT, a_out_ch * 2);
        at->lpVtbl->SetUINT32(at, &MF_MT_AUDIO_AVG_BYTES_PER_SECOND,
                              a_native_rate * a_out_ch * 2);
        hr = rd->lpVtbl->SetCurrentMediaType(rd, (DWORD)astream, NULL, at);
        at->lpVtbl->Release(at);
        if (FAILED(hr)) {
            fprintf(stderr, "[movie] PCM audio setup failed (hr=%#lx); silent\n",
                    (unsigned long)hr);
            astream = -1;
        } else {
            fprintf(stderr, "[movie] audio %u Hz %u ch -> PCM, resample 44100\n",
                    a_native_rate, a_native_ch);
        }
    }

    if (audio_ok) a5audio_movie_reset();

    glPushAttrib((GLbitfield)GL_ALL_ATTRIB_BITS);
    glPushClientAttrib((GLbitfield)GL_CLIENT_ALL_ATTRIB_BITS);
    glMatrixMode(GL_PROJECTION); glPushMatrix();
    glMatrixMode(GL_MODELVIEW); glPushMatrix();
    gl_pushed = 1;

    LARGE_INTEGER freq, t0;
    QueryPerformanceFrequency(&freq);
    QueryPerformanceCounter(&t0);
    LONGLONG t_start = -1;
    int vdone = 0, adone = (astream < 0 || !audio_ok), skip = 0;
    int fed_frames = 0;
    int max_ms = getenv("A5_MOVIE_SECS") ? atoi(getenv("A5_MOVIE_SECS")) * 1000 : 0;
    const char *shot_prefix = getenv("A5_MOVIE_SHOT");
    int shot_n = 0;
    LONGLONG next_shot = 0;

    while (!vdone && !skip) {
        DWORD flags = 0;
        LONGLONG ts = 0;
        IMFSample *smp = NULL;
        hr = rd->lpVtbl->ReadSample(rd, (DWORD)vstream, 0, NULL, &flags, &ts, &smp);
        if (FAILED(hr) || (flags & MF_SOURCE_READERF_ENDOFSTREAM)) vdone = 1;
        if (smp) {
            if (t_start < 0) t_start = ts;
            LONGLONG want_ms = (ts - t_start) / 10000;
            LARGE_INTEGER tn;
            QueryPerformanceCounter(&tn);
            LONGLONG now_ms = (tn.QuadPart - t0.QuadPart) * 1000 / freq.QuadPart;
            if (want_ms > now_ms + 1) Sleep((DWORD)(want_ms - now_ms));

            IMFMediaBuffer *buf = NULL;
            if (SUCCEEDED(smp->lpVtbl->ConvertToContiguousBuffer(smp, &buf)) && buf) {
                BYTE *data = NULL;
                DWORD len = 0;
                if (SUCCEEDED(buf->lpVtbl->Lock(buf, &data, NULL, &len)) && data && fw && fh) {
                    present_frame(data, fw, fh, w, h);
                    if (shot_prefix && now_ms >= next_shot) {
                        movie_shot(shot_prefix, shot_n++, w, h);
                        next_shot = now_ms + 2000;
                    }
                    buf->lpVtbl->Unlock(buf);
                }
                buf->lpVtbl->Release(buf);
            }
            smp->lpVtbl->Release(smp);
        }

        /* Keep roughly one second of soundtrack queued. */
        while (!adone && a5audio_movie_queued() < 44100 * 2) {
            DWORD aflags = 0;
            LONGLONG ats = 0;
            IMFSample *asmp = NULL;
            hr = rd->lpVtbl->ReadSample(rd, (DWORD)astream, 0, NULL, &aflags, &ats, &asmp);
            if (FAILED(hr) || (aflags & MF_SOURCE_READERF_ENDOFSTREAM)) {
                adone = 1;
                break;
            }
            if (asmp) {
                IMFMediaBuffer *ab = NULL;
                if (SUCCEEDED(asmp->lpVtbl->ConvertToContiguousBuffer(asmp, &ab)) && ab) {
                    BYTE *ad = NULL;
                    DWORD alen = 0;
                    if (SUCCEEDED(ab->lpVtbl->Lock(ab, &ad, NULL, &alen)) && ad && alen >= 4) {
                        int chr = a_out_ch > 0 ? (int)a_out_ch : 2;
                        int inf = (int)(alen / (2 * chr));
                        int ofs = 0;
                        short *rs = movie_resample((const short *)ad, inf, chr,
                                                   (int)a_native_rate, &ofs);
                        if (ofs > 0) {
                            a5audio_movie_feed(rs ? rs : (const short *)ad, ofs);
                            fed_frames += ofs;
                        }
                        free(rs);
                        ab->lpVtbl->Unlock(ab);
                    }
                    ab->lpVtbl->Release(ab);
                }
                asmp->lpVtbl->Release(asmp);
            }
        }

        LARGE_INTEGER tn;
        QueryPerformanceCounter(&tn);
        LONGLONG now_ms = (tn.QuadPart - t0.QuadPart) * 1000 / freq.QuadPart;
        int ev = platform_movie_pump();
        if ((ev & 1) || platform_should_close()) skip = 1;
        if (now_ms > 500 && (ev & 2)) skip = 1;
        if (ev & 4) skip = 1;                 /* Esc delivered to our window */
        if (max_ms > 0 && now_ms >= max_ms) skip = 1;
    }

    if (!skip && audio_ok) {
        /* Let the queued tail play out (up to 2 s) instead of cutting it. */
        for (int i = 0; i < 200 && a5audio_movie_queued() > 2048; i++)
            Sleep(10);
    }
    if (audio_ok) a5audio_movie_reset();

    fprintf(stderr, "[movie] done (%s), audio fed %d frames (%.1fs)\n",
            skip ? "skipped" : "end of stream", fed_frames, fed_frames / 44100.0);
    played = 1;

cleanup:
    if (gl_pushed) {
        glMatrixMode(GL_PROJECTION); glPopMatrix();
        glMatrixMode(GL_MODELVIEW); glPopMatrix();
        glPopClientAttrib();
        glPopAttrib();
        if (pglActiveTexture) pglActiveTexture(GL_TEXTURE0);
        g_active_tex_unit = 0;
        for (int i = 0; i < 4; i++) g_tex_bind[i] = 0;
        g_cur_tex_binding = 0;
    }
    if (audio_ok) a5audio_movie_reset();
    if (rd) rd->lpVtbl->Release(rd);
    MFShutdown();
    return played;
}

/* ---- request handshake ------------------------------------------------- */

static char s_path[1024];
static int s_pending;

static int file_exists(const char *p)
{
    DWORD a = GetFileAttributesA(p);
    return a != INVALID_FILE_ATTRIBUTES && !(a & FILE_ATTRIBUTE_DIRECTORY);
}

static int resolve_movie(const char *name, char *out, size_t cap)
{
    if (!name || !*name) return 0;
    if (file_exists(name)) {
        snprintf(out, cap, "%s", name);
        return 1;
    }
    /* Accept Android-style full paths too; only the basename is meaningful
     * once the game data has been copied into gamefiles/. */
    const char *base = strrchr(name, '/');
    const char *bs = strrchr(name, '\\');
    if (bs && (!base || bs > base)) base = bs;
    base = base ? base + 1 : name;

    const char *root = getenv("A5_DATA_DIR");
    if (root && *root) {
        snprintf(out, cap, "%s/%s", root, base);
        if (file_exists(out)) return 1;
    }
    static const char *dirs[] = {
        "gamefiles/GloftA5HD341", "assets/GloftA5HD341", "GloftA5HD341",
        "gamefiles/GloftA5HD337", "assets/GloftA5HD337", "GloftA5HD337",
        "gamefiles/GloftA5HD", "assets/GloftA5HD", "GloftA5HD"
    };
    for (int i = 0; i < (int)(sizeof(dirs) / sizeof(dirs[0])); i++) {
        snprintf(out, cap, "%s/%s", dirs[i], name);
        if (file_exists(out)) return 1;
        if (base != name) {
            snprintf(out, cap, "%s/%s", dirs[i], base);
            if (file_exists(out)) return 1;
        }
    }
    return 0;
}

void movie_request(const char *name)
{
    const char *use = name && *name ? name : "";
    const char *ov = getenv("A5_MOVIE_FILE");
    if (ov && *ov) use = ov;

    if (resolve_movie(use, s_path, sizeof(s_path)))
        fprintf(stderr, "[movie] request '%s' -> %s\n", use, s_path);
    else {
        s_path[0] = 0;
        fprintf(stderr, "[movie] request '%s' (file not found)\n", use);
    }
    s_pending = 1;
}

int movie_has_pending(void) { return s_pending; }

void movie_discard_pending(void)
{
    s_pending = 0;
    s_path[0] = 0;
}

int movie_play_pending(int w, int h)
{
    if (!s_pending) return 0;
    s_pending = 0;
    if (!s_path[0]) return 0;
    return movie_play(s_path, w, h);
}
