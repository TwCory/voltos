#ifndef VOLTOS_ADMIN_GROUP_H
#define VOLTOS_ADMIN_GROUP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/admin_group.h>

struct admin_group {
	__voltos_admin_group_idx_t 	index;
	char 				name[ADMIN_GROUP_NAME_SIZE];

	refcount_t 			ref_count;
};

struct ext_admin_group {
	__voltos_admin_group_idx_t 	index;
	char 				name[EXT_ADMIN_GROUP_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* VOLTOS_ADMIN_GROUP_H */
