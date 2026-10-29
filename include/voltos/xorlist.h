// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/xorlist.h
 *
 * 	XOR Linked Lists
 */

#ifndef _VOLTOS_XORLIST_H
#define _VOLTOS_XORLIST_H

struct xorlist_node;

struct xorlist_head {
	struct xorlist_node *first;
};

struct xorlist_node {
	struct xorlist_node *next;
};

#define XORLIST_HEAD_INIT(head)
#define XORLIST_HEAD(head)

#endif /* _VOLTOS_XORLIST_H */
