// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/queue/types.h
 *
 */

#ifndef _VOLTOS_QUEUE_TYPES_H
#define _VOLTOS_QUEUE_TYPES_H

typedef enum {
	QUEUE_TYPE_T_UNSPEC		= 0,
	QUEUE_TYPE_T_FIFO		= 1,
	QUEUE_TYPE_T_LIFO		= 2,
	QUEUE_TYPE_T_ROUND_ROBIN	= 3,
	__QUEUE_TYPE_T_MAX__
} queue_type_t;

#endif /* _VOLTOS_QUEUE_TYPES_H */
