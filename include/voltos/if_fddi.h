#ifndef _VOLTOS_IF_FDDI_H_
#define _VOLTOS_IF_FDDI_H_

#define FDDI_ADDR_LEN       6

struct fddi_addr {
    unsigned char octets[FDDI_ADDR_LEN];
} __attribute__ ((packed));

#endif /* _VOLTOS_IF_FDDI_H_ */