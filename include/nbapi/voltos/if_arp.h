// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_arp.h
 *
 * 	Address Resolution Protocol (ARP)
 */

#ifndef _NBAPI_VOLTOS_IF_ARP_H
#define _NBAPI_VOLTOS_IF_ARP_H

#include <voltos/types.h>

#define ARP_ETHERTYPE			0x0806

enum {
	ARP_OP_T_UNSPEC			= 0,
#define ARP_OP_UNSPEC			ARP_OP_T_UNSPEC
	ARP_OP_T_REQUEST		= 1,
#define ARP_OP_REQUEST			ARP_OP_T_REQUEST
	ARP_OP_T_REPLY			= 2,
#define ARP_OP_REPLY			ARP_OP_T_REPLY
	ARP_OP_T_Request_Reverse	= 3,
#define ARP_OP_Request_Reverse		ARP_OP_T_Request_Reverse
	ARP_OP_T_Reply_Reverse		= 4,
#define ARP_OP_Reply_Reverse		ARP_OP_T_Reply_Reverse
	ARP_OP_T_DRARP_Request		= 5,
#define ARP_OP_DRARP_Request		ARP_OP_T_DRARP_Request
	ARP_OP_T_DRARP_Reply		= 6,
#define ARP_OP_DRARP_Reply		ARP_OP_T_DRARP_Reply
	ARP_OP_T_DRARP_Error		= 7,
#define ARP_OP_DRARP_Error		ARP_OP_T_DRARP_Error
	ARP_OP_T_InARP_Request		= 8,
#define ARP_OP_InARP_Request		ARP_OP_T_InARP_Request
	ARP_OP_T_InARP_Reply		= 9,
#define ARP_OP_InARP_Reply		ARP_OP_T_InARP_Reply
	ARP_OP_T_NAK			= 10,
#define ARP_OP_NAK			ARP_OP_T_NAK
	ARP_OP_T_MARS_Request		= 11,
#define ARP_OP_MARS_Request		ARP_OP_T_MARS_Request
	ARP_OP_T_MARS_Multi		= 12,
#define ARP_OP_MARS_Multi		ARP_OP_T_MARS_Multi
	ARP_OP_T_MARS_MServ		= 13,
#define ARP_OP_MARS_MServ		ARP_OP_T_MARS_MServ
	ARP_OP_T_MARS_Join		= 14,
#define ARP_OP_MARS_Join		ARP_OP_T_MARS_Join
	ARP_OP_T_MARS_Leave		= 15,
#define ARP_OP_MARS_Leave		ARP_OP_T_MARS_Leave
	ARP_OP_T_MARS_NAK		= 16,
#define ARP_OP_MARS_NAK			ARP_OP_T_MARS_NAK
	ARP_OP_T_MARS_Unserv		= 17,
#define ARP_OP_MARS_Unserv		ARP_OP_T_MARS_Unserv
	ARP_OP_T_MARS_SJoin		= 18,
#define ARP_OP_MARS_SJoin		ARP_OP_T_MARS_SJoin
	ARP_OP_T_MARS_SLeave		= 19,
#define ARP_OP_MARS_SLeave		ARP_OP_T_MARS_SLeave
	ARP_OP_T_MARS_Grouplist_Request	= 20,
#define ARP_OP_MARS_Grouplist_Request	ARP_OP_T_MARS_Grouplist_Request
	ARP_OP_T_MARS_Grouplist_Reply	= 21,
#define ARP_OP_MARS_Grouplist_Reply	ARP_OP_T_MARS_Grouplist_Reply
	ARP_OP_T_MARS_Redirect_Map	= 22,
#define ARP_OP_MARS_Redirect_Map	ARP_OP_T_MARS_Redirect_Map
	ARP_OP_T_MAPOS_UNARP		= 23,
#define ARP_OP_MAPOS_UNARP		ARP_OP_T_MAPOS_UNARP
	ARP_OP_T_OP_EXP1		= 24,
#define ARP_OP_EXP1			ARP_OP_T_OP_EXP1
	ARP_OP_T_OP_EXP2		= 25,
#define ARP_OP_EXP2			ARP_OP_T_OP_EXP2
	__ARP_OP_T_MAX__
};

#define ARP_OP_MAX			(__ARP_OP_T_MAX__ - 1)

enum {
	ARP_HRD_T_UNSPEC		= 0,
#define ARP_HRD_UNSPEC
	ARP_HRD_T_ETHERNET		= 1,
#define ARP_HRD_ETHERNET
	ARP_HRD_T_EXPETHER		= 2,
#define ARP_HRD_EXPETHER
	ARP_HRD_T_AX25			= 3,
#define ARP_HRD_AX25
	ARP_HRD_T_PRONET_TR		= 4,
#define ARP_HRD_PRONET_TR
	ARP_HRD_T_CHAOS			= 5,
#define ARP_HRD_CHAOS
	ARP_HRD_T_IEEE802		= 6,
#define ARP_HRD_IEEE802
	ARP_HRD_T_ARCNET		= 7,
#define ARP_HRD_ARCNET
	ARP_HRD_T_HYPERCHANNEL		= 8,
#define ARP_HRD_HYPERCHANNEL
	ARP_HRD_T_LANSTAR		= 9,
#define ARP_HRD_LANSTAR
	ARP_HRD_T_AUTONET		= 10,
#define ARP_HRD_AUTONET
	ARP_HRD_T_LOCALTALK		= 11,
#define ARP_HRD_LOCALTALK
	ARP_HRD_T_LOCALNET		= 12,
#define ARP_HRD_LOCALNET
	ARP_HRD_T_ULTRANET		= 13,
#define ARP_HRD_ULTRANET
	ARP_HRD_T_SMDS			= 14,
#define ARP_HRD_SMDS
	ARP_HRD_T_FR			= 15,
#define ARP_HRD_FR
	ARP_HRD_T_ATM_1			= 16,
#define ARP_HRD_ATM_1
	ARP_HRD_T_HDLC			= 17,
#define ARP_HRD_HDLC
	ARP_HRD_T_FC			= 18,
#define ARP_HRD_FC
	ARP_HRD_T_ATM_2			= 19,
#define ARP_HRD_ATM_2
	ARP_HRD_T_SLIP			= 20,
#define ARP_HRD_SLIP
	ARP_HRD_T_ATM_3			= 21,
#define ARP_HRD_ATM_3
	ARP_HRD_T_MIL_STD_188_220	= 22,
#define ARP_HRD_MIL_STD_188_220
	ARP_HRD_T_METRICOM		= 23,
#define ARP_HRD_METRICOM
	ARP_HRD_T_IEEE1394		= 24,
#define ARP_HRD_IEEE1394
	ARP_HRD_T_MAPOS			= 25,
#define ARP_HRD_MAPOS
	ARP_HRD_T_TWINAXIAL		= 26,
#define ARP_HRD_TWINAXIAL
	ARP_HRD_T_EUI64			= 27,
#define ARP_HRD_EUI64
	ARP_HRD_T_HIPARP		= 28,
#define ARP_HRD_HIPARP
	ARP_HRD_T_ISO7816_3		= 29,
#define ARP_HRD_ISO7816_3
	ARP_HRD_T_ARPSEC		= 30,
#define ARP_HRD_ARPSEC
	ARP_HRD_T_IPSEC			= 31,
#define ARP_HRD_IPSEC
	ARP_HRD_T_INFINIBAND		= 32,
#define ARP_HRD_INFINIBAND
	ARP_HRD_T_TIA102_P25_CAI	= 33,
#define ARP_HRD_TIA102_P25_CAI
	ARP_HRD_T_WIEGAND		= 34,
#define ARP_HRD_WIEGAND
	ARP_HRD_T_PURE_IP		= 35,
#define ARP_HRD_PURE_IP
	ARP_HRD_T_HW_EXP1		= 36,
#define ARP_HRD_HW_EXP1
	ARP_HRD_T_HFI			= 37,
#define ARP_HRD_HFI
	ARP_HRD_T_UB			= 38,
#define ARP_HRD_UB
	ARP_HRD_T_HW_EXP2		= 256,
#define ARP_HRD_HW_EXP2
	ARP_HRD_T_AETHERNET		= 257,
#define ARP_HRD_AETHERNET
	__ARP_HRD_T_MAX__
};

#define ARP_HRD_MAX			(__ARP_HRD_T_MAX__ - 1)

struct arp_hdr {
	__net16				arp_htype;
	__net16				arp_ptype;
	unsigned char			arp_hlen;
	unsigned char			arp_plen;
	__net16				arp_op;
};

#endif /* _NBAPI_VOLTOS_IF_ARP_H */
