// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/table-map.h
 *
 */

#ifndef _VOLTOS_TABLE_MAP_H
#define _VOLTOS_TABLE_MAP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/table-map.h>

struct table_map {
	const char 			name[TABLE_MAP_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _VOLTOS_TABLE_MAP_H */
