// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/list_types.h
 *
 */

#ifndef _VOLTOS_LIST_TYPES_H
#define _VOLTOS_LIST_TYPES_H

struct list_head {
	struct list_head 	*next;
	struct list_head 	*prev;

};

struct hlist_node;

struct hlist_head {
	struct hlist_node 	*first;
};

struct hlist_node {
	struct hlist_node 	*next;
	struct hlist_node 	**pprev;
};

#endif /* _VOLTOS_LIST_TYPES_H */
