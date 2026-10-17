// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if_loopback.h
 *
 * 	Loopback Interfaces
 */

#ifndef _VOLTOS_IF_LOOPBACK_H
#define _VOLTOS_IF_LOOPBACK_H

#include <voltos/idb.h>
#include <nbapi/voltos/if_loopback.h>

struct loopback_if {
	struct idb *ifp;
};

#endif /* _VOLTOS_IF_LOOPBACK_H */
