// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/base32.h
 *
 * 	Base32 Encoding/Decoding Support
 */

#ifndef _VOLTOS_BASE32_H
#define _VOLTOS_BASE32_H

#include <voltos/types.h>

#define BASE32_CHARS(n_bytes)

int base32_encode(const u8 *src, int len, char *dst, bool padding);
int base32_decode(const char *src, int len, u8 *dst, bool padding);

#endif /* _VOLTOS_BASE32_H */
