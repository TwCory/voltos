#ifndef VOLTOS_IPC_ZONE_H
#define VOLTOS_IPC_ZONE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/ipc_zone.h>

struct ipc_zone {
	__voltos_ipc_zone_idx_t 	index;
	char 				name[IPC_ZONE_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* VOLTOS_IPC_ZONE_H */
