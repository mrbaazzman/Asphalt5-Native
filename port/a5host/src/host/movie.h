// movie.h - MP4 playback for the engine's intro movies.
#pragma once

// Play the movie full-screen (letterboxed) over the GL context with its
// soundtrack through the audio mixer.  Blocks until the movie ends or the user
// skips (click / ESC).  Returns 1 when it played, 0 when unavailable/disabled
// (A5_NO_MOVIE=1).
int a5movie_play(const char* path, int w, int h);
