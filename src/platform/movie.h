/* MP4 movie playback for the engine's intro/trailer and career videos.
 *
 * The engine asks the Java GLMediaPlayer for a movie during GS_TrailerMovie
 * and then waits on Game+0x1d72.  The JNI shim records the request here; the
 * main loop plays it between frames and clears the wait flag when done.
 */
#ifndef ASPHALT5_MOVIE_H
#define ASPHALT5_MOVIE_H

#ifdef __cplusplus
extern "C" {
#endif

/* Called from the JNI loadMovie(String) handler.  `name` is the engine's
 * filename (e.g. "A5_Ultimate_VNFS_2.mp4"); it is resolved in gamefiles/,
 * assets/ or the portable GloftA5HD folder.  A5_MOVIE_FILE overrides it. */
void movie_request(const char *name);

/* Pending-request handshake used by main.c. */
int  movie_has_pending(void);
int  movie_play_pending(int w, int h);
void movie_discard_pending(void);

/* Direct playback (also used by movie_play_pending).  Returns 1 when the
 * movie played to the end or was skipped, 0 when unavailable/disabled. */
int  movie_play(const char *path, int w, int h);

#ifdef __cplusplus
}
#endif

#endif
