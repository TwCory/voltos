// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/olsr.h
 *
 *	Optimized Link State Routing (OLSR)
 */

#ifndef _NBAPI_VOLTOS_OLSR_H
#define _NBAPI_VOLTOS_OLSR_H

#include <voltos/types.h>

enum olsr_afi {
	OLSR_AFI_T_UNSPEC		= 0,
	OLSR_AFI_T_IPV4_UNICAST		= 1,
	OLSR_AFI_T_IPV6_UNICAST		= 2,
	__OLSR_AFI_T_MAX__
};

#endif /* _NBAPI_VOLTOS_OLSR_H */
