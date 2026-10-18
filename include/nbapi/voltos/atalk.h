// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/atalk.h
 *
 * 	AppleTalk Socket Family
 */

#ifndef _NBAPI_VOLTOS_ATALK_H
#define _NBAPI_VOLTOS_ATALK_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct at_addr {
	__net16 			s_net;
	uint8_t 			s_node;
};

struct sockaddr_at {
	__voltos_sa_family_t 		sat_family;
	uint8_t 			sat_port;
	struct at_addr 			sat_addr;
	unsigned char 			sat_zero;
};

struct at_netrange {
	uint8_t 			nr_phase;
	__net16 			nr_firstnet;
	__net16 			nr_lastnet;
};

#endif /* _NBAPI_VOLTOS_ATALK_H */
