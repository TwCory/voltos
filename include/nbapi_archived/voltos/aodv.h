// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/aodv.h
 *
 *	Ad Hoc On-Demand Distance Vector (AODV)
 */

#ifndef _NBAPI_VOLTOS_AODV_H
#define _NBAPI_VOLTOS_AODV_H

#include <voltos/types.h>

#define AODV_PORT				654

enum {
	AODV_MSG_TYPE_T_UNSPEC			= 0,
#define AODV_MSG_TYPE_UNSPEC			AODV_MSG_TYPE_T_UNSPEC
	AODV_MSG_TYPE_T_RREQ			= 1,
#define AODV_MSG_TYPE_RREQ			AODV_MSG_TYPE_T_RREQ
	AODV_MSG_TYPE_T_RERR			= 2,
#define AODV_MSG_TYPE_RERR			AODV_MSG_TYPE_T_RERR
	AODV_MSG_TYPE_T_RREP_ACK		= 3,
#define AODV_MSG_TYPE_RREP_ACK			AODV_MSG_TYPE_T_RREP_ACK
	__AODV_MSG_TYPE_T_MAX__
};

#define AODV_MSG_TYPE_MAX			(__AODV_MSG_TYPE_T_MAX__ - 1)

enum {
	AODV_EXT_TYPE_T_UNSPEC			= 0,
#define AODV_EXT_TYPE_UNSPEC			AODV_EXT_TYPE_T_UNSPEC
	AODV_EXT_TYPE_T_HELLO_INTERVAL		= 1,
#define AODV_EXT_TYPE_HELLO_INTERVAL		AODV_EXT_TYPE_T_HELLO_INTERVAL
	__AODV_EXT_TYPE_T_MAX__
};

#define AODV_EXT_TYPE_MAX			(__AODV_EXT_TYPE_T_MAX__ - 1)

struct aodv_rreq_msg {
	__u8					type;
	__net16						j_flag:1,
							r_flag:1,
							g_flag:1,
							d_flag:1,
							u_flag:1,
							reserved:11;
	__u8					hop_count;
	__net32					rreq_id;
	__net32					dst_ip_addr;
	__net32					dst_seq_no;
	__net32					src_ip_addr;
	__net32					src_seq_no;
};

struct aodv_rrep_msg {
	__u8					type;
	__net16						r_flag:1,
							a_flag:1,
							reserved:9,
							prefix_size:5;
	__u8					hop_count;
	__net32					dst_ip_addr;
	__net32					dst_seq_no;
	__net32					src_ip_addr;
	__net32					lifetime;
};

struct aodv_rerr_msg {
	__u8					type;
	__net16						n_flag:1,
							reserved:15;
	__u8					dst_count;
	__net32					unreach_dst_ip_addr;
	__net32					unreach_dst_seq_no;
	__net32					addt_unreach_dst_ip_addr;
	__net32					addt_unreach_dst_seq_no;
};

struct aodv_rrep_ack_msg {
	__u8					type;
	__u8					reserved;
};

#endif /* _NBAPI_VOLTOS_AODV_H */
