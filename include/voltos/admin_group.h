#ifndef _VOLTOS_ADMIN_GROUP_H_
#define _VOLTOS_ADMIN_GROUP_H_

#include <nbapi/voltos/admin_group.h>

struct admin_group {
	__voltos_admin_group_idx_t 	index;
	char 				name[ADMIN_GROUP_NAME_SIZE];
};

struct ext_admin_group {
	__voltos_admin_group_idx_t 	index;
	char 				name[EXT_ADMIN_GROUP_NAME_SIZE];
};

#endif /* _VOLTOS_ADMIN_GROUP_H_ */
