// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/atalk.h
 *
 * 	AppleTalk Protocol Suite - Networking Structures
 * 
 * 	These are directly referenced from netatalk or the
 * 	Linux kernel UAPI headers, for compatibility
 * 	assurance.
 */

#ifndef _NBAPI_VOLTOS_ATALK_H
#define _NBAPI_VOLTOS_ATALK_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define AT_PORT_MIN			1
#define AT_PORT_RESERVED		128
#define AT_PORT_MAX			254		// 254 is only legal on LocalTalk.

#define AT_ADDR_ANYNET			(__u16)0
#define AT_ADDR_ANYNODE			(__u8)0
#define AT_ADDR_ANYPORT			(__u8)0
#define AT_ADDR_BROADCAST		(__u8)255

struct at_addr {
	__net16 			s_net;
	__u8 				s_node;
};

#define SAT_ZERO_SIZE			8

struct sockaddr_at {
	__voltos_sa_family_t 		sat_family;
	__u8 				sat_port;
	struct at_addr 			sat_addr;
	unsigned char 			sat_zero[SAT_ZERO_SIZE];
};

struct at_netrange {
	__u8 				nr_phase;
	__net16 			nr_first_net;
	__net16 			nr_last_net;
};

#endif /* _NBAPI_VOLTOS_ATALK_H */
