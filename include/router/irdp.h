// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/irdp.h
 *
 */

#ifndef _ROUTER_IRDP_H
#define _ROUTER_IRDP_H

#include <voltos/if.h>
#include <net/protocol.h>

struct irdp_protocol;

struct irdp_interface {
	struct irdp_protocol 		*irdp;
	struct interface 		*interface;
};

struct irdp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_IRDP_H */
