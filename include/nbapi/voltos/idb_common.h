// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/idb_common.h
 *
 * 	Interface Descriptor Block (IDB)
 */

#ifndef _NBAPI_VOLTOS_IDB_COMMON_H
#define _NBAPI_VOLTOS_IDB_COMMON_H

enum idb_state {
	IDB_STATE_T_UNSPEC		= 0,
	IDB_STATE_T_DOWN		= 1,
	IDB_STATE_T_UP			= 2,
	IDB_STATE_T_DELETE		= 3,
	__IDB_STATE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_IDB_COMMON_H */
