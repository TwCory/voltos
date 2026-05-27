#ifndef _VOLTOS_CTLIST_H_
#define _VOLTOS_CTLIST_H_

struct ctlist_node;

struct ctlist_head {
	struct ctlist_node 	*first;
};

struct ctlist_node {
	struct ctlist_node 	*next;
	struct ctlist_node 	**pprev;
};

#endif /* _VOLTOS_CTLIST_H_ */
