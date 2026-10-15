// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/rip6.h
 *
 * 	Routing Information Protocol Next Generation (RIPng)
 */

#ifndef _ROUTER_RIP6_H
#define _ROUTER_RIP6_H

#include <router/ripng/bfd.h>
#include <router/ripng/interface.h>
#include <router/ripng/route.h>
#include <router/ripng/snmp.h>
#include <router/ripng/types.h>

struct rip6_protocol {

};

extern void rip6_init(void);

int rip6_group_join();
int rip6_group_leave();

extern int rip6_request_send(rip6_address_t *dst);
extern int rip6_response_send(rip6_address_t *dst);

#endif /* _ROUTER_RIP6_H */
