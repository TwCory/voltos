// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/voltos/x25_huntgroup.h
 *
 */

#ifndef _VOLTOS_X25_HUNTGROUP_H
#define _VOLTOS_X25_HUNTGROUP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/x25_huntgroup.h>

struct x25_hunt_group {
	const char 			name[X25_HUNT_GROUP_NAME_SIZE];

	refcount_t refcount;
};

#endif /* _VOLTOS_X25_HUNTGROUP_H */
