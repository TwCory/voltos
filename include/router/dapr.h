// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/dapr.h
 *
 * 	Dynamic Application Policy Routing (DAPR)
 */

#ifndef _ROUTER_DAPR_H
#define _ROUTER_DAPR_H

#include <voltos/dapr.h>
#include <voltos/if.h>
#include <voltos/route.h>

struct dapr_interface {
	struct interface 		*interface;
};

#endif /* _ROUTER_DAPR_H */
