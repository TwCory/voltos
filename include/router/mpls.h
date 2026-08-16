// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/mpls.h
 *
 */

#ifndef _ROUTER_MPLS_H
#define _ROUTER_MPLS_H

#include <voltos/if.h>
#include <voltos/mpls.h>
#include <net/protocol.h>

struct mpls_interface {
	struct interface 		*interface;
};

struct mpls_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_MPLS_H */
