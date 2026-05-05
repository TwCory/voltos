#ifndef _VOLTOS_FLOW_SAMPLER_MAP_H_
#define _VOLTOS_FLOW_SAMPLER_MAP_H_

#include <nbapi/voltos/flow-sampler-map.h>

struct flow_sampler_map {
    char                            fsm_name[FLOW_SAMPLER_MAP_NAME_SIZE];
    __voltos_flow_sampler_id_t      fsm_index;
};

#endif /* _VOLTOS_FLOW_SAMPLER_MAP_H_ */