#ifndef _ROUTER_DSR_H
#define _ROUTER_DSR_H

#include <voltos/types.h>
#include <router/protocol.h>
#include <nbapi/voltos/dsr.h>

struct dsr_router_conf {
	struct {
		struct {

		} ipv4_unicast;
		struct {

		} ipv6_unicast;
	} address_family;
};

struct dsr_interface_conf {
	bool 				passive;
};

struct dsr_protocol {
	struct protocol 		*protocol;
};

struct dsr_interface {

};

struct dsr_route {

};

#endif /* _ROUTER_DSR_H */
