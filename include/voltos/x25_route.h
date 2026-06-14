#ifndef VOLTOS_X25_ROUTE_H
#define VOLTOS_X25_ROUTE_H

#include <voltos/nexthop.h>
#include <voltos/route.h>
#include <voltos/x25.h>

struct x25_route {
	struct x25 		*x25;
	struct route 		*route;
	struct next_hop 	*nexthop;
};

#endif /* VOLTOS_X25_ROUTE_H */
