// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/net/inet_sock.h
 *
 */

#ifndef _NET_INET_SOCK_H
#define _NET_INET_SOCK_H

#include <voltos/bitops.h>
#include <voltos/idb.h>
#include <voltos/jhash.h>
#include <voltos/string.h>
#include <voltos/types.h>

#include <net/flow.h>
#include <net/inet_dscp.h>
#include <net/request_sock.h>
#include <net/sock.h>

struct inet_sock {
	struct sock 		sock;


};

#endif /* _NET_INET_SOCK_H */
