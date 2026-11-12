// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/batman-adv.h
 *
 *	Better Approach to Mobile Ad Hoc Networks (BATMAN)
 */

#ifndef _ROUTER_BATMAN_ADV_H
#define _ROUTER_BATMAN_ADV_H

struct batadv_interface {
	struct batadv_router 		*batadv;
	struct interface 		*interface;
};

struct batadv_route {
	struct batadv_router 		*batadv;
	struct route 			*route;
};

struct batadv_router {

};

extern void batadv_interface_init(void);
extern void batadv_router_init(void);

extern void batadv_msg_send();
extern void batadv_msg_recv();

#endif /* _ROUTER_BATMAN_ADV_H */
