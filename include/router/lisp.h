// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/lisp.h
 *
 * 	Locator/ID Separation Protocol (LISP)
 */

#ifndef _ROUTER_LISP_H
#define _ROUTER_LISP_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/lisp.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct lisp_interface {
	struct interface 		*interface;
};

struct lisp_protocol {
	struct protocol 		*protocol;
};

struct lisp_route {
	struct route 			*route;
};

struct lisp_router {
	bool 				shutdown;
};

#endif /* _ROUTER_LISP_H */
