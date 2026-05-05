#ifndef _VOLTOS_CLASS_MAP_H_
#define _VOLTOS_CLASS_MAP_H_

#include <nbapi/voltos/class-map.h>

struct class_map {
    char                            cm_name[CLASS_MAP_NAME_SIZE];
    __voltos_class_map_id_t         cm_index;
};

#endif /* _VOLTOS_CLASS_MAP_H_ */