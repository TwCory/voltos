#ifndef VOLTOS_AVL_TREE_TYPES_H
#define VOLTOS_AVL_TREE_TYPES_H

struct avl_node {
	struct avl_node 	*avl_left;
	struct avl_node 	*avl_right;
};

struct avl_root {
	struct avl_node 	*avl_node;
};

struct avl_root_cached {
	struct avl_root		avl_root;
};

#endif /* VOLTOS_AVL_TREE_TYPES_H */
