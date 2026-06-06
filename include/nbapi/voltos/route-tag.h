#ifndef NBAPI_VOLTOS_ROUTE_TAG_H
#define NBAPI_VOLTOS_ROUTE_TAG_H

#define ROUTE_TAG_LIST_NAME_SIZE		36

enum route_tag_format {
	ROUTE_TAG_FORMAT_T_DECIMAL		= 1,
	ROUTE_TAG_FORMAT_T_DOTTED_DECIMAL	= 2,
	__ROUTE_TAG_FORMAT_T_MAX__
};

enum route_tag_action {
	ROUTE_TAG_ACTION_T_DENY			= 0,
	ROUTE_TAG_ACTION_T_PERMIT		= 1,
	__ROUTE_TAG_ACTION_T_MAX__
};

typedef unsigned int 				__voltos_route_tag_t;

typedef unsigned int 				__voltos_route_tag_list_idx_t;

#endif /* NBAPI_VOLTOS_ROUTE_TAG_H */
