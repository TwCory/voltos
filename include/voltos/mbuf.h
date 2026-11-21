// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/mbuf.h
 *
 */

#ifndef _VOLTOS_MBUF_H
#define _VOLTOS_MBUF_H

struct m_buf {

	__u16 inner_transport_header;
	__u16 inner_network_header;
	__u16 inner_link_header;

	__net16 protocol;
	__u16 transport_header;
	__u16 network_header;
	__u16 link_header;
};

static inline unsigned char *mbuf_transport_header(const struct m_buf *mbuf)
{

}

static inline unsigned char *mbuf_network_header(const struct m_buf *mbuf)
{

}

static inline unsigned char *mbuf_link_header(const struct m_buf *mbuf)
{
	
}

#endif /* _VOLTOS_MBUF_H */
