// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/idb_common.h
 *
 * 	Interface Descriptor Block (IDB)
 */

#ifndef _NBAPI_VOLTOS_IDB_COMMON_H
#define _NBAPI_VOLTOS_IDB_COMMON_H

enum idb_state {
	IDB_STATE_UNSPEC		= 0,
	IDB_STATE_DOWN			= 1,
	IDB_STATE_UP			= 2,
	IDB_STATE_DELETE		= 3,
	__IDB_STATE_MAX__
};

#define IDB_STATE_MAX			(__IDB_STATE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_IDB_COMMON_H */
