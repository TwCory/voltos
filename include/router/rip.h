// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/rip.h
 *
 */

#ifndef _ROUTER_RIP_H
#define _ROUTER_RIP_H

struct rip_interface {

};

struct rip_neighbour {

};

struct rip_offset_list {

};

struct rip_route {

};

extern void rip_request_send();
extern void rip_request_recv();

extern void rip_response_send();
extern void rip_response_recv();

#endif /* _ROUTER_RIP_H */
