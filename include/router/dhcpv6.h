// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/dhcpv6.h
 *
 *	Dynamic Host Configuration Protocol for IPv6 (DHCPv6)
 */

#ifndef _ROUTER_DHCPV6_H
#define _ROUTER_DHCPV6_H

struct dhcp6_client {

};

struct dhcp6_interface {
	struct interface 		*interface;
};

struct dhcp6_pool {
	const char 			name[DHCPV6_POOL_NAME_SIZE];
};

struct dhcp6_relay_agent {

};

struct dhcp6_route {
	struct route 			*route;

	struct in6_addr 		address;
	u8				prefix_length;
	struct in6_addr 		nexthop;
};

struct dhcp6_server {

};

extern void dhcp6_client_init(void);
extern void dhcp6_interface_init(void);
extern void dhcp6_relay_agent_init(void);
extern void dhcp6_server_init(void);

extern void dhcp6_msg_send();
extern void dhcp6_msg_recv();

#endif /* _ROUTER_DHCPV6_H */
