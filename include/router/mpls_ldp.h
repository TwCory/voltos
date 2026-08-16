// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/mpls_ldp.h
 *
 */

#ifndef _ROUTER_MPLS_LDP_H
#define _ROUTER_MPLS_LDP_H

#include <voltos/if.h>
#include <net/protocol.h>

struct ldp_interface {
	struct interface 		*interface;
};

struct ldp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_MPLS_LDP_H */
