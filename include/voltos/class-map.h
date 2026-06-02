#ifndef _VOLTOS_CLASS_MAP_H_
#define _VOLTOS_CLASS_MAP_H_

#include <nbapi/voltos/class-map.h>

struct class_map {
	__voltos_class_map_idx_t 	index;
	char 				name[CLASS_MAP_NAME_SIZE];
};

#endif /* _VOLTOS_CLASS_MAP_H_ */
