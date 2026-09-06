// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if_overlay.h
 *
 *	Overlay Interfaces
 */

#ifndef _VOLTOS_IF_OVERLAY_H
#define _VOLTOS_IF_OVERLAY_H

#include <voltos/idb.h>
#include <nbapi/voltos/if_overlay.h>

struct overlay_if {
	struct idb *ifp;
};

#endif /* _VOLTOS_IF_OVERLAY_H */
