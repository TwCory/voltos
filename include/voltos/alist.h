#ifndef _VOLTOS_ALIST_H_
#define _VOLTOS_ALIST_H_

struct alist_node;

struct alist_head {
	struct alist_node *first;
};

struct alist_node {
	struct alist_node *next;
};

#endif /* _VOLTOS_ALIST_H_ */
