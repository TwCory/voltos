// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/clns_route.h
 *
 */

#ifndef _NBAPI_VOLTOS_CLNS_ROUTE_H
#define _NBAPI_VOLTOS_CLNS_ROUTE_H

enum {
	CLNS_PROTOCOL_T_UNSPEC		= 0,
/* Unknown or invalid protocol */
#define CLNS_PROTOCOL_UNSPEC		CLNS_PROTOCOL_T_UNSPEC
	CLNS_PROTOCOL_T_CONNECTED	= 1,
/* Directly connected route */
#define CLNS_PROTOCOL_CONNECTED		CLNS_PROTOCOL_T_CONNECTED
	CLNS_PROTOCOL_T_ESIS		= 2,
/* End System to Intermediate System */
#define CLNS_PROTOCOL_ESIS		CLNS_PROTOCOL_T_ESIS
	CLNS_PROTOCOL_T_ISIS		= 3,
/* Intermediate System to Intermediate System */
#define CLNS_PROTOCOL_ISIS		CLNS_PROTOCOL_T_ISIS
	CLNS_PROTOCOL_T_ISO_IGRP	= 4,
/* Interior Gateway Routing Protocol */
#define CLNS_PROTOCOL_ISO_IGRP		CLNS_PROTOCOL_T_ISO_IGRP
	CLNS_PROTOCOL_T_LOCAL		= 5,
/* Local network route */
#define CLNS_PROTOCOL_LOCAL		CLNS_PROTOCOL_T_LOCAL
	CLNS_PROTOCOL_T_STATIC		= 6,
/* Static route */
#define CLNS_PROTOCOL_STATIC		CLNS_PROTOCOL_T_STATIC
	__CLNS_PROTOCOL_T_MAX__
};

#define CLNS_PROTOCOL_MAX		(__CLNS_PROTOCOL_T_MAX__ - 1)

enum {
	CLNS_ROUTE_FLAG_F_DECNET_IV	= (1 << 0),
/* DECnet IV compatible route */
#define CLNS_ROUTE_FLAG_DECNET_IV	CLNS_ROUTE_FLAG_F_DECNET_IV
	CLNS_ROUTE_FLAG_F_DEFAULT	= (1 << 1),
/* Default route entry */
#define CLNS_ROUTE_FLAG_DEFAULT		CLNS_ROUTE_FLAG_F_DEFAULT
	CLNS_ROUTE_FLAG_F_DISCARD	= (1 << 2),
#define CLNS_ROUTE_FLAG_DISCARD		CLNS_ROUTE_FLAG_F_DISCARD
};

#endif /* _NBAPI_VOLTOS_CLNS_ROUTE_H */
