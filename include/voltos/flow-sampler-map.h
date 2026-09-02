// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/flow-sampler-map.h
 *
 */

#ifndef _VOLTOS_FLOW_SAMPLER_MAP_H
#define _VOLTOS_FLOW_SAMPLER_MAP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/flow-sampler-map.h>

struct flow_sampler_map {
	const char 		name[FLOW_SAMPLER_MAP_NAME_SIZE];
	refcount_t 		refcount;
};

#endif /* _VOLTOS_FLOW_SAMPLER_MAP_H */
