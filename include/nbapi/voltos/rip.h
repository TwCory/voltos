// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/rip.h
 *
 * 	Routing Information Protocol (RIP)
 */

#ifndef _NBAPI_VOLTOS_RIP_H
#define _NBAPI_VOLTOS_RIP_H

#include <voltos/in.h>
#include <voltos/types.h>

#define RIP_V1					1
#define RIP_V2					2

#define RIP_PORT				520

enum {
	RIP_CMD_T_UNSPEC 			= 0,
#define RIP_CMD_UNSPEC				RIP_CMD_T_UNSPEC
	RIP_CMD_T_REQUEST 			= 1,
#define RIP_CMD_REQUEST				RIP_CMD_T_REQUEST
	RIP_CMD_T_RESPONSE 			= 2,
#define RIP_CMD_RESPONSE			RIP_CMD_T_RESPONSE
	RIP_CMD_T_TRACEON 			= 3,
#define RIP_CMD_TRACEON				RIP_CMD_T_TRACEON
	RIP_CMD_T_TRACEOFF 			= 4,
#define RIP_CMD_TRACEOFF			RIP_CMD_T_TRACEOFF
	RIP_CMD_T_TRIGGERED_REQUEST 		= 6,
#define RIP_CMD_TRIGGERED_REQUEST		RIP_CMD_T_TRIGGERED_REQUEST
	RIP_CMD_T_TRIGGERED_RESPONSE 		= 7,
#define RIP_CMD_TRIGGERED_RESPONSE		RIP_CMD_T_TRIGGERED_RESPONSE
	RIP_CMD_T_TRIGGERED_ACK 		= 8,
#define RIP_CMD_TRIGGERED_ACK			RIP_CMD_T_TRIGGERED_ACK
	RIP_CMD_T_UPDATE_REQUEST 		= 9,
#define RIP_CMD_UPDATE_REQUEST			RIP_CMD_T_UPDATE_REQUEST
	RIP_CMD_T_UPDATE_RESPONSE 		= 10,
#define RIP_CMD_UPDATE_RESPONSE			RIP_CMD_T_UPDATE_RESPONSE
	RIP_CMD_T_UPDATE_ACK 			= 11,
#define RIP_CMD_UPDATE_ACK			RIP_CMD_T_UPDATE_ACK
	__RIP_CMD_T_MAX__
};

#define RIP_CMD_MAX				(__RIP_CMD_T_MAX__ - 1)

enum {
	RIP_UPDATE_HDR_T_DISCARD 		= 0,
#define RIP_UPDATE_HDR_DISCARD			RIP_UPDATE_HDR_T_DISCARD
	RIP_UPDATE_HDR_T_V1 			= 1,
#define RIP_UPDATE_HDR_V1			RIP_UPDATE_HDR_T_V1
	RIP_UPDATE_HDR_T_V2 			= 2,
#define RIP_UPDATE_HDR_V2			RIP_UPDATE_HDR_T_V2
	__RIP_UPDATE_HDR_T_MAX__
};

#define RIP_UPDATE_HDR_MAX			(__RIP_UPDATE_HDR_T_MAX__ - 1)

enum {
	RIP_AFI_T_UNSPEC 			= 0,
#define RIP_AFI_UNSPEC				RIP_AFI_T_UNSPEC
	RIP_AFI_T_IP 				= 2,
#define RIP_AFI_IP				RIP_AFI_T_IP
	RIP_AFI_T_AUTH_PRESENT 			= 0xFFFF,
#define RIP_AFI_AUTH_PRESENT			RIP_AFI_T_AUTH_PRESENT
	__RIP_AFI_T_MAX__
};

#define RIP_AFI_MAX				(__RIP_AFI_T_MAX__ - 1)

enum {
	RIP_AUTH_TYPE_T_NONE 			= 0,
#define RIP_AUTH_TYPE_NONE			RIP_AUTH_TYPE_T_NONE
	RIP_AUTH_TYPE_T_TRAILER 		= 1,
#define RIP_AUTH_TYPE_TRAILER			RIP_AUTH_TYPE_T_TRAILER
	RIP_AUTH_TYPE_T_PLAINTEXT 		= 2,
#define RIP_AUTH_TYPE_PLAINTEXT			RIP_AUTH_TYPE_T_PLAINTEXT
	RIP_AUTH_TYPE_T_CRYPTO_HASH 		= 3,
#define RIP_AUTH_TYPE_CRYPTO_HASH		RIP_AUTH_TYPE_T_CRYPTO_HASH
	__RIP_AUTH_TYPE_T_MAX__
};

#define RIP_AUTH_TYPE_MAX			(__RIP_AUTH_TYPE_T_MAX__ - 1)

struct rip_rte {
	__u16 					family;
	__u16 					route_tag;
	struct in_addr 				prefix;
	struct in_addr 				netmask;
	struct in_addr 				next_hop;
	__u32 					metric;
};

struct rip_msg {
	__u8 					command;
	__u8 					version;
	__u8 					pad0;
	__u8 					pad1;
	struct rip_rte 				rte[1];
};

#endif /* _NBAPI_VOLTOS_RIP_H */
