// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/sdrp.h
 *
 * 	Source Demand Routing Protocol (SDRP)
 */

#ifndef _ROUTER_SDRP_H
#define _ROUTER_SDRP_H

#include <voltos/if.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct sdrp_interface {
	struct interface 		*interface;
};

struct sdrp_protocol {
	struct protocol 		*protocol;
};

struct sdrp_route {
	struct route 			*route;
};

struct sdrp_router {
	bool 				shutdown;
};

#endif /* _ROUTER_SDRP_H */
