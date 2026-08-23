// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/hsrp.h
 *
 * 	Hot Standby Router Protocol (HSRP)
 */

#ifndef _ROUTER_HSRP_H
#define _ROUTER_HSRP_H

struct hsrp_protocol;

struct hsrp_group {
	struct hsrp_protocol 		*hsrp;
};

struct hsrp_interface {
	struct hsrp_protocol 		*hsrp;

};

struct hsrp_protocol {

};

#endif /* _ROUTER_HSRP_H */
