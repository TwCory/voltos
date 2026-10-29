// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/llist.h
 *
 * 	Lock-Free Linked Lists
 */

#ifndef _VOLTOS_LLIST_H
#define _VOLTOS_LLIST_H

struct llist_node;

struct llist_head {
	struct llist_node *first;
};

struct llist_node {
	struct llist_node *next;
};

#define LLIST_HEAD_INIT(head)
#define LLIST_HEAD(head)

#endif /* _VOLTOS_LLIST_H */
