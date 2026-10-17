// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/chassis.h
 *
 */

#ifndef _VOLTOS_CHASSIS_H
#define _VOLTOS_CHASSIS_H

#include <voltos/device.h>

#define CHASSIS_NAME_SIZE		64
#define CHASSIS_COMMENT_SIZE		128

#define CHASSIS_ID_MIN			0
#define CHASSIS_ID_MAX			2

struct chassis {
	const char 			name[CHASSIS_NAME_SIZE];
	const char			comment[CHASSIS_COMMENT_SIZE];
	unsigned int 			index;

	unsigned char			number;
	unsigned char			renumber;
	unsigned int 			priority;

	struct device			device;
};

#endif /* _VOLTOS_CHASSIS_H */
