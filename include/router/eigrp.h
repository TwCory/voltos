// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/eigrp.h
 *
 *	Enhanced Interior Gateway Routing Protocol (EIGRP)
 */

#ifndef _ROUTER_EIGRP_H
#define _ROUTER_EIGRP_H

typedef u16					eigrp_asn_t;

struct eigrp_interface {
	struct eigrp_router			*eigrp;
	struct interface 			*interface;
};

struct eigrp_neighbour {
	struct eigrp_router			*eigrp;
};

struct eigrp_router {
	eigrp_asn_t				asn;
	const char				name[EIGRP_INSTANCE_NAME_SIZE];
	bool 					enabled;

	distance_t				distance_internal;
	distance_t				distance_external;
};

extern void eigrp_interface_init(void);
extern void eigrp_router_init(void);

extern void eigrp_hello_send();
extern void eigrp_hello_recv();

extern void eigrp_query_send();
extern void eigrp_query_recv();

extern void eigrp_reply_send();
extern void eigrp_reply_recv();

extern void eigrp_siaQuery_send();
extern void eigrp_siaQuery_recv();

extern void eigrp_siaReply_send();
extern void eigrp_siaReply_recv();

extern void eigrp_update_send();
extern void eigrp_update_recv();

#endif /* _ROUTER_EIGRP_H */
