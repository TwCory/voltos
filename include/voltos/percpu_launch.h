// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/percpu_launch.h
 *
 */

#ifndef _VOLTOS_PERCPU_LAUNCH_H
#define _VOLTOS_PERCPU_LAUNCH_H

enum percpu_node_state {
	PERCPU_NODE_STATE_T_UNSPEC		= 0,
	PERCPU_NODE_STATE_T_WAIT		= 1,
	PERCPU_NODE_STATE_T_RUNNING		= 2,
	__PERCPU_NODE_STATE_T_MAX__
};

#endif /* _VOLTOS_PERCPU_LAUNCH_H */
