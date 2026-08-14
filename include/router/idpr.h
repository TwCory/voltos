// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/idpr.h
 *
 */

#ifndef _ROUTER_IDPR_H
#define _ROUTER_IDPR_H

#include <voltos/inet.h>
#include <voltos/types.h>

struct idpr_protocol {
	bool 			enabled;
};

struct idpr_interface {
	bool 			passive;
};

struct idpr_route {
	ip_prefix_t 		prefix;
};

#endif /* _ROUTER_IDPR_H */
