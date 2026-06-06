#ifndef _VOLTOS_FLOW_SAMPLER_MAP_H_
#define _VOLTOS_FLOW_SAMPLER_MAP_H_

#include <voltos/refcount.h>
#include <nbapi/voltos/flow-sampler-map.h>

struct flow_sampler_map {
	__voltos_flow_sampler_map_idx_t 	index;
	char 					name[FLOW_SAMPLER_MAP_NAME_SIZE];

	refcount_t 				ref_count;
};

#endif /* _VOLTOS_FLOW_SAMPLER_MAP_H_ */
