// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/eigrp.h
 *
 */

#ifndef _ROUTER_EIGRP_H
#define _ROUTER_EIGRP_H

struct eigrp_fsm {

};

struct eigrp_interface {

};

struct eigrp_neighbour {

};

struct eigrp_route {

};

extern void eigrp_hello_send();
extern void eigrp_hello_recv();

extern void eigrp_query_send();
extern void eigrp_query_recv();

extern void eigrp_reply_send();
extern void eigrp_reply_recv();

extern void eigrp_siaquery_send();
extern void eigrp_siaquery_recv();

extern void eigrp_siareply_send();
extern void eigrp_siareply_recv();

extern void eigrp_update_send();
extern void eigrp_update_recv();

#endif /* _ROUTER_EIGRP_H */
