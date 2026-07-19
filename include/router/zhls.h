#ifndef _ROUTER_ZHLS_H
#define _ROUTER_ZHLS_H

#include <voltos/types.h>
#include <router/protocol.h>
#include <nbapi/voltos/zhls.h>

struct zhls_router_conf {
	struct {
		struct {

		} ipv4_unicast;
		struct {

		} ipv6_unicast;
	} address_family;
};

struct zhls_interface_conf {
	bool 				passive;
};

struct zhls_protocol {
	struct protocol 		*protocol;
};

struct zhls_interface {

};

struct zhls_route {

};

#endif /* _ROUTER_ZHLS_H */
