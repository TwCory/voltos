// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/parameter-map.h
 *
 */

#ifndef _VOLTOS_PARAMETER_MAP_H
#define _VOLTOS_PARAMETER_MAP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/parameter-map.h>

struct parameter_map {
	const char 			name[PARAMETER_MAP_NAME_SIZE];
	refcount_t 			refcount;
};

#endif /* _VOLTOS_PARAMETER_MAP_H */
