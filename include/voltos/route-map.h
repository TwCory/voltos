// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/route-map.h
 *
 */

#ifndef _VOLTOS_ROUTE_MAP_H
#define _VOLTOS_ROUTE_MAP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/route-map.h>

struct route_map {
	const char 			name[ROUTE_MAP_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _VOLTOS_ROUTE_MAP_H */
