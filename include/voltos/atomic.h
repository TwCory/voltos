// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/atomic.h
 *
 */

#ifndef _VOLTOS_ATOMIC_H
#define _VOLTOS_ATOMIC_H

#include <voltos/atomic/atomic-fetch.h>
#include <voltos/atomic/atomic-memory-order.h>
#include <voltos/atomic/atomic-store.h>
#include <voltos/atomic/types.h>

#define atomic32_cond_read_acquire(v, c) 				smp_cond_load_acquire(&(v)->counter, (c))
#define atomic32_cond_read_relaxed(v, c) 				smp_cond_load_relaxed(&(v)->counter, (c))

#define atomic64_cond_read_acquire(v, c) 				smp_cond_load_acquire(&(v)->counter, (c))
#define atomic64_cond_read_relaxed(v, c) 				smp_cond_load_relaxed(&(v)->counter, (c))

#ifndef __atomic_acquire_fence
#define __atomic_acquire_fence						smp_mb__after_atomic
#endif

#ifndef __atomic_release_fence
#define __atomic_release_fence						smp_mb__before_atomic
#endif

#ifndef __atomic_pre_full_fence
#define __atomic_pre_full_fence						smp_mb__before_atomic
#endif

#ifndef __atomic_post_full_fence
#define __atomic_post_full_fence					smp_mb__after_atomic
#endif

#define __atomic_op_acquire(op, args...)				\
({									\
	typeof(op##_relaxed(args)) __ret  = op##_relaxed(args);		\
	__atomic_acquire_fence();					\
	__ret;								\
})

#define __atomic_op_release(op, args...)				\
({									\
	__atomic_release_fence();					\
	op##_relaxed(args);						\
})

#define __atomic_op_fence(op, args...)					\
({									\
	typeof(op##_relaxed(args)) __ret;				\
	__atomic_pre_full_fence();					\
	__ret = op##_relaxed(args);					\
	__atomic_post_full_fence();					\
	__ret;								\
})

#endif /* _VOLTOS_ATOMIC_H */
