// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/iostream.h
 *
 */

#ifndef _VOLTOS_IOSTREAM_H
#define _VOLTOS_IOSTREAM_H

struct io_stream {
	struct io_stream 		*ios_next;
	unsigned char 			*ios_data;
};

#endif /* _VOLTOS_IOSTREAM_H */
