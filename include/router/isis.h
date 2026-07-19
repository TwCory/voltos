#ifndef _ROUTER_ISIS_H
#define _ROUTER_ISIS_H

#include <voltos/types.h>
#include <router/distance.h>
#include <router/protocol.h>
#include <nbapi/voltos/isis.h>

struct isis_router_conf {
	struct {
		struct {

		} ipv4_unicast;
		struct {

		} ipv6_unicast;
	} address_family;
};

struct isis_ipv6_router_conf {
	distance_t 				distance;
};

struct isis_interface_conf {
	bool 					passive;
};

struct isis_protocol {
	struct protocol 			*protocol;
};

struct isis_interface {

};

struct isis_route {

};

#endif /* _ROUTER_ISIS_H */
