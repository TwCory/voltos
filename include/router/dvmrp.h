// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/dvmrp.h
 *
 * 	Distance Vector Multicast Routing Protocol (DVMRP)
 */

#ifndef _ROUTER_DVMRP_H
#define _ROUTER_DVMRP_H

struct dvmrp_protocol {

};

extern void dvmrp_init(void);

int dvmrp_group_join();
int dvmrp_group_leave();

extern int dvmrp_send();

#endif /* _ROUTER_DVMRP_H */
