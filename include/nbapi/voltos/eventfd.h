// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/eventfd.h
 *
 *
 */

#ifndef _NBAPI_VOLTOS_EVENTFD_H
#define _NBAPI_VOLTOS_EVENTFD_H

enum {
	EVENTFD_T_SEMAPHORE	= (1 << 0),
#define EVENTFD_SEMAPHORE	EVENTFD_T_SEMAPHORE
	EVENTFD_T_CLOEXEC	= (1 << 1),
#define EVENTFD_CLOEXEC		EVENTFD_T_CLOEXEC
	EVENTFD_T_NONBLOCK	= (1 << 2),
#define EVENTFD_NONBLOCK	EVENTFD_T_NONBLOCK
};

#endif /* _NBAPI_VOLTOS_EVENTFD_H */