// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/dsr.h
 *
 * 	Dynamic Source Routing (DSR)
 */

#ifndef _ROUTER_DSR_H
#define _ROUTER_DSR_H

struct dsr_protocol;

struct dsr_interface {
	struct dsr_protocol 		*dsr;

};

struct dsr_protocol {

};

struct dsr_route {
	struct dsr_protocol 		*dsr;

};

struct dsr_router {
	struct dsr_protocol 		*dsr;

};

#endif /* _ROUTER_DSR_H */
