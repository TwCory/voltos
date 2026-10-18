// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/mab.h
 *
 * 	MAC Authentication Bypass (MAB)
 */

#ifndef _NBAPI_VOLTOS_MAB_H
#define _NBAPI_VOLTOS_MAB_H

enum mab_status {
	MAB_STATUS_T_UNSPEC			= 0,
	MAB_STATUS_T_DISABLED			= 1,
	MAB_STATUS_T_ENABLED			= 2,
	__MAB_STATUS_T_MAX__
};

enum mab_sm_state {
	MAB_SM_STATE_T_UNSPEC			= 0,
	MAB_SM_STATE_T_INITIALIZE		= 1,
	MAB_SM_STATE_T_ACQUIRING		= 2,
	MAB_SM_STATE_T_AUTHORIZING		= 3,
	MAB_SM_STATE_T_TERMINATE		= 4,
	__MAB_SM_STATE_T_MAX__
};

enum mab_auth_state {
	MAB_AUTH_STATE_T_UNSPEC			= 0,
	MAB_AUTH_STATE_T_SUCCESS		= 1,
	MAB_AUTH_STATE_T_FAIL			= 2,
	__MAB_AUTH_STATE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_MAB_H */
