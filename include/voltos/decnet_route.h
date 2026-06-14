#ifndef VOLTOS_DECNET_ROUTE_H
#define VOLTOS_DECNET_ROUTE_H

#include <voltos/decnet.h>
#include <voltos/nexthop.h>
#include <voltos/route.h>

struct decnet_route_ctx {
	struct decnet 		*decnet;
	struct route 		*route;
	struct next_hop 	*nexthop;
};

#endif /* VOLTOS_DECNET_ROUTE_H */
