// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/zone.h
 *
 *	Zone-Based Firewall
 */

#ifndef _NBAPI_VOLTOS_ZONE_H
#define _NBAPI_VOLTOS_ZONE_H

#define ZONE_NAME_SIZE				32

enum zone_type {
	ZONE_TYPE_T_UNSPEC			= 0,
	ZONE_TYPE_T_SECURITY			= 1,
	__ZONE_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_ZONE_H */
