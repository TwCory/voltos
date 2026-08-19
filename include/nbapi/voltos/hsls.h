// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/hsls.h
 *
 *	Hazy-Sighted Link State (HSLS) Routing
 */

#ifndef _NBAPI_VOLTOS_HSLS_H
#define _NBAPI_VOLTOS_HSLS_H

#include <voltos/types.h>

enum hsls_afi {
	HSLS_AFI_T_UNSPEC		= 0,
	HSLS_AFI_T_IPV4_UNICAST		= 1,
	HSLS_AFI_T_IPV6_UNICAST		= 2,
	__HSLS_AFI_T_MAX__
};

#endif /* _NBAPI_VOLTOS_HSLS_H */
