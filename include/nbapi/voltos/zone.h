// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/zone.h
 *
 * 	Firewall Zone
 */

#ifndef _NBAPI_VOLTOS_ZONE_H
#define _NBAPI_VOLTOS_ZONE_H

#define ZONE_NAME_SIZE			(32)

enum zone_type {
	ZONE_TYPE_UNSPEC		= 0,
	ZONE_TYPE_SECURITY		= 1,
	__ZONE_TYPE_MAX__
};

#define ZONE_TYPE_MAX			(__ZONE_TYPE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_ZONE_H */
