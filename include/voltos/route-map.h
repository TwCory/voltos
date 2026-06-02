#ifndef _VOLTOS_ROUTE_MAP_H_
#define _VOLTOS_ROUTE_MAP_H_

#include <nbapi/voltos/route-map.h>

struct route_map {
	__voltos_route_map_idx_t 	index;
	char 				name[ROUTE_MAP_NAME_SIZE];
};

#endif /* _VOLTOS_ROUTE_MAP_H_ */
