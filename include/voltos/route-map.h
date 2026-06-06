#ifndef VOLTOS_ROUTE_MAP_H
#define VOLTOS_ROUTE_MAP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/route-map.h>

struct route_map {
	__voltos_route_map_idx_t 	index;
	char 				name[ROUTE_MAP_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* VOLTOS_ROUTE_MAP_H */
