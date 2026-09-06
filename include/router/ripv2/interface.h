// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ripv2/interface.h
 *
 */

#ifndef _ROUTER_RIPV2_INTERFACE_H
#define _ROUTER_RIPV2_INTERFACE_H

#include <router/rip.h>

struct rip_interface {
	struct rip_protocol *rip;
};

#endif /* _ROUTER_RIPV2_INTERFACE_H */
