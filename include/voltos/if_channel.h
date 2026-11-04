// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/if_channel.h
 *
 */

#ifndef _VOLTOS_IF_CHANNEL_H
#define _VOLTOS_IF_CHANNEL_H

#include <voltos/if.h>
#include <nbapi/voltos/if_channel.h>

struct port_channel_interface {
	struct interface *ifp;
};

struct prp_channel_interface {
	struct interface *ifp;
};

#endif /* _VOLTOS_IF_CHANNEL_H */
