#ifndef VOLTOS_OBJECT_GROUP_H
#define VOLTOS_OBJECT_GROUP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/object-group.h>

struct object_group {
	__voltos_object_group_idx_t 	index;
	char 				name[OBJECT_GROUP_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* VOLTOS_OBJECT_GROUP_H */
