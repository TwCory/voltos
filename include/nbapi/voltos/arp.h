#ifndef NBAPI_VOLTOS_ARP_H
#define NBAPI_VOLTOS_ARP_H

#include <voltos/types.h>

#define ARP_ETHERTYPE		0x0806
#define FR_ARP_ETHERTYPE	0x0808
#define RARP_ETHERTYPE		0x8035

#define ARP_HRD_ETHERNET	1
#define ARP_HRD_EXPETHER	2
#define ARP_HRD_AX25		3
#define ARP_HRD_PRONET_TR	4

#define ARP_OP_REQUEST		1
#define ARP_OP_REPLY		2

struct arp_hdr {
	__net16 		arp_htype;
	__net16 		arp_ptype;
	__u_char 		arp_hlen;
	__u_char 		arp_plen;
	__net16 		arp_opcode;
};

#endif /* NBAPI_VOLTOS_ARP_H */
