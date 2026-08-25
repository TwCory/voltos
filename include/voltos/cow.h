// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/cow.h
 *
 * 	Copy-on-Write (COW) Resource Management
 */

#ifndef _VOLTOS_COW_H
#define _VOLTOS_COW_H

#include <voltos/callback.h>

#ifndef __cow
#define __cow
#endif /* __cow */

struct cow_head {
	struct callback_head 	*cow_callback;
};

typedef void (*cow_callback_t)(struct cow_head *head);
typedef void (*call_cow_fn_t)(struct cow_head *head, cow_callback_t fn);

#endif /* _VOLTOS_COW_H */
