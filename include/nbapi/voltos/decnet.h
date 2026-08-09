// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/decnet.h
 *
 *	DECnet Socket and Network Protocol
 *	Family Definitions
 */

#ifndef _NBAPI_VOLTOS_DECNET_H
#define _NBAPI_VOLTOS_DECNET_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define SDN_OBJNAME_SIZE		16

struct dn_naddr {

};

struct sockaddr_dn {
	__voltos_sa_family_t		sdn_family;
	__u8				sdn_flags;
	__u8				sdn_objnum;
	__u16				sdn_objnamel;
	__u8				sdn_objname[SDN_OBJNAME_SIZE];
	struct dn_naddr			sdn_addr;
};

#endif /* _NBAPI_VOLTOS_DECNET_H */
