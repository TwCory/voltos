// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/clocksource.h
 *
 */

#ifndef _VOLTOS_CLOCKSOURCE_H
#define _VOLTOS_CLOCKSOURCE_H

enum clock_mode {
	CLOCK_MODE_T_UNSPEC			= 0,
	CLOCK_MODE_T_ARCH			= 1,
	CLOCK_MODE_T_TIMENS			= 2,
	__CLOCK_MODE_T_MAX__
};

#endif /* _VOLTOS_CLOCKSOURCE_H */
