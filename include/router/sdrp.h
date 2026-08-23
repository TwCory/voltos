// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/sdrp.h
 *
 * 	Source Demand Routing Protocol (SDRP)
 */

#ifndef _ROUTER_SDRP_H
#define _ROUTER_SDRP_H

struct sdrp_protocol;

struct sdrp_interface {
	struct sdrp_protocol 		*sdrp;

};

struct sdrp_protocol {

};

struct sdrp_route {
	struct sdrp_protocol 		*sdrp;

};

struct sdrp_router {
	struct sdrp_protocol 		*sdrp;

};

#endif /* _ROUTER_SDRP_H */
