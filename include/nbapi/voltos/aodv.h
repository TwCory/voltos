// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/aodv.h
 *
 * 	Ad Hoc On-Demand Distance Vector (AODV) Routing Protocol
 */

#ifndef _NBAPI_VOLTOS_AODV_H
#define _NBAPI_VOLTOS_AODV_H

#define AODV_PORT			654

enum {
	AODV_MSG_TYPE_T_UNSPEC		= 0,
#define AODV_MSG_TYPE_UNSPEC		AODV_MSG_TYPE_T_UNSPEC
	AODV_MSG_TYPE_T_RREQ		= 1,
#define AODV_MSG_TYPE_RREQ		AODV_MSG_TYPE_T_RREQ
	AODV_MSG_TYPE_T_RREP		= 2,
#define AODV_MSG_TYPE_RREP		AODV_MSG_TYPE_T_RREP
	AODV_MSG_TYPE_T_RERR		= 3,
#define AODV_MSG_TYPE_RERR		AODV_MSG_TYPE_T_RERR
	AODV_MSG_TYPE_T_RREP_ACK	= 4,
#define AODV_MSG_TYPE_RREP_ACK		AODV_MSG_TYPE_T_RREP_ACK
	__AODV_MSG_TYPE_T_MAX__
};

#define AODV_MSG_TYPE_MAX		(__AODV_MSG_TYPE_T_MAX__ - 1)

enum {
	AODV_EXT_TYPE_T_UNSPEC		= 0,
#define AODV_EXT_TYPE_UNSPEC		AODV_EXT_TYPE_T_UNSPEC
	AODV_EXT_TYPE_T_HELLO_INTERVAL	= 1,
#define AODV_EXT_TYPE_HELLO_INTERVAL	AODV_EXT_TYPE_T_HELLO_INTERVAL
	__AODV_EXT_TYPE_T_MAX__
};

#define AODV_EXT_TYPE_MAX		(__AODV_EXT_TYPE_T_MAX__ - 1)

struct aodv_rreq_msg {
	__u8 				type;
	__net16					j_bit:1,
						r_bit:1,
						g_bit:1,
						d_bit:1,
						u_bit:1,
						reserved:11;
	__u8				hop_count;
	__net32				rreq_id;
	struct in_addr			dst_ipaddr;
	__net32				dst_seqno;
	struct in_addr			src_ipaddr;
	__net32				src_seqno;
};

struct aodv_rrep_msg {
	__u8				type;
	__net16					r_bit:1,
						a_bit:1,
						reserved:8,
						prefix_size:6;
	__u8				hop_count;
	struct in_addr			dst_ipaddr;
	__net32				dst_seqno;
	struct in_addr			src_ipaddr;
	__net32				lifetime;
};

struct aodv_rerr_msg {
	__u8				type;
	__net16					n_bit:1,
						reserved:15;
	__u8				dst_count;
	struct {
		struct in_addr		dst_ipaddr;
		__net32			dst_seqno;
	} unreachable;
};

struct aodv_rrep_ack_msg {
	__u8 				type;
	__u8 				reserved;
};

#endif /* _NBAPI_VOLTOS_AODV_H */
