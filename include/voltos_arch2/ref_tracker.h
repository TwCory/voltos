// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ref_tracker.h
 *
 */

#ifndef _VOLTOS_REF_TRACKER_H
#define _VOLTOS_REF_TRACKER_H

#include <voltos/list.h>
#include <voltos/refcount.h>
#include <voltos/spinlock.h>
#include <voltos/types.h>

#define __ostream_printf

struct ref_tracker;

struct ref_tracker_dir {
	spinlock_t 			rt_lock;
	unsigned int 			rt_quarantine_free;
	refcount_t 			rt_untracked;
	refcount_t 			rt_no_tracker;
	bool 				rt_dead;
	struct list_head 		rt_active_list;
	struct list_head 		rt_inactive_list;
	const char 			*rt_class;
};

#endif /* _VOLTOS_REF_TRACKER_H */
