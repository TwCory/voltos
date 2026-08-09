// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/icmpv6.h
 *
 *	Internet Control Message Protocol for IPv6 (ICMPv6)
 */

#ifndef _NBAPI_VOLTOS_ICMPV6_H
#define _NBAPI_VOLTOS_ICMPV6_H

#include <voltos/types.h>

#define ICMPV6_PROTOCOL				58

struct icmpv6_hdr {
	__u8					type;
	__u8					code;
	__csum16				checksum;
};

#endif /* _NBAPI_VOLTOS_ICMPV6_H */
