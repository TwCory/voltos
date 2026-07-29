// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ipx.h
 *
 *	Internetwork Packet eXchange (IPX)
 */

#ifndef _NBAPI_VOLTOS_IPX_H
#define _NBAPI_VOLTOS_IPX_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define IPX_NODE_SIZE			6
#define IPX_MTU				576

struct sockaddr_ipx {
	__voltos_sa_family_t 		sipx_family;
	__net16 			sipx_port;
	__net32 			sipx_network;
	unsigned char 			sipx_node[IPX_NODE_SIZE];
	__u8 				sipx_type;
	unsigned char 			sipx_zero;
};
#define sipx_special			sipx_port
#define sipx_action			sipx_zero

#endif /* _NBAPI_VOLTOS_IPX_H */
