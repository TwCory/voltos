// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/rip.h
 *
 * 	Routing Information Protocol (RIP)
 */

#ifndef _ROUTER_RIP_H
#define _ROUTER_RIP_H

#include <router/ripv2/bfd.h>
#include <router/ripv2/interface.h>
#include <router/ripv2/route.h>
#include <router/ripv2/snmp.h>
#include <router/ripv2/types.h>

struct rip_protocol {

};

extern void rip_init(void);

int rip_group_join(struct rip_interface *iface);
int rip_group_leave(struct rip_interface *iface);

extern int rip_request_send(rip_address_t *dst);
extern int rip_response_send(rip_address_t *dst);
extern int rip_traceon_send(rip_address_t *dst);
extern int rip_traceoff_send(rip_address_t *dst);
extern int rip_triggered_request_send(rip_address_t *dst);
extern int rip_triggered_response_send(rip_address_t *dst);
extern int rip_triggered_ack_send(rip_address_t *dst);
extern int rip_update_request_send(rip_address_t *dst);
extern int rip_update_response_send(rip_address_t *dst);
extern int rip_update_ack_send(rip_address_t *dst);

#endif /* _ROUTER_RIP_H */
