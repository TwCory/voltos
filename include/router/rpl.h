#ifndef RPL_ROUTER_H
#define RPL_ROUTER_H

#include <voltos/if.h>
#include <voltos/net_router.h>
#include <voltos/route.h>
#include <voltos/rpl.h>
#include <voltos/vrf.h>

struct rpl {
	struct ipv6_router 		*router;

	char 				*vrf_name;
	struct vrf 			*vrf_ptr;
};

struct rpl_interface {
	struct rpl 			*rpl;
	struct interface 		*if_ptr;
};

struct rpl_route {
	struct rpl 			*rpl;
	struct route 			*route_ptr;
};

#endif /* RPL_ROUTER_H */
