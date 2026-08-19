// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/class-map.h
 *
 * 	Class-Map Structure Definitions
 */

#ifndef _NBAPI_VOLTOS_CLASS_MAP_H
#define _NBAPI_VOLTOS_CLASS_MAP_H

#include <voltos/types.h>

#define CLASS_MAP_NAME_SIZE			32

typedef __u32 					__class_map_key_t;

enum class_map_type {
	CLASS_MAP_TYPE_T_UNSPEC			= 0,
	CLASS_MAP_TYPE_T_CONTROL		= 1,
	CLASS_MAP_TYPE_T_INSPECT		= 2,
	CLASS_MAP_TYPE_T_NAT			= 3,
	CLASS_MAP_TYPE_T_PORT_FILTER		= 4,
	CLASS_MAP_TYPE_T_QOS			= 5,
	CLASS_MAP_TYPE_T_TRAFFIC		= 6,
	CLASS_MAP_TYPE_T_URL_FILTER		= 7,
	__CLASS_MAP_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_CLASS_MAP_H */
