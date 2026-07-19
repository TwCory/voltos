#ifndef _ROUTER_LISP_H
#define _ROUTER_LISP_H

#include <voltos/types.h>
#include <router/protocol.h>
#include <nbapi/voltos/lisp.h>

struct lisp_router_conf {
	bool 				passive_default;
	bool 				shutdown;
};

struct lisp_interface_conf {
	bool 				passive;
};

struct lisp_protocol {
	struct protocol 		*protocol;
};

struct lisp_interface {

};

struct lisp_route {

};

#endif /* _ROUTER_LISP_H */
