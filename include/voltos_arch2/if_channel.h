// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if_channel.h
 *
 *	EtherChannel Interfaces
 */

#ifndef _VOLTOS_IF_CHANNEL_H
#define _VOLTOS_IF_CHANNEL_H

#include <voltos/idb.h>
#include <nbapi/voltos/if_channel.h>

struct port_channel_if {
	struct idb *ifp;
};

struct prp_channel_if {
	struct idb *ifp;
};

#endif /* _VOLTOS_IF_CHANNEL_H */
