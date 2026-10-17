// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if_bdi.h
 *
 * 	Bridge Domain Member Interfaces
 */

#ifndef _VOLTOS_IF_BDI_H
#define _VOLTOS_IF_BDI_H

#include <voltos/idb.h>
#include <nbapi/voltos/if_bridge.h>

struct bdi_if {
	struct idb *ifp;
};

#endif /* _VOLTOS_IF_BDI_H */
