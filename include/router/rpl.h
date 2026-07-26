#ifndef _ROUTER_RPL_H
#define _ROUTER_RPL_H

#include <voltos/rpl.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct rpl_protocol {
	struct rt_protocol 		*protocol;
};

struct rpl_interface {
	struct rpl_protocol 		*rpl;
	struct rt_interface 		*interface;
};

struct rpl_route {
	struct rpl_protocol 		*rpl;
	struct rt_route 		*route;
};

extern void rpl_init(void);

#endif /* _ROUTER_RPL_H */
