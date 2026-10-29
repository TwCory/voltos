// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/zone.h
 *
 * 	Firewall Zone
 */

#ifndef _VOLTOS_ZONE_H
#define _VOLTOS_ZONE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/zone.h>

struct zone {
	const char 				name[ZONE_NAME_SIZE];
	refcount_t 				ref_count;
};

#endif /* _VOLTOS_ZONE_H */
