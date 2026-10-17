// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/ipx_route.h
 *
 */

#ifndef _NBAPI_VOLTOS_IPX_ROUTE_H
#define _NBAPI_VOLTOS_IPX_ROUTE_H

enum ipx_route_protocol {
	IPX_ROUTE_PROTOCOL_T_UNSPEC			= 0,
	IPX_ROUTE_PROTOCOL_T_CONNECTED 			= 1,
	IPX_ROUTE_PROTOCOL_T_EIGRP 			= 2,
	IPX_ROUTE_PROTOCOL_T_LOCAL 			= 3,
	IPX_ROUTE_PROTOCOL_T_RIP 			= 4,
	IPX_ROUTE_PROTOCOL_T_STATIC 			= 5,
	__IPX_ROUTE_PROTOCOL_T_MAX__
};

#endif /* _NBAPI_VOLTOS_IPX_ROUTE_H */
