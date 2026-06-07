// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_ACL_PROTOCOL_TYPE_CODE_H
#define VOLTOS_ACL_PROTOCOL_TYPE_CODE_H

#include <voltos/access-list.h>

struct protocol_type_code_acl {
	struct access_list 		*acl_ptr;
};

struct protocol_type_code_ace {
	struct protocol_type_code_acl 	*ace_list;
	__voltos_acl_seqno_t 		ace_seqno;
	char 				ace_remark[ACL_REMARK_SIZE];
};

#endif /* VOLTOS_ACL_PROTOCOL_TYPE_CODE_H */
