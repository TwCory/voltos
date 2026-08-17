// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/hsrp.h
 *
 * 	Hot Standby Router Protocol (HSRP)
 */

#ifndef _ROUTER_HSRP_H
#define _ROUTER_HSRP_H

#include <voltos/hsrp.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/types.h>
#include <net/protocol.h>

struct hsrp_protocol;

struct hsrp_group {
	struct hsrp_protocol 		*hsrp;
};

struct hsrp_interface {
	struct hsrp_protocol 		*hsrp;
	struct interface 		*interface;
};

struct hsrp_protocol {
	struct protocol 		*protocol;
};

#endif /* _ROUTER_HSRP_H */
