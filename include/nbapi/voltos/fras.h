// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/fras.h
 *
 * 	IBM Frame Relay Access Support (FRAS)
 */

#ifndef _NBAPI_VOLTOS_FRAS_H
#define _NBAPI_VOLTOS_FRAS_H

enum fras_connection_type {
	FRAS_CONNECTION_TYPE_T_UNSPEC		= 0,
	FRAS_CONNECTION_TYPE_T_FRAME_RELAY	= 1,
	FRAS_CONNECTION_TYPE_T_LLC		= 2,
	__FRAS_CONNECTION_TYPE_T_MAX__
};

/*
 *	Local Link Station Role
 */
enum fras_lls_role {
	FRAS_LLS_ROLE_T_UNSPEC			= 0,
	FRAS_LLS_ROLE_T_PRIMARY			= 1,
	FRAS_LLS_ROLE_T_SECONDARY		= 2,
	__FRAS_LLS_ROLE_T_MAX__
};

/*
 *	Link Station Protocol Machine State
 */
enum fras_lspm_state {
	FRAS_LSPM_STATE_T_UNSPEC		= 0,
	FRAS_LSPM_STATE_T_Reset			= 1,
	FRAS_LSPM_STATE_T_RqOpnStnSent		= 2,
	FRAS_LSPM_STATE_T_ExchgXid		= 3,
	FRAS_LSPM_STATE_T_ConnRqSent		= 4,
	FRAS_LSPM_STATE_T_SigStnWait		= 5,
	FRAS_LSPM_STATE_T_ConnRspWait		= 6,
	FRAS_LSPM_STATE_T_ConnRspSent		= 7,
	FRAS_LSPM_STATE_T_Contacted		= 8,
	FRAS_LSPM_STATE_T_DiscWait		= 9,
	__FRAS_LSPM_STATE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_FRAS_H */
