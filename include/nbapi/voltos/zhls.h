// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/zhls.h
 *
 *	Zone-Based Hierarchical Link State (ZHLS)
 */

#ifndef _NBAPI_VOLTOS_ZHLS_H
#define _NBAPI_VOLTOS_ZHLS_H

#include <voltos/types.h>

enum zhls_afi {
	ZHLS_AFI_T_UNSPEC		= 0,
	ZHLS_AFI_T_IPV4_UNICAST		= 1,
	ZHLS_AFI_T_IPV6_UNICAST		= 2,
	__ZHLS_AFI_T_MAX__
};

#endif /* _NBAPI_VOLTOS_ZHLS_H */
