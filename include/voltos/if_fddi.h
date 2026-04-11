#ifndef _VOLTOS_IF_FDDI_H_
#define _VOLTOS_IF_FDDI_H_

#include <voltos/types.h>

#define FDDI_ADDR_SIZE          6

typedef struct {
    __byte bytes[FDDI_ADDR_SIZE];
} __attribute__ ((packed)) fddi_addr_t;

#endif /* _VOLTOS_IF_FDDI_H_ */