// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/ripng.h
 *
 */

#ifndef _NBAPI_VOLTOS_RIPNG_H
#define _NBAPI_VOLTOS_RIPNG_H

#include <voltos/in6.h>
#include <voltos/types.h>

#define RIPNG_VERSION		1
#define RIPNG_PORT		521

struct rip6_rte {
	struct in6_addr 	prefix;
	__u16 			route_tag;
	__u8 			prefix_length;
	__u8 			metric;
};

struct rip6_msg {
	__u8 			command;
	__u8 			version;
	__net16 		pad;
	struct rip6_rte 	rte[1];
};

#endif /* _NBAPI_VOLTOS_RIPNG_H */
