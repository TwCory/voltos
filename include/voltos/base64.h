// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/base64.h
 *
 * 	Base64 Encoding
 */

#ifndef _VOLTOS_BASE64_H
#define _VOLTOS_BASE64_H

#include <voltos/types.h>

enum base64_type {
	BASE64_TYPE_STANDARD		= 0,
	BASE64_TYPE_URL_SAFE		= 1,
	BASE64_TYPE_IMAP		= 2,
	__BASE64_TYPE_MAX__
};

#define BASE64_TYPE_MAX			(__BASE64_TYPE_MAX__ - 1)

#ifndef BASE64_CHARS
#define BASE64_CHARS(nbytes)		DIVIDE_ROUND_UP((nbytes) * 4, 3)
#endif /* BASE64_CHARS */

int base64_encode(const u8 *source, int length, bool padding, enum base64_type type);
int base64_decode(const char *source, int length, bool padding, enum base64_type type);

#endif /* _VOLTOS_BASE64_H */
