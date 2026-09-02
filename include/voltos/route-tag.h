// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/route-tag.h
 *
 */

#ifndef _VOLTOS_ROUTE_TAG_H
#define _VOLTOS_ROUTE_TAG_H

#include <voltos/refcount.h>
#include <nbapi/voltos/route-tag.h>

struct route_tag_list {
	const char 			name[ROUTE_TAG_LIST_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _VOLTOS_ROUTE_TAG_H */
