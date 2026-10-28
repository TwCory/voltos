// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/access-list.h
 *
 * 	Access Control List
 */

#ifndef _VOLTOS_ACCESS_LIST_H
#define _VOLTOS_ACCESS_LIST_H

#include <voltos/refcount.h>
#include <nbapi/voltos/access-list.h>

struct access_list {
	const char name;
	refcount_t ref_count;
};

#endif /* _VOLTOS_ACCESS_LIST_H */
