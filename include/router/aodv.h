// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/aodv.h
 *
 * 	Ad-Hoc On-Demand Distance Vector (AODV)
 */

#ifndef _ROUTER_AODV_H
#define _ROUTER_AODV_H

struct aodv_protocol;

struct aodv_interface {
	struct aodv_protocol 		*aodv;

};

struct aodv_protocol {

};

struct aodv_route {
	struct aodv_protocol 		*aodv;

};

struct aodv_router {
	struct aodv_protocol 		*aodv;

};

#endif /* _ROUTER_AODV_H */
