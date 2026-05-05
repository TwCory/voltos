#ifndef _VOLTOS_PARAMETER_MAP_H_
#define _VOLTOS_PARAMETER_MAP_H_

#include <nbapi/voltos/parameter-map.h>

struct parameter_map {
    char                                pm_name[PARAMETER_MAP_NAME_SIZE];
    __voltos_parameter_map_id_t         pm_index;
};

#endif /* _VOLTOS_PARAMETER_MAP_H_ */