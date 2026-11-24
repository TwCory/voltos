// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/vty.h
 *
 * 	Virtual TeleType (VTY)
 */

#ifndef _NBAPI_VOLTOS_VTY_H
#define _NBAPI_VOLTOS_VTY_H

#define VTY_ID_MIN			0
#define VTY_ID_MAX			15

enum vty_transport_mode {
	VTY_TRANSPORT_MODE_UNSPEC	= 0,
	VTY_TRANSPORT_MODE_RLOGIN	= 1,
	VTY_TRANSPORT_MODE_SSH		= 2,
	VTY_TRANSPORT_MODE_TELNET	= 3,
	__VTY_TRANSPORT_MODE_MAX__
};

#define VTY_TRANSPORT_MODE_MAX		(__VTY_TRANSPORT_MODE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_VTY_H */
