#ifndef _VOLTOS_ZIPTREE_TYPES_H_
#define _VOLTOS_ZIPTREE_TYPES_H_

struct zip_node {
	struct zip_node 	*zip_left;
	struct zip_node 	*zip_right;
};

struct zip_root {
	struct zip_node 	*zip_node;
};

struct zip_root_cached {
	struct zip_root 	zip_root;
};

#endif /* _VOLTOS_ZIPTREE_TYPES_H_ */
