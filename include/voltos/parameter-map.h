#ifndef VOLTOS_PARAMETER_MAP_H
#define VOLTOS_PARAMETER_MAP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/parameter-map.h>

struct parameter_map {
	__voltos_parameter_map_idx_t 		index;
	char 					name[PARAMETER_MAP_NAME_SIZE];

	refcount_t 				ref_count;
};

#endif /* VOLTOS_PARAMETER_MAP_H */
