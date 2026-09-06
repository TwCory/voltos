// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/hsrp.h
 *
 * 	Hot Standby Router Protocol (HSRP)
 */

#ifndef _ROUTER_HSRP_H
#define _ROUTER_HSRP_H

extern void hsrp_init(void);

int hsrp_group_join();
int hsrp_group_leave();

#endif /* _ROUTER_HSRP_H */
