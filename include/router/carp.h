// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/carp.h
 *
 * 	Common Address Redundancy Protocol (CARP)
 */

#ifndef _ROUTER_CARP_H
#define _ROUTER_CARP_H

#include <voltos/carp.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct carp_group {

};

struct carp_interface {
	struct interface 		*interface;
};

struct carp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_CARP_H */
