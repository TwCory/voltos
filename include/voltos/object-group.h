#ifndef _VOLTOS_OBJECT_GROUP_H_
#define _VOLTOS_OBJECT_GROUP_H_

#include <nbapi/voltos/object-group.h>

struct object_group {
    char                            og_name[OBJECT_GROUP_NAME_SIZE];
    __voltos_object_group_id_t      og_index;
};

#endif /* _VOLTOS_OBJECT_GROUP_H_ */