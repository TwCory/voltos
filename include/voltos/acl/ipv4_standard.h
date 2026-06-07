// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_ACL_IPV4_STANDARD_H
#define VOLTOS_ACL_IPV4_STANDARD_H

#include <voltos/access-list.h>

#define IPV4_STANDARD_ACL_ID_MIN		1
#define IPV4_STANDARD_ACL_ID_MAX		99

#define IPV4_STANDARD_ACL_ID_EXP_MIN		1300
#define IPV4_STANDARD_ACL_ID_EXP_MAX		1999

struct ipv4_standard_acl {
	struct access_list 			*acl_ptr;
};

struct ipv4_standard_ace {
	struct ipv4_standard_acl 		*ace_list;
	__voltos_acl_seqno_t 			ace_seqno;
	char 					ace_remark[ACL_REMARK_SIZE];
};

#endif /* VOLTOS_ACL_IPV4_STANDARD_H */
