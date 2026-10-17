// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/keepalive.h
 *
 */

#ifndef _VOLTOS_KEEPALIVE_H
#define _VOLTOS_KEEPALIVE_H

typedef enum {
	KEEPALIVE_STATE_T_UNSPEC	= 0,
	KEEPALIVE_STATE_T_ALIVE		= 1,
	KEEPALIVE_STATE_T_MISSING	= 2,
	KEEPALIVE_STATE_T_DEAD		= 3,
	KEEPALIVE_STATE_T_GONE		= 4,
	KEEPALIVE_STATE_T_DOZING	= 5,
	KEEPALIVE_STATE_T_SLEEP		= 6,
	__KEEPALIVE_STATE_T_MAX__
} keepalive_state_t;

typedef void (*keepalive_error_fn_t)(void *data, const int cpu_id);

typedef void (*keepalive_relay_fn_t)(void *data, const int cpu_id);

#endif /* _VOLTOS_KEEPALIVE_H */
