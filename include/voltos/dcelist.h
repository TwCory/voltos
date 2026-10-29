// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/dcelist.h
 *
 */

#ifndef _VOLTOS_DCELIST_H
#define _VOLTOS_DCELIST_H

struct dcelist_node;

struct dcelist_head {
	struct dcelist_node *first;
};

struct dcelist_node {
	struct dcelist_node *next;
};

#define DCELIST_HEAD_INIT(head)
#define DCELIST_HEAD(head)

#endif /* _VOLTOS_DCELIST_H */
