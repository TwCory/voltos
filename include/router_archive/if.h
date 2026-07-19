#ifndef _ROUTER_IF_H
#define _ROUTER_IF_H

#include <voltos/if.h>
#include <voltos/types.h>

typedef __voltos_if_index_t 		if_index_t;

enum if_router_type {
	IF_ROUTER_TYPE_T_ACTIVE		= 1,
	IF_ROUTER_TYPE_T_PASSIVE	= 2,
	__IF_ROUTER_TYPE_T_MAX__
};

struct interface {
	if_index_t 			if_index;
};

#endif /* _ROUTER_IF_H */
