#ifndef VOLTOS_HOST_LIST_H
#define VOLTOS_HOST_LIST_H

#include <voltos/refcount.h>
#include <nbapi/voltos/host_list.h>

struct host_list {
	__voltos_host_list_idx_t 	index;
	char 				name[HOST_LIST_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* VOLTOS_HOST_LIST_H */
