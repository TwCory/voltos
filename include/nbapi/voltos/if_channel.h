// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_channel.h
 *
 *	Ethernet Multi-Interface Channels (a.k.a. EtherChannel)
 */

#ifndef _NBAPI_VOLTOS_IF_CHANNEL_H
#define _NBAPI_VOLTOS_IF_CHANNEL_H

#define PORT_CHANNEL_ID_MIN			1
#define PORT_CHANNEL_ID_MAX			128

#define PRP_CHANNEL_ID_MIN			1
#define PRP_CHANNEL_ID_MAX			32

enum port_channel_mode {
	PORT_CHANNEL_MODE_UNSPEC		= 0,
	PORT_CHANNEL_MODE_L2			= 1,
	PORT_CHANNEL_MODE_L3			= 2,
	__PORT_CHANNEL_MODE_MAX__
};

#define PORT_CHANNEL_MODE_MAX			(__PORT_CHANNEL_MODE_MAX__ - 1)

enum port_channel_protocol {
	PORT_CHANNEL_PROTOCOL_UNSPEC		= 0,
	PORT_CHANNEL_PROTOCOL_LACP		= 1,
	PORT_CHANNEL_PROTOCOL_PAGP		= 2,
	PORT_CHANNEL_PROTOCOL_PRP		= 3,
	PORT_CHANNEL_PROTOCOL_STATIC		= 4,
	__PORT_CHANNEL_PROTOCOL_MAX__
};

#define PORT_CHANNEL_PROTOCOL_MAX		(__PORT_CHANNEL_PROTOCOL_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_IF_CHANNEL_H */
