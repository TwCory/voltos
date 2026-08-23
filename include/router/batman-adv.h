// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/batman-adv.h
 *
 */

#ifndef _ROUTER_BATMAN_ADV_H
#define _ROUTER_BATMAN_ADV_H

struct batadv_protocol;

struct batadv_interface {
	struct batadv_protocol 		*batadv;

};

struct batadv_protocol {

};

struct batadv_route {
	struct batadv_protocol 		*batadv;

};

struct batadv_router {
	struct batadv_protocol 		*batadv;

};

#endif /* _ROUTER_BATMAN_ADV_H */
