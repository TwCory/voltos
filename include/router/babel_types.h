// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/babel_types.h
 *
 */

#ifndef _ROUTER_BABEL_TYPES_H
#define _ROUTER_BABEL_TYPES_H

#include <voltos/inet.h>
#include <voltos/types.h>

typedef ip_addr_t 			babel_addr_t;
typedef ip_prefix_t 			babel_prefix_t;
typedef u16 				babel_cost_t;

#define BABEL_ROUTER_ID_SIZE		8

typedef struct {
	unsigned char			router_id[BABEL_ROUTER_ID_SIZE];
} babel_router_id_t;

typedef enum {
	BABEL_AFI_T_UNSPEC 		= 0,
	BABEL_AFI_T_IPV4_UNICAST 	= 1,
	BABEL_AFI_T_IPV6_UNICAST 	= 2,
	__BABEL_AFI_T_MAX__
} babel_afi_t;

#endif /* _ROUTER_BABEL_TYPES_H */
