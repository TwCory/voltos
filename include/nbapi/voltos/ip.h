// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ip.h
 *
 *	Internet Protocol (IP)
 */

#ifndef _NBAPI_VOLTOS_IP_H
#define _NBAPI_VOLTOS_IP_H

#include <voltos/stddef.h>
#include <voltos/types.h>

#define IP_ETHERTYPE					0x0800
#define IP_VERSION					4

#define IP_DEFAULT_NETWORK_MAX				32

enum ip_address_method {
	IP_ADDRESS_METHOD_T_UNSPEC			= 0,
	IP_ADDRESS_METHOD_T_FIXED			= 1,
	IP_ADDRESS_METHOD_T_DHCP			= 2,
	IP_ADDRESS_METHOD_T_NEGOTIATED			= 3,
	__IP_ADDRESS_METHOD_T_MAX__
};

enum ip_address_pool {
	IP_ADDRESS_POOL_T_UNSPEC			= 0,
	IP_ADDRESS_POOL_T_DHCP				= 1,
	IP_ADDRESS_POOL_T_DHCP_PROXY_CLIENT		= 2,
	IP_ADDRESS_POOL_T_LOCAL				= 3,
	__IP_ADDRESS_POOL_T_MAX__
};

enum ip_split_horizon_type {
	IP_SPLIT_HORIZON_TYPE_T_UNSPEC			= 0,
	IP_SPLIT_HORIZON_TYPE_T_DISABLE			= 1,
	IP_SPLIT_HORIZON_TYPE_T_ENABLE			= 2,
	IP_SPLIT_HORIZON_TYPE_T_ENABLE_POISON_REVERSE	= 3,
	__IP_SPLIT_HORIZON_TYPE_T_MAX__
};

struct ip_hdr {
	__u8						version:4,
							ihl:4;
	__u8 						tos;
	__net16 					total_length;
	__net16 					identification;
	__net16						flags:3,
							fragment_offset:13;
	__u8 						ttl;
	__u8 						protocol;
	__csum16 					checksum;

	__a_union(/* no tag */, addrs, /* no attrs */,
		__net32 				src_addr;
		__net32 				dst_addr;
	);
};

#endif /* _NBAPI_VOLTOS_IP_H */
