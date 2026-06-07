// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_ACL_IPX_STANDARD_H
#define VOLTOS_ACL_IPX_STANDARD_H

#include <voltos/access-list.h>

struct ipx_standard_acl {
	struct access_list 		*acl_ptr;
};

struct ipx_standard_ace {
	struct ipx_standard_acl 	*ace_list;
	__voltos_acl_seqno_t 		ace_seqno;
	char 				ace_remark[ACL_REMARK_SIZE];
};

#endif /* VOLTOS_ACL_IPX_STANDARD_H */
