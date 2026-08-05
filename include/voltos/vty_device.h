// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/vty_device.h
 *
 */

#ifndef _VOLTOS_VTY_DEVICE_H
#define _VOLTOS_VTY_DEVICE_H

#include <voltos/device.h>
#include <voltos/vty.h>

struct vty_device {
	struct device 	*device;
	struct vty 	*vty;
};

#endif /* _VOLTOS_VTY_DEVICE_H */
