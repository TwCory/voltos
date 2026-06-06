#ifndef VOLTOS_ZONE_PAIR_H
#define VOLTOS_ZONE_PAIR_H

#include <voltos/refcount.h>
#include <nbapi/voltos/zone-pair.h>

struct zone_pair {
	__voltos_zone_pair_idx_t 	index;
	char 				name[ZONE_PAIR_NAME_SIZE];

	refcount_t 			ref_count;
};

#endif /* VOLTOS_ZONE_PAIR_H */
