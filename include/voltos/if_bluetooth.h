#ifndef _VOLTOS_IF_BLUETOOTH_H_
#define _VOLTOS_IF_BLUETOOTH_H_

#include <voltos/types.h>

#define BT_ADDR_SIZE			6

typedef struct {
	__byte bytes[BT_ADDR_SIZE];
} __attribute__ ((packed)) bt_addr_t;

#endif /* _VOLTOS_IF_BLUETOOTH_H_ */