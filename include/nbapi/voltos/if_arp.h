// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_arp.h
 *
 * 	Address Resolution Protocol (ARP)
 */

#ifndef _NBAPI_VOLTOS_IF_ARP_H
#define _NBAPI_VOLTOS_IF_ARP_H

struct arp_hdr {
	__net16				htype;
	__net16				ptype;
	unsigned char			hlen;
	unsigned char			plen;
	__net16				op;
};

#endif /* _NBAPI_VOLTOS_IF_ARP_H */
