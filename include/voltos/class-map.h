#ifndef VOLTOS_CLASS_MAP_H
#define VOLTOS_CLASS_MAP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/class-map.h>

struct class_map {
	__voltos_class_map_idx_t 	index;
	char 				name[CLASS_MAP_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* VOLTOS_CLASS_MAP_H */
