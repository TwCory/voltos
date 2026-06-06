#ifndef VOLTOS_LOCADDR_PRIORITY_LIST_H
#define VOLTOS_LOCADDR_PRIORITY_LIST_H

#include <voltos/refcount.h>
#include <nbapi/voltos/locaddr-priority-list.h>

struct locaddr_priority_list {
	__voltos_locaddr_plist_idx_t 	index;
	char 				name[LOCADDR_PRIORITY_LIST_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* VOLTOS_LOCADDR_PRIORITY_LIST_H */
