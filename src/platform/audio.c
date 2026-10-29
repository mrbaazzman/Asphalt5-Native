// audio.c - native sound engine for a5host.
//
// The Android build routes all audio through the Java GLMediaPlayer class
// (SoundPool for sfx, MediaPlayer for music). The engine only ever calls
// playSound/stopSound/... with (soundId, instance) - the Java side loads the
// Ogg Vorbis assets (raw_%03d.ogg) and plays them. This file implements
// that Java side natively:
//   - sfx  : decoded fully at load (they are 4-40 KB, a few ms each)
//   - music: STREAMED - stb_vorbis keeps the stream open and the mixer
//            decodes ~1 s chunks on demand (a full 2-minute track decoded
//            upfront cost seconds of CPU and starved the game).
// Output: WinMM waveOut, 44.1 kHz stereo, 4 x 2048-frame buffers (~186 ms).
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <mmsystem.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "audio.h"

// stb_vorbis.c is compiled as its own translation unit (public domain).
typedef struct stb_vorbis stb_vorbis;
typedef struct {
    unsigned int sample_rate;
    int channels;
    unsigned int setup_memory_required;
    unsigned int setup_temp_memory_required;
    unsigned int temp_memory_required;
    int max_frame_size;
} stb_vorbis_info;
extern stb_vorbis_info stb_vorbis_get_info(stb_vorbis* f);
extern stb_vorbis* stb_vorbis_open_memory(const unsigned char* data, int len, int* error, const void* alloc_buffer);
extern int  stb_vorbis_get_samples_short_interleaved(stb_vorbis* f, int channels, short* buffer, int num_shorts);
extern int  stb_vorbis_seek_start(stb_vorbis* f);
extern void stb_vorbis_close(stb_vorbis* f);
extern int  stb_vorbis_decode_memory(const unsigned char* mem, int len, int* channels, int* sample_rate, short** output);

#define A5_OUT_RATE   44100
#define A5_OUT_FRAMES 2048          // per waveOut buffer (~46 ms)
#define A5_NBUF       4             // queued buffers (~186 ms of latency)
#define A5_MAX_VOICES 48
#define A5_MAX_SOUNDS 256
#define A5_CHUNK      32768         // streaming music chunk (~0.74 s)

typedef struct {
    short*  pcm;        // sfx: fully decoded 44.1k stereo; NULL for streams
    long    frames;     // sfx: total frames
    int     ready;
    int     queued;     // sfx: waiting in the decode queue
    int     is_big;
    int     from_cache; // pcm points into the persistent decoded-sound cache
    unsigned char* src; // sfx: pending input; music: the stream's memory (kept)
    int     srclen;
    stb_vorbis* stream; // music: open decoder
    int     rate;       // music: source sample rate (assets are 22050 Hz mono!)
    double  src_pos;    // music: absolute continuous source frame position
    long    scratch_base;   // absolute source frame of s_rs_scratch[0]
    int     scratch_frames; // valid source frames in the scratch
    short*  chunk;      // music: decoded chunk (interleaved stereo, 44.1 kHz)
    int     chunk_frames, chunk_pos;
} A5Sound;

typedef struct {
    int   active;
    int   id;
    int   instance;
    int   is_big;
    float vol;
    float pitch;        // playback rate multiplier (sfx)
    int   loop;
    int   paused;
    double pos;         // fractional frame position (sfx)
    float fade;         // 0..1 ramp (kills start/stop clicks)
    float fade_step;
    int   stopping;     // fading out; deactivate when fade reaches 0
} A5Voice;

static A5Sound  s_sounds[A5_MAX_SOUNDS];
static A5Voice  s_voices[A5_MAX_VOICES];
static CRITICAL_SECTION s_cs;
static int      s_cs_ready = 0;

// ---- persistent decoded-sfx cache -------------------------------------
// The engine precaches ~70 sounds at race start and then polls
// isSoundLoaded until each one is ready.  Decoding them at that moment
// stalls the loading screen for seconds (and every race decodes them
// again).  A background worker decodes every raw_*.glsnd once, while the
// intro movie / menus are up, so a load is a cache hit.
typedef struct { short* pcm; long frames; int valid; } A5Cache;
static A5Cache  s_cache[A5_MAX_SOUNDS];
static char     s_asset_dir[MAX_PATH];
static HANDLE   s_cache_thread = NULL;
static volatile int s_cache_run = 0;

static HWAVEOUT s_hwo = NULL;
static HANDLE   s_evt = NULL;
static WAVEHDR  s_hdr[A5_NBUF];
static short*   s_buf[A5_NBUF];
static int      s_bufidx = 0;
static HANDLE   s_thread = NULL;
static volatile int s_run = 0;
static volatile LONG s_active_voices = 0;
static volatile int s_peak = 0;
static long     s_mix_count = 0;
static FILE*    s_rec = NULL;   // A5_SND_RECORD: dump the mixed stream to a WAV
static long     s_rec_frames = 0;

void a5audio_record(const char* path);
void a5audio_record(const char* path) {
    s_rec = fopen(path, "wb");
    if (!s_rec) return;
    unsigned char hdr[44] = {0};
    memcpy(hdr, "RIFF", 4); memcpy(hdr + 8, "WAVE", 4);
    memcpy(hdr + 12, "fmt ", 4);
    *(unsigned*)(hdr + 16) = 16;
    *(unsigned short*)(hdr + 20) = 1;
    *(unsigned short*)(hdr + 22) = 2;
    *(unsigned*)(hdr + 24) = A5_OUT_RATE;
    *(unsigned*)(hdr + 28) = A5_OUT_RATE * 4;
    *(unsigned short*)(hdr + 32) = 4;
    *(unsigned short*)(hdr + 34) = 16;
    memcpy(hdr + 36, "data", 4);
    fwrite(hdr, 1, 44, s_rec);
    s_rec_frames = 0;
}

// async sfx decode queue (decoding 88 sounds synchronously on the emulated
// thread caused multi-second hitches while the engine precaches)
#define A5_QMAX 128
typedef struct { int id; unsigned char* data; int len; } A5QItem;
static A5QItem  s_queue[A5_QMAX];
static int      s_qhead = 0, s_qtail = 0, s_qcount = 0;
static HANDLE   s_qevt = NULL;
static HANDLE   s_qthread = NULL;
static volatile int s_qrun = 0;

// ------------------------------------------------------------------ decode

// resample/convert any decoded vorbis output to 44100 Hz stereo 16-bit.
static short* to_44k_stereo(const short* in, int frames, int channels, int rate, long* out_frames) {
    if (frames <= 0 || channels <= 0) return NULL;
    long outn = (long)((double)frames * A5_OUT_RATE / (rate > 0 ? rate : A5_OUT_RATE));
    if (outn < 1) outn = 1;
    short* out = (short*)malloc((size_t)outn * 2 * sizeof(short));
    if (!out) return NULL;
    for (long i = 0; i < outn; i++) {
        double srcp = (double)i * (rate > 0 ? rate : A5_OUT_RATE) / A5_OUT_RATE;
        long i0 = (long)srcp;
        double frac = srcp - i0;
        long i1 = i0 + 1;
        if (i0 >= frames) i0 = frames - 1;
        if (i1 >= frames) i1 = frames - 1;
        for (int c = 0; c < 2; c++) {
            int cc = c;
            if (channels == 1) cc = 0;
            else if (cc >= channels) cc = channels - 1;
            double s = in[i0 * channels + cc] * (1.0 - frac) + in[i1 * channels + cc] * frac;
            if (s > 32767) s = 32767; if (s < -32768) s = -32768;
            out[i * 2 + c] = (short)s;
        }
    }
    *out_frames = outn;
    return out;
}

// decode one sfx (runs on the queue worker)
static void decode_sfx_now(int id, unsigned char* copy, int len) {
    EnterCriticalSection(&s_cs);
    int cached = s_cache[id].valid;
    LeaveCriticalSection(&s_cs);
    if (cached) {
        // the preloader already decoded this sound while the game was booting
        free(copy);
        EnterCriticalSection(&s_cs);
        A5Sound* s = &s_sounds[id];
        s->queued = 0;
        if (s->pcm && !s->from_cache) free(s->pcm);
        s->pcm = s_cache[id].pcm;
        s->frames = s_cache[id].frames;
        s->from_cache = 1;
        s->ready = 1;
        LeaveCriticalSection(&s_cs);
        return;
    }
    int channels = 0, rate = 0;
    short* pcm = NULL;
    int n = stb_vorbis_decode_memory(copy, len, &channels, &rate, &pcm);
    long frames = 0;
    short* stereo = NULL;
    if (n > 0 && pcm) stereo = to_44k_stereo(pcm, n, channels, rate, &frames);
    if (pcm) free(pcm);
    free(copy);
    A5Sound* s = &s_sounds[id];
    EnterCriticalSection(&s_cs);
    s->queued = 0;
    if (stereo) {
        if (s->pcm && !s->from_cache) free(s->pcm);
        s->pcm = stereo;
        s->frames = frames;
        s->is_big = 0;
        s->from_cache = 0;
        s->ready = 1;
        LeaveCriticalSection(&s_cs);
        printf("[snd] decoded id=%d: %ld frames (%.1fs) sfx\n", id, frames, (double)frames / A5_OUT_RATE);
    } else {
        LeaveCriticalSection(&s_cs);
        printf("[snd] decode failed for id=%d (%d bytes)\n", id, len);
    }
}

static DWORD WINAPI sfx_worker(LPVOID param) {
    (void)param;
    // gentle background decoding: never compete with the game (the engine
    // precaches ~90 sounds at once; decoding them full-speed made the game
    // stutter for seconds)
    SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_BELOW_NORMAL);
    while (s_qrun) {
        WaitForSingleObject(s_qevt, 200);
        for (;;) {
            A5QItem it;
            int have = 0;
            EnterCriticalSection(&s_cs);
            if (s_qcount > 0) {
                it = s_queue[s_qhead];
                s_qhead = (s_qhead + 1) % A5_QMAX;
                s_qcount--;
                have = 1;
            }
            LeaveCriticalSection(&s_cs);
            if (!have) break;
            decode_sfx_now(it.id, it.data, it.len);
            Sleep(4);   // yield to the game between sounds
        }
    }
    return 0;
}

// Background preloader: decode every sfx asset once into s_cache.  Runs at
// idle priority during the intro/menus; a race start then only copies
// pointers instead of waiting seconds for the decoder.
static DWORD WINAPI cache_worker(LPVOID param) {
    (void)param;
    // Normal priority: this only runs while the engine is booting / in the
    // intro / menus, and finishing before the first race is what removes the
    // isSoundLoaded wait from the loading screen.
    SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_NORMAL);
    DWORD t0 = GetTickCount();
    int done = 0;
    for (int id = 24; id < A5_MAX_SOUNDS && s_cache_run; id++) {
        EnterCriticalSection(&s_cs);
        int have = s_cache[id].valid;
        LeaveCriticalSection(&s_cs);
        if (have) continue;
        char path[MAX_PATH];
        snprintf(path, sizeof(path), "%s\\raw_%03d.ogg", s_asset_dir, id);
        FILE* f = fopen(path, "rb");
        if (!f) continue;
        fseek(f, 0, SEEK_END);
        long len = ftell(f);
        fseek(f, 0, SEEK_SET);
        if (len <= 0 || len > (64L << 20)) { fclose(f); continue; }
        unsigned char* buf = (unsigned char*)malloc((size_t)len);
        if (!buf) { fclose(f); continue; }
        if (fread(buf, 1, (size_t)len, f) != (size_t)len) { free(buf); fclose(f); continue; }
        fclose(f);
        int ch = 0, rate = 0;
        short* pcm = NULL;
        int n = stb_vorbis_decode_memory(buf, (int)len, &ch, &rate, &pcm);
        free(buf);
        if (n > 0 && pcm) {
            long frames = 0;
            short* st = to_44k_stereo(pcm, n, ch, rate, &frames);
            free(pcm);
            if (st) {
                EnterCriticalSection(&s_cs);
                if (!s_cache[id].valid) {
                    s_cache[id].pcm = st;
                    s_cache[id].frames = frames;
                    s_cache[id].valid = 1;
                    done++;
                } else {
                    free(st);
                }
                LeaveCriticalSection(&s_cs);
            }
        }
    }
    printf("[snd] cache: %d sounds preloaded in %.1fs\n", done,
           (double)(GetTickCount() - t0) / 1000.0);
    return 0;
}

void a5audio_set_asset_dir(const char* dir) {
    if (!dir || !*dir) return;
    snprintf(s_asset_dir, sizeof(s_asset_dir), "%s", dir);
    if (!s_cache_thread && s_cs_ready) {
        s_cache_run = 1;
        s_cache_thread = CreateThread(NULL, 0, cache_worker, NULL, 0, NULL);
    }
}

void a5audio_load(int id, const unsigned char* data, int len, int is_big) {
    if (id < 0 || id >= A5_MAX_SOUNDS || !data || len <= 0) return;
    EnterCriticalSection(&s_cs);
    A5Sound* s = &s_sounds[id];
    if (s->ready || s->queued) { LeaveCriticalSection(&s_cs); return; }
    if (!is_big && s_cache[id].valid) {
        // preloaded during boot: no copy, no decode, no loading-screen wait
        if (s->pcm && !s->from_cache) free(s->pcm);
        s->pcm = s_cache[id].pcm;
        s->frames = s_cache[id].frames;
        s->is_big = 0;
        s->from_cache = 1;
        s->queued = 0;
        s->ready = 1;
        LeaveCriticalSection(&s_cs);
        return;
    }
    unsigned char* copy = (unsigned char*)malloc((size_t)len);
    if (!copy) { LeaveCriticalSection(&s_cs); return; }
    memcpy(copy, data, (size_t)len);
    if (is_big) {
        // music: keep the compressed bytes alive and open a streaming decoder.
        int err = 0;
        stb_vorbis* v = stb_vorbis_open_memory(copy, len, &err, NULL);
        if (!v) {
            printf("[snd] music open failed id=%d (err=%d)\n", id, err);
            free(copy);
            LeaveCriticalSection(&s_cs);
            return;
        }
        if (s->src) free(s->src);
        if (s->chunk) free(s->chunk);
        s->src = copy; s->srclen = len;
        s->stream = v;
        s->rate = 44100;
        { stb_vorbis_info info = stb_vorbis_get_info(v);
          if (info.sample_rate > 0) s->rate = (int)info.sample_rate; }
        s->src_pos = 0.0;
        s->scratch_base = 0;
        s->scratch_frames = 0;
        s->chunk = (short*)malloc((size_t)A5_CHUNK * 2 * sizeof(short));        s->chunk_frames = 0; s->chunk_pos = 0;
        s->is_big = 1;
        s->ready = 1;   // streaming: playable immediately
        LeaveCriticalSection(&s_cs);
        printf("[snd] music stream opened id=%d (%d bytes, %d Hz)\n", id, len, s->rate);
        return;
    }
    // sfx: queue for the decode worker (never blocks the game)
    if (s_qcount < A5_QMAX) {
        s_queue[s_qtail].id = id;
        s_queue[s_qtail].data = copy;
        s_queue[s_qtail].len = len;
        s_qtail = (s_qtail + 1) % A5_QMAX;
        s_qcount++;
        s->queued = 1;
        LeaveCriticalSection(&s_cs);
        if (s_qevt) SetEvent(s_qevt);
    } else {
        LeaveCriticalSection(&s_cs);
        free(copy);
    }
}

void a5audio_unload(int id) {
    if (id < 0 || id >= A5_MAX_SOUNDS) return;
    EnterCriticalSection(&s_cs);
    A5Sound* s = &s_sounds[id];
    for (int i = 0; i < A5_MAX_VOICES; i++)
        if (s_voices[i].active && s_voices[i].id == id) s_voices[i].active = 0;
    if (s->pcm) { if (!s->from_cache) free(s->pcm); s->pcm = NULL; }
    s->from_cache = 0;
    if (s->stream) { stb_vorbis_close(s->stream); s->stream = NULL; }
    if (s->chunk) { free(s->chunk); s->chunk = NULL; }
    s->frames = 0; s->chunk_frames = 0; s->chunk_pos = 0; s->ready = 0;
    s->queued = 0;
    if (s->src) { free(s->src); s->src = NULL; s->srclen = 0; }
    LeaveCriticalSection(&s_cs);
}

int a5audio_loaded(int id) {
    if (id < 0 || id >= A5_MAX_SOUNDS) return 0;
    return s_sounds[id].ready;
}

// ------------------------------------------------------------------ voices

static A5Voice* find_voice(int id, int instance, int is_big) {
    for (int i = 0; i < A5_MAX_VOICES; i++)
        if (s_voices[i].active && s_voices[i].id == id &&
            s_voices[i].instance == instance && s_voices[i].is_big == is_big)
            return &s_voices[i];
    return NULL;
}

int a5audio_play(int id, int instance, float vol, int is_big) {
    if (id < 0 || id >= A5_MAX_SOUNDS) return -1;
    EnterCriticalSection(&s_cs);
    A5Sound* s = &s_sounds[id];
    A5Voice* v = find_voice(id, instance, is_big);
    if (!v) {
        for (int i = 0; i < A5_MAX_VOICES; i++)
            if (!s_voices[i].active) { v = &s_voices[i]; break; }
        if (!v && !is_big) {
            double oldest = 1e30;
            for (int i = 0; i < A5_MAX_VOICES; i++)
                if (!s_voices[i].is_big && s_voices[i].pos < oldest) { oldest = s_voices[i].pos; v = &s_voices[i]; }
        }
        if (!v) { LeaveCriticalSection(&s_cs); return -1; }
        memset(v, 0, sizeof(*v));
    }
    v->active = 1;
    v->id = id;
    v->instance = instance;
    v->is_big = is_big;
    v->vol = (vol > 0.0f && vol <= 4.0f) ? vol : 1.0f;
    v->pitch = 1.0f;
    v->loop = is_big ? 1 : 0;     // music loops, sfx one-shot
    v->paused = 0;
    v->pos = 0.0;
    v->fade = 0.0f;               // short fade-in avoids a start click
    v->fade_step = 1.0f / 220.0f; // ~5 ms at 44.1 kHz
    v->stopping = 0;
    if (!s->ready) printf("[snd] play id=%d inst=%d while not ready (%s)\n", id, instance, is_big ? "music" : "sfx");
    LeaveCriticalSection(&s_cs);
    return 0;
}

void a5audio_stop(int id, int instance, int is_big) {
    if (id < 0 || id >= A5_MAX_SOUNDS) return;
    EnterCriticalSection(&s_cs);
    A5Voice* v = find_voice(id, instance, is_big);
    if (v) v->stopping = 1;   // fade out (the mixer deactivates it)
    LeaveCriticalSection(&s_cs);
}

void a5audio_pause(int id, int instance, int pause, int is_big) {
    if (id < 0 || id >= A5_MAX_SOUNDS) return;
    EnterCriticalSection(&s_cs);
    A5Voice* v = find_voice(id, instance, is_big);
    if (v) v->paused = pause ? 1 : 0;
    LeaveCriticalSection(&s_cs);
}

void a5audio_set_vol(int id, int instance, float vol, int is_big) {
    if (id < 0 || id >= A5_MAX_SOUNDS) return;
    EnterCriticalSection(&s_cs);
    A5Voice* v = find_voice(id, instance, is_big);
    if (v && vol >= 0.0f && vol <= 4.0f) v->vol = vol;
    LeaveCriticalSection(&s_cs);
}

void a5audio_set_pitch(int id, int instance, float pitch, int is_big) {
    if (id < 0 || id >= A5_MAX_SOUNDS) return;
    EnterCriticalSection(&s_cs);
    A5Voice* v = find_voice(id, instance, is_big);
    if (v && pitch > 0.05f && pitch < 8.0f) v->pitch = pitch;
    LeaveCriticalSection(&s_cs);
}

void a5audio_stop_all(int which) {
    EnterCriticalSection(&s_cs);
    for (int i = 0; i < A5_MAX_VOICES; i++) {
        if (!s_voices[i].active) continue;
        if (which == 1 && s_voices[i].is_big) continue;
        if (which == 2 && !s_voices[i].is_big) continue;
        s_voices[i].stopping = 1;
    }
    LeaveCriticalSection(&s_cs);
}

// ------------------------------------------------------------------ mixing

// keep at least `need` output frames available in the sound's music chunk
// (CS held). The source is 22050 Hz mono; the chunk is 44100 Hz stereo, so
// decode + resample with a continuous fractional position (rs_pos) across
// refills - streaming raw at 44100 played the music 2x too fast (chipmunks).
static short s_rs_scratch[1 << 16];   // mixer thread only
static int ensure_chunk(A5Sound* s, int need) {
    double ratio = (double)s->rate / A5_OUT_RATE;
    const int scratch_cap = (int)(sizeof(s_rs_scratch) / 4);   // stereo frames
    while (s->chunk_frames - s->chunk_pos < need) {
        int remain = s->chunk_frames - s->chunk_pos;
        if (remain > 0 && s->chunk_pos > 0)
            memmove(s->chunk, s->chunk + s->chunk_pos * 2, (size_t)remain * 2 * sizeof(short));
        s->chunk_pos = 0;
        s->chunk_frames = remain;
        int want_out = A5_CHUNK - remain;
        if (want_out <= 0) return 0;
        // keep the scratch frames at/after the current source position
        long need_from = (long)s->src_pos;
        if (need_from < s->scratch_base || need_from > s->scratch_base + s->scratch_frames) {
            s->scratch_frames = 0;
            s->scratch_base = need_from;
        } else if (need_from > s->scratch_base) {
            long left = s->scratch_base + s->scratch_frames - need_from;
            memmove(s_rs_scratch, s_rs_scratch + (size_t)(need_from - s->scratch_base) * 2,
                    (size_t)left * 2 * sizeof(short));
            s->scratch_base = need_from;
            s->scratch_frames = (int)left;
        }
        // decode more source frames to cover the next want_out outputs
        long want_end = (long)(s->src_pos + want_out * ratio) + 2;
        int decode_n = (int)(want_end - (s->scratch_base + s->scratch_frames));
        if (decode_n > scratch_cap - s->scratch_frames)
            decode_n = scratch_cap - s->scratch_frames;
        if (decode_n > 0) {
            int got = stb_vorbis_get_samples_short_interleaved(
                s->stream, 2, s_rs_scratch + (size_t)s->scratch_frames * 2, decode_n * 2);
            if (got <= 0) {
                // end of stream: loop from the start
                stb_vorbis_seek_start(s->stream);
                s->scratch_frames = 0;
                s->scratch_base = 0;
                s->src_pos = 0.0;
                got = stb_vorbis_get_samples_short_interleaved(
                    s->stream, 2, s_rs_scratch, decode_n * 2);
                if (got <= 0) { s->ready = 0; return 0; }   // broken stream
            }
            s->scratch_frames += got;
        }
        int produced = 0;
        while (produced < want_out) {
            long idx = (long)(s->src_pos - (double)s->scratch_base);
            if (idx < 0 || idx + 1 >= s->scratch_frames) break;   // need more source
            double frac = s->src_pos - floor(s->src_pos);
            short* dst = s->chunk + (size_t)(remain + produced) * 2;
            dst[0] = (short)(s_rs_scratch[idx * 2]     * (1.0 - frac) + s_rs_scratch[(idx + 1) * 2]     * frac);
            dst[1] = (short)(s_rs_scratch[idx * 2 + 1] * (1.0 - frac) + s_rs_scratch[(idx + 1) * 2 + 1] * frac);
            produced++;
            s->src_pos += ratio;
        }
        s->chunk_frames = remain + produced;
        if (produced == 0) return 0;   // no progress (should not happen)
    }
    return 1;
}

// ---- movie soundtrack ring (44100 Hz stereo, the output format). The MP4
// player feeds decoded PCM here; mix_into() adds it to the output.
#define A5_MOVIE_RING (1 << 19)          // samples (256K frames ~ 5.8 s)
static short s_movie_ring[A5_MOVIE_RING];
static volatile long s_movie_r = 0, s_movie_w = 0;

void a5audio_movie_reset(void) { s_movie_r = s_movie_w = 0; }
int a5audio_movie_queued(void) { return (int)((s_movie_w - s_movie_r) & (A5_MOVIE_RING - 1)); }
void a5audio_movie_feed(const short* pcm, int frames) {
    for (int i = 0; i < frames * 2; i++) {
        long w = s_movie_w;
        long nxt = (w + 1) & (A5_MOVIE_RING - 1);
        if (nxt == s_movie_r) break;     // ring full
        s_movie_ring[w] = pcm[i];
        s_movie_w = nxt;
    }
}

static void mix_into(short* out, int frames) {
    memset(out, 0, (size_t)frames * 2 * sizeof(short));
    // the movie soundtrack first
    {
        long r = s_movie_r, w = s_movie_w;
        for (int i = 0; i < frames; i++) {
            if (r == w) break;
            long r2 = (r + 1) & (A5_MOVIE_RING - 1);
            if (r2 == w) break;
            int ol = out[i * 2]     + s_movie_ring[r];
            int orr = out[i * 2 + 1] + s_movie_ring[r2];
            if (ol > 32767) ol = 32767; if (ol < -32768) ol = -32768;
            if (orr > 32767) orr = 32767; if (orr < -32768) orr = -32768;
            out[i * 2] = (short)ol;
            out[i * 2 + 1] = (short)orr;
            r = (r + 2) & (A5_MOVIE_RING - 1);
        }
        s_movie_r = r;
    }
    EnterCriticalSection(&s_cs);
    int act = 0;
    for (int vi = 0; vi < A5_MAX_VOICES; vi++) {
        A5Voice* v = &s_voices[vi];
        if (!v->active || v->paused) continue;
        A5Sound* s = &s_sounds[v->id];
        if (!s->ready) continue;   // still decoding: keep the voice pending
        act++;
        float vol = v->vol;

        if (s->stream) {
            // streaming music: decode ahead, then read sequentially
            if (!ensure_chunk(s, frames)) { v->active = 0; continue; }
            const short* pcm = s->chunk + s->chunk_pos * 2;
            float f = v->fade;
            float step = v->stopping ? -v->fade_step : v->fade_step;
            for (int i = 0; i < frames; i++) {
                float g = vol * f;
                int ol = out[i * 2]     + (int)(pcm[i * 2]     * g);
                int orr = out[i * 2 + 1] + (int)(pcm[i * 2 + 1] * g);
                if (ol > 32767) ol = 32767; if (ol < -32768) ol = -32768;
                if (orr > 32767) orr = 32767; if (orr < -32768) orr = -32768;
                out[i * 2] = (short)ol;
                out[i * 2 + 1] = (short)orr;
                f += step;
                if (f > 1.0f) { f = 1.0f; step = v->stopping ? -v->fade_step : 0.0f; }
                if (f < 0.0f) { f = 0.0f; break; }
            }
            v->fade = f;
            if (v->stopping && f <= 0.0f) { v->active = 0; }
            s->chunk_pos += frames;
            continue;
        }

        if (!s->pcm || s->frames <= 1) { v->active = 0; continue; }
        double pos = v->pos;
        double step = v->pitch;
        long n = s->frames;
        const short* pcm = s->pcm;
        float f = v->fade;
        float fstep = v->stopping ? -v->fade_step : v->fade_step;
        for (int i = 0; i < frames; i++) {
            if (pos >= (double)(n - 1)) {
                if (v->loop) pos = fmod(pos, (double)n);
                else { v->active = 0; break; }
            }
            long i0 = (long)pos;
            long i1 = i0 + 1 < n ? i0 + 1 : (v->loop ? 0 : i0);
            double frac = pos - (double)i0;
            float l = (float)(pcm[i0 * 2]     * (1.0 - frac) + pcm[i1 * 2]     * frac);
            float r = (float)(pcm[i0 * 2 + 1] * (1.0 - frac) + pcm[i1 * 2 + 1] * frac);
            float g = vol * f;
            int ol = out[i * 2]     + (int)(l * g);
            int orr = out[i * 2 + 1] + (int)(r * g);
            if (ol > 32767) ol = 32767; if (ol < -32768) ol = -32768;
            if (orr > 32767) orr = 32767; if (orr < -32768) orr = -32768;
            out[i * 2] = (short)ol;
            out[i * 2 + 1] = (short)orr;
            pos += step;
            f += fstep;
            if (f > 1.0f) { f = 1.0f; fstep = v->stopping ? -v->fade_step : 0.0f; }
            if (f < 0.0f) { f = 0.0f; break; }
        }
        v->pos = pos;
        v->fade = f;
        if (v->stopping && f <= 0.0f) { v->active = 0; }
    }
    s_active_voices = act;
    s_mix_count++;
    LeaveCriticalSection(&s_cs);
    if (s_rec) {
        fwrite(out, 2, (size_t)frames * 2, s_rec);
        s_rec_frames += frames;
    }
    {
        int pk = 0;
        for (int i = 0; i < frames * 2; i++) {
            int v = out[i]; if (v < 0) v = -v;
            if (v > pk) pk = v;
        }
        if (pk > s_peak) s_peak = pk;
    }
}

static DWORD WINAPI mix_thread(LPVOID param) {
    (void)param;
    SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_TIME_CRITICAL);
    while (s_run) {
        WaitForSingleObject(s_evt, 200);
        // The event is binary: several completions can coalesce into one
        // signal. Fill *every* free buffer on each wake so the queue can
        // never drift into an underrun (crackle).
        for (int guard = 0; guard < A5_NBUF; guard++) {
            int idx = -1;
            for (int k = 0; k < A5_NBUF; k++) {
                int j = (s_bufidx + k) % A5_NBUF;
                if (!(s_hdr[j].dwFlags & WHDR_INQUEUE)) { idx = j; break; }
            }
            if (idx < 0) break;             // all slots still playing
            s_bufidx = (idx + 1) % A5_NBUF;
            WAVEHDR* h = &s_hdr[idx];
            mix_into(s_buf[idx], A5_OUT_FRAMES);
            h->dwBufferLength = A5_OUT_FRAMES * 2 * sizeof(short);
            if (waveOutWrite(s_hwo, h, sizeof(WAVEHDR)) != MMSYSERR_NOERROR) break;
        }
    }
    return 0;
}

int a5audio_init(void) {
    if (s_hwo) return 0;
    InitializeCriticalSection(&s_cs);
    s_cs_ready = 1;
    WAVEFORMATEX wf;
    memset(&wf, 0, sizeof(wf));
    wf.wFormatTag = WAVE_FORMAT_PCM;
    wf.nChannels = 2;
    wf.nSamplesPerSec = A5_OUT_RATE;
    wf.wBitsPerSample = 16;
    wf.nBlockAlign = 4;
    wf.nAvgBytesPerSec = A5_OUT_RATE * 4;
    s_evt = CreateEvent(NULL, FALSE, FALSE, NULL);
    if (!s_evt) return -1;
    MMRESULT mr = waveOutOpen(&s_hwo, WAVE_MAPPER, &wf, (DWORD_PTR)s_evt, 0, CALLBACK_EVENT);
    if (mr != MMSYSERR_NOERROR) {
        printf("[snd] waveOutOpen failed: %u\n", (unsigned)mr);
        s_hwo = NULL;
        return -1;
    }
    for (int i = 0; i < A5_NBUF; i++) {
        s_buf[i] = (short*)calloc(A5_OUT_FRAMES * 2, sizeof(short));
        memset(&s_hdr[i], 0, sizeof(WAVEHDR));
        s_hdr[i].lpData = (LPSTR)s_buf[i];
        s_hdr[i].dwBufferLength = A5_OUT_FRAMES * 2 * sizeof(short);
        waveOutPrepareHeader(s_hwo, &s_hdr[i], sizeof(WAVEHDR));
    }
    s_run = 1;
    s_thread = CreateThread(NULL, 0, mix_thread, NULL, 0, NULL);
    s_qevt = CreateEvent(NULL, FALSE, FALSE, NULL);
    s_qrun = 1;
    s_qthread = CreateThread(NULL, 0, sfx_worker, NULL, 0, NULL);
    printf("[snd] audio up: %d Hz stereo, %d buffers x %d frames\n", A5_OUT_RATE, A5_NBUF, A5_OUT_FRAMES);
    return 0;
}

void a5audio_shutdown(void) {
    if (!s_hwo) return;
    s_run = 0;
    s_qrun = 0;
    s_cache_run = 0;
    if (s_qevt) SetEvent(s_qevt);
    if (s_thread) { WaitForSingleObject(s_thread, 1000); CloseHandle(s_thread); s_thread = NULL; }
    if (s_qthread) { WaitForSingleObject(s_qthread, 2000); CloseHandle(s_qthread); s_qthread = NULL; }
    if (s_cache_thread) { WaitForSingleObject(s_cache_thread, 5000); CloseHandle(s_cache_thread); s_cache_thread = NULL; }
    if (s_qevt) { CloseHandle(s_qevt); s_qevt = NULL; }
    if (s_rec) {
        long data_bytes = s_rec_frames * 4;
        unsigned sz = (unsigned)(36 + data_bytes);
        fseek(s_rec, 4, SEEK_SET);  fwrite(&sz, 4, 1, s_rec);
        fseek(s_rec, 40, SEEK_SET); fwrite(&data_bytes, 4, 1, s_rec);
        fclose(s_rec);
        s_rec = NULL;
    }
    // drain any queued sfx
    EnterCriticalSection(&s_cs);
    while (s_qcount > 0) {
        free(s_queue[s_qhead].data);
        s_qhead = (s_qhead + 1) % A5_QMAX;
        s_qcount--;
    }
    LeaveCriticalSection(&s_cs);
    waveOutReset(s_hwo);
    for (int i = 0; i < A5_NBUF; i++)
        waveOutUnprepareHeader(s_hwo, &s_hdr[i], sizeof(WAVEHDR));
    waveOutClose(s_hwo);
    s_hwo = NULL;
    if (s_evt) { CloseHandle(s_evt); s_evt = NULL; }
    if (s_cs_ready) { DeleteCriticalSection(&s_cs); s_cs_ready = 0; }
    for (int i = 0; i < A5_MAX_SOUNDS; i++) {
        if (s_sounds[i].pcm && !s_sounds[i].from_cache) free(s_sounds[i].pcm);
        if (s_sounds[i].stream) stb_vorbis_close(s_sounds[i].stream);
        if (s_sounds[i].chunk) free(s_sounds[i].chunk);
        if (s_sounds[i].src) free(s_sounds[i].src);
        s_sounds[i].pcm = NULL; s_sounds[i].stream = NULL;
        s_sounds[i].chunk = NULL; s_sounds[i].src = NULL;
        s_sounds[i].from_cache = 0;
        if (s_cache[i].pcm) { free(s_cache[i].pcm); s_cache[i].pcm = NULL; }
        s_cache[i].valid = 0;
    }
}

void a5audio_status(char* buf, size_t n) {
    int loaded = 0;
    for (int i = 0; i < A5_MAX_SOUNDS; i++) if (s_sounds[i].ready) loaded++;
    int off = snprintf(buf, n, "audio: %d sounds loaded, %ld active voices, %ld mixes, peak %d/32767",
             loaded, (long)s_active_voices, s_mix_count, s_peak);
    for (int i = 0; i < A5_MAX_SOUNDS && off < (int)n - 40; i++) {
        if (s_sounds[i].stream && s_sounds[i].rate > 0) {
            off += snprintf(buf + off, n - off, "; music %d at %.1fs",
                            i, s_sounds[i].src_pos / s_sounds[i].rate);
        }
    }
}
