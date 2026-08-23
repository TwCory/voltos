// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/router/dsr_types.h
 *
 */

#ifndef _ROUTER_DSR_TYPES_H
#define _ROUTER_DSR_TYPES_H

typedef enum {
	DSR_AFI_T_UNSPEC 		= 0,
	DSR_AFI_T_IPV4_UNICAST 		= 1,
	DSR_AFI_T_IPV6_UNICAST 		= 2,
	__DSR_AFI_T_MAX__
} dsr_afi_t;

#endif /* _ROUTER_DSR_TYPES_H */
