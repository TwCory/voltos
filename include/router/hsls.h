#ifndef _ROUTER_HSLS_H
#define _ROUTER_HSLS_H

#include <voltos/hsls.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct hsls_protocol {
	struct rt_protocol 		*protocol;
};

struct hsls_interface {
	struct hsls_protocol 		*hsls;
	struct rt_interface 		*interface;
};

struct hsls_route {
	struct hsls_protocol 		*hsls;
	struct rt_route 		*route;
};

extern void hsls_init(void);

#endif /* _ROUTER_HSLS_H */
