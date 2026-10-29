// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/blist.h
 *
 * 	Bit-Based Linked Lists
 */

#ifndef _VOLTOS_BLIST_H
#define _VOLTOS_BLIST_H

struct blist_node;

struct blist_head {
	struct blist_node *first;
};

struct blist_node {
	struct blist_node *next;
};

#define BLIST_HEAD_INIT(head)
#define BLIST_HEAD(head)

#endif /* _VOLTOS_BLIST_H */
