// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ahcp.h
 *
 *	Ad Hoc Configuration Protocol (AHCP)
 */

#ifndef _ROUTER_AHCP_H
#define _ROUTER_AHCP_H


struct ahcp_client {

};

struct ahcp_interface {
	struct interface 		*interface;
};

struct ahcp_pool {
	const char 			name[AHCP_POOL_NAME_SIZE];
};

struct ahcp_relay_agent {

};

struct ahcp_route {
	struct route 			*route;
};

struct ahcp_server {

};

extern void ahcp_client_init(void);
extern void ahcp_interface_init(void);
extern void ahcp_relay_agent_init(void);
extern void ahcp_server_init(void);

extern void ahcp_msg_send();
extern void ahcp_msg_recv();

#endif /* _ROUTER_AHCP_H */
