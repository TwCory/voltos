#ifndef _VOLTOS_SEMAPHORE_H_
#define _VOLTOS_SEMAPHORE_H_

#include <voltos/list.h>
#include <voltos/spinlock.h>

struct semaphore {
	raw_spinlock_t		lock;
	unsigned int		count;
	struct list_head	wait_list;
};

#endif /* _VOLTOS_SEMAPHORE_H_ */
