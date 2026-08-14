// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/l3vpn.h
 *
 *	Layer 3 VPN IP/MPLS Encapsulation
 */

#ifndef _NBAPI_VOLTOS_L3VPN_H
#define _NBAPI_VOLTOS_L3VPN_H

#define L3VPN_PROFILE_NAME_SIZE			32

enum l3vpn_transport_type {
	L3VPN_TRANSPORT_TYPE_T_UNSPEC		= 0,
	L3VPN_TRANSPORT_TYPE_T_IPV4		= 1,
	L3VPN_TRANSPORT_TYPE_T_IPV6		= 2,
	__L3VPN_TRANSPORT_TYPE_T_MAX__
};

enum l3vpn_protocol {
	L3VPN_PROTOCOL_T_UNSPEC			= 0,
	L3VPN_PROTOCOL_T_GRE			= 1,
	__L3VPN_PROTOCOL_T_MAX__
};

#endif /* _NBAPI_VOLTOS_L3VPN_H */
