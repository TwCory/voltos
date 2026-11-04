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

#ifndef callback_set
#define callback_set(head, result, lock, function, state)
#endif /* callback_set */

#ifndef call_callback_set
#define call_callback_set(set, ...)
#endif /* call_callback_set */

#ifndef callback_is_set
#define callback_is_set(set, lock, function)
#endif /* callback_is_set */

#endif /* _VOLTOS_CALLBACK_H */
