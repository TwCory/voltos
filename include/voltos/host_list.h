#ifndef _VOLTOS_HOST_LIST_H
#define _VOLTOS_HOST_LIST_H

#include <nbapi/voltos/host_list.h>

struct host_list {
	const char 			name[HOST_LIST_NAME_SIZE];
	__host_list_key_t		index;
};

#endif /* _VOLTOS_HOST_LIST_H */
