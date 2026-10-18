// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/class-map.h
 *
 * 	Quality of Service (QoS) Class Map
 */

#ifndef _NBAPI_VOLTOS_CLASS_MAP_H
#define _NBAPI_VOLTOS_CLASS_MAP_H

#define CLASS_MAP_NAME_SIZE			32

enum class_map_type {
	CLASS_MAP_TYPE_T_UNSPEC 		= 0,
	CLASS_MAP_TYPE_T_CONTROL 		= 1,
	CLASS_MAP_TYPE_T_INSPECT 		= 2,
	CLASS_MAP_TYPE_T_MULTICAST_FLOW		= 3,
	CLASS_MAP_TYPE_T_NAT 			= 4,
	CLASS_MAP_TYPE_T_PORT_FILTER 		= 5,
	CLASS_MAP_TYPE_T_STACK 			= 6,
	CLASS_MAP_TYPE_T_TRAFFIC 		= 7,
	CLASS_MAP_TYPE_T_URL_FILTER 		= 8,
	CLASS_MAP_TYPE_T_WAAS			= 9,
	__CLASS_MAP_TYPE_T_MAX__
};

enum class_map_match_type {
	CLASS_MAP_MATCH_TYPE_T_UNSPEC		= 0,
	CLASS_MAP_MATCH_TYPE_T_ANY		= 1,
	CLASS_MAP_MATCH_TYPE_T_ALL		= 2,
	__CLASS_MAP_MATCH_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_CLASS_MAP_H */
