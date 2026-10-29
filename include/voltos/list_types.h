// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/list_types.h
 *
 */

#ifndef _VOLTOS_LIST_TYPES_H
#define _VOLTOS_LIST_TYPES_H

struct list_node;

struct list_head {
	struct list_node *first;
};

struct list_node {
	struct list_node *next;
};

#endif /* _VOLTOS_LIST_TYPES_H */
