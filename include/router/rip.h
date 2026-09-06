// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/rip.h
 *
 * 	Routing Information Protocol (RIP)
 */

#ifndef _ROUTER_RIP_H
#define _ROUTER_RIP_H

struct rip_protocol {

};

extern void rip_init(void);

int rip_group_join();
int rip_group_leave();

extern int rip_request_send();
extern int rip_response_send();
extern int rip_traceon_send();
extern int rip_traceoff_send();
extern int rip_triggered_request_send();
extern int rip_triggered_response_send();
extern int rip_triggered_ack_send();
extern int rip_update_request_send();
extern int rip_update_response_send();
extern int rip_update_ack_send();

#endif /* _ROUTER_RIP_H */
