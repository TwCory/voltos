#ifndef _VOLTOS_HOST_LIST_H_
#define _VOLTOS_HOST_LIST_H_

#include <nbapi/voltos/host_list.h>

struct host_list {
    char                            hl_name[HOST_LIST_NAME_SIZE];
    __voltos_host_list_id_t         hl_index;
};

#endif /* _VOLTOS_HOST_LIST_H_ */