// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/dvmrp.h
 *
 *	Distance Vector Multicast Routing Protocol (DVMRP)
 */

#ifndef _ROUTER_DVMRP_H
#define _ROUTER_DVMRP_H

struct dvmrp_interface {
	struct interface 		*interface;
};

struct dvmrp_mroute {
	struct mroute 			*mroute;
};

extern void dvmrp_interface_init(void);

#endif /* _ROUTER_DVMRP_H */
