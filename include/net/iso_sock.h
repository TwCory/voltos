// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/net/iso_sock.h
 *
 */

#ifndef _NET_ISO_SOCK_H
#define _NET_ISO_SOCK_H

#include <voltos/iso.h>
#include <net/sock.h>

struct iso_sock {
	struct sock sk;
};

#endif /* _NET_ISO_SOCK_H */
