// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_ACL_IPV4_EXTENDED_H
#define VOLTOS_ACL_IPV4_EXTENDED_H

#include <voltos/access-list.h>

#define IPV4_EXTENDED_ACL_ID_MIN		100
#define IPV4_EXTENDED_ACL_ID_MAX		199

#define IPV4_EXTENDED_ACL_ID_EXP_MIN		2000
#define IPV4_EXTENDED_ACL_ID_EXP_MAX		2699

struct ipv4_extended_acl {
	struct access_list 			*acl_ptr;
};

struct ipv4_extended_ace {
	struct ipv4_extended_acl 		*ace_list;
	__voltos_acl_seqno_t 			ace_seqno;
	char 					ace_remark[ACL_REMARK_SIZE];
};

#endif /* VOLTOS_ACL_IPV4_EXTENDED_H */
