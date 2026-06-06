#ifndef VOLTOS_X25_HUNTGROUP_H
#define VOLTOS_X25_HUNTGROUP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/x25_huntgroup.h>

struct x25_hunt_group {
	__voltos_x25_hgrp_idx_t 	index;
	char 				name[X25_HUNT_GROUP_NAME_SIZE];
	int 				type;

	refcount_t 			ref_count;
};

#endif /* VOLTOS_X25_HUNTGROUP_H */
