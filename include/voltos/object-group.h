#ifndef _VOLTOS_OBJECT_GROUP_H_
#define _VOLTOS_OBJECT_GROUP_H_

#include <nbapi/voltos/object-group.h>

struct object_group {
	__voltos_object_group_idx_t 	index;
	char 				name[OBJECT_GROUP_NAME_SIZE];
};

#endif /* _VOLTOS_OBJECT_GROUP_H_ */
