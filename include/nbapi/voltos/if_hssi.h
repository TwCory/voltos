// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_hssi.h
 *
 * 	High Speed Serial Interfaces (HSSI)
 */

#ifndef _NBAPI_VOLTOS_IF_HSSI_H
#define _NBAPI_VOLTOS_IF_HSSI_H

enum hssi_protocol {
	HSSI_PROTOCOL_UNSPEC		= 0,
	HSSI_PROTOCOL_CHDLC		= 1,
	HSSI_PROTOCOL_FRAME_RELAY	= 2,
	HSSI_PROTOCOL_HDLC		= 3,
	HSSI_PROTOCOL_PPP		= 4,
	__HSSI_PROTOCOL_MAX__
};

#define HSSI_PROTOCOL_MAX		(__HSSI_PROTOCOL_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_IF_HSSI_H */
