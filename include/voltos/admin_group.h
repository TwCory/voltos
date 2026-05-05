#ifndef _VOLTOS_ADMIN_GROUP_H_
#define _VOLTOS_ADMIN_GROUP_H_

#include <nbapi/voltos/admin_group.h>

struct admin_group {
    char                        ag_name[ADMIN_GROUP_NAME_SIZE];
    __voltos_admin_group_id_t   ag_index;
};

#endif /* _VOLTOS_ADMIN_GROUP_H_ */