// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/pfr.h
 *
 *	Performance Routing (PfR) Feature
 */

#ifndef _ROUTER_PFR_H
#define _ROUTER_PFR_H

struct pfr_border {

};

struct pfr_interface {
	struct interface 		*interface;
};

struct pfr_master {

};

struct pfr_relay {

};

struct pfr_route {
	struct route 			*route;
};

#endif /* _ROUTER_PFR_H */
