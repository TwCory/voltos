// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/voltos/icmp.h
 *
 */

#ifndef _VOLTOS_ICMP_H
#define _VOLTOS_ICMP_H

#include <voltos/mbuf.h>
#include <nbapi/voltos/icmp.h>

static inline struct icmp_hdr *icmp_header(const struct m_buf *mb)
{
    return (struct icmp_hdr *)mb_transport_header(mb);
}

#endif /* _VOLTOS_ICMP_H */
