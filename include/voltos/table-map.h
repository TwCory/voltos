#ifndef VOLTOS_TABLE_MAP_H
#define VOLTOS_TABLE_MAP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/table-map.h>

struct table_map {
	__voltos_table_map_idx_t 	index;
	char 				name[TABLE_MAP_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* VOLTOS_TABLE_MAP_H */
