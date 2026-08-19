// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/stp.h
 *
 * 	Spanning Tree Protocol (STP)
 */

#ifndef _NBAPI_VOLTOS_STP_H
#define _NBAPI_VOLTOS_STP_H

enum stp_mode {
	STP_MODE_T_UNSPEC			= 0,
	STP_MODE_T_CST				= 1,
	STP_MODE_T_RST				= 2,
	STP_MODE_T_MST				= 3,
	__STP_MODE_T_MAX__
};

enum stp_port_state {
	STP_PORT_STATE_T_DISABLED		= 0,
	STP_PORT_STATE_T_BLOCKING		= 1,
	STP_PORT_STATE_T_LISTENING		= 2,
	STP_PORT_STATE_T_LEARNING		= 3,
	STP_PORT_STATE_T_FORWARDING		= 4,
	STP_PORT_STATE_T_BROKEN			= 5,
	STP_PORT_STATE_T_INVALID		= 6,
	__STP_PORT_STATE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_STP_H */
