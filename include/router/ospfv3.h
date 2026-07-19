#ifndef _ROUTER_OSPFV3_H
#define _ROUTER_OSPFV3_H

#include <voltos/types.h>
#include <router/protocol.h>
#include <nbapi/voltos/ospfv3.h>

struct ospfv3_router_conf {
	struct {
		struct {

		} ipv4_unicast;
		struct {

		} ipv6_unicast;
	} address_family;
};

struct ospfv3_ipv6_router_conf {

};

struct ospfv3_interface_conf {
	bool 				passive;
};

struct ospfv3_protocol {
	struct protocol 		*protocol;
};

struct ospfv3_interface {

};

struct ospfv3_neighbour {

};

struct ospfv3_route {

};

#endif /* _ROUTER_OSPFV3_H */
