// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/aatree_types.h
 *
 */

#ifndef _VOLTOS_AATREE_TYPES_H
#define _VOLTOS_AATREE_TYPES_H

struct aa_node {
	struct aa_node 			*aa_left;
	struct aa_node 			*aa_right;
};

struct aa_node_linked {
	struct aa_node 			aa_node;
	struct aa_node_linked 		*aa_prev;
	struct aa_node_linked 		*aa_next;
};

struct aa_root {
	struct aa_node 			*aa_node;
};

struct aa_root_cached {
	struct aa_root 			aa_root;
	struct aa_node 			*aa_leftmost;
};

struct aa_root_linked {
	struct aa_root 			aa_root;
	struct aa_node_linked 		*aa_leftmost;
};

#define AA_ROOT
#define AA_ROOT_CACHED
#define AA_ROOT_LINKED

#endif /* _VOLTOS_AATREE_TYPES_H */
