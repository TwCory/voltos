// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/bgmp.h
 *
 * 	Border Gateway Multicast Protocol (BGMP)
 */

#ifndef _ROUTER_BGMP_H
#define _ROUTER_BGMP_H

#include <voltos/if.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/protocol.h>

struct bgmp_protocol;

struct bgmp_interface {
	struct bgmp_protocol 		*bgmp;
	struct interface 		*interface;
};

struct bgmp_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;

	bool 				enabled;
};

#endif /* _ROUTER_BGMP_H */
