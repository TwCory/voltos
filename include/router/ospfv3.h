// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ospfv3.h
 *
 * 	Open Shortest Path First, Version 3 (OSPFv3)
 */

#ifndef _ROUTER_OSPFV3_H
#define _ROUTER_OSPFV3_H

struct ospfv3_protocol {

};

extern void ospfv3_init(void);

int ospfv3_allrouters_group_join();
int ospfv3_allrouters_group_leave();

int ospfv3_drouters_group_join();
int ospfv3_drouters_group_leave();

#endif /* _ROUTER_OSPFV3_H */
