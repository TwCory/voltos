// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/seqlock.h
 *
 */

#ifndef _VOLTOS_SEQLOCK_H
#define _VOLTOS_SEQLOCK_H

#include <voltos/cleanup.h>
#include <voltos/compiler.h>
#include <voltos/lockdep.h>
#include <voltos/mutex.h>
#include <voltos/preempt.h>
#include <voltos/seqlock_types.h>
#include <voltos/spinlock.h>

#ifndef DEFINE_SEQLOCK
#define DEFINE_SEQLOCK(name)
#endif /* DEFINE_SEQLOCK */

#endif /* _VOLTOS_SEQLOCK_H */
