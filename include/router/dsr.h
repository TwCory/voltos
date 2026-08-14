// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/dsr.h
 *
 * 	Dynamic Source Routing (DSR)
 */

#ifndef _ROUTER_DSR_H
#define _ROUTER_DSR_H

#include <voltos/inet.h>
#include <voltos/types.h>

struct dsr_protocol {
	bool 			enabled;
};

struct dsr_interface {
	bool 			passive;
};

struct dsr_route {
	ip_prefix_t 		prefix;
};

#endif /* _ROUTER_DSR_H */
