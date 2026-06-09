#ifndef VOLTOS_IPV6_ROUTE_H
#define VOLTOS_IPV6_ROUTE_H

#include <voltos/ipv6.h>
#include <voltos/nexthop.h>
#include <voltos/route.h>

struct ipv6_route_ctx {
	struct ipv6 		*ipv6;
	struct route 		*route;
	struct next_hop 	*nexthop;
};

#endif /* VOLTOS_IPV6_ROUTE_H */
