#ifndef VOLTOS_IPV6_ROUTE_H
#define VOLTOS_IPV6_ROUTE_H

#include <voltos/if.h>
#include <voltos/in6.h>
#include <voltos/ipv6.h>
#include <voltos/types.h>

struct ipv6_route_ctx {
	struct in6_addr 	address;
	__u8 			prefix_length;
	struct in6_addr 	nexthop;
	__voltos_if_index_t 	interface;
	__u8 			distance;
	__u32 			metric;
};

#endif /* VOLTOS_IPV6_ROUTE_H */
