#ifndef _VOLTOS_MAP_LIST_H_
#define _VOLTOS_MAP_LIST_H_

#include <nbapi/voltos/map-list.h>

struct map_list {
	__voltos_map_list_idx_t 	index;
	char 				name[MAP_LIST_NAME_SIZE];
};

#endif /* _VOLTOS_MAP_LIST_H_ */
