// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/access-list.h
 *
 * 	Access Control Lists (ACL)
 */

#ifndef _VOLTOS_ACCESS_LIST_H
#define _VOLTOS_ACCESS_LIST_H

#include <voltos/refcount.h>
#include <voltos/types.h>
#include <nbapi/voltos/access-list.h>

struct access_list {
	const char 			name[ACL_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _VOLTOS_ACCESS_LIST_H */
