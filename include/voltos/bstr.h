// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bstr.h
 *
 * 	Byte-Based String Type
 */

#ifndef _VOLTOS_BSTR_H
#define _VOLTOS_BSTR_H

#define BSTR_SIZE_MAX		64

typedef struct {
	unsigned char 		bytes[BSTR_SIZE_MAX];
} bstr_t;

#endif /* _VOLTOS_BSTR_H */
