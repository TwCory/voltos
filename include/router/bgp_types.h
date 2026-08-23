// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/bgp_types.h
 *
 */

#ifndef _ROUTER_BGP_TYPES_H
#define _ROUTER_BGP_TYPES_H

#include <voltos/inet.h>
#include <voltos/types.h>

typedef enum {
	BGP_AFI_T_UNSPEC 		= 0,
	BGP_AFI_T_IPV4_FLOWSPEC 	= 1,
	BGP_AFI_T_IPV4_MDT 		= 2,
	BGP_AFI_T_IPV4_MULTICAST 	= 3,
	BGP_AFI_T_IPV4_MVPN 		= 4,
	BGP_AFI_T_IPV4_UNICAST 		= 5,
	BGP_AFI_T_IPV6_FLOWSPEC 	= 6,
	BGP_AFI_T_IPV6_MULTICAST 	= 7,
	BGP_AFI_T_IPV6_MVPN 		= 8,
	BGP_AFI_T_IPV6_UNICAST 		= 9,
	BGP_AFI_T_L2VPN_EVPN 		= 10,
	BGP_AFI_T_L2VPN_VPLS 		= 11,
	BGP_AFI_T_NSAP_UNICAST 		= 12,
	BGP_AFI_T_RTFILTER_UNICAST 	= 13,
	BGP_AFI_T_VPNV4_FLOWSPEC 	= 14,
	BGP_AFI_T_VPNV4_MULTICAST 	= 15,
	BGP_AFI_T_VPNV4_UNICAST 	= 16,
	BGP_AFI_T_VPNV6_FLOWSPEC 	= 17,
	BGP_AFI_T_VPNV6_MULTICAST 	= 18,
	BGP_AFI_T_VPNV6_UNICAST 	= 19,
	__BGP_AFI_T_MAX__
} bgp_afi_t;

typedef union {
	asn16_t 			as16;
	asn32_t 			as32;
} bgp_asn_t;

#endif /* _ROUTER_BGP_TYPES_H */
