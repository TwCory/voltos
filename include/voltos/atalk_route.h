#ifndef VOLTOS_ATALK_ROUTE_H
#define VOLTOS_ATALK_ROUTE_H

#include <voltos/atalk.h>
#include <voltos/if.h>
#include <voltos/types.h>

struct atalk_route_ctx {
	struct atalk_addr 		address;
	struct atalk_addr 		nexthop;
	__voltos_if_index_t 		interface;
	__u8 				distance;
	__u8 				zone;
};

#endif /* VOLTOS_ATALK_ROUTE_H */
