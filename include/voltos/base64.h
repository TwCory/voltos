// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/base64.h
 *
 * 	Base64 Encoding/Decoding Support
 */

#ifndef _VOLTOS_BASE64_H
#define _VOLTOS_BASE64_H

#include <voltos/types.h>

typedef enum {
	BASE64_TYPE_T_DEFAULT		= 1,
	BASE64_TYPE_T_URL_SAFE		= 2,
	BASE64_TYPE_T_IMAP		= 3,
	__BASE64_TYPE_T_MAX__
} base64_type_t;

#define BASE64_CHARS(n_bytes)		DIV_ROUND_UP((n_bytes) * 4, 3)

int base64_encode(const u8 *src, int len, char *dst, bool padding, base64_type_t type);
int base64_decode(const char *src, int len, u8 *dst, bool padding, base64_type_t type);

#endif /* _VOLTOS_BASE64_H */
