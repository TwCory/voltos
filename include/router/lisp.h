// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/lisp.h
 *
 * 	Locator/ID Separation Protocol (LISP)
 */

#ifndef _ROUTER_LISP_H
#define _ROUTER_LISP_H

struct lisp_protocol;

struct lisp_interface {
	struct lisp_protocol 		*lisp;

};

struct lisp_protocol {

};

struct lisp_route {
	struct lisp_protocol 		*lisp;

};

struct lisp_router {
	struct lisp_protocol 		*lisp;

};

#endif /* _ROUTER_LISP_H */
