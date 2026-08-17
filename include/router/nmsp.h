// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/nmsp.h
 *
 */

#ifndef _ROUTER_NMSP_H
#define _ROUTER_NMSP_H

#include <voltos/if.h>
#include <voltos/route.h>
#include <net/protocol.h>

struct nmsp_protocol;

struct nmsp_interface {
	struct nmsp_protocol 		*nmsp;
	struct interface 		*interface;
};

struct nmsp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_NMSP_H */
