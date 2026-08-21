// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bitmap.h
 *
 */

#ifndef _VOLTOS_BITMAP_H
#define _VOLTOS_BITMAP_H

#include <voltos/bitops.h>
#include <voltos/types.h>

typedef unsigned long bitmap_t;

#ifndef DECLARE_BITMAP
#define DECLARE_BITMAP(name, bits)		\
	bitmap_t name[BITS_TO_LONGS(bits)]
#endif /* DECLARE_BITMAP */

#endif /* _VOLTOS_BITMAP_H */
