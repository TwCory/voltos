// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/base32.h
 *
 * 	Base32 Encoding
 */

#ifndef _VOLTOS_BASE32_H
#define _VOLTOS_BASE32_H

#include <voltos/types.h>

#ifndef BASE32_CHARS
#define BASE32_CHARS(nbytes)		DIVIDE_ROUND_UP((nbytes) * 4, 3)
#endif /* BASE32_CHARS */

int base32_encode(const u8 *source, int length, bool padding);
int base32_decode(const char *source, int length, bool padding);

#endif /* _VOLTOS_BASE32_H */
