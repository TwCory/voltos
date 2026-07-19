#ifndef _ROUTER_RPL_H
#define _ROUTER_RPL_H

#include <voltos/types.h>
#include <router/protocol.h>
#include <nbapi/voltos/rpl.h>

struct rpl_ipv6_router_conf {
	bool 				passive_default;
	bool 				shutdown;
};

struct rpl_interface_conf {
	bool 				passive;
};

struct rpl_protocol {
	struct protocol 		*protocol;
};

struct rpl_interface {

};

struct rpl_route {

};

#endif /* _ROUTER_RPL_H */
