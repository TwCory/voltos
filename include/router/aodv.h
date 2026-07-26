#ifndef _ROUTER_AODV_H
#define _ROUTER_AODV_H

#include <voltos/aodv.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct aodv_protocol {
	struct rt_protocol 		*protocol;
};

struct aodv_interface {
	struct aodv_protocol 		*aodv;
	struct rt_interface 		*interface;
};

struct aodv_route {
	struct aodv_protocol 		*aodv;
	struct rt_route 		*route;
};

extern void aodv_init(void);

#endif /* _ROUTER_AODV_H */
