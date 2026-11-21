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

struct sockaddr_xdp {
	__voltos_sa_family_t 		sxdp_family;
	__u16 				sxdp_flags;
	__u32 				sxdp_ifindex;
	__u32 				sxdp_queue_id;
	__u32 				sxdp_shared_umem_fd;
};

struct xdp_ring_offset {
	__u64 				producer;
	__u64 				consumer;
	__u64 				descriptor;
	__u64 				flags;
};

struct xdp_mmap_offsets {
	struct xdp_ring_offset 		rx;
	struct xdp_ring_offset 		tx;
	struct xdp_ring_offset 		fr;
	struct xdp_ring_offset 		cr;
};

struct xdp_umem_reg {
	__u64 				address;
	__u64 				length;
	__u32 				chunk_size;
	__u32 				headroom;
	__u32 				flags;
	__u32 				tx_metadata_length;
};

struct xdp_statistics {
	__u64 				rx_dropped;
	__u64 				rx_invalid_descriptors;
	__u64 				tx_invalid_descriptors;
	__u64 				rx_ring_full;
	__u64 				rx_fill_ring_empty_descriptors;
	__u64 				tx_ring_empty_descriptors;
};

struct xdp_options {
	__u32 				flags;
};

struct xdp_tx_metadata {
	__u64 				flags;

	union {
		struct {
			__u16 		checksum_start;
			__u16 		checksum_offset;
			__u64 		launch_time;
		} request;

		struct {
			__u64 		tx_timestamp;
		} completion;
	};
};

struct xdp_desc {
	__u64 				address;
	__u32 				length;
	__u32 				options;
};

#endif /* _NBAPI_VOLTOS_IF_XDP_H */
