// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/skiplist.h
 *
 * 	Skip Lists
 */

#ifndef _VOLTOS_SKIPLIST_H
#define _VOLTOS_SKIPLIST_H

struct skiplist_node;

struct skiplist_head {
	struct skiplist_node *first;
};

struct skiplist_node {
	struct skiplist_node *next;
};

#define SKIPLIST_HEAD_INIT(head)
#define SKIPLIST_HEAD(head)

#endif /* _VOLTOS_SKIPLIST_H */
