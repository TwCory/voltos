// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/mbuf.h
 *
 * 	Message Buffer
 */

#ifndef _VOLTOS_MBUF_H
#define _VOLTOS_MBUF_H

#include <voltos/idb.h>
#include <voltos/stddef.h>
#include <voltos/types.h>

struct m_buf;

struct m_buf_head {

	__u32 						qlen;
};

typedef struct mbuf_fragment {
	unsigned int 					length;
	unsigned int 					offset;
} mbuf_fragment_t;

struct m_buf {
	union {
		struct {
			struct m_buf 			*next;
			struct m_buf 			*prev;

			union {
				unsigned long 		if_scratch;
			};
		};
	};

	__u16 						inner_transport_header;
	__u16 						inner_network_header;
	__u16 						inner_link_header;

	__u16 						transport_header;
	__u16 						network_header;
	__u16 						link_header;

	unsigned char 					*head;
	unsigned char 					*data;
};

static inline unsigned char *mbuf_transport_header(const struct m_buf *mbuf)
{
    return mbuf->head + mbuf->transport_header;
}

static inline unsigned char *mbuf_network_header(const struct m_buf *mbuf)
{
    return mbuf->head + mbuf->network_header;
}

static inline unsigned char *mbuf_link_header(const struct m_buf *mbuf)
{
    return mbuf->head + mbuf->link_header;
}

#endif /* _VOLTOS_MBUF_H */
