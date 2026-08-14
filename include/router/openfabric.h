// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/openfabric.h
 *
 */

#ifndef _ROUTER_OPENFABRIC_H
#define _ROUTER_OPENFABRIC_H

#include <voltos/inet.h>
#include <voltos/nsap.h>
#include <voltos/types.h>

struct openfabric_protocol {
	nsap_addr_t 		instance;
	bool 			enabled;
};

struct openfabric_interface {
	bool 			passive;
};

struct openfabric_route {
	ip_prefix_t 		prefix;
};

#endif /* _ROUTER_OPENFABRIC_H */
