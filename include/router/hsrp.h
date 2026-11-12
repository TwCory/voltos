// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/hsrp.h
 *
 *	Hot Standby Router Protocol (HSRP)
 */

#ifndef _ROUTER_HSRP_H
#define _ROUTER_HSRP_H

struct hsrp_interface {
	struct interface 		*interface;
};

extern void hsrp_interface_init(void);

#endif /* _ROUTER_HSRP_H */
