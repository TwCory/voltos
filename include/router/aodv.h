#ifndef _ROUTER_AODV_H
#define _ROUTER_AODV_H

#include <voltos/types.h>
#include <router/distance.h>
#include <router/protocol.h>
#include <nbapi/voltos/aodv.h>

struct aodv_router_conf {
	distance_t 			distance;
	bool 				passive_default;
	bool 				shutdown;
};

struct aodv_interface_conf {
	bool 				passive;
};

struct aodv_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_AODV_H */
