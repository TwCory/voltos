#ifndef VOLTOS_ALIST_H
#define VOLTOS_ALIST_H

struct alist_node;

struct alist_head {
	struct alist_node 	*first;
};

struct alist_node {
	struct alist_node 	*next;
	struct alist_node 	**pprev;
};

#endif /* VOLTOS_ALIST_H */
