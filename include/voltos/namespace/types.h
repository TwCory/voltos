// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/namespace/types.h
 *
 */

#ifndef _VOLTOS_NAMESPACE_TYPES_H
#define _VOLTOS_NAMESPACE_TYPES_H

typedef unsigned int 			ns_index_t;

typedef enum {
	NS_TYPE_T_UNSPEC		= 0,
	NS_TYPE_T_IPC			= 1,
	NS_TYPE_T_NETWORK		= 2,
	NS_TYPE_T_PID			= 3,
	NS_TYPE_T_TIME			= 4,
	NS_TYPE_T_USER			= 5,
	__NS_TYPE_T_MAX__
} ns_type_t;

#endif /* _VOLTOS_NAMESPACE_TYPES_H */
