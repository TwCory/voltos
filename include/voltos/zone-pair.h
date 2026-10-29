// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/zone-pair.h
 *
 * 	Firewall Pair of Zones
 */

#ifndef _VOLTOS_ZONE_PAIR_H
#define _VOLTOS_ZONE_PAIR_H

#include <voltos/refcount.h>
#include <nbapi/voltos/zone-pair.h>

struct zone_pair {
	const char 				name[ZONE_PAIR_NAME_SIZE];
	refcount_t 				ref_count;
};

#endif /* _VOLTOS_ZONE_PAIR_H */
