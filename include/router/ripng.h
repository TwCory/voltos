#ifndef _ROUTER_RIPNG_H
#define _ROUTER_RIPNG_H

#include <voltos/types.h>
#include <router/protocol.h>
#include <nbapi/voltos/ripng.h>

struct ripng_ipv6_router_conf {
	bool 				passive_default;
	bool 				shutdown;
};

struct ripng_interface_conf {
	bool 				passive;
};

struct ripng_protocol {
	struct protocol 		*protocol;
};

struct ripng_interface {

};

struct ripng_neighbour {

};

struct ripng_route {

};

#endif /* _ROUTER_RIPNG_H */
