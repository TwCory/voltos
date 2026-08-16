// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/hsls.h
 *
 * 	Hazy-Sighted Link State (HSLS)
 */

#ifndef _ROUTER_HSLS_H
#define _ROUTER_HSLS_H

#include <voltos/hsls.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/protocol.h>

struct hsls_interface {
	struct interface 		*interface;
};

struct hsls_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

struct hsls_route {
	struct route 			*route;

	ip_prefix_t 			prefix;
};

struct hsls_router {
	bool 				shutdown;
};

#endif /* _ROUTER_HSLS_H */
