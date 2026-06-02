#ifndef _VOLTOS_LOCADDR_PRIORITY_LIST_H_
#define _VOLTOS_LOCADDR_PRIORITY_LIST_H_

#include <nbapi/voltos/locaddr-priority-list.h>

struct locaddr_priority_list {
	__voltos_locaddr_plist_idx_t 	index;
	char 				name[LOCADDR_PRIORITY_LIST_NAME_SIZE];
};

#endif /* _VOLTOS_LOCADDR_PRIORITY_LIST_H_ */
