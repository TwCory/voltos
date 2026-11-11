// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ripng.h
 *
 */

#ifndef _ROUTER_RIPNG_H
#define _ROUTER_RIPNG_H

struct rip6_interface {

};

struct rip6_neighbour {

};

struct rip6_offset_list {

};

struct rip6_route {

};

extern void rip6_request_send();
extern void rip6_request_recv();

extern void rip6_response_send();
extern void rip6_response_recv();

#endif /* _ROUTER_RIPNG_H */
