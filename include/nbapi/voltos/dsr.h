// SPDX-License-Identifier: BSD-3-Clause

/*
 *  include/nbapi/voltos/dsr.h
 *
 *	Dynamic Source Routing (DSR)
 */

#ifndef _NBAPI_VOLTOS_DSR_H
#define _NBAPI_VOLTOS_DSR_H

#include <voltos/types.h>

#define DSR_PROTOCOL			48

enum dsr_afi {
	DSR_AFI_T_UNSPEC		= 0,
	DSR_AFI_T_IPV4_UNICAST		= 1,
	DSR_AFI_T_IPV6_UNICAST		= 2,
	__DSR_AFI_T_MAX__
};

#endif /* _NBAPI_VOLTOS_DSR_H */
