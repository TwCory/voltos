// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/igmp.h
 *
 * 	Internet Group Management Protocol (IGMP)
 */

#ifndef _NBAPI_VOLTOS_IGMP_H
#define _NBAPI_VOLTOS_IGMP_H

#include <voltos/types.h>

struct igmp_hdr {
	__u8 				type;
	__u8 				code;
	__csum16 			checksum;
	struct in_addr 			group_addr;
};

struct igmpv3_group_record {
	__u8 				type;
	__u8 				auxwords;
	__net16 			src_count;
	struct in_addr 			mc_addr;
	struct in_addr 			src_addr[];

};

struct igmpv3_report {
	__u8 				type;
	unsigned char 			reserved0;
	__csum16 			checksum;
	unsigned short 			reserved1;
	__net16 			record_count;
	struct igmpv3_group_record 	record[];
};

struct igmpv3_query {
	__u8 				type;
	__u8 				code;
	__csum16 			checksum;
	struct in_addr 			group_addr;
	__u8					reserved:4,
						s_bit:1,
						qrv:3;
	__u8				qqic;
	__net16				src_count;
	struct in_addr			src_addrs[];
};

#endif /* _NBAPI_VOLTOS_IGMP_H */
