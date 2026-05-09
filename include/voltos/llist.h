#ifndef _VOLTOS_LLIST_H_
#define _VOLTOS_LLIST_H_

struct llist_node;

struct llist_head {
	struct llist_node *first;
};

struct llist_node {
	struct llist_node *next;
};

#endif /* _VOLTOS_LLIST_H_ */
