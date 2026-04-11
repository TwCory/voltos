#ifndef _VOLTOS_IF_FIBRECHANNEL_H_
#define _VOLTOS_IF_FIBRECHANNEL_H_

#include <voltos/types.h>

#define FC_ADDR_SIZE             6

typedef struct {
	__byte bytes[FC_ADDR_SIZE];
} __attribute__ ((packed)) fc_addr_t;

#endif /* _VOLTOS_IF_FIBRECHANNEL_H_ */