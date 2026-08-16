// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ip.h
 *
 */

#ifndef _ROUTER_IP_H
#define _ROUTER_IP_H

#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/ip.h>
#include <voltos/types.h>
#include <voltos/vrf.h>
#include <net/protocol.h>

struct ip_interface {
	struct interface 		*interface;

};

struct ip_protocol {
	struct protocol 		*protocol;
	struct vrf 			*vrf;
};

#endif /* _ROUTER_IP_H */
