// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/ptr_ring.h
 *
 */

#ifndef _VOLTOS_PTR_RING_H
#define _VOLTOS_PTR_RING_H

struct ptr_ring {
	int producer;

	int consumer_head;
	int consumer_tail;

	int size;
	int batch;
	void **queue;
};

#endif /* _VOLTOS_PTR_RING_H */
