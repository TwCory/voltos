// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/net/af_xdp.h
 *
 */

#ifndef _NET_AF_XDP_H
#define _NET_AF_XDP_H

#include <net/sock.h>

struct xdp_sock {
	struct sock sk;
};

#endif /* _NET_AF_XDP_H */
