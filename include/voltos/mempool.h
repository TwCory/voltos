// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/mempool.h
 *
 */

#ifndef _VOLTOS_MEMPOOL_H
#define _VOLTOS_MEMPOOL_H

typedef void * (mempool_alloc_t)(unsigned int flags, void *pool_data);
typedef void (mempool_free_t)(void *element, void *pool_data);

typedef struct mempool {
	int 			element_min;
	int 			element_current;
	void 			**elements;
	void 			*pool_data;
	mempool_alloc_t 	*alloc;
	mempool_free_t 		*free;
} mempool_t;

#endif /* _VOLTOS_MEMPOOL_H */
