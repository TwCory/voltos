// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/hsls.h
 *
 * 	Hazy-Sighted Link State (HSLS)
 */

#ifndef _ROUTER_HSLS_H
#define _ROUTER_HSLS_H

#include <voltos/inet.h>
#include <voltos/types.h>

struct hsls_protocol {
	bool 			enabled;
};

struct hsls_interface {
	bool 			passive;
};

struct hsls_route {
	ip_prefix_t 		prefix;
};

#endif /* _ROUTER_HSLS_H */
