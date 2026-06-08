#ifndef VOLTOS_SEMAPHORE_H
#define VOLTOS_SEMAPHORE_H

#include <voltos/list.h>
#include <voltos/spinlock.h>

struct semaphore {
	raw_spinlock_t 		lock;
	unsigned int 		count;
	struct list_head 	wait_list;
};

#endif /* VOLTOS_SEMAPHORE_H */
