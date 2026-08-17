// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ilnp.h
 *
 */

#ifndef _ROUTER_ILNP_H
#define _ROUTER_ILNP_H

#include <voltos/if.h>
#include <voltos/ilnp.h>
#include <voltos/inet.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/protocol.h>

struct ilnp_protocol;

struct ilnp_interface {
	struct ilnp_protocol 		*ilnp;
	struct interface 		*interface;
};

struct ilnp_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

#endif /* _ROUTER_ILNP_H */
