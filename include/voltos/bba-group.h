#ifndef _VOLTOS_BBA_GROUP_H_
#define _VOLTOS_BBA_GROUP_H_

#include <voltos/refcount.h>
#include <nbapi/voltos/bba-group.h>

struct bba_group {
	__voltos_bba_group_idx_t 	index;
	char 				name[BBA_GROUP_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* _VOLTOS_BBA_GROUP_H_ */
