// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bba-group.h
 *
 *	Broadband Access Aggregation (BBA)
 *	Group Definitions
 */

#ifndef _NBAPI_VOLTOS_BBA_GROUP_H
#define _NBAPI_VOLTOS_BBA_GROUP_H

#define BBA_GROUP_NAME_SIZE			32

enum bba_group_type {
	BBA_GROUP_TYPE_T_UNSPEC			= 0,
	BBA_GROUP_TYPE_T_PPPOE			= 1,
	__BBA_GROUP_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_BBA_GROUP_H */
