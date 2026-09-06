// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if_cdma.h
 *
 *	CDMA-1x Virtual Interfaces
 */

#ifndef _VOLTOS_IF_CDMA_H
#define _VOLTOS_IF_CDMA_H

#include <voltos/idb.h>
#include <nbapi/voltos/if_cdma.h>

struct cdma1x_if {
	struct idb *ifp;
};

#endif /* _VOLTOS_IF_CDMA_H */
