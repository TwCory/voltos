// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/clns_route.h
 *
 * 	CLNS Router Definitions
 */

#ifndef _NBAPI_VOLTOS_CLNS_ROUTE_H
#define _NBAPI_VOLTOS_CLNS_ROUTE_H

enum clns_route_protocol {
	CLNS_ROUTE_PROTOCOL_T_UNSPEC			= 0,
	CLNS_ROUTE_PROTOCOL_T_CONNECTED			= 1,
	CLNS_ROUTE_PROTOCOL_T_ESIS			= 2,
	CLNS_ROUTE_PROTOCOL_T_ISIS			= 3,
	CLNS_ROUTE_PROTOCOL_T_ISO_IGRP			= 4,
	CLNS_ROUTE_PROTOCOL_T_LOCAL			= 5,
	CLNS_ROUTE_PROTOCOL_T_STATIC			= 6,
	__CLNS_ROUTE_PROTOCOL_T_MAX__
};

#endif /* _NBAPI_VOLTOS_CLNS_ROUTE_H */
