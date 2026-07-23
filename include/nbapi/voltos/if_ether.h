#ifndef _NBAPI_VOLTOS_IF_ETHER_H
#define _NBAPI_VOLTOS_IF_ETHER_H

#include <voltos/types.h>

#define ETH_ADDR_SIZE			6
#define ETH_TYPE_SIZE			2
#define ETH_FCS_SIZE			4

enum eth_duplex_mode {
	ETH_DUPLEX_MODE_T_UNKNOWN	= 0,
	ETH_DUPLEX_MODE_T_HALF		= 1,
	ETH_DUPLEX_MODE_T_FULL		= 2,
	ETH_DUPLEX_MODE_T_AUTO		= 3,
	__ETH_DUPLEX_MODE_T_MAX__
};

enum eth_media_type {
	ETH_MEDIA_TYPE_T_UNSPEC		= 0,
	__ETH_MEDIA_TYPE_T_MAX__
};

struct eth_hdr {
	unsigned char 			dst_addr[ETH_ADDR_SIZE];
	unsigned char 			src_addr[ETH_ADDR_SIZE];
	__net16 			ethertype;
} __attribute__ ((packed));

#endif /* _NBAPI_VOLTOS_IF_ETHER_H */
