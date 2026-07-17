#ifndef _VOLTOS_IF_ETHERNET_H
#define _VOLTOS_IF_ETHERNET_H

#define ETH_ADDR_SIZE		6
#define ETH_TYPE_SIZE		2

struct eth_addr {
	unsigned char 		bytes[ETH_ADDR_SIZE];
} __attribute__ ((packed));

struct eth_hdr {
	struct eth_addr 	dst_addr;
	struct eth_addr 	src_addr;
	unsigned char 		type[ETH_TYPE_SIZE];
} __attribute__ ((packed));

#endif /* _VOLTOS_IF_ETHERNET_H */
