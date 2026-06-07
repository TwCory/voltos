// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_ACL_IPV4_ROLE_BASED_H
#define VOLTOS_ACL_IPV4_ROLE_BASED_H

#include <voltos/access-list.h>

struct ipv4_role_based_acl {
	struct access_list 		*acl_ptr;
};

struct ipv4_role_based_ace {
	struct ipv4_role_based_acl 	*ace_list;
	__voltos_acl_seqno_t 		ace_seqno;
	char 				ace_remark[ACL_REMARK_SIZE];
};

#endif /* VOLTOS_ACL_IPV4_ROLE_BASED_H */
