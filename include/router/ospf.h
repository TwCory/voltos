#ifndef _ROUTER_OSPF_H
#define _ROUTER_OSPF_H

#include <voltos/ospf.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/neighbour.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct ospf_protocol {
	struct rt_protocol 		*protocol;
};

struct ospf_interface {
	struct ospf_protocol 		*ospf;
	struct rt_interface 		*interface;
};

struct ospf_neighbour {
	struct ospf_protocol 		*ospf;
	struct rt_neighbour 		*neighbour;
};

struct ospf_area {
	struct ospf_protocol 		*ospf;
};

struct ospf_network {
	struct ospf_protocol 		*ospf;
};

struct ospf_route {
	struct ospf_protocol 		*ospf;
	struct rt_route 		*route;
};

extern void ospf_init(void);

#endif /* _ROUTER_OSPF_H */
