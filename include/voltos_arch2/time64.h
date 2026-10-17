// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/time64.h
 *
 */

#ifndef _VOLTOS_TIME64_H
#define _VOLTOS_TIME64_H

#include <voltos/types.h>

#define MSEC_PER_SEC				1000L
#define USEC_PER_MSEC				1000L
#define NSEC_PER_USEC				1000L
#define NSEC_PER_MSEC				1000000L
#define USEC_PER_SEC				1000000L
#define NSEC_PER_SEC				1000000000L
#define PSEC_PER_SEC				1000000000000LL
#define FSEC_PER_SEC				1000000000000000LL

typedef s64 					time64_t;

struct timespec64 {

};

struct itimerspec64 {

};

#endif /* _VOLTOS_TIME64_H */
