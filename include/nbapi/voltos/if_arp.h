// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_arp.h
 *
 * 	Address Resolution Protocol (ARP)
 */

#ifndef _NBAPI_VOLTOS_IF_ARP_H
#define _NBAPI_VOLTOS_IF_ARP_H

enum arp_mode {
	ARP_MODE_T_UNSPEC		= 0,
	ARP_MODE_T_DYNAMIC		= 1,
	ARP_MODE_T_INCOMPLETE		= 2,
	ARP_MODE_T_INTERFACE		= 3,
	ARP_MODE_T_STATIC		= 4,
	ARP_MODE_T_ALIAS		= 5,
	ARP_MODE_T_APP_SIMPLE		= 6,
	ARP_MODE_T_APP_TIMER		= 7,
	__ARP_MODE_T_MAX__
};

struct arp_hdr {

};

#endif /* _NBAPI_VOLTOS_IF_ARP_H */
