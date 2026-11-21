// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/tick.h
 *
 */

#ifndef _VOLTOS_TICK_H
#define _VOLTOS_TICK_H

enum tick_broadcast_mode {
	TICK_BROADCAST_MODE_DISABLE		= 0,
	TICK_BROADCAST_MODE_ENABLE		= 1,
	TICK_BROADCAST_MODE_FORCE_ENABLE	= 2,
	__TICK_BROADCAST_MODE_MAX__
};

#define TICK_BROADCAST_MODE_MAX			(__TICK_BROADCAST_MODE_MAX__ - 1)

enum tick_broadcast_state {
	TICK_BROADCAST_STATE_EXIT		= 0,
	TICK_BROADCAST_STATE_ENTER		= 1,
	__TICK_BROADCAST_STATE_MAX__
};

#define TICK_BROADCAST_STATE_MAX		(__TICK_BROADCAST_STATE_MAX__ - 1)

#endif /* _VOLTOS_TICK_H */
