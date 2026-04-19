// SPDX-License-Identifier: BSD-3-Clause

#ifndef _VOLTOS_IF_BLUETOOTH_H_
#define _VOLTOS_IF_BLUETOOTH_H_

#include <voltos/types.h>

#define BT_ADDR_SIZE       6

struct bt_addr {
    __byte bytes[BT_ADDR_SIZE];
} __attribute__ ((packed));

#endif /* _VOLTOS_IF_BLUETOOTH_H_ */