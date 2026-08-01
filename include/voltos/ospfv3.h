// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ospfv3.h
 *
 */

#ifndef _VOLTOS_OSPFV3_H
#define _VOLTOS_OSPFV3_H

#include <nbapi/voltos/ospfv3.h>

struct ospfv3_router_conf {
	struct {
		struct {

		} ipv4_unicast;
		struct {

		} ipv6_unicast;
	} address_family;
};

struct ospfv3_ipv6_router_conf {

};

struct ospfv3_interface_conf {

};

#endif /* _VOLTOS_OSPFV3_H */
