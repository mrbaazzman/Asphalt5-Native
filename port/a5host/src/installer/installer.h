// installer.h - the phone's first-run GameInstaller flow, natively on PC.
#pragma once

// Returns the number of missing files in the game data directory (the
// GameInstaller's own expected file list, names + exact sizes from the DEX).
int a5install_data_incomplete(const char* game_dir);

// Runs the installer: the logo, the download question, the loopback HTTP
// download of the master data file, the per-file writes and the success
// screen.  Returns 1 when the game should boot, 0 when the user quit.
int a5install_run(const char* game_dir, const char* master_path, int w, int h);
