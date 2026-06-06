#ifndef VOLTOS_MAP_LIST_H
#define VOLTOS_MAP_LIST_H

#include <voltos/refcount.h>
#include <nbapi/voltos/map-list.h>

struct map_list {
	__voltos_map_list_idx_t 	index;
	char 				name[MAP_LIST_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* VOLTOS_MAP_LIST_H */
