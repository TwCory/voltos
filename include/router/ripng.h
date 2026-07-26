#ifndef _ROUTER_RIPNG_H
#define _ROUTER_RIPNG_H

#include <voltos/ripng.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/neighbour.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct ripng_protocol {
	struct rt_protocol 		*protocol;
};

struct ripng_interface {
	struct ripng_protocol 		*ripng;
	struct rt_interface 		*interface;
};

struct ripng_neighbour {
	struct ripng_protocol 		*ripng;
	struct rt_neighbour 		*neighbour;
};

struct ripng_route {
	struct ripng_protocol 		*ripng;
	struct rt_route 		*route;
};

extern void ripng_init(void);

#endif /* _ROUTER_RIPNG_H */
