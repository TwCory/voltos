// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/plist_types.h
 *
 * 	Priority-Based Linked Lists
 */

#ifndef _VOLTOS_PLIST_TYPES_H
#define _VOLTOS_PLIST_TYPES_H

struct plist_node;

struct plist_head {
	struct plist_node *first;
};

struct plist_node {
	struct plist_node *next;
};

#endif /* _VOLTOS_PLIST_TYPES_H */
