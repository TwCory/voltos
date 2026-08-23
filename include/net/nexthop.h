// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/net/nexthop.h
 *
 */

#ifndef _NET_NEXTHOP_H
#define _NET_NEXTHOP_H

#include <voltos/nexthop.h>
#include <voltos/types.h>

typedef u32 nh_index_t;

struct next_hop {
	nh_index_t nh_index;
};

#endif /* _NET_NEXTHOP_H */
