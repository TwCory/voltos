// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/hip.h
 *
 */

#ifndef _ROUTER_HIP_H
#define _ROUTER_HIP_H

#include <voltos/hip.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct hip_interface {
	struct interface 		*interface;
};

struct hip_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_HIP_H */
