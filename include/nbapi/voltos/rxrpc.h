// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/rxrpc.h
 *
 * 	RxRPC Socket Family
 */

#ifndef _NBAPI_VOLTOS_RXRPC_H
#define _NBAPI_VOLTOS_RXRPC_H

#include <voltos/in.h>
#include <voltos/in6.h>
#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_rxrpc {
	__voltos_sa_family_t		srxrpc_family;
	__u16				srxrpc_service;
	__u16				srxrpc_transport_type;
	__u16				srxrpc_transport_len;
	union {
		__voltos_sa_family_t	family;
		struct sockaddr_in	sin;
		struct sockaddr_in6	sin6;
	} srxrpc_transport;
};

#endif /* _NBAPI_VOLTOS_RXRPC_H */
