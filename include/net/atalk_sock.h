// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/net/atalk_sock.h
 *
 */

#ifndef _NET_ATALK_SOCK_H
#define _NET_ATALK_SOCK_H

#include <voltos/atalk.h>
#include <net/sock.h>

struct atalk_sock {
	struct sock sk;
};

#endif /* _NET_ATALK_SOCK_H */
