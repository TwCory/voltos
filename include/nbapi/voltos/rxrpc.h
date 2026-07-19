#ifndef _NBAPI_VOLTOS_RXRPC_H
#define _NBAPI_VOLTOS_RXRPC_H

#include <voltos/socket.h>
#include <voltos/types.h>

struct sockaddr_rxrpc {
	__voltos_sa_family_t 	srxrpc_family;
	__u16 			srxrpc_service;
	__u16 			srxrpc_transport_type;
	__u16 			srxrpc_transport_len;
};

#endif /* _NBAPI_VOLTOS_RXRPC_H */
