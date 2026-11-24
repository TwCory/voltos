// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/bsm.h
 *
 * 	Backhaul Session Manager
 */

#ifndef _NBAPI_VOLTOS_BSM_H
#define _NBAPI_VOLTOS_BSM_H

enum bsm_group_status {
	BSM_GROUP_STATUS_UNSPEC 		= 0,
	BSM_GROUP_STATUS_OUT_OF_SERVICE 	= 1,
	BSM_GROUP_STATUS_IN_SERVICE 		= 2,
	__BSM_GROUP_STATUS_MAX__
};

#define BSM_GROUP_STATUS_MAX			(__BSM_GROUP_STATUS_MAX__ - 1)

enum bsm_group_status_use {
	BSM_GROUP_STATUS_USE_UNSPEC 		= 0,
	BSM_GROUP_STATUS_USE_STANDBY 		= 1,
	BSM_GROUP_STATUS_USE_ACTIVE 		= 2,
	BSM_GROUP_STATUS_USE_NONE 		= 3,
	__BSM_GROUP_STATUS_USE_MAX__
};

#define BSM_GROUP_STATUS_USE_MAX		(__BSM_GROUP_STATUS_USE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_BSM_H */
