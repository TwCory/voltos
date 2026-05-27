#ifndef _VOLTOS_AVL_TREE_TYPES_H_
#define _VOLTOS_AVL_TREE_TYPES_H_

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

#endif /* _VOLTOS_AVL_TREE_TYPES_H_ */
