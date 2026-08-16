// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/nlsp.h
 *
 */

#ifndef _ROUTER_NLSP_H
#define _ROUTER_NLSP_H

#include <voltos/if.h>
#include <voltos/route.h>
#include <net/protocol.h>

struct nlsp_interface {
	struct interface 		*interface;
};

struct nlsp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_NLSP_H */
