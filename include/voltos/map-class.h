#ifndef _VOLTOS_MAP_CLASS_H_
#define _VOLTOS_MAP_CLASS_H_

#include <nbapi/voltos/map-class.h>

struct map_class {
	__voltos_map_class_idx_t 	index;
	char 				name[MAP_CLASS_NAME_SIZE];
};

#endif /* _VOLTOS_MAP_CLASS_H_ */
