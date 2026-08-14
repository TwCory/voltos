// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/idb.h
 *
 * 	Interface Descriptor Block (IDB)
 */

#ifndef _VOLTOS_IDB_H
#define _VOLTOS_IDB_H

#include <voltos/idb_features.h>
#include <voltos/if.h>
#include <nbapi/voltos/idb.h>

struct idb_ops {

};

struct idb {
	__voltos_idb_index_t 			index;
	__voltos_idb_sort_index_t 		sort_index;
	idb_features_t 				features;

	struct interface 			*interface;
};

#endif /* _VOLTOS_IDB_H */
