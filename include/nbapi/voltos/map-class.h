// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/map-class.h
 *
 */

#ifndef _NBAPI_VOLTOS_MAP_CLASS_H
#define _NBAPI_VOLTOS_MAP_CLASS_H

#define MAP_CLASS_NAME_SIZE			32

enum map_class_type {
	MAP_CLASS_TYPE_T_UNSPEC			= 0,
	MAP_CLASS_TYPE_T_ATM			= 1,
	MAP_CLASS_TYPE_T_DIALER			= 2,
	MAP_CLASS_TYPE_T_FRAME_RELAY		= 3,
	__MAP_CLASS_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_MAP_CLASS_H */
