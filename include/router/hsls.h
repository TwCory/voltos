#ifndef _ROUTER_HSLS_H
#define _ROUTER_HSLS_H

#include <voltos/types.h>
#include <router/protocol.h>
#include <nbapi/voltos/hsls.h>

struct hsls_router_conf {
	struct {
		struct {

		} ipv4_unicast;
		struct {

		} ipv6_unicast;
	} address_family;
};

struct hsls_interface_conf {
	bool 				passive;
};

struct hsls_protocol {
	struct protocol 		*protocol;
};

struct hsls_interface {

};

struct hsls_route {

};

#endif /* _ROUTER_HSLS_H */
