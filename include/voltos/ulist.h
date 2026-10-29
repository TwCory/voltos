// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ulist.h
 *
 * 	Unrolled Linked Lists
 */

#ifndef _VOLTOS_ULIST_H
#define _VOLTOS_ULIST_H

struct ulist_node;

struct ulist_head {
	struct ulist_node *first;
};

struct ulist_node {
	struct ulist_node *next;
};

#define ULIST_HEAD_INIT(head)
#define ULIST_HEAD(head)

#endif /* _VOLTOS_ULIST_H */
