// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/decnet.h
 *
 * 	DECnet (AF_DECnet) Socket Family
 */

#ifndef _NBAPI_VOLTOS_DECNET_H
#define _NBAPI_VOLTOS_DECNET_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define DN_NADDR_LEN			(20)
#define DN_OBJ_LEN			(16)

struct dn_naddr {
	__net16				a_len;
	unsigned char			a_addr[DN_NADDR_LEN];
};

struct sockaddr_dn {
	__voltos_sa_family_t 		sdn_family;
	__u8				sdn_flags;
	__u8 				sdn_objnum;
	__net16 			sdn_objnamel;
	unsigned char 			sdn_objname[DN_OBJ_LEN];
	struct dn_naddr			sdn_naddr;
};

#endif /* _NBAPI_VOLTOS_DECNET_H */
