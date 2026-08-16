// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/vrrp.h
 *
 * 	Virtual Router Redundancy Protocol (VRRP)
 */

#ifndef _ROUTER_VRRP_H
#define _ROUTER_VRRP_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/types.h>
#include <voltos/vrrp.h>
#include <net/protocol.h>

struct vrrp_interface {
	struct interface 		*interface;
};

struct vrrp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_VRRP_H */
