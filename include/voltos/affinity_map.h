#ifndef VOLTOS_AFFINITY_MAP_H
#define VOLTOS_AFFINITY_MAP_H

#include <nbapi/voltos/affinity_map.h>

struct affinity_map {
	__voltos_affinity_map_idx_t 	index;
	char 				name[AFFINITY_MAP_NAME_SIZE];
};

#endif /* VOLTOS_AFFINITY_MAP_H */
