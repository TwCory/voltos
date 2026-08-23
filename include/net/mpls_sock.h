// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/net/mpls_sock.h
 *
 */

#ifndef _NET_MPLS_SOCK_H
#define _NET_MPLS_SOCK_H

#include <voltos/mpls.h>
#include <net/sock.h>

struct mpls_sock {
	struct sock sk;
};

#endif /* _NET_MPLS_SOCK_H */
