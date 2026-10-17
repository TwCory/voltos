// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/can_device.h
 *
 */

#ifndef _VOLTOS_CAN_DEVICE_H
#define _VOLTOS_CAN_DEVICE_H

#include <voltos/can.h>
#include <voltos/device.h>

struct can_device {
	struct device device;
};

#endif /* _VOLTOS_CAN_DEVICE_H */
