// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ipv6_mobile.h
 *
 *
 */

#ifndef _NBAPI_VOLTOS_IPV6_MOBILE_H
#define _NBAPI_VOLTOS_IPV6_MOBILE_H

#include <voltos/types.h>

struct ipv6_mobility_hdr {
	__u8 					protocol;
	__u8 					header_length;
	__u8 					type;
	__u8 					reserved;
	__csum16 				checksum;

	unsigned char 				data[];
} __attribute__ ((packed));

#endif /* _NBAPI_VOLTOS_IPV6_MOBILE_H */
