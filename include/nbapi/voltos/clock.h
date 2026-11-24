// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/clock.h
 *
 * 	Clock Device
 */

#ifndef _NBAPI_VOLTOS_CLOCK_H
#define _NBAPI_VOLTOS_CLOCK_H

enum clock_source_type {
	CLOCK_SOURCE_TYPE_UNSPEC		= 0,
	CLOCK_SOURCE_TYPE_MANUAL		= 1,
	CLOCK_SOURCE_TYPE_HARDWARE		= 2,
	CLOCK_SOURCE_TYPE_NTP			= 3,
	CLOCK_SOURCE_TYPE_PTP			= 4,
	CLOCK_SOURCE_TYPE_VINES			= 5,
	CLOCK_SOURCE_TYPE_TIME			= 6,
	__CLOCK_SOURCE_TYPE_MAX__
};

#define CLOCK_SOURCE_TYPE_MAX			(__CLOCK_SOURCE_TYPE_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_CLOCK_H */
