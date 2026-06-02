#ifndef _VOLTOS_AFFINITY_MAP_H_
#define _VOLTOS_AFFINITY_MAP_H_

#include <nbapi/voltos/affinity_map.h>

struct affinity_map {
	__voltos_affinity_map_idx_t 	index;
	char 				name[AFFINITY_MAP_NAME_SIZE];
};

#endif /* _VOLTOS_AFFINITY_MAP_H_ */
