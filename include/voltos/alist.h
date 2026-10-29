// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/alist.h
 *
 * 	Association Lists
 */

#ifndef _VOLTOS_ALIST_H
#define _VOLTOS_ALIST_H

struct alist_node;

struct alist_head {
	struct alist_node *first;
};

struct alist_node {
	struct alist_node *next;
};

#define ALIST_HEAD_INIT(head)
#define ALIST_HEAD(head)

#endif /* _VOLTOS_ALIST_H */
