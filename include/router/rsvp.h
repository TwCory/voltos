// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/rsvp.h
 *
 * 	Resource Reservation Protocol (RSVP)
 */

#ifndef _ROUTER_RSVP_H
#define _ROUTER_RSVP_H

#include <voltos/if.h>
#include <net/protocol.h>

struct rsvp_protocol;

struct rsvp_interface {
	struct rsvp_protocol 		*rsvp;
	struct interface 		*interface;
};

struct rsvp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_RSVP_H */
