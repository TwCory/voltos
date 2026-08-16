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
#include <net/protocol.h>

struct arp_interface {
	struct interface 		*interface;
};

struct arp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_ARP_H */
