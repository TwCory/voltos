// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/rcu.h
 *
 * 	Read-Copy-Update (RCU) Synchronization Methods
 */

#ifndef _VOLTOS_RCU_H
#define _VOLTOS_RCU_H

#include <voltos/callback.h>
#include <voltos/types.h>

#ifndef __rcu
#define __rcu
#endif /* __rcu */

struct rcu_head {
	struct callback_head *rcu_callback;
};

typedef void (*rcu_callback_t)(struct rcu_head *head);
typedef void (*call_rcu_fn_t)(struct rcu_head *head, rcu_callback_t fn);

#endif /* _VOLTOS_RCU_H */
