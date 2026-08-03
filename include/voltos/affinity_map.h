// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/affinity_map.h
 *
 */

#ifndef _VOLTOS_AFFINITY_MAP_H
#define _VOLTOS_AFFINITY_MAP_H

#include <nbapi/voltos/affinity_map.h>

struct affinity_map {
	const char 			name[AFFINITY_MAP_NAME_SIZE];
	__affinity_map_key_t 		index;
};

#endif /* _VOLTOS_AFFINITY_MAP_H */
