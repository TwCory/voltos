// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/block_device.h
 *
 */

#ifndef _VOLTOS_BLOCK_DEVICE_H
#define _VOLTOS_BLOCK_DEVICE_H

#include <voltos/device.h>

struct block_device {
	struct device *device;
};

#endif /* _VOLTOS_BLOCK_DEVICE_H */
