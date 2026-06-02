#ifndef _VOLTOS_RCU_H_
#define _VOLTOS_RCU_H_

#ifndef __rcu
#define __rcu
#endif /* __rcu */

struct rcu_head {
	struct rcu_head *next;
};

#endif /* _VOLTOS_RCU_H_ */
