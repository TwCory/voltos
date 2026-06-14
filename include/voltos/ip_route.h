#ifndef VOLTOS_IP_ROUTE_H
#define VOLTOS_IP_ROUTE_H

#include <voltos/if.h>
#include <voltos/in.h>
#include <voltos/types.h>

struct ip_route_ctx {
	struct in_addr 		address;
	struct in_addr 		netmask;
	struct in_addr 		nexthop;
	__voltos_if_index_t 	interface;
	__u8 			distance;
	__u32 			metric;
};

#endif /* VOLTOS_IP_ROUTE_H */
