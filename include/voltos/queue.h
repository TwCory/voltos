// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/queue.h
 *
 */

#ifndef _VOLTOS_QUEUE_H
#define _VOLTOS_QUEUE_H

#include <voltos/queue/fifo.h>
#include <voltos/queue/lifo.h>
#include <voltos/queue/round_robin.h>
#include <voltos/queue/types.h>

typedef struct {

} queue_t;

#ifndef DEFINE_QUEUE
#define DEFINE_QUEUE(name)
#endif /* DEFINE_QUEUE */

#ifndef DECLARE_QUEUE
#define DECLARE_QUEUE(name)
#endif /* DECLARE_QUEUE */

#endif /* _VOLTOS_QUEUE_H */
