// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/olsr.h
 *
 * 	Optimized Link State Routing (OLSR)
 */

#ifndef _ROUTER_OLSR_H
#define _ROUTER_OLSR_H

extern void olsr_init(void);

extern int olsr_hello_send();
extern int olsr_tc_send();
extern int olsr_mid_send();
extern int olsr_hna_send();

#endif /* _ROUTER_OLSR_H */
