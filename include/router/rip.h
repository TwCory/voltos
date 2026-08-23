// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/rip.h
 *
 * 	Routing Information Protocol (RIP)
 */

#ifndef _ROUTER_RIP_H
#define _ROUTER_RIP_H

struct rip_protocol;

struct rip_interface {
	struct rip_protocol 		*rip;

};

struct rip_neighbour {
	struct rip_protocol 		*rip;

};

struct rip_offset_list {
	struct rip_protocol 		*rip;
};

struct rip_protocol {

};

struct rip_route {
	struct rip_protocol 		*rip;

};

struct rip_router {
	struct rip_protocol 		*rip;

};

#endif /* _ROUTER_RIP_H */
