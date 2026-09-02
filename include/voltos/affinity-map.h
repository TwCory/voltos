// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/affinity_map.h
 *
 */

#ifndef _VOLTOS_AFFINITY_MAP_H
#define _VOLTOS_AFFINITY_MAP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/affinity-map.h>

struct affinity_map {
	const char 			name[AFFINITY_MAP_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _VOLTOS_AFFINITY_MAP_H */
