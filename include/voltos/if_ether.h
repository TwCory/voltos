#ifndef _VOLTOS_IF_ETHER_H
#define _VOLTOS_IF_ETHER_H

#include <voltos/if_arp.h>
#include <voltos/types.h>
#include <nbapi/voltos/if_ether.h>

struct ether_interface_conf {
	enum arp_type 			arp_type;
	enum eth_duplex_mode 		duplex;
	bool 				flow_control;
	unsigned char 			mac_address[ETH_ADDR_SIZE];
	enum eth_media_type 		media_type;
	__u16 				mtu;
	__u32 				speed;
};

#endif /* _VOLTOS_IF_ETHER_H */
