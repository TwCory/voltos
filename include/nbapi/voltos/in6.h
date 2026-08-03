// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/in6.h
 *
 *	Internet Protocol Version 6
 */

#ifndef _NBAPI_VOLTOS_IN6_H
#define _NBAPI_VOLTOS_IN6_H

#include <voltos/libc-compat.h>
#include <voltos/socket.h>
#include <voltos/types.h>

#define IN6_ADDR_U8_SIZE			16
#define IN6_ADDR_U16_SIZE			8
#define IN6_ADDR_U32_SIZE			4
#define IN6_ADDR_U64_SIZE			2

/*
 * IPv6 Address Structure.
 */
struct in6_addr {
	union {
		__u8 				u6_addr8[IN6_ADDR_U8_SIZE];
		__net16 			u6_addr16[IN6_ADDR_U16_SIZE];
		__net32 			u6_addr32[IN6_ADDR_U32_SIZE];
		__net64 			u6_addr64[IN6_ADDR_U64_SIZE];
		__net128 			u6_addr;
	} in6_u;
#define s6_addr8				in6_u.u6_addr8
#define s6_addr16				in6_u.u6_addr16
#define s6_addr32				in6_u.u6_addr32
#define s6_addr64				in6_u.u6_addr64
#define s6_addr					in6_u.u6_addr
};

/*
 * IPv6 Socket Address Structure.
 */
struct sockaddr_in6 {
	__voltos_sa_family_t 			sin6_family;
	__net16 				sin6_port;
	__net32 				sin6_flowinfo;
	struct in6_addr 			sin6_addr;
	__u32 					sin6_scope_id;
};

/*
 * IPv6 Interface Address Structure.
 */
#include <voltos/if_addr.h>
struct in6_ifaddr {
	struct ifaddr_ctx			ia6_ifa;
	struct sockaddr_in6			ia6_addr;
	struct sockaddr_in6			ia6_net;
	struct sockaddr_in6			ia6_dstaddr;
	struct sockaddr_in6			ia6_prefixmask;
};

/* Request for Multicast Socket Options Struct */
struct ipv6_mreq {
	struct in6_addr 			ipv6mr_multiaddr;
	int 					ipv6mr_ifindex;
};

#define ipv6mr_acaddr				ipv6mr_multiaddr

/* Request for Flow Label Socket Options Struct */
struct in6_flowlabel_req {
	struct in6_addr				flr_dst;
	__net32					flr_label;
	__u8 					flr_action;
	__u8 					flr_share;
	__u16 					flr_flags;
	__u16 					flr_expires;
	__u32 					flr_linger;
	__u32 					__flr_pad;
};

#define IPV6_FL_A_GET				0
#define IPV6_FL_A_PUT				1
#define IPV6_FL_A_RENEW				2

#define IPV6_FL_F_CREATE			1
#define IPV6_FL_F_EXCL				2
#define IPV6_FL_F_REFLECT			4
#define IPV6_FL_F_REMOTE			8

#define IPV6_FL_S_NONE				0
#define IPV6_FL_S_EXCL				1
#define IPV6_FL_S_PROCESS			2
#define IPV6_FL_S_USER				3
#define IPV6_FL_S_ANY				255

#define IPV6_FLOWINFO_FLOWLABEL			0x000FFFFF
#define IPV6_FLOWINFO_PRIORITY			0x0FF00000

/* IPv6 Extension Headers */
#define IP_PROTOCOL_HOPOPT			0
#define IP_PROTOCOL_ROUTING			43
#define IP_PROTOCOL_FRAGMENT			44
#define IP_PROTOCOL_ICMPV6			58
#define IP_PROTOCOL_NONE			59
#define IP_PROTOCOL_DSTOPTS			60
#define IP_PROTOCOL_MOBILITY			135
#define IP_PROTOCOL_HIP				139
#define IP_PROTOCOL_SHIM6			140
#define IP_PROTOCOL_BITEMU			147

/* IPv6 TLV Options */
enum {
	IPV6_TLV_T_PAD1				= 0,
#define IPV6_TLV_PAD1				IPV6_TLV_T_PAD1
	IPV6_TLV_T_PADN				= 1,
#define IPV6_TLV_PADN				IPV6_TLV_T_PADN
	IPV6_TLV_T_ROUTER_ALERT			= 5,
#define IPV6_TLV_ROUTER_ALERT			IPV6_TLV_T_ROUTER_ALERT
	IPV6_TLV_T_CALIPSO			= 7,
#define IPV6_TLV_CALIPSO			IPV6_TLV_T_CALIPSO
	IPV6_TLV_T_IOAM				= 49,
#define IPV6_TLV_IOAM				IPV6_TLV_T_IOAM
	IPV6_TLV_T_JUMBO			= 194,
#define IPV6_TLV_JUMBO				IPV6_TLV_T_JUMBO
	IPV6_TLV_T_HAO				= 201,
#define IPV6_TLV_HAO				IPV6_TLV_T_HAO
	__IPV6_TLV_T_MAX__
};

#define IPV6_TLV_MAX				(__IPV6_TLV_T_MAX__ - 1)

/*
 * IPv6 Socket Options
 */
#define IPV6_ADDRFORM				1
#define IPV6_2292PKTINFO			2
#define IPV6_2292HOPOPTS			3
#define IPV6_2292DSTOPTS			4
#define IPV6_2292RTHDR				5
#define IPV6_2292PKTOPTIONS			6
#define IPV6_CHECKSUM				7
#define IPV6_2292HOPLIMIT			8
#define IPV6_NEXTHOP				9

/* IPv6 Authentication Header (AH) - Obselete */
#define IPV6_AUTHHDR				10
#define IPV6_FLOWINFO				11

#define IPV6_UNICAST_HOPS			16
#define IPV6_MULTICAST_IF			17
#define IPV6_MULTICAST_HOPS			18
#define IPV6_MULTICAST_LOOP			19

#define IPV6_ADD_MEMBERSHIP			20
#define IPV6_DROP_MEMBERSHIP			21
#define IPV6_ROUTER_ALERT			22
#define IPV6_MTU_DISCOVER			23
#define IPV6_MTU				24
#define IPV6_RECVERR				25
#define IPV6_V6ONLY				26
#define IPV6_JOIN_ANYCAST			27
#define IPV6_LEAVE_ANYCAST			28
#define IPV6_MULTICAST_ALL			29
#define IPV6_ROUTER_ALERT_ISOLATE		30
#define IPV6_RECVERR_RFC4884			31

/*
 * IPv6 Path MTU Discovery Values
 */
#define IPV6_PMTUDISC_DONT			0
#define IPV6_PMTUDISC_WANT			1
#define IPV6_PMTUDISC_DO			2
#define IPV6_PMTUDISC_PROBE			3

/*
 * Identical to IPV6_PMTUDISC_PROBE, Provided to Ensure
 * Symmetry with IPv4.
 */
#define IPV6_PMTUDISC_INTERFACE			4

/*
 * Weaker Version of IPV6_PMTUDISC_INTERFACE, Which Enables
 * Packets to Get Fragmented If They Exceed the Interface's MTU.
 */
#define IPV6_PMTUDISC_OMIT			5

/* IPv6 Flow Label */
#define IPV6_FLOWLABEL_MGR			32
#define IPV6_FLOWINFO_SEND			33

#define IPV6_IPSEC_POLICY			34
#define IPV6_HDRINCL				36

/*
 * IPv6 Advanced API (RFC 3542)
 */
#define IPV6_RECVPKTINFO			49
#define IPV6_PKTINFO				50
#define IPV6_RECVHOPLIMIT			51
#define IPV6_HOPLIMIT				52
#define IPV6_RECVHOPOPTS			53
#define IPV6_HOPOPTS				54
#define IPV6_RTHDRDSTOPTS			55
#define IPV6_RECVRTHDR				56
#define IPV6_RTHDR				57
#define IPV6_RECVDSTOPTS			58
#define IPV6_DSTOPTS				59
#define IPV6_RECVPATHMTU			60
#define IPV6_PATHMTU				61
#define IPV6_DONTFRAG				62

#define IPV6_RECVTCLASS				66
#define IPV6_TCLASS				67

#define IPV6_AUTOFLOWLABEL			70
/* Source Address Selection (RFC 5014) */
#define IPV6_ADDR_PREFERENCES			72

#define IPV6_PREFER_SRC_TMP			0x0001
#define IPV6_PREFER_SRC_PUBLIC			0x0002
#define IPV6_PREFER_SRC_PUBTMP_DEFAULT		0x0100
#define IPV6_PREFER_SRC_COA			0x0004
#define IPV6_PREFER_SRC_HOME			0x0400
#define IPV6_PREFER_SRC_CGA			0x0008
#define IPV6_PREFER_SRC_NONCGA			0x0800

/* Generalized TTL Security Mechanism (RFC 5082) */
#define IPV6_MINHOPCOUNT			73

#define IPV6_ORIGDSTADDR			74
#define IPV6_RECVORIGDSTADDR			IPV6_ORIGDSTADDR
#define IPV6_TRANSPARENT			75
#define IPV6_UNICAST_IF				76
#define IPV6_RECVFRAGSIZE			77
#define IPV6_FREEBIND				78

#endif /* _NBAPI_VOLTOS_IN6_H */
