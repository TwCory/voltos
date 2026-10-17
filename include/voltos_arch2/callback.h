// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/callback.h
 *
 * 	Generic Callback Definitions
 */

#ifndef _VOLTOS_CALLBACK_H
#define _VOLTOS_CALLBACK_H

struct callback_head {
	struct callback_head *cb_next;
	void (*cb_fn)(struct callback_head *cb_head);
} __attribute__ ((aligned(sizeof(void *))));

#endif /* _VOLTOS_CALLBACK_H */
