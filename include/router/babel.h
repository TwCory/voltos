#ifndef _ROUTER_BABEL_H
#define _ROUTER_BABEL_H

#include <voltos/types.h>
#include <router/distance.h>
#include <router/protocol.h>
#include <nbapi/voltos/babel.h>

struct babel_router_conf {
	struct {
		struct {
			distance_t 	distance;
		} ipv4_unicast;
		struct {
			distance_t 	distance;
		} ipv6_unicast;
	} address_family;
};

struct babel_interface_conf {
	bool 				passive;
};

struct babel_protocol {
	struct protocol 		*protocol;
};

struct babel_interface {

};

struct babel_neighbour {

};

struct babel_route {

};

struct babel_source {

};

struct babel_xroute {

};

#endif /* _ROUTER_BABEL_H */
