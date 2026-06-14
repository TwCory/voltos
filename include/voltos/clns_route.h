#ifndef VOLTOS_CLNS_ROUTE_H
#define VOLTOS_CLNS_ROUTE_H

#include <voltos/clns.h>
#include <voltos/nexthop.h>
#include <voltos/route.h>

struct clns_route_ctx {
	struct clns 		*clns;
	struct route 		*route;
	struct next_hop 	*nexthop;
};

#endif /* VOLTOS_CLNS_ROUTE_H */
