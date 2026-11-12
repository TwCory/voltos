// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/aodv.h
 *
 *	Ad Hoc On-Demand Distance Vector (AODV)
 */

#ifndef _ROUTER_AODV_H
#define _ROUTER_AODV_H

struct aodv_interface {
	struct aodv_router		*aodv;
	struct interface 		*interface;
};

struct aodv_route {
	struct aodv_router		*aodv;
	struct route 			*route;
};

struct aodv_router {

};

extern void aodv_interface_init(void);
extern void aodv_router_init(void);

extern void aodv_RERR_send();
extern void aodv_RERR_recv();

extern void aodv_RREP_send();
extern void aodv_RREP_recv();

extern void aodv_RREP_ACK_send();
extern void aodv_RREP_ACK_recv();

extern void aodv_RREQ_send();
extern void aodv_RREQ_recv();

#endif /* _ROUTER_AODV_H */
