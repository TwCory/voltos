// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_arp.h
 *
 * 	Address Resolution Protocol (ARP)
 */

#ifndef _NBAPI_VOLTOS_IF_ARP_H
#define _NBAPI_VOLTOS_IF_ARP_H

enum {
	ARP_OP_T_UNSPEC			= 0,
	ARP_OP_T_REQUEST
	ARP_OP_T_REPLY
	ARP_OP_T_Request_Reverse
	ARP_OP_T_Reply_Reverse
	ARP_OP_T_DRARP_Request
	ARP_OP_T_DRARP_Reply
	ARP_OP_T_DRARP_Error
	ARP_OP_T_InARP_Request
	ARP_OP_T_InARP_Reply
	ARP_OP_T_NAK
	ARP_OP_T_MARS_Request
	ARP_OP_T_MARS_Multi
	ARP_OP_T_MARS_MServ
	ARP_OP_T_MARS_Join
	ARP_OP_T_MARS_Leave
	ARP_OP_T_MARS_NAK
	ARP_OP_T_MARS_Unserv
	ARP_OP_T_MARS_SJoin
	ARP_OP_T_MARS_SLeave
	ARP_OP_T_MARS_Grouplist_Request
	ARP_OP_T_MARS_Grouplist_Reply
	ARP_OP_T_MARS_Redirect_Map
	ARP_OP_T_MAPOS_UNARP
	ARP_OP_T_OP_EXP1		= 24,
	ARP_OP_T_OP_EXP2		= 25,
	__ARP_OP_T_MAX__
};

enum {
	ARP_HRD_T_
};

struct arp_hdr {
	__net16				htype;
	__net16				ptype;
	unsigned char			hlen;
	unsigned char			plen;
	__net16				op;
};

#endif /* _NBAPI_VOLTOS_IF_ARP_H */
