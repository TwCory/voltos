// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/aodv.h
 *
 */

#ifndef _VOLTOS_AODV_H
#define _VOLTOS_AODV_H

#include <nbapi/voltos/aodv.h>

struct aodv_router_conf {
	struct {
		struct {

		} ipv4_unicast;
		struct {

		} ipv6_unicast;
	} address_family;
};

struct aodv_interface_conf {

};

#endif /* _VOLTOS_AODV_H */
