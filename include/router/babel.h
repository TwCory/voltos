#ifndef _ROUTER_BABEL_H
#define _ROUTER_BABEL_H

#include <voltos/babel.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/neighbour.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct babel_protocol {
	struct rt_protocol 		*protocol;
};

struct babel_interface {
	struct babel_protocol 		*babel;
	struct rt_interface 		*interface;
};

struct babel_neighbour {
	struct babel_protocol 		*babel;
	struct rt_neighbour 		*neighbour;
};

struct babel_route {
	struct babel_protocol 		*babel;
	struct rt_route 		*route;
};

extern void babel_init(void);

#endif /* _ROUTER_BABEL_H */
