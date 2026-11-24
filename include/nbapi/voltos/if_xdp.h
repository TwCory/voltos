// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_xdp.h
 *
 *	Express Data Path (AF_XDP) Socket Family
 */

#ifndef _NBAPI_VOLTOS_IF_XDP_H
#define _NBAPI_VOLTOS_IF_XDP_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define XDP_PGOFF_RX_RING			0
#define XDP_PGOFF_TX_RING		 	0x80000000
#define XDP_UMEM_PGOFF_FILL_RING		0x100000000ULL
#define XDP_UMEM_PGOFF_COMPLETION_RING		0x180000000ULL

#define XSK_UNALIGNED_BUF_OFFSET_SHIFT 		(48)
#define XSK_UNALIGNED_BUF_ADDR_MASK 		((1ULL << XSK_UNALIGNED_BUF_OFFSET_SHIFT) - 1)

enum {
	XDP_FLAG_F_SHARED_UMEM			= (1 << 0),
#define XDP_FLAG_SHARED_UMEM			XDP_FLAG_F_SHARED_UMEM
	XDP_FLAG_F_COPY				= (1 << 1),
#define XDP_FLAG_COPY				XDP_FLAG_F_COPY
	XDP_FLAG_F_ZEROCOPY			= (1 << 2),
#define XDP_FLAG_ZEROCOPY			XDP_FLAG_F_ZEROCOPY
	XDP_FLAG_F_USE_NEED_WAKEUP		= (1 << 3),
#define XDP_FLAG_USE_NEED_WAKEUP		XDP_FLAG_F_USE_NEED_WAKEUP
	XDP_FLAG_F_USE_SG			= (1 << 4),
#define XDP_FLAG_USE_SG				XDP_FLAG_F_USE_SG
};

enum {
	XDP_UMEM_CONFIG_FLAG_F_CHUNK		= (1 << 0),
#define XDP_UMEM_CONFIG_FLAG_CHUNK		XDP_UMEM_CONFIG_FLAG_F_CHUNK
	XDP_UMEM_CONFIG_FLAG_F_SW_CSUM		= (1 << 1),
#define XDP_UMEM_CONFIG_FLAG_SW_CSUM		XDP_UMEM_CONFIG_FLAG_F_SW_CSUM
	XDP_UMEM_CONFIG_FLAG_F_METADATA_LEN	= (1 << 2),
#define XDP_UMEM_CONFIG_FLAG_METADATA_LEN	XDP_UMEM_CONFIG_FLAG_F_METADATA_LEN
};

enum {
	XDP_RING_FLAG_F_NEED_WAKEUP		= (1 << 0),
#define XDP_RING_FLAG_NEED_WAKEUP		XDP_RING_FLAG_F_NEED_WAKEUP
};

enum {
	XDP_OPTIONS_FLAG_F_ZEROCOPY		= (1 << 0),
#define XDP_OPTIONS_FLAG_ZEROCOPY		XDP_OPTIONS_FLAG_F_ZEROCOPY
};

enum {
	XDP_TX_METADATA_FLAG_F_TIMESTAMP	= (1 << 0),
#define XDP_TX_METADATA_FLAG_TIMESTAMP		XDP_TX_METADATA_FLAG_F_TIMESTAMP
	XDP_TX_METADATA_FLAG_F_CHECKSUM		= (1 << 1),
#define XDP_TX_METADATA_FLAG_CHECKSUM		XDP_TX_METADATA_FLAG_F_CHECKSUM
	XDP_TX_METADATA_FLAG_F_LAUNCH_TIME	= (1 << 2),
#define XDP_TX_METADATA_FLAG_LAUNCH_TIME	XDP_TX_METADATA_FLAG_F_LAUNCH_TIME
};

enum {
	XDP_PACKET_FLAG_F_CONTD			= (1 << 0),
#define XDP_PACKET_FLAG_CONTD			XDP_PACKET_FLAG_F_CONTD
	XDP_PACKET_FLAG_F_TX_METADATA		= (1 << 1),
#define XDP_PACKET_FLAG_TX_METADATA		XDP_PACKET_FLAG_F_TX_METADATA
};

enum {
	XDP_SOCKOPT_T_UNSPEC			= 0,
#define XDP_SOCKOPT_UNSPEC			XDP_SOCKOPT_T_UNSPEC
	XDP_SOCKOPT_T_MMAP_OFFSETS		= 1,
#define XDP_SOCKOPT_MMAP_OFFSETS		XDP_SOCKOPT_T_MMAP_OFFSETS
	XDP_SOCKOPT_T_RX_RING			= 2,
#define XDP_SOCKOPT_RX_RING			XDP_SOCKOPT_T_RX_RING
	XDP_SOCKOPT_T_TX_RING			= 3,
#define XDP_SOCKOPT_TX_RING			XDP_SOCKOPT_T_TX_RING
	XDP_SOCKOPT_T_UMEM_REG			= 4,
#define XDP_SOCKOPT_UMEM_REG			XDP_SOCKOPT_T_UMEM_REG
	XDP_SOCKOPT_T_UMEM_FILL_RING		= 5,
#define XDP_SOCKOPT_UMEM_FILL_RING		XDP_SOCKOPT_T_UMEM_FILL_RING
	XDP_SOCKOPT_T_UMEM_COMPLETION_RING	= 6,
#define XDP_SOCKOPT_UMEM_COMPLETION_RING	XDP_SOCKOPT_T_UMEM_COMPLETION_RING
	XDP_SOCKOPT_T_STATISTICS		= 7,
#define XDP_SOCKOPT_STATISTICS			XDP_SOCKOPT_T_STATISTICS
	XDP_SOCKOPT_T_OPTIONS			= 8,
#define XDP_SOCKOPT_OPTIONS			XDP_SOCKOPT_T_OPTIONS
	XDP_SOCKOPT_T_MAX_TX_BUDGET		= 9,
#define XDP_SOCKOPT_MAX_TX_BUDGET		XDP_SOCKOPT_T_MAX_TX_BUDGET
	__XDP_SOCKOPT_T_MAX__
};

#define XDP_SOCKOPT_MAX				(__XDP_SOCKOPT_T_MAX__ - 1)

struct sockaddr_xdp {
	__voltos_sa_family_t 			sxdp_family;
	__u16 					sxdp_flags;
	__u32 					sxdp_ifindex;
	__u32 					sxdp_queue_id;
	__u32 					sxdp_shared_umem_fd;
};

struct xdp_ring_offset {
	__u64 					producer;
	__u64 					consumer;
	__u64 					descriptor;
	__u64 					flags;
};

struct xdp_mmap_offsets {
	struct xdp_ring_offset 			rx;
	struct xdp_ring_offset 			tx;
	struct xdp_ring_offset 			fr;
	struct xdp_ring_offset 			cr;
};

struct xdp_umem_reg {
	__u64 					address;
	__u64 					length;
	__u32 					chunk_size;
	__u32 					headroom;
	__u32 					flags;
	__u32 					tx_metadata_length;
};

struct xdp_statistics {
	__u64 					rx_dropped;
	__u64 					rx_invalid_descriptors;
	__u64 					tx_invalid_descriptors;
	__u64 					rx_ring_full;
	__u64 					rx_fill_ring_empty_descriptors;
	__u64 					tx_ring_empty_descriptors;
};

struct xdp_options {
	__u32 					flags;
};

struct xdp_tx_metadata {
	__u64 					flags;

	union {
		struct {
			__u16 			checksum_start;
			__u16 			checksum_offset;
			__u64 			launch_time;
		} request;

		struct {
			__u64 			tx_timestamp;
		} completion;
	};
};

struct xdp_desc {
	__u64 					address;
	__u32 					length;
	__u32 					options;
};

#endif /* _NBAPI_VOLTOS_IF_XDP_H */
