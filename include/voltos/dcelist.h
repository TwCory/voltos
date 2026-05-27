#ifndef _VOLTOS_DCELIST_H_
#define _VOLTOS_DCELIST_H_

struct dcelist_node;

struct dcelist_head {
	struct dcelist_node *first;
};

struct dcelist_node {
	struct dcelist_node *next;
	struct dcelist_node **pprev;
};

#endif /* _VOLTOS_DCELIST_H_ */
