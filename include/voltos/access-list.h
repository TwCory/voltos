// SPDX-License-Identifier: BSD-3-Clause

#ifndef VOLTOS_ACCESS_LIST_H
#define VOLTOS_ACCESS_LIST_H

#include <voltos/acl/appletalk.h>
#include <voltos/acl/ipv4_extended.h>
#include <voltos/acl/ipv4_role_based.h>
#include <voltos/acl/ipv4_standard.h>
#include <voltos/acl/ipv6_role_based.h>
#include <voltos/acl/ipv6.h>
#include <voltos/acl/ipx_extended.h>
#include <voltos/acl/ipx_sap.h>
#include <voltos/acl/ipx_standard.h>
#include <voltos/acl/ipx_summary_address.h>
#include <voltos/acl/mac_address.h>
#include <voltos/acl/protocol_type_code.h>
#include <voltos/acl/xns_extended.h>
#include <voltos/acl/xns_standard.h>
#include <voltos/refcount.h>
#include <voltos/types.h>
#include <nbapi/voltos/access-list.h>

struct access_list {
	__voltos_acl_idx_t 	acl_index;
	char 			acl_name[ACL_NAME_SIZE];

	bool 			acl_numbered_type;
	__voltos_acl_id_t 	acl_number;

	refcount_t 		acl_refcount;
	size_t 			acl_size;
	u32 			acl_entry_count;
};

#endif /* VOLTOS_ACCESS_LIST_H */
