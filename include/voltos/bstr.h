// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bstr.h
 *
 * 	Byte-Based String Type
 */

#ifndef _VOLTOS_BSTR_H
#define _VOLTOS_BSTR_H

#define BSTR_SIZE_MIN		1
#define BSTR_SIZE_MAX		128

typedef struct {
	unsigned char 		bytes[BSTR_SIZE_MAX];
	void 			*data;
} bstr_t;

#endif /* _VOLTOS_BSTR_H */
