// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_BTREE_H
#define VOLTOS_BTREE_H

#include <voltos/pool.h>
#include <voltos/voltos.h>

struct btree_head {
	unsigned long 		*node;
	pool_t 			*pool;
	int 			height;
};

struct btree_geometry;

#endif /* VOLTOS_BTREE_H */
