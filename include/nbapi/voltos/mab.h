// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/mab.h
 *
 * 	MAC Authentication Bypass (MAB)
 */

#ifndef _NBAPI_VOLTOS_MAB_H
#define _NBAPI_VOLTOS_MAB_H

enum mab_status {
	MAB_STATUS_UNSPEC			= 0,
	MAB_STATUS_DISABLED			= 1,
	MAB_STATUS_ENABLED			= 2,
	__MAB_STATUS_MAX__
};

#define MAB_STATUS_MAX				(__MAB_STATUS_MAX__ - 1)

enum mab_sm_state {
	MAB_SM_STATE_UNSPEC			= 0,
	MAB_SM_STATE_INITIALIZE			= 1,
	MAB_SM_STATE_ACQUIRING			= 2,
	MAB_SM_STATE_AUTHORIZING		= 3,
	MAB_SM_STATE_TERMINATE			= 4,
	__MAB_SM_STATE_MAX__
};

#define MAB_SM_STATE_MAX			(__MAB_SM_STATE_MAX__ - 1)

enum mab_auth_state {
	MAB_AUTH_STATE_UNSPEC			= 0,
	MAB_AUTH_STATE_SUCCESS			= 1,
	MAB_AUTH_STATE_FAIL			= 2,
	__MAB_AUTH_STATE_MAX__
};

#define MAB_AUTH_STATE_MAX			(__MAB_AUTH_STATE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_MAB_H */
