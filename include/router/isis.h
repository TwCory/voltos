// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/isis.h
 *
 */

#ifndef _ROUTER_ISIS_H
#define _ROUTER_ISIS_H

#include <voltos/inet.h>
#include <voltos/nsap.h>
#include <voltos/types.h>

struct isis_protocol {
	nsap_addr_t 			instance;
	bool 				enabled;
};

struct isis_interface {
	bool 				passive;
};

struct isis_circuit {

};

struct isis_route {
	ip_prefix_t 			prefix;
};

#endif /* _ROUTER_ISIS_H */
