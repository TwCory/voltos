// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/fbarray.h
 *
 * 	File-Backed Shared Index Array
 */

#ifndef _VOLTOS_FBARRAY_H
#define _VOLTOS_FBARRAY_H

#include <voltos/rwlock.h>

#define FBARRAY_NAME_SIZE	32

struct fbarray {
	char 			name[FBARRAY_NAME_SIZE];
	unsigned int 		count;
	unsigned int 		length;
	unsigned int 		element_size;
	void 			*data;
	rwlock_t 		rwlock;
};

#endif /* _VOLTOS_FBARRAY_H */
