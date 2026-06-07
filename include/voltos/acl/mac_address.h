// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_ACL_MAC_ADDRESS_H
#define VOLTOS_ACL_MAC_ADDRESS_H

#include <voltos/access-list.h>

struct mac_address_acl {
	struct access_list 		*acl_ptr;
};

struct mac_address_ace {
	struct mac_address_acl 		*ace_list;
	__voltos_acl_seqno_t 		ace_seqno;
	char 				ace_remark[ACL_REMARK_SIZE];
};

#endif /* VOLTOS_ACL_MAC_ADDRESS_H */
