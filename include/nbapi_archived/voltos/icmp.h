// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/icmp.h
 *
 *	Internet Control Message Protocol (ICMP)
 */


#ifndef _NBAPI_VOLTOS_ICMP_H
#define _NBAPI_VOLTOS_ICMP_H

#include <voltos/types.h>

struct icmp_hdr {
	__u8					type;
	__u8					code;
	__csum16				checksum;
};

#endif /* _NBAPI_VOLTOS_ICMP_H */
