// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/arp.h
 *
 */

#ifndef _ROUTER_ARP_H
#define _ROUTER_ARP_H

#include <voltos/if.h>
#include <voltos/if_arp.h>
#include <voltos/vrf.h>
#include <net/neighbour.h>
#include <net/neighbour_table.h>
#include <net/protocol.h>

struct arp_protocol;

struct arp_interface {
	struct arp_protocol 		*arp;
	struct interface 		*interface;
};

struct arp_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
	struct neighbour_table 		*neighbour_table;
};

#endif /* _ROUTER_ARP_H */
