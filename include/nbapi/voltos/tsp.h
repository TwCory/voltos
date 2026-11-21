// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/tsp.h
 *
 * 	Tunnel Setup Protocol (TSP)
 */

#ifndef _NBAPI_VOLTOS_TSP_H
#define _NBAPI_VOLTOS_TSP_H

enum {
	TSP_TUNNEL_TYPE_T_UNSPEC	= 0,
	TSP_TUNNEL_TYPE_T_V6V4		= 1,
	TSP_TUNNEL_TYPE_T_V6UDPV4	= 2,
	TSP_TUNNEL_TYPE_T_V6ANYV4	= 3,
	TSP_TUNNEL_TYPE_T_V4V6		= 4,
	__TSP_TUNNEL_TYPE_T_MAX__
};

struct tsp_hdr {
	__net32				seqno;
	__net32				timestamp;
};

#endif /* _NBAPI_VOLTOS_TSP_H */
