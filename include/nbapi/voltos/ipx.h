// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ipx.h
 *
 */

#ifndef _NBAPI_VOLTOS_IPX_H
#define _NBAPI_VOLTOS_IPX_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define IPX_NODE_SIZE			6

struct sockaddr_ipx {
	__voltos_sa_family_t 		sipx_family;
	__net16 			sipx_port;
	__net32 			sipx_network;
	unsigned char 			sipx_node[IPX_NODE_SIZE];
	uint8_t 			sipx_type;
	unsigned char 			sipx_zero;
};

#endif /* _NBAPI_VOLTOS_IPX_H */
