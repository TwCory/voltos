// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/decnet.h
 *
 */

#ifndef _ROUTER_DECNET_H
#define _ROUTER_DECNET_H

#include <voltos/decnet.h>
#include <voltos/if.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct decnet_protocol;

struct decnet_interface {
	struct decnet_protocol 		*decnet;
	struct interface 		*interface;
};

struct decnet_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_DECNET_H */
