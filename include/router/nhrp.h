// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/nhrp.h
 *
 * 	Next-Hop Resolution Protocol (NHRP)
 */

#ifndef _ROUTER_NHRP_H
#define _ROUTER_NHRP_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/nhrp.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct nhrp_interface {
	struct interface 		*interface;
};

struct nhrp_protocol {
	struct protocol 		*protocol;
};

struct nhrp_route {
	struct route 			*route;

	ip_prefix_t 			prefix;
};

#endif /* _ROUTER_NHRP_H */
