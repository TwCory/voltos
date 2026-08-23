// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/ripng.h
 *
 * 	Routing Information Protocol Next Generation (RIPng)
 */

#ifndef _ROUTER_RIPNG_H
#define _ROUTER_RIPNG_H

struct ripng_protocol;

struct ripng_interface {
	struct ripng_protocol 		*ripng;

};

struct ripng_neighbour {
	struct ripng_protocol 		*ripng;

};

struct ripng_offset_list {
	struct ripng_protocol 		*ripng;
};

struct ripng_protocol {

};

struct ripng_route {
	struct ripng_protocol 		*ripng;

};

struct ripng_router {
	struct ripng_protocol 		*ripng;

};

#endif /* _ROUTER_RIPNG_H */
