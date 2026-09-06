// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ospf.h
 *
 * 	Open Shortest Path First (OSPF)
 */

#ifndef _ROUTER_OSPF_H
#define _ROUTER_OSPF_H

struct ospf_protocol {

};

extern void ospf_init(void);

int ospf_allrouters_group_join();
int ospf_allrouters_group_leave();

int ospf_drouters_group_join();
int ospf_drouters_group_leave();

#endif /* _ROUTER_OSPF_H */
