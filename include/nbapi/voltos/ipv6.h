// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ipv6.h
 *
 *	Internet Protocol Version 6 (IPv6)
 */

#ifndef _NBAPI_VOLTOS_IPV6_H
#define _NBAPI_VOLTOS_IPV6_H

#include <voltos/in6.h>
#include <voltos/stddef.h>
#include <voltos/types.h>

#define IPV6_ETHERTYPE					0x86DD
#define IPV6_VERSION					6

#define IPV6_HOP_LIMIT_DEFAULT				64

#define IPV6_MTU_SIZE_MIN				1280
#define IPV6_MTU_SIZE_MAX				9976
#define IPV6_MTU_SIZE_DEFAULT				1500

#define IPV6_TCP_MSS_SIZE_MIN				40
#define IPV6_TCP_MSS_SIZE_MAX				1454

#define IPV6_GENERAL_PREFIX_NAME_SIZE			32

enum ipv6_address_method {
	IPV6_ADDRESS_METHOD_T_UNSPEC			= 0,
	IPV6_ADDRESS_METHOD_T_DHCP			= 1,
	IPV6_ADDRESS_METHOD_T_LINK_LOCAL		= 2,
	IPV6_ADDRESS_METHOD_T_PREFIX			= 3,
	IPV6_ADDRESS_METHOD_T_PREFIX_LIST		= 4,
	IPV6_ADDRESS_METHOD_T_SLAAC			= 5,
	__IPV6_ADDRESS_METHOD_T_MAX__
};

enum ipv6_split_horizon_type {
	IPV6_SPLIT_HORIZON_TYPE_T_UNSPEC		= 0,
	IPV6_SPLIT_HORIZON_TYPE_T_DISABLE		= 1,
	IPV6_SPLIT_HORIZON_TYPE_T_ENABLE		= 2,
	IPV6_SPLIT_HORIZON_TYPE_T_ENABLE_POISON_REVERSE	= 3,
	__IPV6_SPLIT_HORIZON_TYPE_T_MAX__
};

struct ipv6_hdr {
	__net32							version:4,
								traffic_class:8,
								flow_label:20;
	__net16						payload_length;
	__u8 						next_header;
	__u8 						hop_limit;

	__a_union(/* no tag */, addrs, /* no attrs */,
		struct in6_addr 				src_addr;
		struct in6_addr 				dst_addr;
	);
};

#endif /* _NBAPI_VOLTOS_IPV6_H */
