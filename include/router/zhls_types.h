// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/zhls_types.h
 *
 */

#ifndef _ROUTER_ZHLS_TYPES_H
#define _ROUTER_ZHLS_TYPES_H

typedef enum {
	ZHLS_AFI_T_UNSPEC 		= 0,
	ZHLS_AFI_T_IPV4_UNICAST 	= 1,
	ZHLS_AFI_T_IPV6_UNICAST 	= 2,
	__ZHLS_AFI_T_MAX__
} zhls_afi_t;

#endif /* _ROUTER_ZHLS_TYPES_H */
