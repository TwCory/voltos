// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/percpu_launch.h
 *
 */

#ifndef _VOLTOS_PERCPU_LAUNCH_H
#define _VOLTOS_PERCPU_LAUNCH_H

enum percpu_node_state {
	PERCPU_NODE_STATE_UNSPEC		= 0,
	PERCPU_NODE_STATE_WAIT			= 1,
	PERCPU_NODE_STATE_RUNNING		= 2,
	__PERCPU_NODE_STATE_MAX__
};

#define PERCPU_NODE_STATE_MAX			(__PERCPU_NODE_STATE_MAX__ - 1)

#endif /* _VOLTOS_PERCPU_LAUNCH_H */
