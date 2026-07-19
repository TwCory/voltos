#ifndef _ROUTER_RIP_H
#define _ROUTER_RIP_H

#include <voltos/types.h>
#include <router/distance.h>
#include <router/protocol.h>
#include <nbapi/voltos/rip.h>

struct rip_router_conf {
	distance_t 			distance;
	bool 				passive_default;
	bool 				shutdown;
	bool 				verify_update_source;
};

struct rip_interface_conf {
	bool 				passive;
};

struct rip_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_RIP_H */
