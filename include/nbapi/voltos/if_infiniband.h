// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/if_infiniband.h
 *
 */

#ifndef _NBAPI_VOLTOS_IF_INFINIBAND_H
#define _NBAPI_VOLTOS_IF_INFINIBAND_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct ib_addr {

};

struct sockaddr_ib {
	__voltos_sa_family_t		sib_family;
	__u16				sib_pkey;
	__u32				sib_flowinfo;
	struct ib_addr			sib_addr;
	__u64				sib_sid;
	__u64				sib_sid_mask;
	__u64				sib_scope_id;
};

#endif /* _NBAPI_VOLTOS_IF_INFINIBAND_H */
