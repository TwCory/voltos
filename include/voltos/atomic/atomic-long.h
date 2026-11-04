// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/atomic/atomic-long.h
 *
 */

#ifndef _VOLTOS_ATOMIC_ATOMIC_LONG_H
#define _VOLTOS_ATOMIC_ATOMIC_LONG_H

#include <voltos/atomic/types.h>

typedef _Atomic long			atomic_long_t;

#define ATOMIC_LONG_INIT(i)		{ (i) }

typedef _Atomic unsigned long		atomic_ulong_t;

#define ATOMIC_ULONG_INIT(i)		{ (i) }

typedef _Atomic long long		atomic_llong_t;

#define ATOMIC_LLONG_INIT(i)		{ (i) }

typedef _Atomic unsigned long long	atomic_ullong_t;

#define ATOMIC_ULLONG_INIT(i)		{ (i) }

#endif /* _VOLTOS_ATOMIC_ATOMIC_LONG_H */
