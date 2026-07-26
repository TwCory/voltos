#ifndef _ROUTER_OLSR_H
#define _ROUTER_OLSR_H

#include <voltos/olsr.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct olsr_protocol {
	struct rt_protocol 		*protocol;
};

struct olsr_interface {
	struct olsr_protocol 		*olsr;
	struct rt_interface 		*interface;
};

struct olsr_route {
	struct olsr_protocol 		*olsr;
	struct rt_route 		*route;
};

extern void olsr_init(void);

#endif /* _ROUTER_OLSR_H */
