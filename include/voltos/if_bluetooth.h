#ifndef _VOLTOS_IF_BLUETOOTH_H
#define _VOLTOS_IF_BLUETOOTH_H

#include <nbapi/voltos/if_bluetooth.h>

struct bt_interface_conf {
	unsigned char mac_address[BT_ADDR_SIZE];
};

#endif /* _VOLTOS_IF_BLUETOOTH_H */
