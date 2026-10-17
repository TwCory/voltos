// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/locaddr-priority-list.h
 *
 */

#ifndef _VOLTOS_LOCADDR_PRIORITY_LIST_H
#define _VOLTOS_LOCADDR_PRIORITY_LIST_H

#include <voltos/refcount.h>
#include <nbapi/voltos/locaddr-priority-list.h>

struct locaddr_priority_list {
	const char 			name[LOCADDR_PRIORITY_LIST_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _VOLTOS_LOCADDR_PRIORITY_LIST_H */
