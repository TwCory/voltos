// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/port-map.h
 *
 */

#ifndef _VOLTOS_PORT_MAP_H
#define _VOLTOS_PORT_MAP_H

#include <voltos/refcount.h>
#include <nbapi/voltos/port-map.h>

struct port_map {
	const char name;
	refcount_t refcount;
};

#endif /* _VOLTOS_PORT_MAP_H */
