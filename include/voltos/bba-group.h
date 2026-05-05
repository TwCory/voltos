#ifndef _VOLTOS_BBA_GROUP_H_
#define _VOLTOS_BBA_GROUP_H_

#include <nbapi/voltos/bba-group.h>

struct bba_group_pppoe {
    char                            bg_name[BBA_GROUP_NAME_SIZE];
    __voltos_bba_group_id_t         bg_index;
};

#endif /* _VOLTOS_BBA_GROUP_H_ */