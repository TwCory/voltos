// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/in.h
 *
 * 	Internet Protocol
 */

#ifndef _NBAPI_VOLTOS_IN_H
#define _NBAPI_VOLTOS_IN_H

#include <voltos/libc-compat.h>
#include <voltos/socket.h>
#include <voltos/stddef.h>
#include <voltos/types.h>

enum {
	IP_PROTOCOL_T_IP					= 0,
#define IP_PROTOCOL_IP						IP_PROTOCOL_T_IP
	/* Internet Control Message Protocol (ICMP) */
	IP_PROTOCOL_T_ICMP					= 1,
#define IP_PROTOCOL_ICMP					IP_PROTOCOL_T_ICMP
	/* Internet Group Management Protocol (IGMP) */
	IP_PROTOCOL_T_IGMP					= 2,
#define IP_PROTOCOL_IGMP					IP_PROTOCOL_T_IGMP
	/* Gateway-to-Gateway Protocol (GGP) */
	IP_PROTOCOL_T_GGP					= 3,
#define IP_PROTOCOL_GGP						IP_PROTOCOL_T_GGP
	IP_PROTOCOL_T_IPV4					= 4,
#define IP_PROTOCOL_IPV4					IP_PROTOCOL_T_IPV4
	IP_PROTOCOL_T_ST					= 5,
#define IP_PROTOCOL_ST						IP_PROTOCOL_T_ST
	/* Transmission Control Protocol (TCP) */
	IP_PROTOCOL_T_TCP					= 6,
#define IP_PROTOCOL_TCP						IP_PROTOCOL_T_TCP
	IP_PROTOCOL_T_CBT					= 7,
#define IP_PROTOCOL_CBT						IP_PROTOCOL_T_CBT
	IP_PROTOCOL_T_EGP					= 8,
#define IP_PROTOCOL_EGP						IP_PROTOCOL_T_EGP
	IP_PROTOCOL_T_IGP					= 9,
#define IP_PROTOCOL_IGP						IP_PROTOCOL_T_IGP
	IP_PROTOCOL_T_RCC_MON					= 10,
#define IP_PROTOCOL_RCC_MON					IP_PROTOCOL_T_RCC_MON
	IP_PROTOCOL_T_NVP_II					= 11,
#define IP_PROTOCOL_NVP_II					IP_PROTOCOL_T_NVP_II
	IP_PROTOCOL_T_PUP					= 12,
#define IP_PROTOCOL_PUP						IP_PROTOCOL_T_PUP
	IP_PROTOCOL_T_EMCON					= 14,
#define IP_PROTOCOL_EMCON					IP_PROTOCOL_T_EMCON
	/* Cross Net Debugger */
	IP_PROTOCOL_T_XNET					= 15,
#define IP_PROTOCOL_XNET					IP_PROTOCOL_T_XNET
	IP_PROTOCOL_T_CHAOS					= 16,
#define IP_PROTOCOL_CHAOS					IP_PROTOCOL_T_CHAOS
	/* User Datagram Protocol (UDP) */
	IP_PROTOCOL_T_UDP					= 17,
#define IP_PROTOCOL_UDP						IP_PROTOCOL_T_UDP
	/* Multiplexing */
	IP_PROTOCOL_T_MUX					= 18,
#define IP_PROTOCOL_MUX						IP_PROTOCOL_T_MUX
	IP_PROTOCOL_T_MEAS					= 19,
#define IP_PROTOCOL_MEAS					IP_PROTOCOL_T_MEAS
	/* Host Monitoring Protocol (HMP) */
	IP_PROTOCOL_T_HMP					= 20,
#define IP_PROTOCOL_HMP						IP_PROTOCOL_T_HMP
	/* Packet Radio Measurement (PRM) */
	IP_PROTOCOL_T_PRM					= 21,
#define IP_PROTOCOL_PRM						IP_PROTOCOL_T_PRM
	IP_PROTOCOL_T_IDP					= 22,
#define IP_PROTOCOL_IDP						IP_PROTOCOL_T_IDP
	IP_PROTOCOL_T_TRUNK1					= 23,
#define IP_PROTOCOL_TRUNK1					IP_PROTOCOL_T_TRUNK1
	IP_PROTOCOL_T_TRUNK2					= 24,
#define IP_PROTOCOL_TRUNK2					IP_PROTOCOL_T_TRUNK2
	IP_PROTOCOL_T_LEAF1					= 25,
#define IP_PROTOCOL_LEAF1					IP_PROTOCOL_T_LEAF1
	IP_PROTOCOL_T_LEAF2					= 26,
#define IP_PROTOCOL_LEAF2					IP_PROTOCOL_T_LEAF2
	IP_PROTOCOL_T_RDP					= 27,
#define IP_PROTOCOL_RDP						IP_PROTOCOL_T_RDP
	IP_PROTOCOL_T_IRTP					= 28,
#define IP_PROTOCOL_IRTP					IP_PROTOCOL_T_IRTP
	IP_PROTOCOL_T_TP4					= 29,
#define IP_PROTOCOL_TP4						IP_PROTOCOL_T_TP4
	IP_PROTOCOL_T_NETBLT					= 30,
#define IP_PROTOCOL_NETBLT					IP_PROTOCOL_T_NETBLT
	IP_PROTOCOL_T_NSP					= 31,
#define IP_PROTOCOL_NSP						IP_PROTOCOL_T_NSP
	IP_PROTOCOL_T_INP					= 32,
#define IP_PROTOCOL_INP						IP_PROTOCOL_T_INP
	/* Datagram Congestion Control Protocol (DCCP) */
	IP_PROTOCOL_T_DCCP					= 33,
#define IP_PROTOCOL_DCCP					IP_PROTOCOL_T_DCCP
	IP_PROTOCOL_T_3PC					= 34,
#define IP_PROTOCOL_3PC						IP_PROTOCOL_T_3PC
	IP_PROTOCOL_T_IDPR					= 35,
#define IP_PROTOCOL_IDPR					IP_PROTOCOL_T_IDPR
	IP_PROTOCOL_T_XTP					= 36,
#define IP_PROTOCOL_XTP						IP_PROTOCOL_T_XTP
	/* AppleTalk Datagram Delivery Protocol (DDP) */
	IP_PROTOCOL_T_DDP					= 37,
#define IP_PROTOCOL_DDP						IP_PROTOCOL_T_DDP
	IP_PROTOCOL_T_IDPR_CMTP					= 38,
#define IP_PROTOCOL_IDPR_CMTP					IP_PROTOCOL_T_IDPR_CMTP
	IP_PROTOCOL_T_TPPP					= 39,
#define IP_PROTOCOL_TPPP					IP_PROTOCOL_T_TPPP
	IP_PROTOCOL_T_IL					= 40,
#define IP_PROTOCOL_IL						IP_PROTOCOL_T_IL
	IP_PROTOCOL_T_IPV6					= 41,
#define IP_PROTOCOL_IPV6					IP_PROTOCOL_T_IPV6
	IP_PROTOCOL_T_SDRP					= 42,
#define IP_PROTOCOL_SDRP					IP_PROTOCOL_T_SDRP
	/* Resource Reservation Protocol (RSVP) */
	IP_PROTOCOL_T_RSVP					= 46,
#define IP_PROTOCOL_RSVP					IP_PROTOCOL_T_RSVP
	/* Generic Routing Encapsulation (GRE) */
	IP_PROTOCOL_T_GRE					= 47,
#define IP_PROTOCOL_GRE						IP_PROTOCOL_T_GRE
	/* Dynamic Source Routing (DSR) */
	IP_PROTOCOL_T_DSR					= 48,
#define IP_PROTOCOL_DSR						IP_PROTOCOL_T_DSR
	IP_PROTOCOL_T_BNA					= 49,
#define IP_PROTOCOL_BNA						IP_PROTOCOL_T_BNA
	/* Encapsulating Security Payload (ESP) */
	IP_PROTOCOL_T_ESP					= 50,
#define IP_PROTOCOL_ESP						IP_PROTOCOL_T_ESP
	/* Authentication Header (AH) */
	IP_PROTOCOL_T_AH					= 51,
#define IP_PROTOCOL_AH						IP_PROTOCOL_T_AH
	IP_PROTOCOL_T_INLSP					= 52,
#define IP_PROTOCOL_INLSP					IP_PROTOCOL_T_INLSP
	IP_PROTOCOL_T_NARP					= 54,
#define IP_PROTOCOL_NARP					IP_PROTOCOL_T_NARP
	IP_PROTOCOL_T_MIN_IPV4					= 55,
#define IP_PROTOCOL_MIN_IPV4					IP_PROTOCOL_T_MIN_IPV4
	IP_PROTOCOL_T_TLSP					= 56,
#define IP_PROTOCOL_TLSP					IP_PROTOCOL_T_TLSP
	IP_PROTOCOL_T_SKIP					= 57,
#define IP_PROTOCOL_SKIP					IP_PROTOCOL_T_SKIP
	IP_PROTOCOL_T_CFTP					= 62,
#define IP_PROTOCOL_CFTP					IP_PROTOCOL_T_CFTP
	IP_PROTOCOL_T_SAT_EXPAK					= 64,
#define IP_PROTOCOL_SAT_EXPAK					IP_PROTOCOL_T_SAT_EXPAK
	IP_PROTOCOL_T_KRYPTOLAN					= 65,
#define IP_PROTOCOL_KRYPTOLAN					IP_PROTOCOL_T_KRYPTOLAN
	IP_PROTOCOL_T_RVD					= 66,
#define IP_PROTOCOL_RVD						IP_PROTOCOL_T_RVD
	IP_PROTOCOL_T_IPPC					= 67,
#define IP_PROTOCOL_IPPC					IP_PROTOCOL_T_IPPC
	IP_PROTOCOL_T_SAT_MON					= 69,
#define IP_PROTOCOL_SAT_MON					IP_PROTOCOL_T_SAT_MON
	IP_PROTOCOL_T_VISA					= 70,
#define IP_PROTOCOL_VISA					IP_PROTOCOL_T_VISA
	IP_PROTOCOL_T_IPCV					= 71,
#define IP_PROTOCOL_IPCV					IP_PROTOCOL_T_IPCV
	IP_PROTOCOL_T_CPNX					= 72,
#define IP_PROTOCOL_CPNX					IP_PROTOCOL_T_CPNX
	IP_PROTOCOL_T_CPHB					= 73,
#define IP_PROTOCOL_CPHB					IP_PROTOCOL_T_CPHB
	IP_PROTOCOL_T_WSN					= 74,
#define IP_PROTOCOL_WSN						IP_PROTOCOL_T_WSN
	IP_PROTOCOL_T_PVP					= 75,
#define IP_PROTOCOL_PVP						IP_PROTOCOL_T_PVP
	IP_PROTOCOL_T_BR_SAT_MON				= 76,
#define IP_PROTOCOL_BR_SAT_MON					IP_PROTOCOL_T_BR_SAT_MON
	IP_PROTOCOL_T_SUN_ND					= 77,
#define IP_PROTOCOL_SUN_ND					IP_PROTOCOL_T_SUN_ND
	IP_PROTOCOL_T_WB_MON					= 78,
#define IP_PROTOCOL_WB_MON					IP_PROTOCOL_T_WB_MON
	IP_PROTOCOL_T_WB_EXPAK					= 79,
#define IP_PROTOCOL_WB_EXPAK					IP_PROTOCOL_T_WB_EXPAK
	IP_PROTOCOL_T_ISO_IP					= 80,
#define IP_PROTOCOL_ISO_IP					IP_PROTOCOL_T_ISO_IP
	IP_PROTOCOL_T_VMTP					= 81,
#define IP_PROTOCOL_VMTP					IP_PROTOCOL_T_VMTP
	IP_PROTOCOL_T_SECURE_VMTP				= 82,
#define IP_PROTOCOL_SECURE_VMTP					IP_PROTOCOL_T_SECURE_VMTP
	IP_PROTOCOL_T_VINES					= 83,
#define IP_PROTOCOL_VINES					IP_PROTOCOL_T_VINES
	IP_PROTOCOL_T_IPTM					= 84,
#define IP_PROTOCOL_IPTM					IP_PROTOCOL_T_IPTM
	IP_PROTOCOL_T_NSFNET_IGP				= 85,
#define IP_PROTOCOL_NSFNET_IGP					IP_PROTOCOL_T_NSFNET_IGP
	/* Dissimilar Gateway Protocol (DGP) */
	IP_PROTOCOL_T_DGP					= 86,
#define IP_PROTOCOL_DGF						IP_PROTOCOL_T_DGP
	IP_PROTOCOL_T_TCF					= 87,
#define IP_PROTOCOL_TCF						IP_PROTOCOL_T_TCF
	/* Cisco Enhanced Interior Gateway Routing Protocol (EIGRP) */
	IP_PROTOCOL_T_EIGRP					= 88,
#define IP_PROTOCOL_EIGRP					IP_PROTOCOL_T_EIGRP
	/* Open Shortest Path First (OSPF) */
	IP_PROTOCOL_T_OSPFIGP					= 89,
#define IP_PROTOCOL_OSPFIGP					IP_PROTOCOL_T_OSPFIGP
	IP_PROTOCOL_T_SPRITE_RPC				= 90,
#define IP_PROTOCOL_SPRITE_RPC					IP_PROTOCOL_T_SPRITE_RPC
	IP_PROTOCOL_T_LARP					= 91,
#define IP_PROTOCOL_LARP					IP_PROTOCOL_T_LARP
	IP_PROTOCOL_T_MTP					= 92,
#define IP_PROTOCOL_MTP						IP_PROTOCOL_T_MTP
	IP_PROTOCOL_T_AX25					= 93,
#define IP_PROTOCOL_AX25					IP_PROTOCOL_T_AX25
	IP_PROTOCOL_T_IPIP					= 94,
#define IP_PROTOCOL_IPIP					IP_PROTOCOL_T_IPIP
	IP_PROTOCOL_T_SCC_SP					= 96,
#define IP_PROTOCOL_SCC_SP					IP_PROTOCOL_T_SCC_SP
	IP_PROTOCOL_T_ETHERIP					= 97,
#define IP_PROTOCOL_ETHERIP					IP_PROTOCOL_T_ETHERIP
	IP_PROTOCOL_T_ENCAP					= 98,
#define IP_PROTOCOL_ENCAP					IP_PROTOCOL_T_ENCAP
	IP_PROTOCOL_T_GMTP					= 100,
#define IP_PROTOCOL_GMTP					IP_PROTOCOL_T_GMTP
	IP_PROTOCOL_T_IFMP					= 101,
#define IP_PROTOCOL_IFMP					IP_PROTOCOL_T_IFMP
	IP_PROTOCOL_T_PNNI					= 102,
#define IP_PROTOCOL_PNNI					IP_PROTOCOL_T_PNNI
	IP_PROTOCOL_T_PIM					= 103,
#define IP_PROTOCOL_PIM						IP_PROTOCOL_T_PIM
	IP_PROTOCOL_T_ARIS					= 104,
#define IP_PROTOCOL_ARIS					IP_PROTOCOL_T_ARIS
	IP_PROTOCOL_T_SCPS					= 105,
#define IP_PROTOCOL_SCPS					IP_PROTOCOL_T_SCPS
	IP_PROTOCOL_T_QNX					= 106,
#define IP_PROTOCOL_QNX						IP_PROTOCOL_T_QNX
	IP_PROTOCOL_T_AN					= 107,
#define IP_PROTOCOL_AN						IP_PROTOCOL_T_AN
	IP_PROTOCOL_T_IPCOMP					= 108,
#define IP_PROTOCOL_IPCOMP					IP_PROTOCOL_T_IPCOMP
	IP_PROTOCOL_T_SNP					= 109,
#define IP_PROTOCOL_SNP						IP_PROTOCOL_T_SNP
	IP_PROTOCOL_T_COMPAQ_PEER				= 110,
#define IP_PROTOCOL_COMPAQ_PEER					IP_PROTOCOL_T_COMPAQ_PEER
	IP_PROTOCOL_T_IPX					= 111,
#define IP_PROTOCOL_IPX						IP_PROTOCOL_T_IPX
	/* Virtual Router Redundancy Protocol (VRRP) */
	IP_PROTOCOL_T_VRRP					= 112,
#define IP_PROTOCOL_VRRP					IP_PROTOCOL_T_VRRP
	IP_PROTOCOL_T_PGM					= 113,
#define IP_PROTOCOL_PGM						IP_PROTOCOL_T_PGM
	IP_PROTOCOL_T_L2TP					= 115,
#define IP_PROTOCOL_L2TP					IP_PROTOCOL_T_L2TP
	IP_PROTOCOL_T_DDX					= 116,
#define IP_PROTOCOL_DDX						IP_PROTOCOL_T_DDX
	IP_PROTOCOL_T_IATP					= 117,
#define IP_PROTOCOL_IATP					IP_PROTOCOL_T_IATP
	IP_PROTOCOL_T_STP					= 118,
#define IP_PROTOCOL_STP						IP_PROTOCOL_T_STP
	IP_PROTOCOL_T_SRP					= 119,
#define IP_PROTOCOL_SRP						IP_PROTOCOL_T_SRP
	IP_PROTOCOL_T_UTI					= 120,
#define IP_PROTOCOL_UTI						IP_PROTOCOL_T_UTI
	IP_PROTOCOL_T_SMP					= 121,
#define IP_PROTOCOL_SMP						IP_PROTOCOL_T_SMP
	IP_PROTOCOL_T_PTP					= 123,
#define IP_PROTOCOL_PTP						IP_PROTOCOL_T_PTP
	IP_PROTOCOL_T_ISIS_IPV4					= 124,
#define IP_PROTOCOL_ISIS_IPV4					IP_PROTOCOL_T_ISIS_IPV4
	IP_PROTOCOL_T_FIRE					= 125,
#define IP_PROTOCOL_FIRE					IP_PROTOCOL_T_FIRE
	IP_PROTOCOL_T_CRTP					= 126,
#define IP_PROTOCOL_CRTP					IP_PROTOCOL_T_CRTP
	IP_PROTOCOL_T_CRUDP					= 127,
#define IP_PROTOCOL_CRUDP					IP_PROTOCOL_T_CRUDP
	IP_PROTOCOL_T_SSCOPMCE					= 128,
#define IP_PROTOCOL_SSCOPMCE					IP_PROTOCOL_T_SSCOPMCE
	IP_PROTOCOL_T_IPLT					= 129,
#define IP_PROTOCOL_IPLT					IP_PROTOCOL_T_IPLT
	IP_PROTOCOL_T_SPS					= 130,
#define IP_PROTOCOL_SPS						IP_PROTOCOL_T_SPS
	IP_PROTOCOL_T_PIPE					= 131,
#define IP_PROTOCOL_PIPE					IP_PROTOCOL_T_PIPE
	IP_PROTOCOL_T_SCTP					= 132,
#define IP_PROTOCOL_SCTP					IP_PROTOCOL_T_SCTP
	IP_PROTOCOL_T_FC					= 133,
#define IP_PROTOCOL_FC						IP_PROTOCOL_T_FC
	IP_PROTOCOL_T_RSVP_E2E_IGNORE				= 134,
#define IP_PROTOCOL_RSVP_E2E_IGNORE				IP_PROTOCOL_T_RSVP_E2E_IGNORE
	IP_PROTOCOL_T_UDPLITE					= 136,
#define IP_PROTOCOL_UDPLITE					IP_PROTOCOL_T_UDPLITE
	IP_PROTOCOL_T_MPLS					= 137,
#define IP_PROTOCOL_MPLS					IP_PROTOCOL_T_MPLS
	IP_PROTOCOL_T_MANET					= 138,
#define IP_PROTOCOL_MANET					IP_PROTOCOL_T_MANET
	IP_PROTOCOL_T_WESP					= 141,
#define IP_PROTOCOL_WESP					IP_PROTOCOL_T_WESP
	IP_PROTOCOL_T_ROHC					= 142,
#define IP_PROTOCOL_ROHC					IP_PROTOCOL_T_ROHC
	IP_PROTOCOL_T_ETHERNET					= 143,
#define IP_PROTOCOL_ETHERNET					IP_PROTOCOL_T_ETHERNET
	IP_PROTOCOL_T_AGGFRAG					= 144,
#define IP_PROTOCOL_AGGFRAG					IP_PROTOCOL_T_AGGFRAG
	/* Network Services Header (NSH) */
	IP_PROTOCOL_T_NSH					= 145,
#define IP_PROTOCOL_NSH						IP_PROTOCOL_T_NSH
	IP_PROTOCOL_T_HOMA					= 146,
#define IP_PROTOCOL_HOMA					IP_PROTOCOL_T_HOMA
	__IP_PROTOCOL_T_MAX__
};

#define IP_PROTOCOL_MAX						(__IP_PROTOCOL_T_MAX__ - 1)

/* Internet Address Structure. */
struct in_addr {
	__net32 						s_addr;
};

#define IP_TOS							1
#define IP_TTL							2
#define IP_HDRINCL						3
#define IP_OPTIONS						4
#define IP_ROUTER_ALERT						5
#define IP_RECVOPTS						6
#define IP_RETOPTS						7
#define IP_PKTINFO						8
#define IP_PKTOPTIONS						9
#define IP_MTU_DISCOVER						10
#define IP_RECVERR						11
#define IP_RECVTTL						12
#define IP_RECVTOS						13
#define IP_MTU							14

/* Request for Multicast Socket Options Struct */
struct ip_mreq {
	struct in_addr 						imr_multiaddr;
	struct in_addr						imr_interface;
};

struct ip_mreqn {
	struct in_addr						imr_multiaddr;
	struct in_addr						imr_address;
	int							imr_ifindex;
};

struct ip_mreq_source {
	__net32							imr_multiaddr;
	__net32							imr_interface;
	__net32							imr_sourceaddr;
};

struct ip_msfilter {
	__net32							imsf_multiaddr;
	__net32							imsf_interface;
	__u32							imsf_fmode;
	__u32							imsf_numsrc;
	union {
		__net32						imsf_slist[1];
		__DECLARE_FLEX_ARRAY(__net32, imsf_slist_flex);
	};
};

#define IP_MSFILTER_SIZE(numsrc)				\
	(sizeof(struct ip_msfilter) - sizeof(__u32) 		\
	+ (numsrc) * sizeof(__u32))

struct group_req {
	__u32 							gr_interface;
	struct __voltos_sockaddr_storage			gr_group;
};

struct group_source_req {
	__u32							gsr_interface;
	struct __voltos_sockaddr_storage			gsr_group;
	struct __voltos_sockaddr_storage			gsr_source;
};

struct group_filter {
	union {
		struct {
			__u32					gf_interface_aux;
			struct __voltos_sockaddr_storage	gf_group_aux;
			__u32					gf_fmode_aux;
			__u32					gf_numsrc_aux;
			struct __voltos_sockaddr_storage	gf_slist[1];
		};
		struct {
			__u32					gf_interface;
			struct __voltos_sockaddr_storage	gf_group;
			__u32					gf_fmode;
			__u32					gf_numsrc;
			struct __voltos_sockaddr_storage	gf_slist_flex[];
		};
	};
};

#define GROUP_FILTER_SIZE(numsrc) 				\
	(sizeof(struct group_filter)				\
	 - sizeof(struct __voltos_sockaddr_storage) 		\
	+ (numsrc) * sizeof(struct __voltos_sockaddr_storage))


/* Internet Packet Information Structure. */
struct in_pktinfo {
	int 							ipi_ifindex;
	struct in_addr 						ipi_spec_dst;
	struct in_addr 						ipi_addr;
};

/* Internet Socket Address Structure. */
#define SIN_ZERO_SIZE						16
struct sockaddr_in {
	__voltos_sa_family_t 					sin_family;
	__net16 						sin_port;
	struct in_addr 						sin_addr;
	unsigned char 						__pad[SIN_ZERO_SIZE - sizeof(short int) -
									sizeof(unsigned short int) - 
									sizeof(struct in_addr)];
};
#define sin_zero						__pad

/* Internet Interface Address Structure. */
#include <voltos/if_addr.h>
struct in_ifaddr {
	struct ifaddr_ctx					ia_ifa;
	struct in_addr						ia_subnet;
	struct in_addr						ia_subnetmask;
	struct sockaddr_in					ia_addr;
	struct sockaddr_in					ia_dstaddr;
#define ia_broadaddr						ia_dstaddr
	struct sockaddr_in					ia_sockmask;
};

/*
 * 	Definitions for the Bits of An Internet Address Integer.
 * 	On Subnets, Host and Network Variables Are Identified Based
 * 	On the Network Subnet Mask, Not These Defined Masks.
 */

#define IN_CLASS_A(a)						((((long int) (a)) & 0x80000000) == 0)
#define IN_CLASS_A_NET						0xFF000000
#define IN_CLASS_A_NSHIFT					24
#define IN_CLASS_A_HOST						(0xFFFFFFFF & ~IN_CLASS_A_NET)
#define IN_CLASS_A_MAX						128

#define IN_CLASS_B(a)						((((long int) (a)) & 0xC0000000) == 0x80000000)
#define IN_CLASS_B_NET						0xFFFF0000
#define IN_CLASS_B_NSHIFT					16
#define IN_CLASS_B_HOST						(0xFFFFFFFF & ~IN_CLASS_B_NET)
#define IN_CLASS_B_MAX						65536

#define IN_CLASS_C(a)						((((long int) (a)) & 0xE0000000) == 0xC0000000)
#define IN_CLASS_C_NET						0xFFFFFF00
#define IN_CLASS_C_NSHIFT					8
#define IN_CLASS_C_HOST						(0xFFFFFFFF & ~IN_CLASS_C_NET)

#define IN_CLASS_D(a)						((((long int) (a)) & 0xF0000000) == 0xE0000000)
#define IN_MULTICAST(a)						IN_CLASS_D(a)
#define IN_MULTICAST_NET					0xE0000000

#define IN_BAD_CLASS(a)						(((long int) (a)) == (long int) 0xFFFFFFFF)
#define IN_EXPERIMENTAL(a)					IN_BAD_CLASS((a))

#define IN_CLASS_E(a)						((((long int) (a)) & 0xF0000000) == 0xF0000000)
#define IN_CLASS_E_NET						0xFFFFFFFF
#define IN_CLASS_E_NSHIFT					0

/* Address for Accepting Any Inbound Messages. */
#define IN_ADDR_ANY						((unsigned long int) 0x00000000)

/* Address for Sending Messages to All Hosts. */
#define IN_ADDR_BROADCAST					((unsigned long int) 0xFFFFFFFF)

/* Address for Indicating An Error. */
#define IN_ADDR_NONE						((unsigned long int) 0xFFFFFFFF)

/* Dummy Address for Source of ICMP Reply Messages if No Real Address Is Specified (RFC 7600). */
#define IN_ADDR_DUMMY						((unsigned long int) 0xC0000008)

/* Network ID for Local Host Loopback. */
#define IN_LOOPBACK_NET						127

/* Address for Loopback Traffic to Local Host. */
#define IN_ADDR_LOOPBACK					0x7F000001
#define IN_LOOPBACK(a)						((((long int) (a)) & 0xFF000000) == 0x7F000000)

/* Multicast IN_ADDR Definitions. */
#define IN_ADDR_UNSPEC_GROUP					0xE0000000U	/* 224.0.0.0 */
#define IN_ADDR_ALL_HOSTS_GROUP					0xE0000001U	/* 224.0.0.1 */
#define IN_ADDR_ALL_ROUTERS_GROUP				0xE0000002U	/* 224.0.0.2 */
#define IN_ADDR_DVMRP_ROUTERS_GROUP				0xE0000004U	/* 224.0.0.4 */
#define IN_ADDR_OSPFIGP_ALLROUTERS_GROUP			0xE0000005U	/* 224.0.0.5 */
#define IN_ADDR_OSPFIGP_DROUTERS_GROUP				0xE0000006U	/* 224.0.0.6 */
#define IN_ADDR_RIP2_ROUTERS_GROUP				0xE0000009U	/* 224.0.0.9 */
#define IN_ADDR_EIGRP_ROUTERS_GROUP				0xE000000AU	/* 224.0.0.10 */
#define IN_ADDR_MOBILE_AGENTS_GROUP				0xE000000BU	/* 224.0.0.11 */
#define IN_ADDR_DHCP_SERVER_RELAY_GROUP				0xE000000CU	/* 224.0.0.12 */
#define IN_ADDR_ALL_PIM_ROUTERS_GROUP				0xE000000DU	/* 224.0.0.13 */
#define IN_ADDR_RSVP_ENCAP_GROUP				0xE000000EU	/* 224.0.0.14 */
#define IN_ADDR_VRRP_GROUP					0xE0000012U	/* 224.0.0.18 */
#define IN_ADDR_IP_ALLL1ISS_GROUP				0xE0000013U	/* 224.0.0.19 */
#define IN_ADDR_IP_ALLL2ISS_GROUP				0xE0000014U	/* 224.0.0.20 */
#define IN_ADDR_IP_ALLISS_GROUP					0xE0000015U	/* 224.0.0.21 */
#define IN_ADDR_IGMP_GROUP					0xE0000016U	/* 224.0.0.22 */
#define IN_ADDR_OSPFIGP_TE_GROUP				0xE0000018U	/* 224.0.0.24 */
#define IN_ADDR_ALL_AODV_RPL_NODES_GROUP			0xE0000045U	/* 224.0.0.69 */
#define IN_ADDR_HSRP_GROUP					0xE0000066U	/* 224.0.0.102 */
#define IN_ADDR_ALLSNOOPERS_GROUP				0xE000006AU	/* 224.0.0.106 */
#define IN_ADDR_PTP_PDELAY_GROUP				0xE000006BU	/* 224.0.0.107 */
#define IN_ADDR_BABEL_GROUP					0xE000006FU	/* 224.0.0.111 */
#define IN_ADDR_ALL_RIFT_ROUTERS_GROUP				0xE0000079U	/* 224.0.0.121 */
#define IN_ADDR_NVO_BUM_GROUP					0xE000007AU	/* 224.0.0.122 */
#define IN_ADDR_MDNS_GROUP					0xE00000FBU	/* 224.0.0.251 */
#define IN_ADDR_LLMNR_GROUP					0xE00000FCU	/* 224.0.0.252 */
#define IN_ADDR_TEREDO_GROUP					0xE00000FDU	/* 224.0.0.253 */
#define IN_ADDR_LOCAL_GROUP_MAX					0xE00000FFU	/* 224.0.0.255 */

/* <voltos/byteorder.h> Contains the HTONL and Similar Functions. */
#include <voltos/byteorder.h>

#endif /* _NBAPI_VOLTOS_IN_H */
