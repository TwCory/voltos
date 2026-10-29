// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/hashlist.h
 *
 * 	Hash-Based Linked Lists
 */

#ifndef _VOLTOS_HASHLIST_H
#define _VOLTOS_HASHLIST_H

struct hashlist_node;

struct hashlist_head {
	struct hashlist_node *first;
};

struct hashlist_node {
	struct hashlist_node *next;
};

#define HASHLIST_HEAD_INIT(head)
#define HASHLIST_HEAD(head)

#endif /* _VOLTOS_HASHLIST_H */
