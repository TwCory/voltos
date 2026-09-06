// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/pfr-map.h
 *
 */

#ifndef _NBAPI_VOLTOS_PFR_MAP_H
#define _NBAPI_VOLTOS_PFR_MAP_H

#define PFR_MAP_NAME_SIZE		32

enum pfr_map_entry_type {
	PFR_MAP_ENTRY_TYPE_T_UNSPEC	= 0,
	PFR_MAP_ENTRY_TYPE_T_MATCH	= 1,
	PFR_MAP_ENTRY_TYPE_T_SET	= 2,
	__PFR_MAP_ENTRY_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_PFR_MAP_H */
