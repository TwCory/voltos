#ifndef VOLTOS_IPX_ROUTE_H
#define VOLTOS_IPX_ROUTE_H

#include <voltos/ipx.h>
#include <voltos/nexthop.h>
#include <voltos/route.h>

struct ipx_route_ctx {
	struct ipx 		*ipx;
	struct route 		*route;
	struct next_hop 	*nexthop;
};

#endif /* VOLTOS_IPX_ROUTE_H */
