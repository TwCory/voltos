// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if_tunnel.h
 *
 * 	Tunnel Interfaces
 */

#ifndef _VOLTOS_IF_TUNNEL_H
#define _VOLTOS_IF_TUNNEL_H

#include <voltos/idb.h>
#include <nbapi/voltos/if_tunnel.h>

struct tunnel_if {
	struct idb *ifp;
};

#endif /* _VOLTOS_IF_TUNNEL_H */
