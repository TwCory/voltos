// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if_bvi.h
 *
 * 	Bridge-Group Virtual Interfaces
 */

#ifndef _VOLTOS_IF_BVI_H
#define _VOLTOS_IF_BVI_H

#include <voltos/idb.h>
#include <nbapi/voltos/if_bridge.h>

struct bvi_if {
	struct idb *ifp;
};

#endif /* _VOLTOS_IF_BVI_H */
