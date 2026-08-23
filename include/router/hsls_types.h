// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/hsls_types.h
 *
 */

#ifndef _ROUTER_HSLS_TYPES_H
#define _ROUTER_HSLS_TYPES_H

typedef enum {
	HSLS_AFI_T_UNSPEC 		= 0,
	HSLS_AFI_T_IPV4_UNICAST 	= 1,
	HSLS_AFI_T_IPV6_UNICAST 	= 2,
	__HSLS_AFI_T_MAX__
} hsls_afi_t;

#endif /* _ROUTER_HSLS_TYPES_H */
