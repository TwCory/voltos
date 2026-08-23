// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/olsr_types.h
 *
 */

#ifndef _ROUTER_OLSR_TYPES_H
#define _ROUTER_OLSR_TYPES_H

typedef enum {
	OLSR_AFI_T_UNSPEC 		= 0,
	OLSR_AFI_T_IPV4_UNICAST 	= 1,
	OLSR_AFI_T_IPV6_UNICAST 	= 2,
	__OLSR_AFI_T_MAX__
} olsr_afi_t;

#endif /* _ROUTER_OLSR_TYPES_H */
