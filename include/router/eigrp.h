#ifndef _ROUTER_EIGRP_H
#define _ROUTER_EIGRP_H

#include <voltos/types.h>
#include <router/protocol.h>
#include <nbapi/voltos/eigrp.h>

struct eigrp_router_conf {
	struct {
		struct {

		} ipv4_unicast;
		struct {

		} ipv6_unicast;
	} address_family;
};

struct eigrp_ipv6_router_conf {

};

struct eigrp_interface_conf {
	bool 				passive;
};

struct eigrp_protocol {
	struct protocol 		*protocol;
};

struct eigrp_interface {

};

struct eigrp_neighbour {

};

struct eigrp_route {

};

#endif /* _ROUTER_EIGRP_H */
