// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/class-map.h
 *
 */

#ifndef _VOLTOS_CLASS_MAP_H
#define _VOLTOS_CLASS_MAP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/class-map.h>

struct class_map {
	const char 		name[CLASS_MAP_NAME_SIZE];
	refcount_t 		ref_count;
};

#endif /* _VOLTOS_CLASS_MAP_H */
