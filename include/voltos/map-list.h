#ifndef _VOLTOS_MAP_LIST_H_
#define _VOLTOS_MAP_LIST_H_

#include <nbapi/voltos/map-list.h>

struct map_list {
    char                            ml_name[MAP_GROUP_NAME_SIZE];
    __voltos_map_list_id_t          ml_index;
};

#endif /* _VOLTOS_MAP_LIST_H_ */