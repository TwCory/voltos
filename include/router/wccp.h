// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/wccp.h
 *
 */

#ifndef _ROUTER_WCCP_H
#define _ROUTER_WCCP_H

#include <voltos/wccp.h>
#include <net/protocol.h>

struct wccp_interface {

};

struct wccp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_WCCP_H */
