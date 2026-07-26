#ifndef _ROUTER_EIGRP_H
#define _ROUTER_EIGRP_H

#include <voltos/eigrp.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/neighbour.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct eigrp_protocol {
	struct rt_protocol 		*protocol;
};

struct eigrp_interface {
	struct eigrp_protocol 		*eigrp;
	struct rt_interface 		*interface;
};

struct eigrp_neighbour {
	struct eigrp_protocol 		*eigrp;
	struct rt_neighbour 		*neighbour;
};

struct eigrp_route {
	struct eigrp_protocol 		*eigrp;
	struct rt_route 		*route;
};

extern void eigrp_init(void);

#endif /* _ROUTER_EIGRP_H */
