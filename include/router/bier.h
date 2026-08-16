// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/bier.h
 *
 * 	Bit Index Explicit Replication (BIER)
 */

#ifndef _ROUTER_BIER_H
#define _ROUTER_BIER_H

#include <voltos/bier.h>
#include <voltos/if.h>
#include <voltos/inet.h>
#include <voltos/types.h>

struct bier_interface {
	struct interface 		*interface;
};

#endif /* _ROUTER_BIER_H */
