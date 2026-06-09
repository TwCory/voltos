#ifndef VOLTOS_IP_ROUTE_H
#define VOLTOS_IP_ROUTE_H

#include <voltos/in.h>
#include <voltos/ip.h>
#include <voltos/nexthop.h>
#include <voltos/route.h>
#include <voltos/types.h>

struct ip_route_ctx {
	struct ip 		*ip;
	struct route 		*route;
	struct next_hop 	*nexthop;

	u8 			distance;
};

#endif /* VOLTOS_IP_ROUTE_H */
