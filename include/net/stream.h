// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/net/stream.h
 *
 */

#ifndef _NET_STREAM_H
#define _NET_STREAM_H

#include <voltos/mbuf.h>

struct stream {
	struct stream 			*next;
	struct stream 			*prev;

	struct m_buf 			*mb;
};

#endif /* _NET_STREAM_H */
