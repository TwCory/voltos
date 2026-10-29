// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/iostream.h
 *
 * 	Generic I/O Streams
 */

#ifndef _VOLTOS_IOSTREAM_H
#define _VOLTOS_IOSTREAM_H

struct io_stream {
	struct io_stream 		*ios_next;
	unsigned char 			*ios_data;
};

struct io_stream_fifo {

};

#endif /* _VOLTOS_IOSTREAM_H */
