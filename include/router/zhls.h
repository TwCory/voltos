#ifndef _ROUTER_ZHLS_H
#define _ROUTER_ZHLS_H

#include <voltos/types.h>
#include <voltos/zhls.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct zhls_protocol {
	struct rt_protocol 		*protocol;
};

struct zhls_interface {
	struct zhls_protocol 		*zhls;
	struct rt_interface 		*interface;
};

struct zhls_route {
	struct zhls_protocol 		*zhls;
	struct rt_route 		*route;
};

extern void zhls_init(void);

#endif /* _ROUTER_ZHLS_H */
