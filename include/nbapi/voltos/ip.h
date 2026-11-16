// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ip.h
 *
 * 	Internet Protocol, Version 4 (IPv4)
 */

#ifndef _NBAPI_VOLTOS_IP_H
#define _NBAPI_VOLTOS_IP_H

struct ip_hdr {
	__u8				version:4,
					ihl:4;
	__u8				dscp:6,
					ecn:2;
	__net16			total_length;
	__net16			identification;
	__net16				flags:3,
					fragment_offset:13;
	__u8			ttl;
	__u8			protocol;
	__csum16		checksum;
	__a_union(/* no tag */, addrs, /* no attrs */,
		__net32			src_addr;
		__net32			dst_addr;
	);
};

#endif /* _NBAPI_VOLTOS_IP_H */
