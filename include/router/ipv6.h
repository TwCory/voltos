// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ipv6.h
 *
 */

#ifndef _ROUTER_IPV6_H
#define _ROUTER_IPV6_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/ipv6.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/protocol.h>

struct ipv6_interface {
	struct interface 		*interface;
};

struct ipv6_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

#endif /* _ROUTER_IPV6_H */
