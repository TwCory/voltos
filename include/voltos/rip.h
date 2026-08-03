// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/rip.h
 *
 */

#ifndef _VOLTOS_RIP_H
#define _VOLTOS_RIP_H

#include <voltos/types.h>
#include <nbapi/voltos/rip.h>

struct rip_router_conf {
	bool 				auto_summary;
	__u32 				default_metric;
	__u8 				distance;
	__u8 				flash_update_threshold;
	__u16 				input_queue;
	__u8 				maximum_paths;
	__u8 				output_delay;
	bool 				shutdown;
	bool 				traffic_share;
	bool 				verify_update_source;
	__u8 				version;
};

struct rip_interface_conf {
	bool 				enable;
	__u8 				metric_offset;
};

#endif /* _VOLTOS_RIP_H */
