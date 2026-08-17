// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/wccp.h
 *
 */

#ifndef _ROUTER_WCCP_H
#define _ROUTER_WCCP_H

#include <voltos/if.h>
#include <voltos/wccp.h>
#include <net/protocol.h>

struct wccp_protocol;

struct wccp_interface {
	struct wccp_protocol 		*wccp;
	struct interface 		*interface;
};

struct wccp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_WCCP_H */
