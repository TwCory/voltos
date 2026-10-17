// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/btree.h
 *
 */

#ifndef _VOLTOS_BTREE_H
#define _VOLTOS_BTREE_H

#include <voltos/mempool.h>
#include <voltos/voltos.h>

struct btree_head {
	unsigned long 			*node;
	mempool_t 			*mempool;
	int 				height;
};

struct btree_geometry;

#endif /* _VOLTOS_BTREE_H */
