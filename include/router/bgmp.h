// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/bgmp.h
 *
 *	Border Gateway Multicast Protocol (BGMP)
 */

#ifndef _ROUTER_BGMP_H
#define _ROUTER_BGMP_H

struct bgmp_interface {
	struct interface 		*interface;
};

struct bgmp_mroute {
	struct mroute 			*mroute;
};

extern void bgmp_interface_init(void);

extern void bgmp_msg_send();
extern void bgmp_msg_recv();

#endif /* _ROUTER_BGMP_H */
