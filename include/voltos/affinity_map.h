#ifndef _VOLTOS_AFFINITY_MAP_H_
#define _VOLTOS_AFFINITY_MAP_H_

#include <voltos/types.h>
#include <nbapi/voltos/affinity_map.h>

struct affinity_map {
    char                            	am_name[AFFINITY_MAP_NAME_SIZE];
    __voltos_affinity_map_id_t      	am_index;

    u16					am_bit_position;
    void				*am_user_ctx;
};

#endif /* _VOLTOS_AFFINITY_MAP_H_ */
