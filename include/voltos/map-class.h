#ifndef VOLTOS_MAP_CLASS_H
#define VOLTOS_MAP_CLASS_H

#include <voltos/refcount.h>
#include <nbapi/voltos/map-class.h>

struct map_class {
	__voltos_map_class_idx_t 	index;
	char 				name[MAP_CLASS_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* VOLTOS_MAP_CLASS_H */
