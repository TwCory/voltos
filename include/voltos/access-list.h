// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_ACCESS_LIST_H
#define VOLTOS_ACCESS_LIST_H

#include <nbapi/voltos/access-list.h>

struct access_list {
	__voltos_acl_idx_t 	acl_index;
	char 			acl_name[ACL_NAME_SIZE];
	__voltos_acl_id_t 	acl_number;
};

#endif /* VOLTOS_ACCESS_LIST_H */
