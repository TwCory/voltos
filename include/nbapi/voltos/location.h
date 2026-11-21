// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/location.h
 *
 */

#ifndef _NBAPI_VOLTOS_LOCATION_H
#define _NBAPI_VOLTOS_LOCATION_H

enum location_type {
	LOCATION_TYPE_UNSPEC			= 0,
	LOCATION_TYPE_CIVIC			= 1,
	LOCATION_TYPE_CUSTOM			= 2,
	LOCATION_TYPE_GEO			= 3,
	__LOCATION_TYPE_MAX__
};

#define LOCATION_TYPE_MAX			(__LOCATION_TYPE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_LOCATION_H */
