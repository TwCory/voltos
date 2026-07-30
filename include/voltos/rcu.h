#ifndef _VOLTOS_RCU_H
#define _VOLTOS_RCU_H

#include <voltos/callback.h>

struct rcu_head {
	struct callback_head *rcu_callback;
};

typedef void (*rcu_callback_t)(struct rcu_head *head);
typedef void (*call_rcu_fn_t)(struct rcu_head *head, rcu_callback_t fn);

#endif /* _VOLTOS_RCU_H */
