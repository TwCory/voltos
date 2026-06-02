#ifndef _VOLTOS_X25_HUNTGROUP_H_
#define _VOLTOS_X25_HUNTGROUP_H_

#include <nbapi/voltos/x25_huntgroup.h>

struct x25_hunt_group {
	__voltos_x25_hgrp_idx_t 	index;
	char 				name[X25_HUNT_GROUP_NAME_SIZE];
	int 				type;
};

#endif /* _VOLTOS_X25_HUNTGROUP_H_ */
