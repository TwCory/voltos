// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/eventpoll.h
 *
 */

#ifndef _NBAPI_VOLTOS_EVENTPOLL_H
#define _NBAPI_VOLTOS_EVENTPOLL_H

#define EPOLL_PACKED

struct epoll_event {
	__poll_t 		events;
	__u64 			data;
} EPOLL_PACKED;

struct epoll_params {
	__u32 			busy_poll_usecs;
	__u16 			busy_poll_budget;
	__u8 			prefer_busy_poll;

	__u8 			__pad;
};

#endif /* _NBAPI_VOLTOS_EVENTPOLL_H */
