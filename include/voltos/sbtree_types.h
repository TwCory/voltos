#ifndef _VOLTOS_SBTREE_TYPES_H_
#define _VOLTOS_SBTREE_TYPES_H_

struct sb_node {
	struct sb_node *sb_left;
	struct sb_node *sb_right;
};

struct sb_root {
	struct sb_node *sb_node;
};

struct sb_root_cached {
	struct sb_root sb_root;
};

#endif /* _VOLTOS_SBTREE_TYPES_H_ */
