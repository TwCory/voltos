// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ospf.h
 *
 *	Open Shortest Path First (OSPF)
 */

#ifndef _ROUTER_OSPF_H
#define _ROUTER_OSPF_H

struct ospf_area {
	struct ospf_router		*ospf;
};

struct ospf_interface {
	struct ospf_router		*ospf;
	struct interface 		*interface;
};

struct ospf_ism {
	struct ospf_router		*ospf;
};

struct ospf_neighbour {
	struct ospf_router		*ospf;
};

struct ospf_nsm {
	struct ospf_router		*ospf;
};

struct ospf_router {

};

extern void ospf_interface_init(void);
extern void ospf_router_init(void);

extern void ospf_dbdesc_send();
extern void ospf_dbdesc_recv();

extern void ospf_hello_send();
extern void ospf_hello_recv();

extern void ospf_lsack_send();
extern void ospf_lsack_recv();

extern void ospf_lsreq_send();
extern void ospf_lsreq_recv();

extern void ospf_lsupd_send();
extern void ospf_lsupd_recv();

#endif /* _ROUTER_OSPF_H */
