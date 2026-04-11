#ifndef _VOLTOS_IF_BLUETOOTH_H_
#define _VOLTOS_IF_BLUETOOTH_H_

#define BT_ADDR_LEN			6

struct bt_addr {
	unsigned char octets[BT_ADDR_LEN];
} __attribute__ ((packed));

#endif /* _VOLTOS_IF_BLUETOOTH_H_ */