// pvrtc.h - PVRTC decoder (port of mikunyan ext/decoders/native/pvrtc.c, MIT).
// Decodes to RGBA8888 bytes (w*h*4), same output as texture2ddecoder's
// decode_pvrtc used by the Python harness.
#pragma once
#include <stdint.h>

// data: compressed bytes; out_rgba: w*h*4 bytes; is2bpp: 0=4bpp, 1=2bpp
int pvrtc_decode(const uint8_t* data, long w, long h, uint8_t* out_rgba, int is2bpp);

// ATC (Adreno) textures; is_rgba: 0=ATC_RGB (0x8C92), 1=ATC_RGBA (0x8C93)
int atc_decode(const uint8_t* data, long w, long h, uint8_t* out_rgba, int is_rgba);
