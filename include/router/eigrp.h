// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/eigrp.h
 *
 * 	Enhanced Interior Gateway Routing Protocol (EIGRP)
 */

#ifndef _ROUTER_EIGRP_H
#define _ROUTER_EIGRP_H

struct eigrp_protocol {

};

extern void eigrp_init(void);

int eigrp_group_join();
int eigrp_group_leave();

#endif /* _ROUTER_EIGRP_H */
