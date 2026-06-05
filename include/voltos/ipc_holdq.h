#ifndef _VOLTOS_IPC_HOLDQ_H_
#define _VOLTOS_IPC_HOLDQ_H_

#include <voltos/ipc.h>
#include <voltos/types.h>

#define IPC_HOLDQ_LOWER_THRESHOLD_MIN		1
#define IPC_HOLDQ_LOWER_THRESHOLD_MAX		2000
#define IPC_HOLDQ_LOWER_THRESHOLD_DEFAULT	1

#define IPC_HOLDQ_UPPER_THRESHOLD_MIN		20
#define IPC_HOLDQ_UPPER_THRESHOLD_MAX		4000
#define IPC_HOLDQ_UPPER_THRESHOLD_DEFAULT	20

struct ipc_holdq {
	struct ipc 				*ipc;

	__u16 					lower_threshold;
	__u16 					upper_threshold;
};

#endif /* _VOLTOS_IPC_HOLDQ_H_ */
