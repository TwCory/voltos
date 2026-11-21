// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/percpu_counter.h
 *
 */

#ifndef _VOLTOS_PERCPU_COUNTER_H
#define _VOLTOS_PERCPU_COUNTER_H

struct percpu_counter {
	raw_spinlock_t 		lock;
	i64 			count;
	struct list_head 	list;
	i32 __percpu 		*counters;
};

#endif /* _VOLTOS_PERCPU_COUNTER_H */
