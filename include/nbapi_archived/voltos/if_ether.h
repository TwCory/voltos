// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/if_ether.h
 *
 * 	Ethernet Interfaces
 */

#ifndef _NBAPI_VOLTOS_IF_ETHER_H
#define _NBAPI_VOLTOS_IF_ETHER_H

#include <voltos/types.h>

#define ETH_ADDR_SIZE			6
#define ETH_TYPE_SIZE			2
#define ETH_HDR_SIZE			14
#define ETH_DATA_SIZE			1500
#define ETH_FRAME_SIZE			1514
#define ETH_FCS_SIZE			4

#define ETH_MTU_MIN			68
#define ETH_MTU_MAX			65534

struct eth_hdr {
	__u8 				dst_addr[ETH_ADDR_SIZE];
	__u8 				src_addr[ETH_ADDR_SIZE];
	__net16 			ethertype;
} __attribute__ ((packed));

#endif /* _NBAPI_VOLTOS_IF_ETHER_H */
