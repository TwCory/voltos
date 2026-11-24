// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/map-list.h
 *
 */

#ifndef _NBAPI_VOLTOS_MAP_LIST_H
#define _NBAPI_VOLTOS_MAP_LIST_H

#define MAP_LIST_NAME_SIZE			(32)

#define CLPS_ID_MIN				1
#define CLPS_ID_MAX				9

#define CDPS_ID_MIN				1
#define CDPS_ID_MAX				9

enum map_list_address_type {
	MAP_LIST_ADDRESS_TYPE_UNSPEC		= 0,
	MAP_LIST_ADDRESS_TYPE_E164		= 1,
	MAP_LIST_ADDRESS_TYPE_X121		= 2,
	__MAP_LIST_ADDRESS_TYPE_MAX__
};

#define MAP_LIST_ADDRESS_TYPE_MAX		(__MAP_LIST_ADDRESS_TYPE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_MAP_LIST_H */
