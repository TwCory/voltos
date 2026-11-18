// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ascii85.h
 *
 */

#ifndef _VOLTOS_ASCII85_H
#define _VOLTOS_ASCII85_H

#include <voltos/math.h>
#include <voltos/types.h>

#define ASCII85_BUFFER_SIZE	6

static inline long
ascii85_encode_len(long len)
{
	return DIVIDE_ROUND_UP(len, 4);
}

static inline const char *
ascii85_encode(u32 in, char *out)
{
	int i;

	if (in == 0)
		return "z";

	out[5] = '\0';
	for (i = 5; i--; ) {
		out[i] = '!' + in % 85;
		in /= 85;
	}

	return out;
}

#endif /* _VOLTOS_ASCII85_H */
