// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/map-class.h
 *
 */

#ifndef _VOLTOS_MAP_CLASS_H
#define _VOLTOS_MAP_CLASS_H

#include <voltos/refcount.h>
#include <nbapi/voltos/map-class.h>

struct map_class {
	const char 			name[MAP_CLASS_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _VOLTOS_MAP_CLASS_H */
