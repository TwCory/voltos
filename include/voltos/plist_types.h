// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/plist_types.h
 *
 */

#ifndef _VOLTOS_PLIST_TYPES_H
#define _VOLTOS_PLIST_TYPES_H

#include <voltos/list.h>
#include <voltos/types.h>

struct plist_head {
	struct list_head 	node_list;
};

struct plist_node {
	int 			priority;
	struct list_head 	priority_list;
	struct list_head 	node_list;
};

#endif /* _VOLTOS_PLIST_TYPES_H */
