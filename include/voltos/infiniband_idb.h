// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/infiniband_idb.h
 *
 */

#ifndef _VOLTOS_INFINIBAND_IDB_H
#define _VOLTOS_INFINIBAND_IDB_H

#include <voltos/idb.h>
#include <voltos/if_infiniband.h>

struct infiniband_idb {
	struct idb *idb;
};

#endif /* _VOLTOS_INFINIBAND_IDB_H */
