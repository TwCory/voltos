// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ip_route.h
 *
 *	IPv4 Router
 */

#ifndef _NBAPI_VOLTOS_IP_ROUTE_H
#define _NBAPI_VOLTOS_IP_ROUTE_H

#define IP_ROUTE_PROFILE_NAME_LEN		(32)

enum {
	IP_PROTOCOL_T_UNSPEC			= 0,
/* Unknown or invalid protocol */
#define IP_PROTOCOL_UNSPEC			IP_PROTOCOL_T_UNSPEC
	IP_PROTOCOL_T_AODV			= 1,
/* Ad Hoc On-Demand Distance Vector */
#define IP_PROTOCOL_AODV			IP_PROTOCOL_T_AODV
	IP_PROTOCOL_T_APPLICATION		= 2,
/* Application route */
#define IP_PROTOCOL_APPLICATION			IP_PROTOCOL_T_APPLICATION
	IP_PROTOCOL_T_BABEL			= 3,
/* Babel routing protocol */
#define IP_PROTOCOL_BABEL			IP_PROTOCOL_T_BABEL
	IP_PROTOCOL_T_BATMAN_ADV		= 4,
/* Better Approach to Mobile Ad Hoc Networks */
#define IP_PROTOCOL_BATMAN_ADV			IP_PROTOCOL_T_BATMAN_ADV
	IP_PROTOCOL_T_BGP			= 5,
/* Border Gateway Protocol */
#define IP_PROTOCOL_BGP				IP_PROTOCOL_T_BGP
	IP_PROTOCOL_T_CONNECTED			= 6,
/* Directly connected route */
#define IP_PROTOCOL_CONNECTED			IP_PROTOCOL_T_CONNECTED
	IP_PROTOCOL_T_DSR			= 7,
/* Dynamic Source Routing */
#define IP_PROTOCOL_DSR				IP_PROTOCOL_T_DSR
	IP_PROTOCOL_T_EIGRP			= 8,
/* Enhanced Interior Gateway Routing Protocol */
#define IP_PROTOCOL_EIGRP			IP_PROTOCOL_T_EIGRP
	IP_PROTOCOL_T_HSLS			= 9,
/* Hazy-Sighted Link State */
#define IP_PROTOCOL_HSLS			IP_PROTOCOL_T_HSLS
	IP_PROTOCOL_T_IDPR			= 10,
/* Inter-Domain Policy Routing protocol */
#define IP_PROTOCOL_IDPR			IP_PROTOCOL_T_IDPR
	IP_PROTOCOL_T_IDRP			= 11,
/* Inter-Domain Routing Protocol */
#define IP_PROTOCOL_IDRP			IP_PROTOCOL_T_IDRP
	IP_PROTOCOL_T_ISIS			= 12,
/* Intermediate System to Intermediate System */
#define IP_PROTOCOL_ISIS			IP_PROTOCOL_T_ISIS
	IP_PROTOCOL_T_LISP			= 13,
/* Locator/ID Separation Protocol */
#define IP_PROTOCOL_LISP			IP_PROTOCOL_T_LISP
	IP_PROTOCOL_T_LOCAL			= 14,
/* Local network route */
#define IP_PROTOCOL_LOCAL			IP_PROTOCOL_T_LOCAL
	IP_PROTOCOL_T_MOBILE			= 15,
/* Mobile IP */
#define IP_PROTOCOL_MOBILE			IP_PROTOCOL_T_MOBILE
	IP_PROTOCOL_T_NHRP			= 16,
/* Next Hop Resolution Protocol */
#define IP_PROTOCOL_NHRP			IP_PROTOCOL_T_NHRP
	IP_PROTOCOL_T_ODR			= 17,
/* On-Demand Routing */
#define IP_PROTOCOL_ODR				IP_PROTOCOL_T_ODR
	IP_PROTOCOL_T_OLSR			= 18,
/* Optimized Link State Routing */
#define IP_PROTOCOL_OLSR			IP_PROTOCOL_T_OLSR
	IP_PROTOCOL_T_OMP			= 19,
/* Overlay Management Protocol */
#define IP_PROTOCOL_OMP				IP_PROTOCOL_T_OMP
	IP_PROTOCOL_T_OPENFABRIC		= 20,
/* OpenFabric routing protocol */
#define IP_PROTOCOL_OPENFABRIC			IP_PROTOCOL_T_OPENFABRIC
	IP_PROTOCOL_T_OSPF			= 21,
/* Open Shortest Path First */
#define IP_PROTOCOL_OSPF			IP_PROTOCOL_T_OSPF
	IP_PROTOCOL_T_PNNI			= 22,
/* Private Network-to-Network Interface */
#define IP_PROTOCOL_PNNI			IP_PROTOCOL_T_PNNI
	IP_PROTOCOL_T_RIP			= 23,
/* Routing Information Protocol */
#define IP_PROTOCOL_RIP				IP_PROTOCOL_T_RIP
	IP_PROTOCOL_T_SDRP			= 24,
/* Source Demand Routing Protocol */
#define IP_PROTOCOL_SDRP			IP_PROTOCOL_T_SDRP
	IP_PROTOCOL_T_STATIC			= 25,
/* Static route */
#define IP_PROTOCOL_STATIC			IP_PROTOCOL_T_STATIC
	IP_PROTOCOL_T_ZHLS			= 26,
/* Zone-based Hierarchical Link State */
#define IP_PROTOCOL_ZHLS			IP_PROTOCOL_T_ZHLS
	__IP_PROTOCOL_T_MAX__
};

#define IP_PROTOCOL_MAX				(__IP_PROTOCOL_T_MAX__ - 1)

enum {
	IP_ROUTE_FLAG_F_ANYCAST			= (1 << 0),
#define IP_ROUTE_FLAG_ANYCAST			IP_ROUTE_FLAG_F_ANYCAST
	IP_ROUTE_FLAG_F_BROADCAST		= (1 << 1),
#define IP_ROUTE_FLAG_BROADCAST			IP_ROUTE_FLAG_F_BROADCAST
	IP_ROUTE_FLAG_F_CANDIDATE_DEFAULT	= (1 << 2),
#define IP_ROUTE_FLAG_CANDIDATE_DEFAULT		IP_ROUTE_FLAG_F_CANDIDATE_DEFAULT
	IP_ROUTE_FLAG_F_MULTICAST		= (1 << 3),
#define IP_ROUTE_FLAG_MULTICAST			IP_ROUTE_FLAG_F_MULTICAST
	IP_ROUTE_FLAG_F_NEXT_HOP_OVERRIDE	= (1 << 4),
#define IP_ROUTE_FLAG_NEXT_HOP_OVERRIDE		IP_ROUTE_FLAG_F_NEXT_HOP_OVERRIDE
	IP_ROUTE_FLAG_F_PFR_OVERRIDE		= (1 << 5),
#define IP_ROUTE_FLAG_PFR_OVERRIDE		IP_ROUTE_FLAG_F_PFR_OVERRIDE
	IP_ROUTE_FLAG_F_REPLICATED		= (1 << 6),
#define IP_ROUTE_FLAG_REPLICATED		IP_ROUTE_FLAG_F_REPLICATED
	IP_ROUTE_FLAG_F_UNICAST			= (1 << 7),
#define IP_ROUTE_FLAG_UNICAST			IP_ROUTE_FLAG_F_UNICAST
};

#endif /* _NBAPI_VOLTOS_IP_ROUTE_H */
