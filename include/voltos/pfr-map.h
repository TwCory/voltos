#ifndef VOLTOS_PFR_MAP_H
#define VOLTOS_PFR_MAP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/pfr-map.h>

struct pfr_map {
	__voltos_pfr_map_idx_t 		index;
	char 				name[PFR_MAP_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* VOLTOS_PFR_MAP_H */
