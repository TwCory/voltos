// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/base64.h
 *
 * 	Base64 Encoding
 */

#ifndef _VOLTOS_BASE64_H
#define _VOLTOS_BASE64_H

enum base64_type {
	BASE64_TYPE_T_UNSPEC		= 0,
	BASE64_TYPE_T_STANDARD		= 1,
	BASE64_TYPE_T_URL_SAFE		= 2,
	BASE64_TYPE_T_IMAP		= 3,
	__BASE64_TYPE_T_MAX__
};

#ifndef BASE64_CHARS
#define BASE64_CHARS(nbytes)
#endif /* BASE64_CHARS */

#endif /* _VOLTOS_BASE64_H */
