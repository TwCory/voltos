// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/shim6.h
 *
 */

#ifndef _ROUTER_SHIM6_H
#define _ROUTER_SHIM6_H

#include <voltos/if.h>
#include <net/protocol.h>

struct shim6_interface {
	struct interface 		*interface;
};

struct shim6_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_SHIM6_H */
