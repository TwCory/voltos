// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/dialer.h
 *
 */

#ifndef _NBAPI_VOLTOS_DIALER_H
#define _NBAPI_VOLTOS_DIALER_H

#define DIALER_WATCH_LIST_ID_MIN			1
#define DIALER_WATCH_LIST_ID_MAX			255

#define DIALER_POOL_ID_MIN				1
#define DIALER_POOL_ID_MAX				255

#define DIALER_IDLE_TIMER_DEFAULT			120
#define DIALER_FAST_IDLE_TIMER_DEFAULT			20
#define DIALER_WAIT_FOR_CARRIER_TIME_DEFAULT		30
#define DIALER_RE_ENABLE_TIME_DEFAULT			15

typedef unsigned char 					__dialer_watch_list_id_t;
typedef unsigned char 					__dialer_pool_id_t;

enum dialer_type {
	DIALER_TYPE_T_UNSPEC				= 0,
	DIALER_TYPE_T_ISDN				= 1,
	DIALER_TYPE_T_IN_BAND				= 2,
	DIALER_TYPE_T_DTR_SYNC				= 3,
	__DIALER_TYPE_T_MAX__
};

enum dialer_call_status {
	DIALER_CALL_STATUS_T_UNSPEC			= 0,
	DIALER_CALL_STATUS_T_SUCCESS			= 1,
	DIALER_CALL_STATUS_T_FAILURE			= 2,
	__DIALER_CALL_STATUS_T_MAX__
};

#endif /* _NBAPI_VOLTOS_DIALER_H */
