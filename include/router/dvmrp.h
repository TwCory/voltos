// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/dvmrp.h
 *
 * 	Distance Vector Multicast Routing Protocol (DVMRP)
 */

#ifndef _ROUTER_DVMRP_H
#define _ROUTER_DVMRP_H

#include <voltos/dvmrp.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct dvmrp_interface {
	struct interface 		*interface;
};

struct dvmrp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_DVMRP_H */
