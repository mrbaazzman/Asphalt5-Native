// movie.c - MP4 playback for the engine's intro movies, via Windows Media
// Foundation.
//
// On the phone the engine's GS_TrailerMovie state calls nativeLoadMovie ->
// GLMediaPlayer.loadMovie -> a MyVideoView activity that plays the MP4
// full-screen; the engine waits on game+0x1d72 until the activity finishes.
// The host records the request (the JNI shim), then plays the movie between
// frames: MF's SourceReader decodes the video (RGB32) into a GL texture drawn
// full-screen and the audio (PCM 44100 stereo) into the audio mixer's movie
// ring.  ESC skips; A5_NO_MOVIE=1 disables playback entirely.
#include <windows.h>
#include <mfapi.h>
#include <mfidl.h>
#include <mferror.h>
#include <mfreadwrite.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <GL/gl.h>
#include "../gl/a5gl.h"
#include "../audio/audio.h"
#include "movie.h"

#ifndef GL_BGRA
#define GL_BGRA 0x80E1
#endif

static GLuint s_tex = 0;
static UINT32 s_tex_w = 0, s_tex_h = 0;

static void present_frame(const BYTE* data, UINT32 fw, UINT32 fh, int w, int h) {
    if (!s_tex) {
        glGenTextures(1, &s_tex);
        glBindTexture(GL_TEXTURE_2D, s_tex);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)fw, (GLsizei)fh, 0, GL_BGRA, GL_UNSIGNED_BYTE, data);
        s_tex_w = fw; s_tex_h = fh;
    } else {
        glBindTexture(GL_TEXTURE_2D, s_tex);
        if (fw != s_tex_w || fh != s_tex_h) {
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, (GLsizei)fw, (GLsizei)fh, 0, GL_BGRA, GL_UNSIGNED_BYTE, data);
            s_tex_w = fw; s_tex_h = fh;
        } else {
            glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, (GLsizei)fw, (GLsizei)fh, GL_BGRA, GL_UNSIGNED_BYTE, data);
        }
    }
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION); glLoadIdentity();
    glOrtho(0, w, h, 0, -1, 1);
    glMatrixMode(GL_MODELVIEW); glLoadIdentity();
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_BLEND);
    glEnable(GL_TEXTURE_2D);
    glColor4f(1, 1, 1, 1);
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    float va = (float)fw / (float)fh, sa = (float)w / (float)h;
    int dw, dh;
    if (va > sa) { dw = w; dh = (int)(w / va); } else { dh = h; dw = (int)(h * va); }
    int dx = (w - dw) / 2, dy = (h - dh) / 2;
    glBegin(GL_QUADS);
    // MF's video-processor RGB32 output is top-down
    glTexCoord2f(0, 0); glVertex2i(dx, dy);
    glTexCoord2f(1, 0); glVertex2i(dx + dw, dy);
    glTexCoord2f(1, 1); glVertex2i(dx + dw, dy + dh);
    glTexCoord2f(0, 1); glVertex2i(dx, dy + dh);
    glEnd();
    a5gl_swap();
}

static int find_stream(IMFSourceReader* rd, const GUID* major) {
    for (DWORD i = 0; ; i++) {
        IMFMediaType* mt = NULL;
        HRESULT hr = rd->lpVtbl->GetNativeMediaType(rd, i, 0, &mt);
        if (hr == MF_E_INVALIDSTREAMNUMBER || FAILED(hr)) break;
        GUID maj;
        mt->lpVtbl->GetGUID(mt, &MF_MT_MAJOR_TYPE, &maj);
        mt->lpVtbl->Release(mt);
        if (IsEqualGUID(&maj, major)) return (int)i;
    }
    return -1;
}

// Linear resampler for movie audio: Media Foundation delivers the clip's
// native PCM rate (the career videos are 22050 Hz) while the mixer always
// wants 44100 stereo.  Without this the voice played at 2x pitch.
static short* movie_resample(const short* in, int in_frames, int ch, int rate, int* out_frames) {
    if (in_frames <= 0 || ch <= 0) { *out_frames = 0; return NULL; }
    if (rate == 44100 && ch == 2) { *out_frames = in_frames; return NULL; }
    long long of = (long long)in_frames * 44100 / (rate > 0 ? rate : 44100);
    if (of < 1) of = 1;
    short* out = (short*)malloc((size_t)of * 2 * sizeof(short));
    if (!out) { *out_frames = 0; return NULL; }
    double step = (double)(rate > 0 ? rate : 44100) / 44100.0;
    for (long long i = 0; i < of; i++) {
        double sp = (double)i * step;
        int i0 = (int)sp;
        double fr = sp - i0;
        if (i0 >= in_frames) i0 = in_frames - 1;
        int i1 = (i0 + 1 < in_frames) ? i0 + 1 : i0;
        short l0 = in[(size_t)i0 * ch], r0 = in[(size_t)i0 * ch + (ch >= 2 ? 1 : 0)];
        short l1 = in[(size_t)i1 * ch], r1 = in[(size_t)i1 * ch + (ch >= 2 ? 1 : 0)];
        out[i * 2]     = (short)(l0 + (l1 - l0) * fr);
        out[i * 2 + 1] = (short)(r0 + (r1 - r0) * fr);
    }
    *out_frames = (int)of;
    return out;
}

int a5movie_play(const char* path, int w, int h) {
    if (getenv("A5_NO_MOVIE")) { printf("[movie] disabled (A5_NO_MOVIE)\n"); return 0; }
    wchar_t wpath[1024];
    MultiByteToWideChar(CP_UTF8, 0, path, -1, wpath, 1024);
    HRESULT hr = MFStartup(MF_VERSION, MFSTARTUP_NOSOCKET);
    if (FAILED(hr)) { printf("[movie] MFStartup failed %#lx\n", (unsigned long)hr); return 0; }
    IMFSourceReader* rd = NULL;
    // enable the source reader's video processor (RGB32 conversion)
    IMFAttributes* attrs = NULL;
    MFCreateAttributes(&attrs, 1);
    if (attrs) attrs->lpVtbl->SetUINT32(attrs, &MF_SOURCE_READER_ENABLE_VIDEO_PROCESSING, TRUE);
    hr = MFCreateSourceReaderFromURL(wpath, attrs, &rd);
    if (attrs) attrs->lpVtbl->Release(attrs);
    if (FAILED(hr) || !rd) {
        printf("[movie] cannot open %s (hr=%#lx)\n", path, (unsigned long)hr);
        MFShutdown();
        return 0;
    }
    printf("[movie] playing %s\n", path);

    int vstream = find_stream(rd, &MFMediaType_Video);
    int astream = find_stream(rd, &MFMediaType_Audio);
    UINT32 fw = 0, fh = 0;
    if (vstream >= 0) {
        IMFMediaType* vt = NULL;
        MFCreateMediaType(&vt);
        vt->lpVtbl->SetGUID(vt, &MF_MT_MAJOR_TYPE, &MFMediaType_Video);
        vt->lpVtbl->SetGUID(vt, &MF_MT_SUBTYPE, &MFVideoFormat_RGB32);
        hr = rd->lpVtbl->SetCurrentMediaType(rd, (DWORD)vstream, NULL, vt);
        vt->lpVtbl->Release(vt);
        IMFMediaType* cur = NULL;
        if (SUCCEEDED(rd->lpVtbl->GetCurrentMediaType(rd, (DWORD)vstream, &cur))) {
            UINT64 sz = 0;
            cur->lpVtbl->GetUINT64(cur, &MF_MT_FRAME_SIZE, &sz);
            fw = (UINT32)(sz >> 32);
            fh = (UINT32)(sz & 0xFFFFFFFF);
            cur->lpVtbl->Release(cur);
        }
        printf("[movie] video stream %d: %ux%u\n", vstream, fw, fh);
    } else {
        printf("[movie] no video stream\n");
    }
    UINT32 a_native_rate = 44100, a_native_ch = 2, a_out_ch = 2;
    if (astream >= 0) {
        IMFMediaType* nat = NULL;
        if (SUCCEEDED(rd->lpVtbl->GetNativeMediaType(rd, (DWORD)astream, 0, &nat)) && nat) {
            UINT32 r = 0, c = 0;
            nat->lpVtbl->GetUINT32(nat, &MF_MT_AUDIO_SAMPLES_PER_SECOND, &r);
            nat->lpVtbl->GetUINT32(nat, &MF_MT_AUDIO_NUM_CHANNELS, &c);
            if (r) a_native_rate = r;
            if (c) a_native_ch = c;
            nat->lpVtbl->Release(nat);
        }
        a_out_ch = a_native_ch >= 2 ? 2 : 1;
        IMFMediaType* at = NULL;
        MFCreateMediaType(&at);
        at->lpVtbl->SetGUID(at, &MF_MT_MAJOR_TYPE, &MFMediaType_Audio);
        at->lpVtbl->SetGUID(at, &MF_MT_SUBTYPE, &MFAudioFormat_PCM);
        at->lpVtbl->SetUINT32(at, &MF_MT_AUDIO_NUM_CHANNELS, a_out_ch);
        at->lpVtbl->SetUINT32(at, &MF_MT_AUDIO_SAMPLES_PER_SECOND, a_native_rate);
        at->lpVtbl->SetUINT32(at, &MF_MT_AUDIO_BITS_PER_SAMPLE, 16);
        at->lpVtbl->SetUINT32(at, &MF_MT_AUDIO_BLOCK_ALIGNMENT, a_out_ch * 2);
        at->lpVtbl->SetUINT32(at, &MF_MT_AUDIO_AVG_BYTES_PER_SECOND, a_native_rate * a_out_ch * 2);
        hr = rd->lpVtbl->SetCurrentMediaType(rd, (DWORD)astream, NULL, at);
        at->lpVtbl->Release(at);
        printf("[movie] audio %u Hz %u ch -> PCM (%s), host resample to 44100\n",
               a_native_rate, a_native_ch, SUCCEEDED(hr) ? "ok" : "FAILED");
        IMFMediaType* ac = NULL;
        UINT32 ar = 0, ach = 0;
        if (SUCCEEDED(rd->lpVtbl->GetCurrentMediaType(rd, (DWORD)astream, &ac)) && ac) {
            ac->lpVtbl->GetUINT32(ac, &MF_MT_AUDIO_SAMPLES_PER_SECOND, &ar);
            ac->lpVtbl->GetUINT32(ac, &MF_MT_AUDIO_NUM_CHANNELS, &ach);
            ac->lpVtbl->Release(ac);
            printf("[movie] audio out: %u Hz, %u ch\n", ar, ach);
            // trust the native rate: some clips report 44100 but deliver the
            // native 22050 samples (the 2x-pitch career-video bug)
            if (ach == 1 || ach == 2) a_out_ch = ach;
        }
    }
    a5audio_movie_reset();

    LARGE_INTEGER freq, t0;
    QueryPerformanceFrequency(&freq);
    QueryPerformanceCounter(&t0);
    LONGLONG t_start = -1, audio_ts = 0;
    int vdone = (vstream < 0), adone = (astream < 0), skip = 0;
    int fed_frames = 0;
    // A5_MOVIE_SECS=<n>: auto-stop after n seconds (scripted tests)
    int max_ms = getenv("A5_MOVIE_SECS") ? atoi(getenv("A5_MOVIE_SECS")) * 1000 : 0;
    const char* shot_prefix = getenv("A5_MOVIE_SHOT");
    int shot_n = 0, next_shot = 0;

    while (!vdone && !skip) {
        // one video sample
        DWORD flags = 0;
        LONGLONG ts = 0;
        IMFSample* smp = NULL;
        hr = rd->lpVtbl->ReadSample(rd, (DWORD)vstream, 0, NULL, &flags, &ts, &smp);
        if (FAILED(hr) || (flags & MF_SOURCE_READERF_ENDOFSTREAM)) { vdone = 1; }
        if (smp) {
            if (t_start < 0) t_start = ts;
            // pace to the sample's presentation time
            LONGLONG want_ms = (ts - t_start) / 10000;
            LARGE_INTEGER tn;
            QueryPerformanceCounter(&tn);
            LONGLONG now_ms = (tn.QuadPart - t0.QuadPart) * 1000 / freq.QuadPart;
            if (want_ms > now_ms + 1) Sleep((DWORD)(want_ms - now_ms));
            IMFMediaBuffer* buf = NULL;
            if (SUCCEEDED(smp->lpVtbl->ConvertToContiguousBuffer(smp, &buf)) && buf) {
                BYTE* data = NULL; DWORD len = 0;
                if (SUCCEEDED(buf->lpVtbl->Lock(buf, &data, NULL, &len)) && data && fw && fh) {
                    present_frame(data, fw, fh, w, h);
                    buf->lpVtbl->Unlock(buf);
                }
                buf->lpVtbl->Release(buf);
            }
            smp->lpVtbl->Release(smp);
        }
        // keep ~1 s of audio queued
        while (!adone && (a5audio_movie_queued() < 44100 * 2)) {
            DWORD aflags = 0;
            LONGLONG ats = 0;
            IMFSample* asmp = NULL;
            hr = rd->lpVtbl->ReadSample(rd, (DWORD)astream, 0, NULL, &aflags, &ats, &asmp);
            if (FAILED(hr) || (aflags & MF_SOURCE_READERF_ENDOFSTREAM)) { adone = 1; break; }
            if (asmp) {
                IMFMediaBuffer* ab = NULL;
                if (SUCCEEDED(asmp->lpVtbl->ConvertToContiguousBuffer(asmp, &ab)) && ab) {
                    BYTE* ad = NULL; DWORD alen = 0;
                    if (SUCCEEDED(ab->lpVtbl->Lock(ab, &ad, NULL, &alen)) && ad && alen >= 4) {
                        int chr = a_out_ch > 0 ? (int)a_out_ch : 2;
                        int inf = (int)(alen / (2 * chr));
                        int ofs = 0;
                        short* rs = movie_resample((const short*)ad, inf, chr, (int)a_native_rate, &ofs);
                        if (ofs > 0) {
                            a5audio_movie_feed(rs ? rs : (const short*)ad, ofs);
                            fed_frames += ofs;
                        }
                        free(rs);
                        ab->lpVtbl->Unlock(ab);
                    }
                    ab->lpVtbl->Release(ab);
                }
                asmp->lpVtbl->Release(asmp);
            }
            audio_ts = ats;
        }
        // Skip on ESC only: a click is how the player focuses the game window
        // and it used to kill the intro movie instantly.
        int evt, mx, my;
        while (a5gl_poll_input(&evt, &mx, &my)) { }
        if (GetAsyncKeyState(VK_ESCAPE) & 0x8000) skip = 1;
        if (!a5gl_poll()) { skip = 1; }
        // A5_MOVIE_SECS / A5_MOVIE_SHOT (scripted tests)
        {
            LARGE_INTEGER tn;
            QueryPerformanceCounter(&tn);
            LONGLONG now_ms = (tn.QuadPart - t0.QuadPart) * 1000 / freq.QuadPart;
            if (max_ms > 0 && now_ms >= max_ms) skip = 1;
            if (shot_prefix && now_ms >= next_shot) {
                char p[600];
                snprintf(p, sizeof(p), "%s_%d.bmp", shot_prefix, shot_n++);
                a5gl_screenshot_bmp(p);
                next_shot = now_ms + 2000;
            }
        }
    }
    printf("[movie] done (%s), audio fed %d frames (%.1fs)\n", skip ? "skipped" : "end of stream",
           fed_frames, fed_frames / 44100.0);
    a5audio_movie_reset();          // stop the soundtrack cleanly at the cut
    rd->lpVtbl->Release(rd);
    MFShutdown();
    // hand back the GL state the engine's cache believes is active (the movie
    // drew with raw GL; invalidating the shadow made the engine skip re-enabling
    // blending, so UI text rendered as white quads)
    glDisable(GL_BLEND);
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_SCISSOR_TEST);
    glBindTexture(GL_TEXTURE_2D, 0);
    a5gl_state_restore();
    return 1;
}
