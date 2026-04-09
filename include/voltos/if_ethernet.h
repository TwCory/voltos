#ifndef _VOLTOS_IF_ETHERNET_H_
#define _VOLTOS_IF_ETHERNET_H_

#define ETH_ADDR_LEN            6

struct eth_addr {
    unsigned char octets[ETH_ADDR_LEN];
} __attribute__ ((packed));

#endif /* _VOLTOS_IF_ETHERNET_H_ */