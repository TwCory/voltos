// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/nodemask_types.h
 *
 */

#ifndef _VOLTOS_NODEMASK_TYPES_H
#define _VOLTOS_NODEMASK_TYPES_H

#include <voltos/bitmap.h>

#define NODE_SHIFT 	 		0
#define NODE_NUMBER_MAX     		(1 << NODE_SHIFT)
#define NUMA_NODE_FALSE 		(-1)

typedef struct nodemask {
	DECLARE_BITMAP(bits, NODE_NUMBER_MAX);
} nodemask_t;

#endif /* _VOLTOS_NODEMASK_TYPES_H */
