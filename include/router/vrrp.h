// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/vrrp.h
 *
 * 	Virtual Router Redundancy Protocol (VRRP)
 */

#ifndef _ROUTER_VRRP_H
#define _ROUTER_VRRP_H

extern void vrrp_init(void);

int vrrp_group_join();
int vrrp_group_leave();

#endif /* _ROUTER_VRRP_H */
