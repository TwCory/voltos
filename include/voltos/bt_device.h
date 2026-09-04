// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bt_device.h
 *
 * 	Bluetooth Interface Descriptor Block
 */

#ifndef _VOLTOS_BT_DEVICE_H
#define _VOLTOS_BT_DEVICE_H

#include <voltos/device.h>
#include <voltos/if_bluetooth.h>

struct bt_device {
	struct device device;
};

#endif /* _VOLTOS_BT_DEVICE_H */
