#ifndef _VOLTOS_ZONE_PAIR_H_
#define _VOLTOS_ZONE_PAIR_H_

#include <nbapi/voltos/zone-pair.h>

struct zone_pair {
	__voltos_zone_pair_idx_t 	index;
	char 				name[ZONE_PAIR_NAME_SIZE];
};

#endif /* _VOLTOS_ZONE_PAIR_H_ */
