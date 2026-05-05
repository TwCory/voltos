#ifndef _VOLTOS_POLICY_MAP_H_
#define _VOLTOS_POLICY_MAP_H_

#include <nbapi/voltos/policy-map.h>

struct policy_map {
    char                            pm_name[POLICY_MAP_NAME_SIZE];
    __voltos_policy_map_id_t        pm_index;
};

#endif /* _VOLTOS_POLICY_MAP_H_ */