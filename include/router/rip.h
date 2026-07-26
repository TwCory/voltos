#ifndef _ROUTER_RIP_H
#define _ROUTER_RIP_H

#include <voltos/in.h>
#include <voltos/rip.h>
#include <voltos/types.h>
#include <router/if.h>
#include <router/neighbour.h>
#include <router/route.h>
#include <router/protocol.h>

struct rip_protocol {
	struct rt_protocol 		*protocol;
	struct rt_route_table 		*route_table;
	struct rt_neighbour_table 	*neighbour_table;
};

struct rip_interface {
	struct rip_protocol 		*rip;
	struct rt_interface 		*interface;
};

struct rip_neighbour {
	struct rip_protocol 		*rip;
	struct rip_interface 		*interface;
	struct rt_neighbour 		*neighbour;
};

struct rip_route {
	struct rip_protocol 		*rip;
	struct rt_route 		*route;
};

#endif /* _ROUTER_RIP_H */
