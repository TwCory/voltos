// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/eigrp.h
 *
 */

#ifndef _VOLTOS_EIGRP_H
#define _VOLTOS_EIGRP_H

#include <nbapi/voltos/eigrp.h>

struct eigrp_router_conf {
	struct {
		struct {

		} ipv4_unicast;
		struct {

		} ipv6_unicast;
	} address_family;
};

struct eigrp_ipv6_router_conf {

};

struct eigrp_interface_conf {

};

#endif /* _VOLTOS_EIGRP_H */
