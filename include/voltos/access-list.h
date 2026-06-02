#ifndef _VOLTOS_ACCESS_LIST_H_
#define _VOLTOS_ACCESS_LIST_H_

#include <nbapi/voltos/access-list.h>

struct access_list {
	__voltos_acl_idx_t 	acl_index;
	char 			acl_name[ACL_NAME_SIZE];
	__voltos_acl_id_t 	acl_number;
};

#endif /* _VOLTOS_ACCESS_LIST_H_ */
