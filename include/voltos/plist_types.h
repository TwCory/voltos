#ifndef VOLTOS_PLIST_TYPES_H
#define VOLTOS_PLIST_TYPES_H

#include <voltos/list.h>

struct plist_head {
	struct list_head 	node_list;
};

struct plist_node {
	int 			priority;
	struct list_head 	priority_list;
	struct list_head 	node_list;
};

#endif /* VOLTOS_PLIST_TYPES_H */
