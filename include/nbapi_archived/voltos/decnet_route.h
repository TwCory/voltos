// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/decnet_route.h
 *
 * 	DECnet Router Definitions
 */

#ifndef _NBAPI_VOLTOS_DECNET_ROUTE_H
#define _NBAPI_VOLTOS_DECNET_ROUTE_H

enum decnet_route_protocol {
	DECNET_ROUTE_PROTOCOL_T_UNSPEC			= 0,
	DECNET_ROUTE_PROTOCOL_T_CONNECTED		= 1,
	DECNET_ROUTE_PROTOCOL_T_LOCAL			= 2,
	DECNET_ROUTE_PROTOCOL_T_STATIC			= 3,
	__DECNET_ROUTE_PROTOCOL_T_MAX__
};

#endif /* _NBAPI_VOLTOS_DECNET_ROUTE_H */
