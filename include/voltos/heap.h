// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/heap.h
 *
 * 	Generic Heaps
 */

#ifndef _VOLTOS_HEAP_H
#define _VOLTOS_HEAP_H

struct heap_node;

struct heap_head {
	struct heap_node 	*first;
};

struct heap_node {
	u32			offset;

	struct heap_node 	*next;
	struct heap_node 	*prev;
};

#endif /* _VOLTOS_HEAP_H */
