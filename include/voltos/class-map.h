#ifndef _VOLTOS_CLASS_MAP_H
#define _VOLTOS_CLASS_MAP_H

#include <nbapi/voltos/class-map.h>

struct class_map {
	const char 		name[CLASS_MAP_NAME_SIZE];
	__class_map_key_t 	index;
	enum class_map_type 	type;
};

#endif /* _VOLTOS_CLASS_MAP_H */
