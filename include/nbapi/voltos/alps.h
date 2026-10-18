// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/alps.h
 *
 * 	Airline Product Set (ALPS)
 */

#ifndef _NBAPI_VOLTOS_ALPS_H
#define _NBAPI_VOLTOS_ALPS_H

#define ALPS_ASCU_NAME_SIZE			32
#define ALPS_CIRCUIT_NAME_SIZE			32

enum alps_peer_type {
	ALPS_PEER_TYPE_T_UNSPEC			= 0,
	ALPS_PEER_TYPE_T_PRIMARY		= 1,
	ALPS_PEER_TYPE_T_BACKUP			= 2,
	ALPS_PEER_TYPE_T_REMOTE			= 3,
	__ALPS_PEER_TYPE_T_MAX__
};

enum alps_dlc_type {
	ALPS_DLC_TYPE_T_UNSPEC			= 0,
	ALPS_DLC_TYPE_T_ALC			= 1,
	ALPS_DLC_TYPE_T_UTS			= 2,
	__ALPS_DLC_TYPE_T_MAX__
};

enum alps_ascu_state {
	ALPS_ASCU_STATE_T_UNSPEC		= 0,
	ALPS_ASCU_STATE_T_UP			= 1,
	ALPS_ASCU_STATE_T_DOWN			= 2,
	ALPS_ASCU_STATE_T_DISABLED		= 3,
	__ALPS_ASCU_STATE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_ALPS_H */
