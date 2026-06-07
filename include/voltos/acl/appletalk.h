// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_ACL_APPLETALK_H
#define VOLTOS_ACL_APPLETALK_H

#include <voltos/access-list.h>

struct appletalk_acl {
	struct access_list 		*acl_ptr;
};

struct appletalk_ace {
	struct appletalk_acl 		*ace_list;
	__voltos_acl_seqno_t 		ace_seqno;
	char 				ace_remark[ACL_REMARK_SIZE];
};

#endif /* VOLTOS_ACL_APPLETALK_H */
