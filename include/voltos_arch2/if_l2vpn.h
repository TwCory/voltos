// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if_l2vpn.h
 *
 *	L2VPN/Pseudowire Interfaces
 */

#ifndef _VOLTOS_IF_L2VPN_H
#define _VOLTOS_IF_L2VPN_H

#include <voltos/idb.h>
#include <nbapi/voltos/if_l2vpn.h>

struct pseudowire_if {
	struct idb *ifp;
};

#endif /* _VOLTOS_IF_L2VPN_H */
