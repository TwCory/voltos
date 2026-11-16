// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/in.h
 *
 * 	Internet Socket Family (AF_INET)
 */

#ifndef _NBAPI_VOLTOS_IN_H
#define _NBAPI_VOLTOS_IN_H

#include <voltos/libc-compat.h>
#include <voltos/socket.h>
#include <voltos/stddef.h>
#include <voltos/types.h>

/* Standard well-defined IP protocols.  */
enum {
	IPPROTO_IP 				= 0,
/* Dummy for TCP */
#define IPPROTO_IP				IPPROTO_IP
	IPPROTO_ICMP 				= 1,
/* Internet Control Message Protocol */
#define IPPROTO_ICMP				IPPROTO_ICMP
	IPPROTO_IGMP 				= 2,
/* Internet Group Management Protocol */
#define IPPROTO_IGMP				IPPROTO_IGMP
	IPPROTO_IPIP 				= 4,
/* IPIP Tunnels */
#define IPPROTO_IPIP				IPPROTO_IPIP
	IPPROTO_TCP 				= 6,
/* Transmission Control Protocol */
#define IPPROTO_TCP				IPPROTO_TCP
	IPPROTO_EGP 				= 8,
/* Exterior Gateway Protocol */
#define IPPROTO_EGP				IPPROTO_EGP
	IPPROTO_IGP				= 9,
/* Interior Gateway Protocols */
#define IPPROTO_IGP				IPPROTO_IGP
	IPPROTO_PUP 				= 12,
/* PUP Protocol */
#define IPPROTO_PUP				IPPROTO_PUP
	IPPROTO_UDP 				= 17,
/* User Datagram Protocol */
#define IPPROTO_UDP				IPPROTO_UDP
	IPPROTO_HMP				= 20,
/* Host Monitoring Protocol */
#define IPPROTO_HMP				IPPROTO_HMP
	IPPROTO_IDP 				= 22,
/* Xerox NS IDP */
#define IPPROTO_IDP				IPPROTO_IDP
	IPPROTO_RDP				= 27,
/* Reliable Data Protocol */
#define IPPROTO_RDP				IPPROTO_RDP
	IPPROTO_IRTP				= 28,
/* Internet Reliable Transaction Protocol */
#define IPPROTO_IRTP				IPPROTO_IRTP
	IPPROTO_TP 				= 29,
/* ISO Transport Protocol, Class 4 */
#define IPPROTO_TP				IPPROTO_TP
	IPPROTO_BLT				= 30,
/* Network Bulk Data Transfer */
#define IPPROTO_BLT				IPPROTO_BLT
	IPPROTO_DCCP 				= 33,
/* Datagram Congestion Control Protocol */
#define IPPROTO_DCCP				IPPROTO_DCCP
	IPPROTO_IDPR				= 35,
/* Inter-Domain Policy Routing Protocol */
#define IPPROTO_IDPR				IPPROTO_IDPR
	IPPROTO_XTP				= 36,
/* eXpress Transport Protocol */
#define IPPROTO_XTP				IPPROTO_XTP
	IPPROTO_DDP				= 37,
/* Datagram Delivery Protocol */
#define IPPROTO_DDP				IPPROTO_DDP
	IPPROTO_IDPR_CMTP			= 38,
/* IDPR Control Message Transport Protocol */
#define IPPROTO_IDPR_CMTP			IPPROTO_IDPR_CMTP
	IPPROTO_IPV6 				= 41,
/* IPv6-in-IPv4 Tunneling */
#define IPPROTO_IPV6				IPPROTO_IPV6
	IPPROTO_SDRP				= 42,
/* Source Demand Routing Protocol */
#define IPPROTO_SDRP				IPPROTO_SDRP
	IPPROTO_IDRP				= 45,
/* Inter-Domain Routing Protocol */
#define IPPROTO_IDRP				IPPROTO_IDRP
	IPPROTO_RSVP 				= 46,
/* Resource Reservation Protocol */
#define IPPROTO_RSVP				IPPROTO_RSVP
	IPPROTO_GRE 				= 47,
/* Generic Routing Encapsulation */
#define IPPROTO_GRE				IPPROTO_GRE
	IPPROTO_DSR				= 48,
/* Dynamic Source Routing */
#define IPPROTO_DSR				IPPROTO_DSR
	IPPROTO_ESP 				= 50,
/* Encapsulating Security Payload for IPsec */
#define IPPROTO_ESP				IPPROTO_ESP
	IPPROTO_AH 				= 51,
/* Authentication Header for IPsec */
#define IPPROTO_AH				IPPROTO_AH
	IPPROTO_VINES				= 83,
/* Banyan VINES */
#define IPPROTO_VINES				IPPROTO_VINES
	IPPROTO_EIGRP				= 88,
/* Enhanced Interior Gateway Routing Protocol */
#define IPPROTO_EIGRP				IPPROTO_EIGRP
	IPPROTO_OSPFIGP				= 89,
/* Open Shortest Path First */
#define IPPROTO_OSPFIGP				IPPROTO_OSPFIGP
	IPPROTO_MTP 				= 92,
/* Multicast Transport Protocol */
#define IPPROTO_MTP				IPPROTO_MTP
	IPPROTO_BEETPH 				= 94,
/* IP Options Pseudo-Header for BEET */
#define IPPROTO_BEETPH				IPPROTO_BEETPH
	IPPROTO_ENCAP 				= 98,
/* Encapsulation Header */
#define IPPROTO_ENCAP				IPPROTO_ENCAP
	IPPROTO_PNNI				= 102,
/* Private Network-to-Network Interface */
#define IPPROTO_PNNI				IPPROTO_PNNI
	IPPROTO_PIM 				= 103,
/* Protocol-Independent Multicast */
#define IPPROTO_PIM				IPPROTO_PIM
	IPPROTO_COMP 				= 108,
/* IP Payload Compression Protocol */
#define IPPROTO_COMP				IPPROTO_COMP
	IPPROTO_VRRP				= 112,
/* Common Address Redundancy Protocol */
#define IPPROTO_CARP				IPPROTO_VRRP
/* Virtual Router Redundancy Protocol */
#define IPPROTO_VRRP				IPPROTO_VRRP
	IPPROTO_PGM				= 113,
/* Pragmatic General Multicast */
#define IPPROTO_PGM				IPPROTO_PGM
	IPPROTO_L2TP 				= 115,
/* Layer 2 Tunneling Protocol */
#define IPPROTO_L2TP				IPPROTO_L2TP
	IPPROTO_SCTP 				= 132,
/* Stream Control Transmission Protocol */
#define IPPROTO_SCTP				IPPROTO_SCTP
	IPPROTO_UDPLITE 			= 136,
/* UDP-Lite */
#define IPPROTO_UDPLITE				IPPROTO_UDPLITE
	IPPROTO_MPLS 				= 137,
/* MPLS-in-IP */
#define IPPROTO_MPLS				IPPROTO_MPLS
	IPPROTO_MANET				= 138,
/* Mobile Ad Hoc Network Protocols */
#define IPPROTO_MANET				IPPROTO_MANET
	IPPROTO_WESP				= 141,
/* Wrapped Encapsulating Security Payload */
#define IPPROTO_WESP				IPPROTO_WESP
	IPPROTO_ROHC				= 142,
/* Robust Header Compression */
#define IPPROTO_ROHC				IPPROTO_ROHC
	IPPROTO_ETHERNET 			= 143,
/* Ethernet */
#define IPPROTO_ETHERNET			IPPROTO_ETHERNET
	IPPROTO_AGGFRAG 			= 144,
/* AGGFRAG Encapsulation for ESP */
#define IPPROTO_AGGFRAG				IPPROTO_AGGFRAG
	IPPROTO_NSH				= 145,
/* Network Service Header */
#define IPPROTO_NSH				IPPROTO_NSH
	IPPROTO_RAW 				= 255,
/* Raw IP Packets */
#define IPPROTO_RAW				IPPROTO_RAW
	IPPROTO_SMC 				= 256,
/* Shared Memory Communications */
#define IPPROTO_SMC				IPPROTO_SMC
	IPPROTO_MPTCP 				= 262,
/* Multi-Path TCP Connections */
#define IPPROTO_MPTCP				IPPROTO_MPTCP
	__IPPROTO_MAX__
};

#define IPPROTO_MAX				(__IPPROTO_MAX__ - 1)

/* Internet address. */
struct in_addr {
	__net32 				s_addr;
};

#define IP_TOS					1
#define IP_TTL					2
#define IP_HDRINCL				3
#define IP_OPTIONS				4
#define IP_ROUTER_ALERT				5
#define IP_RECVOPTS				6
#define IP_RETOPTS				7
#define IP_PKTINFO				8
#define IP_PKTOPTIONS				9
#define IP_MTU_DISCOVER				10
#define IP_RECVERR				11
#define IP_RECVTTL				12
#define	IP_RECVTOS				13
#define IP_MTU					14
#define IP_FREEBIND				15
#define IP_IPSEC_POLICY				16
#define IP_XFRM_POLICY				17
#define IP_PASSSEC				18
#define IP_TRANSPARENT				19

/* BSD Compatibility */
#define IP_RECVRETOPTS				IP_RETOPTS

/* TProxy Original Addresses */
#define IP_ORIGDSTADDR       			20
#define IP_RECVORIGDSTADDR   			IP_ORIGDSTADDR

#define IP_MINTTL       			21
#define IP_NODEFRAG     			22
#define IP_CHECKSUM				23
#define IP_BIND_ADDRESS_NO_PORT			24
#define IP_RECVFRAGSIZE				25
#define IP_RECVERR_RFC4884			26

/* IP_MTU_DISCOVER values */
#define IP_PMTUDISC_DONT			0	/* Never send DF frames */
#define IP_PMTUDISC_WANT			1	/* Use per route hints	*/
#define IP_PMTUDISC_DO				2	/* Always DF		*/
#define IP_PMTUDISC_PROBE			3       /* Ignore dst pmtu      */

/* Always use interface mtu (ignores dst pmtu) but don't set DF flag.
 * Also incoming ICMP frag_needed notifications will be ignored on
 * this socket to prevent accepting spoofed ones.
 */
#define IP_PMTUDISC_INTERFACE			4

/* weaker version of IP_PMTUDISC_INTERFACE, which allows packets to get
 * fragmented if they exceed the interface mtu
 */
#define IP_PMTUDISC_OMIT			5

#define IP_MULTICAST_IF				32
#define IP_MULTICAST_TTL 			33
#define IP_MULTICAST_LOOP 			34
#define IP_ADD_MEMBERSHIP			35
#define IP_DROP_MEMBERSHIP			36
#define IP_UNBLOCK_SOURCE			37
#define IP_BLOCK_SOURCE				38
#define IP_ADD_SOURCE_MEMBERSHIP		39
#define IP_DROP_SOURCE_MEMBERSHIP		40
#define IP_MSFILTER				41
#define MCAST_JOIN_GROUP			42
#define MCAST_BLOCK_SOURCE			43
#define MCAST_UNBLOCK_SOURCE			44
#define MCAST_LEAVE_GROUP			45
#define MCAST_JOIN_SOURCE_GROUP			46
#define MCAST_LEAVE_SOURCE_GROUP		47
#define MCAST_MSFILTER				48
#define IP_MULTICAST_ALL			49
#define IP_UNICAST_IF				50
#define IP_LOCAL_PORT_RANGE			51
#define IP_PROTOCOL				52

#define MCAST_EXCLUDE				0
#define MCAST_INCLUDE				1

/* These need to appear somewhere around here */
#define IP_DEFAULT_MULTICAST_TTL        	1
#define IP_DEFAULT_MULTICAST_LOOP       	1

struct ip_mreq  {
	struct in_addr 				imr_multiaddr;
	struct in_addr 				imr_interface;
};

struct ip_mreqn {
	struct in_addr				imr_multiaddr;
	struct in_addr				imr_address;
	int					imr_ifindex;
};

struct ip_mreq_source {
	__net32					imr_multiaddr;
	__net32					imr_interface;
	__net32					imr_sourceaddr;
};

struct ip_msfilter {
	__net32					imsf_multiaddr;
	__net32					imsf_interface;
	__u32					imsf_fmode;
	__u32					imsf_numsrc;
	union {
		struct in_addr			imsf_slist[1];

		__DECLARE_FLEX_ARRAY(
			struct in_addr,
			imsf_slist_flex
		);
	};
};

#define IP_MSFILTER_SIZE(numsrc)		\
	(sizeof(struct ip_msfilter) - 		\
	sizeof(__u32) + (numsrc) * 		\
	sizeof(__u32))

struct group_req {
	__u32				 	gr_interface;
	struct __voltos_sockaddr_storage 	gr_group;
};

struct group_source_req {
	__u32				 	gsr_interface;
	struct __voltos_sockaddr_storage 	gsr_group;
	struct __voltos_sockaddr_storage 	gsr_source;
};

struct group_filter {
	union {
		struct {
			__u32				 	gf_interface_aux;
			struct __voltos_sockaddr_storage	gf_group_aux;
			__u32				 	gf_fmode_aux;
			__u32				 	gf_numsrc_aux;
			struct __voltos_sockaddr_storage 	gf_slist[1];
		};
		struct {
			__u32				 	gf_interface;
			struct __voltos_sockaddr_storage 	gf_group;
			__u32				 	gf_fmode;
			__u32				 	gf_numsrc;
			struct __voltos_sockaddr_storage 	gf_slist_flex[];
		};
	};
};

#define GROUP_FILTER_SIZE(numsrc) 				\
	(sizeof(struct group_filter) - 				\
	sizeof(struct __voltos_sockaddr_storage)		\
	+ (numsrc) * sizeof(struct __voltos_sockaddr_storage))

struct in_pktinfo {
	int							ipi_ifindex;
	struct in_addr						ipi_spec_dst;
	struct in_addr						ipi_addr;
};

#define __SOCK_SIZE__						(16)
/* Structure describing an Internet (IP) socket address. */
struct sockaddr_in {
	__voltos_sa_family_t 					sin_family;
	__net16 						sin_port;
	struct in_addr 						sin_addr;
	unsigned char						__pad[__SOCK_SIZE__ - sizeof(short int) -
									sizeof(unsigned short int) - 
									sizeof(struct in_addr)];
};
#define sin_zero						__pad

#define	IN_CLASSA(a)						((((long int) (a)) & 0x80000000) == 0)
#define	IN_CLASSA_NET						0xFF000000
#define	IN_CLASSA_NSHIFT					24
#define	IN_CLASSA_HOST						(0xFFFFFFFF & ~IN_CLASSA_NET)
#define	IN_CLASSA_MAX						128

#define	IN_CLASSB(a)						((((long int) (a)) & 0xC0000000) == 0x80000000)
#define	IN_CLASSB_NET						0xFFFF0000
#define	IN_CLASSB_NSHIFT					16
#define	IN_CLASSB_HOST						(0xFFFFFFFF & ~IN_CLASSB_NET)
#define	IN_CLASSB_MAX						65536

#define	IN_CLASSC(a)						((((long int) (a)) & 0xE0000000) == 0xC0000000)
#define	IN_CLASSC_NET						0xFFFFFF00
#define	IN_CLASSC_NSHIFT					8
#define	IN_CLASSC_HOST						(0xFFFFFFFF & ~IN_CLASSC_NET)

#define	IN_CLASSD(a)						((((long int) (a)) & 0xF0000000) == 0xE0000000)
#define	IN_MULTICAST(a)						IN_CLASSD(a)
#define	IN_MULTICAST_NET					0xE0000000

#define	IN_BADCLASS(a)						(((long int) (a) ) == (long int)0xFFFFFFFF)
#define	IN_EXPERIMENTAL(a)					IN_BADCLASS((a))

#define	IN_CLASSE(a)						((((long int) (a)) & 0xF0000000) == 0xF0000000)
#define	IN_CLASSE_NET						0xFFFFFFFF
#define	IN_CLASSE_NSHIFT					0

/* Address to accept any incoming messages. */
#define	INADDR_ANY						((unsigned long int) 0x00000000)

/* Address to send to all hosts. */
#define	INADDR_BROADCAST					((unsigned long int) 0xFFFFFFFF)

/* Address indicating an error return. */
#define	INADDR_NONE						((unsigned long int) 0xFFFFFFFF)

/* Dummy address for src of ICMP replies if no real address is set (RFC7600). */
#define	INADDR_DUMMY						((unsigned long int) 0xC0000008)

/* Network number for local host loopback. */
#define	IN_LOOPBACKNET						127

/* Address to loopback in software to local host.  */
#define	INADDR_LOOPBACK						0x7F000001	/* 127.0.0.1 */
#define	IN_LOOPBACK(a)						((((long int) (a)) & 0xFF000000) == 0x7F000000)

#define INADDR_UNSPEC_GROUP					0xE0000000U	/* 224.0.0.0 */
#define INADDR_ALLHOSTS_GROUP					0xE0000001U	/* 224.0.0.1 */
#define INADDR_ALLRTRS_GROUP					0xE0000002U	/* 224.0.0.2 */
#define INADDR_DVMRP_GROUP					0xE0000004U	/* 224.0.0.4 */
#define INADDR_OSPFIGP_ALLSPFRTRS_GROUP				0xE0000005U	/* 224.0.0.5 */
#define INADDR_OSPFIGP_ALLDRTRS_GROUP				0xE0000006U	/* 224.0.0.6 */
#define INADDR_RIP_GROUP					0xE0000009U	/* 224.0.0.9 */
#define INADDR_EIGRP_GROUP					0xE000000AU	/* 224.0.0.10 */
#define INADDR_PIM_GROUP					0xE000000DU	/* 224.0.0.13 */
#define INADDR_VRRP_GROUP					0xE000000DU	/* 224.0.0.18 */
#define INADDR_OSPFIGP_TE_GROUP					0xE000000DU	/* 224.0.0.24 */
#define INADDR_HSRP_GROUP					0xE000000DU	/* 224.0.0.102 */
#define INADDR_BABEL_GROUP					0xE000000DU	/* 224.0.0.111 */
#define INADDR_MDNS_GROUP					0xE00000FBU	/* 224.0.0.251 */
#define INADDR_LLMNR_GROUP					0xE00000FCU	/* 224.0.0.252 */
#define INADDR_TEREDO_GROUP					0xE00000FDU	/* 224.0.0.253 */
#define INADDR_LOCAL_GROUP_MAX					0xE00000FFU	/* 224.0.0.255 */

#endif /* _NBAPI_VOLTOS_IN_H */
