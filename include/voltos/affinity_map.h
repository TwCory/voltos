#ifndef _VOLTOS_AFFINITY_MAP_H_
#define _VOLTOS_AFFINITY_MAP_H_

#include <nbapi/voltos/affinity_map.h>

struct affinity_map {
    char                            am_name[AFFINITY_MAP_NAME_SIZE];
    __voltos_affinity_map_id_t      am_index;
};

#endif /* _VOLTOS_AFFINITY_MAP_H_ */