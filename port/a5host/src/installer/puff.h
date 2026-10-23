/* puff.h - interface to the public-domain inflate (contrib/puff/puff.c).
 * Copyright (C) 2002-2013 Mark Adler; zlib license.
 */
#ifndef PUFF_H
#define PUFF_H

#define NIL ((unsigned char *)0)        /* for no output option */

/*
 * Inflate source to dest.  On return, destlen and sourcelen are updated to the
 * size of the uncompressed data and the size of the deflate data respectively.
 * On success, the return value of puff() is zero.
 */
int puff(unsigned char *dest,           /* pointer to destination pointer */
         unsigned long *destlen,        /* amount of output space */
         const unsigned char *source,   /* pointer to source data pointer */
         unsigned long *sourcelen);     /* amount of input available */

#endif /* PUFF_H */
