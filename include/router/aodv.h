// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/aodv.h
 *
 * 	Ad-Hoc On-Demand Distance Vector (AODV)
 */

#ifndef _ROUTER_AODV_H
#define _ROUTER_AODV_H

struct aodv_protocol {

};

extern void aodv_init(void);

extern int aodv_rreq_send();
extern int aodv_rrep_send();
extern int aodv_rerr_send();
extern int aodv_rrep_ack_send();

#endif /* _ROUTER_AODV_H */
