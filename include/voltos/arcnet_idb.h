// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/arcnet_idb.h
 *
 */

#ifndef _VOLTOS_ARCNET_IDB_H
#define _VOLTOS_ARCNET_IDB_H

#include <voltos/idb.h>
#include <voltos/if_arcnet.h>

struct arcnet_idb {
	struct idb *idb;
};

#endif /* _VOLTOS_ARCNET_IDB_H */
