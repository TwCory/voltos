#ifndef _VOLTOS_MAP_CLASS_H_
#define _VOLTOS_MAP_CLASS_H_

#include <nbapi/voltos/map-class.h>

struct map_class {
    char                            mc_name[MAP_CLASS_NAME_SIZE];
    __voltos_map_class_id_t         mc_index;
};

#endif /* _VOLTOS_MAP_CLASS_H_ */