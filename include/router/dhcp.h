// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/dhcp.h
 *
 * 	Dynamic Host Configuration Protocol (DHCP)
 */

#ifndef _ROUTER_DHCP_H
#define _ROUTER_DHCP_H

#include <voltos/dhcp.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct dhcp_interface {
	struct interface 		*interface;
};

struct dhcp_pool {

};

struct dhcp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_DHCP_H */
