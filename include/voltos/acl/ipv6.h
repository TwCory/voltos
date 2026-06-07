// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_ACL_IPV6_H
#define VOLTOS_ACL_IPV6_H

#include <voltos/access-list.h>

struct ipv6_acl {
	struct access_list 		*acl_ptr;
};

struct ipv6_ace {
	struct ipv6_acl 		*ace_list;
	__voltos_acl_seqno_t 		ace_seqno;
	char 				ace_remark[ACL_REMARK_SIZE];
};

#endif /* VOLTOS_ACL_IPV6_H */
