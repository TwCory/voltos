#ifndef _VOLTOS_ROUTE_TAG_H_
#define _VOLTOS_ROUTE_TAG_H_

#include <nbapi/voltos/route-tag.h>

struct route_tag_list {
	__voltos_route_tag_list_idx_t 	index;
	char 				name[ROUTE_TAG_LIST_NAME_SIZE];
};

#endif /* _VOLTOS_ROUTE_TAG_H_ */
