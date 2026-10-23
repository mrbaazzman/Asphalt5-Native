// audio.h - native sound engine for a5host (Ogg Vorbis via stb_vorbis,
// output through WinMM waveOut). Implements the Java GLMediaPlayer side of
// the engine's audio: load/play/stop/pause/volume/pitch over sound ids whose
// assets are raw_%03d.glsnd (Ogg Vorbis) in the data directory.
#ifndef A5AUDIO_H
#define A5AUDIO_H

#include <stddef.h>

// start/stop the waveOut mixer (called once at boot / at exit)
int  a5audio_init(void);
void a5audio_shutdown(void);

// background predecode of raw_%03d.glsnd in this directory (the engine waits
// on isSoundLoaded during race setup, so decoding upfront removes the stall)
void a5audio_set_asset_dir(const char* dir);

// decode a sound asset for id. is_big = music (decoded on a worker thread).
void a5audio_load(int id, const unsigned char* data, int len, int is_big);
void a5audio_unload(int id);
int  a5audio_loaded(int id);       // 1 when the PCM is ready to play

// voice control. returns 0 on success.
int  a5audio_play(int id, int instance, float vol, int is_big);
void a5audio_stop(int id, int instance, int is_big);
void a5audio_pause(int id, int instance, int pause, int is_big);
void a5audio_set_vol(int id, int instance, float vol, int is_big);
void a5audio_set_pitch(int id, int instance, float pitch, int is_big);
void a5audio_stop_all(int which);  // 0 = all, 1 = sfx pool, 2 = big/music

// diagnostics
void a5audio_status(char* buf, size_t n);
void a5audio_record(const char* path);   // A5_SND_RECORD: dump mixed output to WAV

// ---- movie soundtrack: the host's MP4 player decodes the movie audio to
// 44100 Hz stereo 16-bit and feeds it here; the mixer adds it to the output.
void a5audio_movie_reset(void);
void a5audio_movie_feed(const short* pcm, int frames);
int  a5audio_movie_queued(void);

#endif
