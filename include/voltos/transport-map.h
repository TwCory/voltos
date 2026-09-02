// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/transport-map.h
 *
 */

#ifndef _VOLTOS_TRANSPORT_MAP_H
#define _VOLTOS_TRANSPORT_MAP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/transport-map.h>

struct transport_map {
	const char name[TRANSPORT_MAP_NAME_SIZE];
	refcount_t refcount;
};

#endif /* _VOLTOS_TRANSPORT_MAP_H */
