// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_ACL_XNS_EXTENDED_H
#define VOLTOS_ACL_XNS_EXTENDED_H

#include <voltos/access-list.h>

struct xns_extended_acl {
	struct access_list 		*acl_ptr;
};

struct xns_extended_ace {
	struct xns_extended_acl 	*ace_list;
	__voltos_acl_seqno_t 		ace_seqno;
	char 				ace_remark[ACL_REMARK_SIZE];
};

#endif /* VOLTOS_ACL_XNS_EXTENDED_H */
