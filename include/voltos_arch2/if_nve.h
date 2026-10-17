// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if_nve.h
 *
 * 	Network Virtualization Endpoint (NVE) Interfaces
 */

#ifndef _VOLTOS_IF_NVE_H
#define _VOLTOS_IF_NVE_H

#include <voltos/idb.h>
#include <nbapi/voltos/if_nve.h>

struct nve_if {
	struct idb *ifp;
};

#endif /* _VOLTOS_IF_NVE_H */
