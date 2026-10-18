// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/clock.h
 *
 * 	Clock Device
 */

#ifndef _NBAPI_VOLTOS_CLOCK_H
#define _NBAPI_VOLTOS_CLOCK_H

enum clock_source_type {
	CLOCK_SOURCE_TYPE_T_UNSPEC		= 0,
	CLOCK_SOURCE_TYPE_T_MANUAL		= 1,
	CLOCK_SOURCE_TYPE_T_HARDWARE		= 2,
	CLOCK_SOURCE_TYPE_T_NTP			= 3,
	CLOCK_SOURCE_TYPE_T_PTP			= 4,
	CLOCK_SOURCE_TYPE_T_VINES		= 5,
	CLOCK_SOURCE_TYPE_T_TIME		= 6,
	__CLOCK_SOURCE_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_CLOCK_H */
