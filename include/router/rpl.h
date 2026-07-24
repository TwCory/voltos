#ifndef _ROUTER_RPL_H
#define _ROUTER_RPL_H

#include <voltos/rpl.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct rpl_protocol {
	struct protocol *protocol;
};

struct rpl_interface {

};

struct rpl_route {
	struct route *route;
	struct prefix prefix;
};

#endif /* _ROUTER_RPL_H */
