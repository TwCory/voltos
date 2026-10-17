// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/zone.h
 *
 * 	Zone-Based Firewall
 */

#ifndef _VOLTOS_ZONE_H
#define _VOLTOS_ZONE_H

#include <voltos/refcount.h>
#include <nbapi/voltos/zone.h>

struct zone {
	refcount_t refcount;
};

#endif /* _VOLTOS_ZONE_H */
