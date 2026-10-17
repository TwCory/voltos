// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bstun.h
 *
 *	Block Serial Tunnel (BSTUN)
 */

#ifndef _NBAPI_VOLTOS_BSTUN_H
#define _NBAPI_VOLTOS_BSTUN_H

#include <voltos/types.h>

#define BSTUN_GROUP_ID_MIN			1
#define BSTUN_GROUP_ID_MAX			255

typedef __u8 					bstun_gid_t;

enum bstun_protocol_type {
	BSTUN_PROTOCOL_TYPE_T_UNSPEC		= 0,
	BSTUN_PROTOCOL_TYPE_T_APOS		= 1,
	BSTUN_PROTOCOL_TYPE_T_BSC_LOCAL_ACK	= 2,
	BSTUN_PROTOCOL_TYPE_T_MAX
};

enum bstun_route_type {
	BSTUN_ROUTE_TYPE_T_UNSPEC		= 0,
	BSTUN_ROUTE_TYPE_T_CONTROL_UNIT		= 1,
	BSTUN_ROUTE_TYPE_T_ALL			= 2,
	BSTUN_ROUTE_TYPE_T_MAX
};

enum bstun_transport_type {
	BSTUN_TRANSPORT_TYPE_T_UNSPEC		= 0,
	BSTUN_TRANSPORT_TYPE_T_INTERFACE	= 1,
	BSTUN_TRANSPORT_TYPE_T_TCP		= 2,
	BSTUN_TRANSPORT_TYPE_T_BIP		= 3,
	BSTUN_TRANSPORT_TYPE_T_APIP		= 4,
	BSTUN_TRANSPORT_TYPE_T_MAX
};

enum bstun_state {
	BSTUN_STATE_T_UNSPEC			= 0,
	BSTUN_STATE_T_OPEN			= 1,
	BSTUN_STATE_T_OPEN_PENDING		= 2,
	BSTUN_STATE_T_OPEN_WAIT			= 3,
	BSTUN_STATE_T_DIRECT			= 4,
	BSTUN_STATE_T_DEAD			= 5,
	BSTUN_STATE_T_CLOSED			= 6,
	BSTUN_STATE_T_MAX
};

struct bstun_peer_stats {
	__u64 					rx_packets;
	__u64 					tx_packets;
	__u64 					drops;
};

#endif /* _NBAPI_VOLTOS_BSTUN_H */
