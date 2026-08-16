// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/pnni.h
 *
 * 	Private Network-to-Network Interface (PNNI)
 */

#ifndef _ROUTER_PNNI_H
#define _ROUTER_PNNI_H

#include <voltos/if.h>
#include <voltos/route.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct pnni_interface {
	struct interface 		*interface;
};

struct pnni_protocol {
	struct protocol 		*protocol;
};

struct pnni_route {
	struct route 			*route;
};

struct pnni_router {
	bool 				shutdown;
};

#endif /* _ROUTER_PNNI_H */
