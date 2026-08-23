// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/dhcp.h
 *
 * 	Dynamic Host Configuration Protocol (DHCP)
 */

#ifndef _ROUTER_DHCP_H
#define _ROUTER_DHCP_H

struct dhcp_protocol;

struct dhcp_interface {
	struct dhcp_protocol 		*dhcp;

};

struct dhcp_pool {
	struct dhcp_protocol 		*dhcp;
};

struct dhcp_protocol {

};

#endif /* _ROUTER_DHCP_H */
