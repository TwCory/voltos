// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/bbu.h
 *
 */

#ifndef _VOLTOS_BBU_H
#define _VOLTOS_BBU_H

#include <voltos/device.h>
#include <nbapi/voltos/bbu.h>

struct bbu {
	const char 			*name;
	__voltos_bbu_index_t 		index;
	enum bbu_type 			type;
	enum bbu_state 			state;
};

struct bbu_device {
	struct device 			*device;
	struct bbu 			*bbu;
};

#endif /* _VOLTOS_BBU_H */
