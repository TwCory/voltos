#ifndef _ROUTER_IDPR_H
#define _ROUTER_IDPR_H

#include <voltos/idpr.h>
#include <voltos/types.h>
#include <router/if.h>
#include <router/protocol.h>
#include <router/route.h>

struct idpr_protocol {
	struct rt_protocol 		*protocol;
};

struct idpr_interface {
	struct idpr_protocol 		*idpr;
	struct rt_interface 		*interface;
};

struct idpr_route {
	struct idpr_protocol 		*idpr;
	struct rt_route 		*route;
};

extern void idpr_init(void);

#endif /* _ROUTER_IDPR_H */
