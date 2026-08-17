// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/igmp.h
 *
 * 	Internet Group Management Protocol (IGMP)
 */

#ifndef _ROUTER_IGMP_H
#define _ROUTER_IGMP_H

#include <voltos/if.h>
#include <net/protocol.h>

struct igmp_protocol;

struct igmp_interface {
	struct igmp_protocol 		*igmp;
	struct interface 		*interface;
};

struct igmp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_IGMP_H */
