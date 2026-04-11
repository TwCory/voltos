#ifndef _VOLTOS_IF_ETHERNET_H_
#define _VOLTOS_IF_ETHERNET_H_

#include <voltos/types.h>

#define ETH_ADDR_SIZE               6

#define ETH_MTU_MIN                 64
#define ETH_MTU_MAX                 9200
#define ETH_MTU_DEFAULT             1500

typedef __u32                       eth_speed_t;
typedef __u32                       eth_mtu_t;

typedef enum {
	ETH_DUPLEX_T_UNSPEC             = 0,
    ETH_DUPLEX_T_HALF               = 1,
    ETH_DUPLEX_T_FULL               = 2,
    ETH_DUPLEX_T_AUTO               = 3,
    __ETH_DUPLEX_T_MAX__
} eth_duplex_t;

typedef enum {
	ETH_MEDIA_TYPE_T_NONE           = 0,
	__ETH_MEDIA_TYPE_T_MAX__
} eth_media_type_t;

typedef struct {
    __byte bytes[ETH_ADDR_SIZE];
} __attribute__ ((packed)) eth_addr_t;

#endif /* _VOLTOS_IF_ETHERNET_H_ */