// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_IF_ETHERNET_H_
#define _VOLTOS_IF_ETHERNET_H_

#include <voltos/types.h>

#define ETH_ADDR_SIZE       6

struct eth_addr {
    __byte bytes[ETH_ADDR_SIZE];
} __attribute__ ((packed));

#endif /* _VOLTOS_IF_ETHERNET_H_ */