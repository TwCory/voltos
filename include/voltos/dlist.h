#ifndef _VOLTOS_DLIST_H_
#define _VOLTOS_DLIST_H_

struct dlist_node;

struct dlist_head {
	struct dlist_node *first;
};

struct dlist_node {
	struct dlist_node *next;
	struct dlist_node **pprev;
};

#endif /* _VOLTOS_DLIST_H_ */
