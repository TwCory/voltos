// SPDX-License-Identifier: BSD-3-Clause

/*
 *      include/nbapi/voltos/if_addr.h
 *
 * 	Interface Address
 */

#ifndef _NBAPI_VOLTOS_IF_ADDR_H
#define _NBAPI_VOLTOS_IF_ADDR_H

#include <voltos/types.h>

enum ifaddr_type {
	IFADDR_TYPE_T_NONE		= 0,
	IFADDR_TYPE_T_INET		= 1,
	IFADDR_TYPE_T_INET6		= 2,
	__IFADDR_TYPE_T_MAX__
};

struct ifaddr_ctx {
	enum ifaddr_type 		type;
};

#endif /* _NBAPI_VOLTOS_IF_ADDR_H */
