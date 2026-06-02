#ifndef _VOLTOS_HOST_LIST_H_
#define _VOLTOS_HOST_LIST_H_

#include <nbapi/voltos/host_list.h>

struct host_list {
	__voltos_host_list_idx_t 	index;
	char 				name[HOST_LIST_NAME_SIZE];
};

#endif /* _VOLTOS_HOST_LIST_H_ */
