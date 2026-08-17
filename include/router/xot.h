// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/xot.h
 *
 */

#ifndef _ROUTER_XOT_H
#define _ROUTER_XOT_H

#include <voltos/if.h>
#include <voltos/types.h>
#include <voltos/xot.h>
#include <net/protocol.h>

struct xot_protocol;

struct xot_interface {
	struct xot_protocol 		*xot;
	struct interface 		*interface;
};

struct xot_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_XOT_H */
