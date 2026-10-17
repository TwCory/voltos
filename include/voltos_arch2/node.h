// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/node.h
 *
 */

#ifndef _VOLTOS_NODE_H
#define _VOLTOS_NODE_H

#include <voltos/device.h>
#include <voltos/list.h>
#include <voltos/types.h>

enum access_coordinate_class {
	ACCESS_COORDINATE_CLASS_T_LOCAL		= 0,
	ACCESS_COORDINATE_CLASS_T_CPU		= 1,
	__ACCESS_COORDINATE_CLASS_T_MAX__
};

struct access_coordinate {
	unsigned int 				read_bandwidth;
	unsigned int 				write_bandwidth;
	unsigned int 				read_latency;
	unsigned int 				write_latency;
};

enum cache_index_type {
	CACHE_INDEX_TYPE_T_DIRECT_MAP		= 1,
	CACHE_INDEX_TYPE_T_INDEXED		= 2,
	CACHE_INDEX_TYPE_T_OTHER		= 3,
	__CACHE_INDEX_TYPE_T_MAX__
};

enum cache_write_type {
	CACHE_WRITE_TYPE_T_BACK			= 1,
	CACHE_WRITE_TYPE_T_THROUGH		= 2,
	CACHE_WRITE_TYPE_T_OTHER		= 3,
	__CACHE_WRITE_TYPE_T_MAX__
};

enum node_cache_mode {
	NODE_CACHE_MODE_T_UNSPEC		= 0,
	NODE_CACHE_MODE_T_EXTENDED_LINEAR	= 1,
	__NODE_CACHE_MODE_T_MAX__
};

struct node_cache_attrs {
	enum cache_index_type			index_type;
	enum cache_write_type			write_type;
	u64 					size;
	u16 					line_size;
	u8 					level;
	u16 					address_mode;
};

struct node {
	struct device				device;
	struct list_head			access_list;
};

struct memory_block;
extern struct node *node_devices[];

struct node_notify {
	signed int				node_id;
};

#endif /* _VOLTOS_NODE_H */
