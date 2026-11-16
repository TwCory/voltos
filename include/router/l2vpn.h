// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/l2vpn.h
 *
 */

#ifndef _ROUTER_L2VPN_H
#define _ROUTER_L2VPN_H

struct l2vpn_class {
	const char 			name[PSEUDOWIRE_CLASS_NAME_SIZE];
};

struct l2vpn_interface {
	struct interface 		*interface;
};

#endif /* _ROUTER_L2VPN_H */
