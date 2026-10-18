// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bsm.h
 *
 * 	Backhaul Session Manager
 */

#ifndef _NBAPI_VOLTOS_BSM_H
#define _NBAPI_VOLTOS_BSM_H

enum bsm_group_status {
	BSM_GROUP_STATUS_T_UNSPEC 		= 0,
	BSM_GROUP_STATUS_T_OUT_OF_SERVICE 	= 1,
	BSM_GROUP_STATUS_T_IN_SERVICE 		= 2,
	__BSM_GROUP_STATUS_T_MAX__
};

enum bsm_group_status_use {
	BSM_GROUP_STATUS_USE_T_UNSPEC 		= 0,
	BSM_GROUP_STATUS_USE_T_STANDBY 		= 1,
	BSM_GROUP_STATUS_USE_T_ACTIVE 		= 2,
	BSM_GROUP_STATUS_USE_T_NONE 		= 3,
	__BSM_GROUP_STATUS_USE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_BSM_H */
