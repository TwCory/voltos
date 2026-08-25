// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/circ_buf.h
 *
 * 	Circular Buffer
 */

#ifndef _VOLTOS_CIRC_BUF_H
#define _VOLTOS_CIRC_BUF_H

struct circ_buf {
	char *buf;
	int head;
	int tail;
};

#define CIRC_COUNT(head, tail, size)				\
	(((head) - (tail)) & ((size) - 1))

#define CIRC_SPACE(head, tail, size)				\
	CIRC_COUNT((tail), ((head) + 1), (size))

#define CIRC_COUNT_TO_END(head, tail, size)			\
	({							\
		int end = (size) - (tail);			\
		int n = ((head) + end) & ((size) - 1);		\
		n < end ? n : end;				\
	})

#define CIRC_SPACE_TO_END(head, tail, size)			\
	({							\
		int end = (size) - 1 - (head);			\
		int n = (end + (tail)) & ((size) - 1);		\
		n <= end ? n : end + 1;				\
	})

#endif /* _VOLTOS_CIRC_BUF_H */
