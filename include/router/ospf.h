// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ospf.h
 *
 * 	Open Shortest Path First (OSPF)
 */

#ifndef _ROUTER_OSPF_H
#define _ROUTER_OSPF_H

struct ospf_protocol;

struct ospf_area {
	struct ospf_protocol 		*ospf;
};

struct ospf_interface {
	struct ospf_protocol 		*ospf;

};

struct ospf_ism {
	struct ospf_protocol 		*ospf;
};

struct ospf_neighbour {
	struct ospf_protocol 		*ospf;

};

struct ospf_nsm {
	struct ospf_protocol 		*ospf;
};

struct ospf_protocol {

};

struct ospf_route {
	struct ospf_protocol 		*ospf;

};

struct ospf_router {
	struct ospf_protocol 		*ospf;

};

struct ospf_virtual_link {
	struct ospf_protocol 		*ospf;
};

#endif /* _ROUTER_OSPF_H */
