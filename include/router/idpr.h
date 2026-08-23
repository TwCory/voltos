// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/idpr.h
 *
 */

#ifndef _ROUTER_IDPR_H
#define _ROUTER_IDPR_H

struct idpr_protocol;

struct idpr_interface {
	struct idpr_protocol 		*idpr;

};

struct idpr_protocol {

};

struct idpr_route {
	struct idpr_protocol 		*idpr;

};

struct idpr_router {
	struct idpr_protocol 		*idpr;

};

#endif /* _ROUTER_IDPR_H */
