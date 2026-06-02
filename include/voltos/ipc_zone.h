#ifndef _VOLTOS_IPC_ZONE_H_
#define _VOLTOS_IPC_ZONE_H_

#include <nbapi/voltos/ipc_zone.h>

struct ipc_zone {
	__voltos_ipc_zone_idx_t 	index;
	char 				name[IPC_ZONE_NAME_SIZE];
};

#endif /* _VOLTOS_IPC_ZONE_H_ */
