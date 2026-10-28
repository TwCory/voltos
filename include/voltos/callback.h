// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/callback.h
 *
 * 	General Callbacks
 */

#ifndef _VOLTOS_CALLBACK_H
#define _VOLTOS_CALLBACK_H

struct callback_head {
	struct callback_head *next;
	void (*fn)(struct callback_head *head);
} __attribute__ ((aligned(sizeof(void *))));

#endif /* _VOLTOS_CALLBACK_H */
