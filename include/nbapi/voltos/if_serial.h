// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_serial.h
 *
 *	Synchronous Serial Interfaces
 */

#ifndef _NBAPI_VOLTOS_IF_SERIAL_H
#define _NBAPI_VOLTOS_IF_SERIAL_H

enum serial_mode {
	SERIAL_MODE_UNSPEC		= 0,
	SERIAL_MODE_DCE			= 1,
	SERIAL_MODE_DTE			= 2,
	__SERIAL_MODE_MAX__
};

#define SERIAL_MODE_MAX			(__SERIAL_MODE_MAX__ - 1)

enum serial_protocol {
	SERIAL_PROTOCOL_UNSPEC		= 0,
	SERIAL_PROTOCOL_CHDLC		= 1,
	SERIAL_PROTOCOL_FRAME_RELAY	= 2,
	SERIAL_PROTOCOL_HDLC		= 3,
	SERIAL_PROTOCOL_PPP		= 4,
	__SERIAL_PROTOCOL_MAX__
};

#define SERIAL_PROTOCOL_MAX		(__SERIAL_PROTOCOL_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_IF_SERIAL_H */
