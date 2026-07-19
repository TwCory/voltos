#ifndef _ROUTER_OLSR_H
#define _ROUTER_OLSR_H

#include <voltos/types.h>
#include <router/protocol.h>
#include <nbapi/voltos/olsr.h>

struct olsr_router_conf {
	struct {
		struct {

		} ipv4_unicast;
		struct {

		} ipv6_unicast;
	} address_family;
};

struct olsr_interface_conf {
	bool 				passive;
};

struct olsr_protocol {
	struct protocol 		*protocol;
};

struct olsr_interface {

};

struct olsr_route {

};

#endif /* _ROUTER_OLSR_H */
