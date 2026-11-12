// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/dhcp.h
 *
 *	Dynamic Host Configuration Protocol (DHCP)
 */

#ifndef _ROUTER_DHCP_H
#define _ROUTER_DHCP_H

struct dhcp_client {

};

struct dhcp_interface {
	struct interface 		*interface;
};

struct dhcp_pool {
	const char 			name[DHCP_POOL_NAME_SIZE];
};

struct dhcp_relay_agent {

};

struct dhcp_route {
	struct route 			*route;

	struct in_addr 			address;
	struct in_addr 			netmask;
	struct in_addr 			nexthop;
};

struct dhcp_server {

};

extern void dhcp_client_init(void);
extern void dhcp_interface_init(void);
extern void dhcp_relay_agent_init(void);
extern void dhcp_server_init(void);

extern void dhcp_msg_send();
extern void dhcp_msg_recv();

#endif /* _ROUTER_DHCP_H */
