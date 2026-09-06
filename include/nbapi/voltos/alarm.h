// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/alarm.h
 *
 */

#ifndef _NBAPI_VOLTOS_ALARM_H
#define _NBAPI_VOLTOS_ALARM_H

#define ALARM_PROFILE_NAME_SIZE			32

enum alarm_profile_type {
	ALARM_PROFILE_TYPE_T_UNSPEC		= 0,
	ALARM_PROFILE_TYPE_T_CHASSIS		= 1,
	ALARM_PROFILE_TYPE_T_CARD		= 2,
	ALARM_PROFILE_TYPE_T_PORT		= 3,
	__ALARM_PROFILE_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_ALARM_H */
