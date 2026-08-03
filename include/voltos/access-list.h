// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/access-list.h
 *
 * 	Access Control List (ACL) Structures
 */

#ifndef _VOLTOS_ACCESS_LIST_H
#define _VOLTOS_ACCESS_LIST_H

#include <voltos/types.h>
#include <nbapi/voltos/access-list.h>

struct access_list {
	const char 			acl_name[ACL_NAME_SIZE];
	__acl_key_t			acl_index;
	bool 				acl_numbered_type;
	union {
		__voltos_acl_number_t 	acl_number;
	};
};

#endif /* _VOLTOS_ACCESS_LIST_H */
