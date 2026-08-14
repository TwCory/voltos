// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/idrp.h
 *
 */

#ifndef _ROUTER_IDRP_H
#define _ROUTER_IDRP_H

#include <voltos/inet.h>
#include <voltos/types.h>

struct idrp_protocol {
	bool 			enabled;
};

struct idrp_interface {
	bool 			passive;
};

struct idrp_route {
	ip_prefix_t 		prefix;
};

#endif /* _ROUTER_IDRP_H */
