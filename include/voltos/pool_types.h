// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/pool_types.h
 *
 * 	Generic Object Pools
 */

#ifndef _VOLTOS_POOL_TYPES_H
#define _VOLTOS_POOL_TYPES_H

#include <voltos/refcount.h>

typedef struct pool {
	char 		*name;
	char		*comment;
	unsigned int 	entry_max;
	unsigned int	entry_total;
	refcount_t	ref_count;
	void		**data;
} pool_t;

#endif /* _VOLTOS_POOL_TYPES_H */
