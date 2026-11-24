// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bba-group.h
 *
 * 	Broadband Access Aggregation (BBA) Group
 */

#ifndef _NBAPI_VOLTOS_BBA_GROUP_H
#define _NBAPI_VOLTOS_BBA_GROUP_H

#define BBA_GROUP_NAME_SIZE			(32)

enum bba_group_type {
	BBA_GROUP_TYPE_UNSPEC			= 0,
	BBA_GROUP_TYPE_PPPOE			= 1,
	__BBA_GROUP_TYPE_MAX__
};

#define BBA_GROUP_TYPE_MAX			(__BBA_GROUP_TYPE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_BBA_GROUP_H */
