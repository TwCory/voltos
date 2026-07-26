#ifndef _ROUTER_ISIS_H
#define _ROUTER_ISIS_H

#include <voltos/isis.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct isis_protocol {
	struct rt_protocol 		*protocol;
};

struct isis_interface {
	struct isis_protocol 		*isis;
	struct rt_interface 		*interface;
};

struct isis_route {
	struct isis_protocol 		*isis;
	struct rt_route 		*route;
};

extern void isis_init(void);

#endif /* _ROUTER_ISIS_H */
