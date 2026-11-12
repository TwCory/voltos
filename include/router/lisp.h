// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/lisp.h
 *
 *	Locator/ID Separation Protocol (LISP)
 */

#ifndef _ROUTER_LISP_H
#define _ROUTER_LISP_H

struct lisp_interface {
	struct lisp_router 		*lisp;
	struct interface 		*interface;
};

struct lisp_route {
	struct lisp_router		*lisp;
	struct route 			*route;
};

struct lisp_router {

};

extern void lisp_interface_init(void);
extern void lisp_router_init(void);

#endif /* _ROUTER_LISP_H */
