// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/base64.h
 *
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

#define BASE64_CHARS(x)

#endif /* _VOLTOS_BASE64_H */
