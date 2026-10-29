/* Fog, lights and material entry points.
 *
 * Split out of the original monolithic gles1.c during the
 * 2026-10 project reorganisation.  Shared state lives in gl_globals.c
 * and is declared in gl_internal.h.
 */

#include "gl_internal.h"


void gl_Fogf(CPU *c) { glFogf((GLenum)A(0), AF(1)); }


void gl_Fogfv(CPU *c) { glFogfv((GLenum)A(0), (const GLfloat *)AP(1)); }


void gl_Lightf(CPU *c) { glLightf((GLenum)A(0), (GLenum)A(1), AF(2)); }


void gl_Lightfv(CPU *c) { glLightfv((GLenum)A(0), (GLenum)A(1), (const GLfloat *)AP(2)); }


void gl_LightModelfv(CPU *c) { glLightModelfv((GLenum)A(0), (const GLfloat *)AP(1)); }


void gl_Materialf(CPU *c) { glMaterialf((GLenum)A(0), (GLenum)A(1), AF(2)); }


void gl_Materialfv(CPU *c) { glMaterialfv((GLenum)A(0), (GLenum)A(1), (const GLfloat *)AP(2)); }
