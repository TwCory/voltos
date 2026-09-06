// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/carp.h
 *
 * 	Common Address Redundancy Protocol (CARP)
 */

#ifndef _ROUTER_CARP_H
#define _ROUTER_CARP_H

extern void carp_init(void);

int carp_group_join();
int carp_group_leave();

#endif /* _ROUTER_CARP_H */
