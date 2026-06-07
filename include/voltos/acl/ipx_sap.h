// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_ACL_IPX_SAP_H
#define VOLTOS_ACL_IPX_SAP_H

#include <voltos/access-list.h>

struct ipx_sap_acl {
	struct access_list 		*acl_ptr;
};

struct ipx_sap_ace {
	struct ipx_sap_acl 		*ace_list;
	__voltos_acl_seqno_t 		ace_seqno;
	char 				ace_remark[ACL_REMARK_SIZE];
};

#endif /* VOLTOS_ACL_IPX_SAP_H */
