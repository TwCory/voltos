// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/cpu.h
 *
 */

#ifndef _VOLTOS_CPU_H
#define _VOLTOS_CPU_H

#include <voltos/device.h>

struct cpu {
	int 					node_index;
	int 					hotplug_support;
	struct device 				device;
};

#endif /* _VOLTOS_CPU_H */
