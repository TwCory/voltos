// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/ip_nat.h
 *
 */

#ifndef _NBAPI_VOLTOS_IP_NAT_H
#define _NBAPI_VOLTOS_IP_NAT_H

#define NAT44_POOL_NAME_SIZE				(32)

enum nat44_mode {
	NAT44_MODE_T_UNSPEC				= 0,
	NAT44_MODE_T_INSIDE				= 1,
	NAT44_MODE_T_OUTSIDE				= 2,
	__NAT44_MODE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_IP_NAT_H */
