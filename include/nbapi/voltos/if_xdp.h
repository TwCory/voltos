// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_xdp.h
 *
 *	Express Data Path (XDP) Socket Family
 */

#ifndef _NBAPI_VOLTOS_IF_XDP_H
#define _NBAPI_VOLTOS_IF_XDP_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_xdp {
	__voltos_sa_family_t 		sxdp_family;
	uint16_t 			sxdp_flags;
	uint32_t 			sxdp_ifindex;
	uint32_t 			sxdp_queue_id;
	uint32_t 			sxdp_shared_umem_fd;
};

struct xdp_ring_offset {
	uint64_t 			producer;
	uint64_t 			consumer;
	uint64_t 			descriptor;
	uint64_t 			flags;
};

struct xdp_mmap_offsets {
	struct xdp_ring_offset 		rx;
	struct xdp_ring_offset 		tx;
	struct xdp_ring_offset 		fr;
	struct xdp_ring_offset 		cr;
};

struct xdp_umem_reg {
	uint64_t 			address;
	uint64_t 			length;
	uint32_t 			chunk_size;
	uint32_t 			headroom;
	uint32_t 			flags;
	uint32_t 			tx_metadata_length;
};

struct xdp_statistics {
	uint64_t 			rx_dropped;
	uint64_t 			rx_invalid_descriptors;
	uint64_t 			tx_invalid_descriptors;
	uint64_t 			rx_ring_full;
	uint64_t 			rx_fill_ring_empty_descriptors;
	uint64_t 			tx_ring_empty_descriptors;
};

struct xdp_options {
	uint32_t 			flags;
};

struct xdp_tx_metadata {
	uint64_t 			flags;

	union {
		struct {
			uint16_t 	checksum_start;
			uint16_t 	checksum_offset;
			uint64_t 	launch_time;
		} request;

		struct {
			uint64_t 	tx_timestamp;
		} completion;
	};
};

struct xdp_desc {
	uint64_t 			address;
	uint32_t 			length;
	uint32_t 			options;
};

#endif /* _NBAPI_VOLTOS_IF_XDP_H */
