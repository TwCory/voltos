// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/rip6.h
 *
 * 	Routing Information Protocol Next Generation (RIPng)
 */

#ifndef _ROUTER_RIP6_H
#define _ROUTER_RIP6_H

struct rip6_protocol {

};

extern void rip6_init(void);

int rip6_group_join();
int rip6_group_leave();

extern int rip6_request_send();
extern int rip6_response_send();

#endif /* _ROUTER_RIP6_H */
