// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/tsp.h
 *
 * 	Tunnel Setup Protocol (TSP)
 */

#ifndef _NBAPI_VOLTOS_TSP_H
#define _NBAPI_VOLTOS_TSP_H

#include <voltos/types.h>

#define TSP_PORT			3653
#define TSP_SIGNAL_ID			0xF

enum {
	TSP_TUNNEL_TYPE_T_UNSPEC	= 0,
#define TSP_TUNNEL_TYPE_UNSPEC		TSP_TUNNEL_TYPE_T_UNSPEC
	TSP_TUNNEL_TYPE_T_V6V4		= 1,
#define TSP_TUNNEL_TYPE_V6V4		TSP_TUNNEL_TYPE_T_V6V4
	TSP_TUNNEL_TYPE_T_V6UDPV4	= 2,
#define TSP_TUNNEL_TYPE_V6UDPV4		TSP_TUNNEL_TYPE_T_V6UDPV4
	TSP_TUNNEL_TYPE_T_V6ANYV4	= 3,
#define TSP_TUNNEL_TYPE_V6ANYV4		TSP_TUNNEL_TYPE_T_V6ANYV4
	TSP_TUNNEL_TYPE_T_V4V6		= 4,
#define TSP_TUNNEL_TYPE_V4V6		TSP_TUNNEL_TYPE_T_V4V6
	__TSP_TUNNEL_TYPE_T_MAX__
};

#define TSP_TUNNEL_TYPE_MAX		(__TSP_TUNNEL_TYPE_T_MAX__ - 1)

struct tsp_hdr {
	__net32					signal_id:4,
						seq_no:28;
	__net32				timestamp;
};

#endif /* _NBAPI_VOLTOS_TSP_H */
