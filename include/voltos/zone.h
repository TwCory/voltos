#ifndef VOLTOS_ZONE_H
#define VOLTOS_ZONE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/zone.h>

struct zone {
	__voltos_zone_idx_t 	index;
	char 			name[ZONE_NAME_SIZE];

	refcount_t 		ref_count;
};

#endif /* VOLTOS_ZONE_H */
