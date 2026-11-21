// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/xns.h
 *
 * 	Xerox Network Systems (XNS) Socket Family
 */

#ifndef _NBAPI_VOLTOS_XNS_H
#define _NBAPI_VOLTOS_XNS_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define XNS_COMPAT_ETHERTYPE			0x0807

enum {
	XNS_SOCKET_ID_T_UNSPEC			= 0,
	XNS_SOCKET_ID_T_ROUTING_INFORMATION	= 1,
	XNS_SOCKET_ID_T_ECHO			= 2,
	XNS_SOCKET_ID_T_ROUTER_ERROR		= 3,
	XNS_SOCKET_ID_T_COURIER			= 4,
	XNS_SOCKET_ID_T_TIME_PROTOCOL		= 5,
	__XNS_SOCKET_ID_T_MAX__
};

enum {
	XNS_PACKET_TYPE_T_UNSPEC		= 0,
	XNS_PACKET_TYPE_T_ROUTING_INFORMATION	= 1,
	XNS_PACKET_TYPE_T_ECHO			= 2,
	XNS_PACKET_TYPE_T_ERROR			= 3,
	XNS_PACKET_TYPE_T_PACKET_EXCHANGE	= 4,
	XNS_PACKET_TYPE_T_SEQUENCED_PACKET	= 5,
	XNS_PACKET_TYPE_T_PUP			= 12,
	XNS_PACKET_TYPE_T_IP			= 13,
	__XNS_PACKET_TYPE_T_MAX__
};

struct xns_addr {

};

struct sockaddr_xns {
	__voltos_sa_family_t 		sxns_family;
	struct xns_addr 		sxns_addr;
};

#endif /* _NBAPI_VOLTOS_XNS_H */
