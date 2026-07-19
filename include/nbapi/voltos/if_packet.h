#ifndef _NBAPI_VOLTOS_IF_PACKET_H
#define _NBAPI_VOLTOS_IF_PACKET_H

#include <voltos/if.h>
#include <voltos/socket.h>
#include <voltos/types.h>

#define SPACKET_DEVICE_SIZE		14

struct sockaddr_packet {
	__voltos_sa_family_t 		spacket_family;
	unsigned char 			spacket_device[SPACKET_DEVICE_SIZE];
	__net16 			spacket_protocol;
};

#define SLINK_ADDR_SIZE			8

struct sockaddr_link {
	__voltos_sa_family_t 		slink_family;
	__net16 			slink_protocol;
	__voltos_if_index_t 		slink_ifindex;
	__net16 			slink_hatype;
	__u8 				slink_pkttype;
	__u8 				slink_halen;
	unsigned char 			slink_addr[SLINK_ADDR_SIZE];
};

#endif /* _NBAPI_VOLTOS_IF_PACKET_H */
