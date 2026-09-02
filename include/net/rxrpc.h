// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/net/rxrpc.h
 *
 */

#ifndef _NET_RXRPC_H
#define _NET_RXRPC_H

#include <voltos/mbuf.h>
#include <voltos/rxrpc.h>
#include <net/sock.h>

struct rxrpc_sock {
	struct sock sk;
};

#endif /* _NET_RXRPC_H */
