// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/allow-list.h
 *
 */

#ifndef _VOLTOS_ALLOW_LIST_H
#define _VOLTOS_ALLOW_LIST_H

#include <voltos/refcount.h>
#include <nbapi/voltos/allow-list.h>

struct allow_list {
	const char 		name[ALLOW_LIST_NAME_SIZE];
	refcount_t 		ref_count;
};

#endif /* _VOLTOS_ALLOW_LIST_H */
