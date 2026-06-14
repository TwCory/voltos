#ifndef VOLTOS_ZIPTREE_TYPES_H
#define VOLTOS_ZIPTREE_TYPES_H

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

#endif /* VOLTOS_ZIPTREE_TYPES_H */
