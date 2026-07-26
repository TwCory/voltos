#ifndef _ROUTER_IDRP_H
#define _ROUTER_IDRP_H

#include <voltos/idrp.h>
#include <voltos/types.h>
#include <router/if.h>
#include <router/protocol.h>
#include <router/route.h>

struct idrp_protocol {
	struct rt_protocol 		*protocol;
};

struct idrp_interface {
	struct idrp_protocol 		*idrp;
	struct rt_interface 		*interface;
};

struct idrp_route {
	struct idrp_protocol 		*idrp;
	struct rt_route 		*route;
};

extern void idrp_init(void);

#endif /* _ROUTER_IDRP_H */
