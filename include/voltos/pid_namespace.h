// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/pid_namespace.h
 *
 */

#ifndef _VOLTOS_PID_NAMESPACE_H
#define _VOLTOS_PID_NAMESPACE_H

#include <voltos/types.h>

typedef __u64 			__voltos_pid_nsid_t;

struct pid_namespace {
	__voltos_pid_nsid_t 	index;
};

#endif /* _VOLTOS_PID_NAMESPACE_H */
