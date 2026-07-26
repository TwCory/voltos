#ifndef _ROUTER_NHRP_H
#define _ROUTER_NHRP_H

#include <voltos/nhrp.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct nhrp_protocol {
	struct rt_protocol 		*protocol;
};

struct nhrp_interface {
	struct nhrp_protocol 		*nhrp;
	struct rt_interface 		*interface;
};

struct nhrp_route {
	struct nhrp_protocol 		*nhrp;
	struct rt_route 		*route;
};

extern void nhrp_init(void);

#endif /* _ROUTER_NHRP_H */
