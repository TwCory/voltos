// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/x25.h
 *
 * 	X.25 Socket Family
 */

#ifndef _NBAPI_VOLTOS_X25_H
#define _NBAPI_VOLTOS_X25_H

#include <voltos/socket.h>

#define X25_ADDR_SIZE					15

enum {
	X25_TYPE_T_UNSPEC				= 0x00,
#define X25_TYPE_UNSPEC					X25_TYPE_T_UNSPEC
	X25_TYPE_T_PAD					= 0x01,
#define X25_TYPE_PAD					X25_TYPE_T_PAD
	X25_TYPE_T_BLACKER_FRONT_END_DESCR_DEV		= 0xC5,
#define X25_TYPE_BLACKER_FRONT_END_DESCR_DEV		X25_TYPE_T_BLACKER_FRONT_END_DESCR_DEV
	X25_TYPE_T_IP					= 0xCC,
#define X25_TYPE_IP					X25_TYPE_T_IP
	X25_TYPE_T_ISO_IP				= 0xCD,
#define X25_TYPE_ISO_IP					X25_TYPE_T_ISO_IP
	X25_TYPE_T_PPP					= 0xCF,
#define X25_TYPE_PPP					X25_TYPE_T_PPP
	X25_TYPE_T_NETWORK_MONITORING			= 0xDD,
#define X25_TYPE_NETWORK_MONITORING			X25_TYPE_T_NETWORK_MONITORING
	__X25_TYPE_T_MAX__
};

#define X25_TYPE_MAX					(__X25_TYPE_T_MAX__ - 1)

struct x25_addr {
	unsigned char 					s_addr[X25_ADDR_SIZE];
	unsigned char 					s_null;
};

struct sockaddr_x25 {
	__voltos_sa_family_t 				sx25_family;
	struct x25_addr 				sx25_addr;
};

#endif /* _NBAPI_VOLTOS_X25_H */
