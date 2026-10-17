// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/rtmutex_types.h
 *
 * 	Real-Time Mutual Exclusions
 */

#ifndef _VOLTOS_RTMUTEX_TYPES_H
#define _VOLTOS_RTMUTEX_TYPES_H

#include <voltos/spinlock.h>

struct rtmutex_base {
	raw_spinlock_t lock;
};

typedef struct rtmutex {

} rtmutex_t;

#endif /* _VOLTOS_RTMUTEX_TYPES_H */
