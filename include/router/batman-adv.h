// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/batman-adv.h
 *
 */

#ifndef _ROUTER_BATMAN_ADV_H
#define _ROUTER_BATMAN_ADV_H

#include <voltos/batman-adv.h>
#include <voltos/if.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/protocol.h>

struct batadv_interface {
	struct interface 		*interface;
};

struct batadv_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

struct batadv_route {
	struct route 			*route;
};

struct batadv_router {
	bool 				shutdown;
};

#endif /* _ROUTER_BATMAN_ADV_H */
