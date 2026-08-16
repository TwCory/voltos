// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ipx.h
 *
 */

#ifndef _ROUTER_IPX_H
#define _ROUTER_IPX_H

#include <voltos/if.h>
#include <voltos/ipx.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct ipx_interface {
	struct interface 		*interface;
};

struct ipx_protocol {
	struct protocol 		*protocol;
};


#endif /* _ROUTER_IPX_H */
