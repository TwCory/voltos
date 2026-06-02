#ifndef _VOLTOS_ZONE_H_
#define _VOLTOS_ZONE_H_

#include <nbapi/voltos/zone.h>

struct zone {
	__voltos_zone_idx_t 	index;
	char 			name[ZONE_NAME_SIZE];
};

#endif /* _VOLTOS_ZONE_H_ */
