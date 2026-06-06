#ifndef VOLTOS_PREFIX_LIST_H
#define VOLTOS_PREFIX_LIST_H

#include <voltos/refcount.h>
#include <nbapi/voltos/prefix_list.h>

struct prefix_list {
	__voltos_prefix_list_idx_t 	index;
	char 				name[PREFIX_LIST_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* VOLTOS_PREFIX_LIST_H */
