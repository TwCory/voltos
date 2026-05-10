// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_AATREE_TYPES_H_
#define _VOLTOS_AATREE_TYPES_H_

struct aa_node {
	unsigned int		aa_parent_level;
	struct aa_node 		*aa_left;
	struct aa_node 		*aa_right;
};

struct aa_root {
	struct aa_node 		*aa_node;
};

struct aa_root_cached {
	struct aa_root 		aa_root;
	struct aa_node 		*aa_leftmost;
};

#define AA_ROOT			(struct aa_root)		{ NULL, }
#define AA_ROOT_CACHED		(struct aa_root_cached)		{ { NULL, }, NULL }

#endif /* _VOLTOS_AATREE_TYPES_H_ */
