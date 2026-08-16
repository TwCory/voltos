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
#include <net/protocol.h>

struct pim_interface {
	struct interface 		*interface;
};

struct pim_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_PIM_H */
