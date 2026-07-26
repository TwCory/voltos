#ifndef _ROUTER_LISP_H
#define _ROUTER_LISP_H

#include <voltos/lisp.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/if.h>
#include <router/prefix.h>
#include <router/protocol.h>
#include <router/route.h>

struct lisp_protocol {
	struct rt_protocol 		*protocol;
};

struct lisp_interface {
	struct lisp_protocol 		*lisp;
	struct rt_interface 		*interface;
};

struct lisp_route {
	struct lisp_protocol 		*lisp;
	struct rt_route 		*route;
};

extern void lisp_init(void);

#endif /* _ROUTER_LISP_H */
