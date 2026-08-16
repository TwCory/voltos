// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/clns.h
 *
 */

#ifndef _ROUTER_CLNS_H
#define _ROUTER_CLNS_H

#include <voltos/clns.h>
#include <voltos/if.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct clns_interface {
	struct interface 		*interface;

	bool 				checksum;
	bool 				enable;
	u16 				mtu;
};

struct clns_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_CLNS_H */
