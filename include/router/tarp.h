// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/tarp.h
 *
 */

#ifndef _ROUTER_TARP_H
#define _ROUTER_TARP_H

#include <voltos/if.h>
#include <net/protocol.h>

struct tarp_interface {
	struct interface 		*interface;
};

struct tarp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_TARP_H */
