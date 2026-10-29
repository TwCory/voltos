// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/zipper_types.h
 *
 * 	Zipper Linked Lists
 */

#ifndef _VOLTOS_ZIPPER_TYPES_H
#define _VOLTOS_ZIPPER_TYPES_H

struct zipper_node;

struct zipper_head {
	struct zipper_node *first;
};

struct zipper_node {
	struct zipper_node *next;
};

#endif /* _VOLTOS_ZIPPER_TYPES_H */
