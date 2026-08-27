// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/llist.h
 *
 * 	Lock-Free Linked Lists
 */

#ifndef _VOLTOS_LLIST_H
#define _VOLTOS_LLIST_H

#include <voltos/atomic.h>
#include <voltos/stddef.h>
#include <voltos/types.h>

struct llist_node;

struct llist_head {
	struct llist_node 		*first;
};

struct llist_node {
	struct llist_node 		*next;
};

#define LLIST_HEAD_INIT(name)		{ NULL }

#define LLIST_HEAD(name)		struct llist_head name = LLIST_HEAD_INIT(name)

#endif /* _VOLTOS_LLIST_H */
