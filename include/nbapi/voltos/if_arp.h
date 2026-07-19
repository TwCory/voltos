// SPDX-License-Identifier: BSD-3-Clause

/* Address Resolution Protocol */
#ifndef _NBAPI_VOLTOS_IF_ARP_H
#define _NBAPI_VOLTOS_IF_ARP_H

#include <voltos/types.h>

#define ARP_ETHERTYPE			0x0806

enum arp_mode {
	ARP_MODE_T_NULL			= 0,
	ARP_MODE_T_DYNAMIC		= 1,
	ARP_MODE_T_INCOMPLETE		= 2,
	ARP_MODE_T_INTERFACE		= 3,
	ARP_MODE_T_STATIC		= 4,
	ARP_MODE_T_ALIAS		= 5,
	ARP_MODE_T_APP_SIMPLE		= 6,
	ARP_MODE_T_APP_ALIAS		= 7,
	ARP_MODE_T_APP_TIMER		= 8,
	__ARP_MODE_T_MAX__
};

enum arp_type {
	ARP_TYPE_T_ARPA			= 1,
	ARP_TYPE_T_SAP			= 2,
	ARP_TYPE_T_SMDS			= 3,
	ARP_TYPE_T_SNAP			= 4,
	ARP_TYPE_T_SRP_A		= 5,
	ARP_TYPE_T_SRP_B		= 6,
	__ARP_TYPE_T_MAX__
};

struct arp_hdr {
	__net16 			htype;
	__net16 			ptype;
	__u8 				hlen;
	__u8 				plen;
	__net16 			op;
	unsigned char 			*sha;
	unsigned char 			*spa;
	unsigned char 			*tha;
	unsigned char 			*tpa;
};

#endif /* _NBAPI_VOLTOS_IF_ARP_H */
