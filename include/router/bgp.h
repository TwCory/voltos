#ifndef _ROUTER_BGP_H
#define _ROUTER_BGP_H

#include <voltos/types.h>
#include <router/protocol.h>
#include <nbapi/voltos/bgp.h>

struct bgp_router_conf {
	bool 				shutdown;
};

struct bgp_protocol {
	struct protocol 		*protocol;
};

struct bgp_interface {

};

struct bgp_neighbour {

};

struct bgp_route {

};

#endif /* _ROUTER_BGP_H */
