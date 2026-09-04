// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/pool_types.h
 *
 * 	Generic Object Pools
 */

#ifndef _VOLTOS_POOL_TYPES_H
#define _VOLTOS_POOL_TYPES_H

#define POOL_NAME_SIZE		64

typedef struct {
	const char 		name[POOL_NAME_SIZE];

} pool_t;

#endif /* _VOLTOS_POOL_TYPES_H */
