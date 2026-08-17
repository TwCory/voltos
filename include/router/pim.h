// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/pim.h
 *
 * 	Protocol-Independent Multicast (PIM)
 */

#ifndef _ROUTER_PIM_H
#define _ROUTER_PIM_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/pim.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/protocol.h>

struct pim_protocol;

struct pim_interface {
	struct pim_protocol 		*pim;
	struct interface 		*interface;
};

struct pim_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;

	bool 				enabled;
};

#endif /* _ROUTER_PIM_H */
