// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/dhcpv6.h
 *
 * 	Dynamic Host Configuration Protocol for IPv6 (DHCPv6)
 */

#ifndef _ROUTER_DHCPV6_H
#define _ROUTER_DHCPV6_H

#include <voltos/dhcpv6.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct dhcpv6_interface {
	struct interface 		*interface;
};

struct dhcpv6_pool {

};

struct dhcpv6_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_DHCPV6_H */
