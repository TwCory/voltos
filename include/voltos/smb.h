// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/smb.h
 *
 * 	Server Message Block (SMB)
 */

#ifndef _VOLTOS_SMB_H
#define _VOLTOS_SMB_H

#include <voltos/types.h>
#include <nbapi/voltos/smb.h>

struct smb_buffer_descriptor_v1 {
	__le64 					offset;
	__le32 					token;
	__le32 					length;
} __packed;

struct smb_socket_parameters {
	__u64 					flags;
	__u32 					resolve_addr_timeout_msec;
	__u32 					resolve_route_timeout_msec;
	__u32 					rdma_connect_timeout_msec;
	__u32 					negotiate_timeout_msec;
	__u16 					initiator_depth;
	__u16 					responder_resources;
	__u16 					recv_credit_max;
	__u16 					send_credit_target;
	__u32 					max_send_size;
	__u32 					max_fragmented_send_size;
	__u32 					max_recv_size;
	__u32 					max_fragmented_recv_size;
	__u32 					max_read_write_size;
	__u32 					max_frmr_depth;
	__u32 					keepalive_interval_msec;
	__u32 					keepalive_timeout_msec;
} __packed;

struct smbdirect_send_batch_storage {
	union {
		struct list_head 		__msg_list;
		__aligned_u64 			__space[5];
	};
};

#endif /* _VOLTOS_SMB_H */
