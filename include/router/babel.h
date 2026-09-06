// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/babel.h
 *
 * 	Babel Routing Protocol
 */

#ifndef _ROUTER_BABEL_H
#define _ROUTER_BABEL_H

struct babel_protocol {

};

extern void babel_init(void);

int babel_group_join();
int babel_group_leave();

extern int babel_ack_request_send();
extern int babel_ack_send();
extern int babel_hello_send();
extern int babel_ihu_send();
extern int babel_router_id_send();
extern int babel_nexthop_send();
extern int babel_update_send();
extern int babel_route_request_send();
extern int babel_seqno_request_send();
extern int babel_tspc_send();
extern int babel_hmac_send();
extern int babel_mac_send();
extern int babel_pc_send();
extern int babel_challenge_request_send();
extern int babel_challenge_reply_send();

#endif /* _ROUTER_BABEL_H */
