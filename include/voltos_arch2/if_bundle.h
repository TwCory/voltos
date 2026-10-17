// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if_bundle.h
 *
 * 	Bundle Interfaces
 */

#ifndef _VOLTOS_IF_BUNDLE_H
#define _VOLTOS_IF_BUNDLE_H

#include <voltos/idb.h>
#include <nbapi/voltos/if_bundle.h>

struct bundle_if {
	struct idb *ifp;
};

#endif /* _VOLTOS_IF_BUNDLE_H */
