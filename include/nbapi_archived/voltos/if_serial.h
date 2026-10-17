// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/if_serial.h
 *
 *	Synchronous Serial Interfaces
 */

#ifndef _NBAPI_VOLTOS_IF_SERIAL_H
#define _NBAPI_VOLTOS_IF_SERIAL_H

enum serial_encapsulation_type {
	SERIAL_ENCAPSULATION_TYPE_T_NONE		= 0,
	SERIAL_ENCAPSULATION_TYPE_T_CHDLC		= 1,
	SERIAL_ENCAPSULATION_TYPE_T_FRAME_RELAY		= 2,
	SERIAL_ENCAPSULATION_TYPE_T_HDLC		= 3,
	SERIAL_ENCAPSULATION_TYPE_T_PPP			= 4,
	SERIAL_ENCAPSULATION_TYPE_T_MAX
};

#endif /* _NBAPI_VOLTOS_IF_SERIAL_H */
