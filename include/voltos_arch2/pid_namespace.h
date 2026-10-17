// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/pid_namespace.h
 *
 */

#ifndef _VOLTOS_PID_NAMESPACE_H
#define _VOLTOS_PID_NAMESPACE_H

#include <voltos/refcount.h>

struct pid_namespace {
	const char name;
	refcount_t refcount;
};

#endif /* _VOLTOS_PID_NAMESPACE_H */
