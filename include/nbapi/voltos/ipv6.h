// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ipv6.h
 *
 * 	Internet Protocol, Version 6 (IPv6)
 */

#ifndef _NBAPI_VOLTOS_IPV6_H
#define _NBAPI_VOLTOS_IPV6_H

struct ipv6_hdr {
	__net32					version:4,
						traffic_class:8,
						flow_label:20;
	__net16				payload_length;
	__u8				next_header;
	__u8				hop_limit;
	__a_union(/* no tag */, addrs, /* no attrs */,
		struct in6_addr			src_addr;
		struct in6_addr			dst_addr;
	);
};

#endif /* _NBAPI_VOLTOS_IPV6_H */
