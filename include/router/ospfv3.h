#ifndef _ROUTER_OSPFV3_H
#define _ROUTER_OSPFV3_H

#include <voltos/ospfv3.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/neighbour.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct ospfv3_protocol {
	struct rt_protocol 		*protocol;
};

struct ospfv3_interface {
	struct ospfv3_protocol 		*ospfv3;
	struct rt_interface 		*interface;
};

struct ospfv3_neighbour {
	struct ospfv3_protocol 		*ospfv3;
	struct rt_neighbour 		*neighbour;
};

struct ospfv3_area {
	struct ospfv3_protocol 		*ospfv3;

};

struct ospfv3_route {
	struct ospfv3_protocol 		*ospfv3;
	struct rt_route 		*route;
};

extern void ospfv3_init(void);

#endif /* _ROUTER_OSPFV3_H */
