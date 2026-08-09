// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/vty.h
 *
 *
 */

#ifndef _NBAPI_VOLTOS_VTY_H
#define _NBAPI_VOLTOS_VTY_H

#define VTY_ID_MIN				0
#define VTY_ID_MAX				15

enum vty_transport_type {
	VTY_TRANSPORT_TYPE_T_NONE		= 0,
	VTY_TRANSPORT_TYPE_T_RLOGIN		= 1,
	VTY_TRANSPORT_TYPE_T_TELNET		= 2,
	VTY_TRANSPORT_TYPE_T_SSH		= 3,
	__VTY_TRANSPORT_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_VTY_H */
