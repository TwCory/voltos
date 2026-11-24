// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/alps.h
 *
 * 	Airline Product Set (ALPS)
 */

#ifndef _NBAPI_VOLTOS_ALPS_H
#define _NBAPI_VOLTOS_ALPS_H

#define ALPS_ASCU_NAME_SIZE			(32)
#define ALPS_CIRCUIT_NAME_SIZE			(32)

enum alps_peer_type {
	ALPS_PEER_TYPE_UNSPEC			= 0,
	ALPS_PEER_TYPE_PRIMARY			= 1,
	ALPS_PEER_TYPE_BACKUP			= 2,
	ALPS_PEER_TYPE_REMOTE			= 3,
	__ALPS_PEER_TYPE_MAX__
};

#define ALPS_PEER_TYPE_MAX			(__ALPS_PEER_TYPE_MAX__ - 1)

enum alps_dlc_type {
	ALPS_DLC_TYPE_UNSPEC			= 0,
	ALPS_DLC_TYPE_ALC			= 1,
	ALPS_DLC_TYPE_UTS			= 2,
	__ALPS_DLC_TYPE_MAX__
};

#define ALPS_DLC_TYPE_MAX			(__ALPS_DLC_TYPE_MAX__ - 1)

enum alps_ascu_state {
	ALPS_ASCU_STATE_UNSPEC			= 0,
	ALPS_ASCU_STATE_UP			= 1,
	ALPS_ASCU_STATE_DOWN			= 2,
	ALPS_ASCU_STATE_DISABLED		= 3,
	__ALPS_ASCU_STATE_MAX__
};

#define ALPS_ASCU_STATE_MAX			(__ALPS_ASCU_STATE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_ALPS_H */
