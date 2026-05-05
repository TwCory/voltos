#ifndef _VOLTOS_IPC_ZONE_H_
#define _VOLTOS_IPC_ZONE_H_

#include <nbapi/voltos/ipc_zone.h>

struct ipc_zone {
    char                        iz_name[IPC_ZONE_NAME_SIZE];
    __voltos_ipc_zone_id_t      iz_index;
};

#endif /* _VOLTOS_IPC_ZONE_H_ */