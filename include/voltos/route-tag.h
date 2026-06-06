#ifndef VOLTOS_ROUTE_TAG_H
#define VOLTOS_ROUTE_TAG_H

#include <voltos/refcount.h>
#include <voltos/types.h>
#include <nbapi/voltos/route-tag.h>

struct route_tag_list;

struct route_tag_entry {
	struct route_tag_list		*tag_list;
	u64				seq_number;

	enum route_tag_action		action;
	__voltos_route_tag_t		tag_value;
	__voltos_route_tag_t		tag_match;
};

struct route_tag_list {
	__voltos_route_tag_list_idx_t 	index;
	char 				name[ROUTE_TAG_LIST_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* VOLTOS_ROUTE_TAG_H */
