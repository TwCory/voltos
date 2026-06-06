// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_ACCESS_LIST_H
#define VOLTOS_ACCESS_LIST_H

#include <voltos/refcount.h>
#include <voltos/types.h>
#include <nbapi/voltos/access-list.h>

struct access_list {
	__voltos_acl_idx_t 	acl_index;
	char 			acl_name[ACL_NAME_SIZE];

	bool 			acl_numbered_type;
	__voltos_acl_id_t 	acl_number;

	refcount_t 		acl_refcount;
};

#endif /* VOLTOS_ACCESS_LIST_H */
