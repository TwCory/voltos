#ifndef _VOLTOS_IF_INFINIBAND_H_
#define _VOLTOS_IF_INFINIBAND_H_

#include <voltos/types.h>

#define IB_ADDR_SIZE			20

typedef struct {
	__byte bytes[IB_ADDR_SIZE];
} __attribute__ ((packed)) ib_addr_t;

#endif /* _VOLTOS_IF_INFINIBAND_H_ */