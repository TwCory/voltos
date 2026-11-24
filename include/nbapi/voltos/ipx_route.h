// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ipx_route.h
 *
 */

#ifndef _NBAPI_VOLTOS_IPX_ROUTE_H
#define _NBAPI_VOLTOS_IPX_ROUTE_H

enum {
	IPX_PROTOCOL_T_UNSPEC		= 0,
/* Unknown or invalid protocol */
#define IPX_PROTOCOL_UNSPEC		IPX_PROTOCOL_T_UNSPEC
	IPX_PROTOCOL_T_CONNECTED	= 1,
/* Directly connected route */
#define IPX_PROTOCOL_CONNECTED		IPX_PROTOCOL_T_CONNECTED
	IPX_PROTOCOL_T_EIGRP		= 2,
/* Enhanced Interior Gateway Routing Protocol */
#define IPX_PROTOCOL_EIGRP		IPX_PROTOCOL_T_EIGRP
	IPX_PROTOCOL_T_LOCAL		= 3,
/* Local network route */
#define IPX_PROTOCOL_LOCAL		IPX_PROTOCOL_T_LOCAL
	IPX_PROTOCOL_T_NHRP		= 4,
/* Next Hop Resolution Protocol */
#define IPX_PROTOCOL_NHRP		IPX_PROTOCOL_T_NHRP
	IPX_PROTOCOL_T_NLSP		= 5,
#define IPX_PROTOCOL_NLSP		IPX_PROTOCOL_T_NLSP
	IPX_PROTOCOL_T_NMSP		= 6,
#define IPX_PROTOCOL_NMSP		IPX_PROTOCOL_T_NMSP
	IPX_PROTOCOL_T_RIP		= 7,
/* Routing Information Protocol */
#define IPX_PROTOCOL_RIP		IPX_PROTOCOL_T_RIP
	IPX_PROTOCOL_T_STATIC		= 8,
/* Static route */
#define IPX_PROTOCOL_STATIC		IPX_PROTOCOL_T_STATIC
	__IPX_PROTOCOL_T_MAX__
};

#define IPX_PROTOCOL_MAX		(__IPX_PROTOCOL_T_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_IPX_ROUTE_H */
