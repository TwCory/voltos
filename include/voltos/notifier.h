// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/notifier.h
 *
 */

#ifndef _VOLTOS_NOTIFIER_H
#define _VOLTOS_NOTIFIER_H

#include <voltos/errno.h>
#include <voltos/mutex.h>
#include <voltos/rwsemaphore.h>
#include <voltos/srcu.h>

struct notifier_block;

typedef int (*notifier_fn_t)(struct notifier_block *nb, unsigned long action, void *data);

#endif /* _VOLTOS_NOTIFIER_H */
