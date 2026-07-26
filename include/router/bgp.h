#ifndef _ROUTER_BGP_H
#define _ROUTER_BGP_H

#include <voltos/bgp.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/neighbour.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct bgp_protocol {
	struct rt_protocol 		*protocol;
};

struct bgp_interface {
	struct bgp_protocol 		*bgp;
	struct rt_interface 		*interface;
};

struct bgp_neighbour {
	struct bgp_protocol 		*bgp;
	struct rt_neighbour 		*neighbour;
};

struct bgp_route {
	struct bgp_protocol 		*bgp;
	struct rt_route 		*route;
};

extern void bgp_init(void);

#endif /* _ROUTER_BGP_H */
