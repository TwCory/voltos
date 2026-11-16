// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/l3vpn.h
 *
 * 	Layer 3 VPN (L3VPN)
 */

#ifndef _NBAPI_VOLTOS_L3VPN_H
#define _NBAPI_VOLTOS_L3VPN_H

#define L3VPN_PROFILE_NAME_SIZE			32

#define L3VPN_MPLS_MTU_MIN			64
#define L3VPN_MPLS_MTU_MAX			17916

enum {
	L3VPN_TRANSPORT_T_UNSPEC		= 0,
	L3VPN_TRANSPORT_T_IPV4			= 1,
	__L3VPN_TRANSPORT_T_MAX__
};

enum {
	L3VPN_PROTOCOL_T_UNSPEC			= 0,
	L3VPN_PROTOCOL_T_GRE			= 1,
	__L3VPN_PROTOCOL_T_MAX__
};

#endif /* _NBAPI_VOLTOS_L3VPN_H */
