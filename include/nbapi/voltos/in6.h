// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/in6.h
 *
 * 	Internet Version 6 Socket Family
 */

#ifndef _NBAPI_VOLTOS_IN6_H
#define _NBAPI_VOLTOS_IN6_H

#include <voltos/socket.h>
#include <voltos/types.h>

#define IN6_ADDR_SIZE8		16
#define IN6_ADDR_SIZE16		8
#define IN6_ADDR_SIZE32		4
#define IN6_ADDR_SIZE64		2
struct in6_addr {
	union {
		__u8 		u6_addr8[IN6_ADDR_SIZE8];
		__net16 	u6_addr16[IN6_ADDR_SIZE16];
		__net32 	u6_addr32[IN6_ADDR_SIZE32];
		__net64 	u6_addr64[IN6_ADDR_SIZE64];
		__net128 	u6_addr;
	} in6_u;
#define s6_addr8		in6_u.u6_addr8
#define s6_addr16		in6_u.u6_addr16
#define s6_addr32		in6_u.u6_addr32
#define s6_addr64		in6_u.u6_addr64
#define s6_addr			in6_u.u6_addr
};

struct sockaddr_in6 {
	__voltos_sa_family_t	sin6_family;
	__net16			sin6_port;
	__net32			sin6_flowinfo;
	struct in6_addr		sin6_addr;
	__u32			sin6_scope_id;
};

struct ipv6_mreq {
	struct in6_addr 	ipv6mr_multiaddr;
	int			ipv6mr_ifindex;
};
#define ipv6mr_acaddr		ipv6mr_multiaddr

struct in6_flowlabel_req {
	struct in6_addr		flr_dst;
	__net32			flr_label;
	__u8			flr_action;
	__u8			flr_share;
	__u16			flr_flags;
	__u16 			flr_expires;
	__u16			flr_linger;
	__u32			__flr_pad;
};

#define IPV6_FL_A_GET		0
#define IPV6_FL_A_PUT		1
#define IPV6_FL_A_RENEW		2

#define IPV6_FL_F_CREATE	1
#define IPV6_FL_F_EXCL		2
#define IPV6_FL_F_REFLECT	4
#define IPV6_FL_F_REMOTE	8

#define IPV6_FL_S_NONE			0
#define IPV6_FL_S_EXCL			1
#define IPV6_FL_S_PROCESS		2
#define IPV6_FL_S_USER			3
#define IPV6_FL_S_ANY			255

#define IPV6_FLOWINFO_FLOWLABEL		0x000FFFFF
#define IPV6_FLOWINFO_PRIORITY		0x0FF00000

#define IPV6_PRIORITY_UNCHARACTERIZED	0x0000
#define IPV6_PRIORITY_FILLER		0x0100
#define IPV6_PRIORITY_UNATTENDED	0x0200
#define IPV6_PRIORITY_RESERVED1		0x0300
#define IPV6_PRIORITY_BULK		0x0400
#define IPV6_PRIORITY_RESERVED2		0x0500
#define IPV6_PRIORITY_INTERACTIVE	0x0600
#define IPV6_PRIORITY_CONTROL		0x0700
#define IPV6_PRIORITY_8			0x0800
#define IPV6_PRIORITY_9			0x0900
#define IPV6_PRIORITY_10		0x0a00
#define IPV6_PRIORITY_11		0x0b00
#define IPV6_PRIORITY_12		0x0c00
#define IPV6_PRIORITY_13		0x0d00
#define IPV6_PRIORITY_14		0x0e00
#define IPV6_PRIORITY_15		0x0f00

#define IPPROTO_HOPOPTS		0	/* IPv6 hop-by-hop options	*/
#define IPPROTO_ROUTING		43	/* IPv6 routing header		*/
#define IPPROTO_FRAGMENT	44	/* IPv6 fragmentation header	*/
#define IPPROTO_ICMPV6		58	/* ICMPv6			*/
#define IPPROTO_NONE		59	/* IPv6 no next header		*/
#define IPPROTO_DSTOPTS		60	/* IPv6 destination options	*/
#define IPPROTO_MH		135	/* IPv6 mobility header		*/

#define IPV6_TLV_PAD1		0
#define IPV6_TLV_PADN		1
#define IPV6_TLV_ROUTERALERT	5
#define IPV6_TLV_CALIPSO	7	/* RFC 5570 */
#define IPV6_TLV_IOAM		49	/* RFC 9486 */
#define IPV6_TLV_JUMBO		194
#define IPV6_TLV_HAO		201	/* home address option */

#define IPV6_ADDRFORM		1
#define IPV6_2292PKTINFO	2
#define IPV6_2292HOPOPTS	3
#define IPV6_2292DSTOPTS	4
#define IPV6_2292RTHDR		5
#define IPV6_2292PKTOPTIONS	6
#define IPV6_CHECKSUM		7
#define IPV6_2292HOPLIMIT	8
#define IPV6_NEXTHOP		9
#define IPV6_AUTHHDR		10
#define IPV6_FLOWINFO		11

#define IPV6_UNICAST_HOPS	16
#define IPV6_MULTICAST_IF	17
#define IPV6_MULTICAST_HOPS	18
#define IPV6_MULTICAST_LOOP	19
#define IPV6_ADD_MEMBERSHIP	20
#define IPV6_DROP_MEMBERSHIP	21
#define IPV6_ROUTER_ALERT	22
#define IPV6_MTU_DISCOVER	23
#define IPV6_MTU		24
#define IPV6_RECVERR		25
#define IPV6_V6ONLY		26
#define IPV6_JOIN_ANYCAST	27
#define IPV6_LEAVE_ANYCAST	28
#define IPV6_MULTICAST_ALL	29
#define IPV6_ROUTER_ALERT_ISOLATE	30
#define IPV6_RECVERR_RFC4884		31

#define IPV6_PMTUDISC_DONT		0
#define IPV6_PMTUDISC_WANT		1
#define IPV6_PMTUDISC_DO		2
#define IPV6_PMTUDISC_PROBE		3
#define IPV6_PMTUDISC_INTERFACE		4
#define IPV6_PMTUDISC_OMIT		5


#define IPV6_FLOWLABEL_MGR		32
#define IPV6_FLOWINFO_SEND		33

#define IPV6_IPSEC_POLICY	34
#define IPV6_XFRM_POLICY	35
#define IPV6_HDRINCL		36

#define IPV6_RECVPKTINFO	49
#define IPV6_PKTINFO		50
#define IPV6_RECVHOPLIMIT	51
#define IPV6_HOPLIMIT		52
#define IPV6_RECVHOPOPTS	53
#define IPV6_HOPOPTS		54
#define IPV6_RTHDRDSTOPTS	55
#define IPV6_RECVRTHDR		56
#define IPV6_RTHDR		57
#define IPV6_RECVDSTOPTS	58
#define IPV6_DSTOPTS		59
#define IPV6_RECVPATHMTU	60
#define IPV6_PATHMTU		61
#define IPV6_DONTFRAG		62
#if 0	/* not yet */
#define IPV6_USE_MIN_MTU	63
#endif

/*
 * Netfilter (1)
 *
 * Following socket options are used in ip6_tables;
 * see include/linux/netfilter_ipv6/ip6_tables.h.
 *
 * IP6T_SO_SET_REPLACE / IP6T_SO_GET_INFO		64
 * IP6T_SO_SET_ADD_COUNTERS / IP6T_SO_GET_ENTRIES	65
 */

/*
 * Advanced API (RFC3542) (2)
 */
#define IPV6_RECVTCLASS		66
#define IPV6_TCLASS		67

/*
 * Netfilter (2)
 *
 * Following socket options are used in ip6_tables;
 * see include/linux/netfilter_ipv6/ip6_tables.h.
 *
 * IP6T_SO_GET_REVISION_MATCH	68
 * IP6T_SO_GET_REVISION_TARGET	69
 * IP6T_SO_ORIGINAL_DST		80
 */

#define IPV6_AUTOFLOWLABEL	70
/* RFC5014: Source address selection */
#define IPV6_ADDR_PREFERENCES	72

#define IPV6_PREFER_SRC_TMP		0x0001
#define IPV6_PREFER_SRC_PUBLIC		0x0002
#define IPV6_PREFER_SRC_PUBTMP_DEFAULT	0x0100
#define IPV6_PREFER_SRC_COA		0x0004
#define IPV6_PREFER_SRC_HOME		0x0400
#define IPV6_PREFER_SRC_CGA		0x0008
#define IPV6_PREFER_SRC_NONCGA		0x0800

/* RFC5082: Generalized Ttl Security Mechanism */
#define IPV6_MINHOPCOUNT		73

#define IPV6_ORIGDSTADDR        74
#define IPV6_RECVORIGDSTADDR    IPV6_ORIGDSTADDR
#define IPV6_TRANSPARENT        75
#define IPV6_UNICAST_IF         76
#define IPV6_RECVFRAGSIZE	77
#define IPV6_FREEBIND		78

#endif /* _NBAPI_VOLTOS_IN6_H */
