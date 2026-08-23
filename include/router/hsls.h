// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/hsls.h
 *
 * 	Hazy-Sighted Link State (HSLS)
 */

#ifndef _ROUTER_HSLS_H
#define _ROUTER_HSLS_H

struct hsls_protocol;

struct hsls_interface {
	struct hsls_protocol 		*hsls;

};

struct hsls_protocol {

};

struct hsls_route {
	struct hsls_protocol 		*hsls;

};

struct hsls_router {
	struct hsls_protocol 		*hsls;

};

#endif /* _ROUTER_HSLS_H */
