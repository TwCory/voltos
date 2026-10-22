// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/table-map.h
 *
 */

#ifndef _VOLTOS_TABLE_MAP_H
#define _VOLTOS_TABLE_MAP_H

#include <voltos/refcount.h>

struct table_map {
	refcount_t ref_count;
};

#endif /* _VOLTOS_TABLE_MAP_H */
