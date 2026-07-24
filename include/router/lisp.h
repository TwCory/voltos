#ifndef _ROUTER_LISP_H
#define _ROUTER_LISP_H

#include <voltos/lisp.h>
#include <voltos/types.h>
#include <router/distance.h>
#include <router/prefix.h>
#include <router/protocol.h>

struct lisp_protocol {

};

struct lisp_route {
	struct prefix prefix;
};

#endif /* _ROUTER_LISP_H */
