// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/isis_types.h
 *
 */

#ifndef _ROUTER_ISIS_TYPES_H
#define _ROUTER_ISIS_TYPES_H

typedef enum {
	ISIS_AFI_T_UNSPEC 		= 0,
	ISIS_AFI_T_IPV4_UNICAST 	= 1,
	ISIS_AFI_T_IPV6_UNICAST 	= 2,
	__ISIS_AFI_T_MAX__
} isis_afi_t;

#endif /* _ROUTER_ISIS_TYPES_H */
