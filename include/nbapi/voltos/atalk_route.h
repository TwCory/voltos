// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/atalk_route.h
 *
 */

#ifndef _NBAPI_VOLTOS_ATALK_ROUTE_H
#define _NBAPI_VOLTOS_ATALK_ROUTE_H

enum {
	ATALK_PROTOCOL_T_UNSPEC		= 0,
/* Unknown or invalid protocol */
#define ATALK_PROTOCOL_UNSPEC		ATALK_PROTOCOL_T_UNSPEC
	ATALK_PROTOCOL_T_AURP		= 1,
/* AppleTalk Update-based Routing Protocol */
#define ATALK_PROTOCOL_AURP		ATALK_PROTOCOL_T_AURP
	ATALK_PROTOCOL_T_CONNECTED	= 2,
/* Directly connected route */
#define ATALK_PROTOCOL_CONNECTED	ATALK_PROTOCOL_T_CONNECTED
	ATALK_PROTOCOL_T_EIGRP		= 3,
/* Enhanced Interior Gateway Routing Protocol */
#define ATALK_PROTOCOL_EIGRP		ATALK_PROTOCOL_T_EIGRP
	ATALK_PROTOCOL_T_LOCAL		= 4,
/* Local network route */
#define ATALK_PROTOCOL_LOCAL		ATALK_PROTOCOL_T_LOCAL
	ATALK_PROTOCOL_T_RTMP		= 5,
/* Routing Table Maintenance Protocol */
#define ATALK_PROTOCOL_RTMP		ATALK_PROTOCOL_T_RTMP
	ATALK_PROTOCOL_T_STATIC		= 6,
/* Static route */
#define ATALK_PROTOCOL_STATIC		ATALK_PROTOCOL_T_STATIC
	__ATALK_PROTOCOL_T_MAX__
};

#define ATALK_PROTOCOL_MAX		(__ATALK_PROTOCOL_T_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_ATALK_ROUTE_H */
