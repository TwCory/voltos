// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/net/af_unix.h
 *
 */

#ifndef _NET_AF_UNIX_H
#define _NET_AF_UNIX_H

#include <voltos/refcount.h>
#include <voltos/un.h>
#include <net/sock.h>

struct unix_addr {
	refcount_t 		ref_count;
	int 			length;
	struct sockaddr_un 	name[];
};

struct unix_sock {
	struct sock 		sk;
	struct unix_addr 	*addr;

	struct sock 		*peer;
	struct sock 		*listener;
};

#endif /* _NET_AF_UNIX_H */
