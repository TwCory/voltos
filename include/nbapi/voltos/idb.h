// SPDX-License-Identifier: BSD-3-Clause

/*
 *	Interface Descriptor Blocks (IDBs)
 *
 *
 */

#ifndef _NBAPI_VOLTOS_IDB_H_
#define _NBAPI_VOLTOS_IDB_H_

typedef unsigned long 			__voltos_idb_index_t;
typedef unsigned int 			__voltos_idb_sort_t;

typedef enum {
	IDB_TYPE_T_UNSPEC		= 0,
	IDB_TYPE_T_HARDWARE		= 1,
	IDB_TYPE_T_SOFTWARE		= 2,
	__IDB_TYPE_T_MAX__
} idb_type_t;

typedef enum {
	IDB_SNPA_TYPE_T_ILLEGAL 	= 0,
    	IDB_SNPA_TYPE_T_IEEE48 		= 1,
    	IDB_SNPA_TYPE_T_IEEE16 		= 2,
    	IDB_SNPA_TYPE_T_XEROX 		= 3,
    	IDB_SNPA_TYPE_T_X121 		= 4,
    	IDB_SNPA_TYPE_T_CISCO_HDLC 	= 5,
    	IDB_SNPA_TYPE_T_CISCO_MLAPB 	= 6,
} idb_snpa_type_t;

#endif /* _NBAPI_VOLTOS_IDB_H_ */
