#ifndef _VOLTOS_DEVICE_H_
#define _VOLTOS_DEVICE_H_

#include <voltos/device/args.h>
#include <voltos/device/bus.h>
#include <voltos/device/class.h>
#include <voltos/device/driver.h>

typedef unsigned long long 		__voltos_device_idx_t;

struct device {
	__voltos_device_idx_t 		index;
};

#endif /* _VOLTOS_DEVICE_H_ */
