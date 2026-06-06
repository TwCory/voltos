#ifndef VOLTOS_PTR_RING_H
#define VOLTOS_PTR_RING_H

#include <voltos/spinlock.h>

struct ptr_ring {
	int 		producer;
	spinlock_t 	producer_lock;

	int 		consumer_head;
	int 		consumer_tail;
	spinlock_t 	consumer_lock;

	int 		size;
	int 		batch;
	void 		**queue;
};

#endif /* VOLTOS_PTR_RING_H */
