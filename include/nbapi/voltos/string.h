// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/string.h
 *
 */

#ifndef _NBAPI_VOLTOS_STRING_H
#define _NBAPI_VOLTOS_STRING_H

struct __voltos_string {
	char 					*s_data;
	unsigned int 				s_length;
	unsigned int 				s_capacity;
};

#endif /* _NBAPI_VOLTOS_STRING_H */
