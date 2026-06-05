// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_AATREE_TYPES_H
#define VOLTOS_AATREE_TYPES_H

struct aa_node {
	struct aa_node 		*aa_left;
	struct aa_node 		*aa_right;
};

struct aa_root {
	struct aa_node 		*aa_node;
};

struct aa_root_cached {
	struct aa_root 		aa_root;
};

#endif /* VOLTOS_AATREE_TYPES_H */
