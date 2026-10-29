#ifndef ASPHALT5_DATA_INSTALL_H
#define ASPHALT5_DATA_INSTALL_H

#ifdef __cplusplus
extern "C" {
#endif

/* Runs the first-launch 3.3.7 data installer UI.  Returns 0 when the data is
 * present/installed, non-zero if the user cancelled or the install failed.
 * local_pack may be NULL; otherwise it is a zlib data-pack path to use
 * instead of downloading. */
int data_install_run(const char *local_pack);

#ifdef __cplusplus
}
#endif

#endif
