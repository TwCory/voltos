#ifndef _ROUTER_DSR_H
#define _ROUTER_DSR_H

#include <voltos/dsr.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct dsr_protocol {
	struct rt_protocol 		*protocol;
};

struct dsr_interface {
	struct dsr_protocol 		*dsr;
	struct rt_interface 		*interface;
};

struct dsr_route {
	struct dsr_protocol 		*dsr;
	struct rt_route 		*route;
};

extern void dsr_init(void);

#endif /* _ROUTER_DSR_H */
