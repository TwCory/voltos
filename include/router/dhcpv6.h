// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/dhcpv6.h
 *
 * 	Dynamic Host Configuration Protocol for IPv6 (DHCPv6)
 */

#ifndef _ROUTER_DHCPV6_H
#define _ROUTER_DHCPV6_H

struct dhcpv6_protocol;

struct dhcpv6_interface {
	struct dhcpv6_protocol 		*dhcpv6;

};

struct dhcpv6_pool {
	struct dhcpv6_protocol 		*dhcpv6;
};

struct dhcpv6_protocol {

};

#endif /* _ROUTER_DHCPV6_H */
