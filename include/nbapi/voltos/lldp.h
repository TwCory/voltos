// SPDX-License-Identifier: BSD-3-Clause

/*
 *  include/nbapi/voltos/lldp.h
 *
 *	Link-Layer Discovery Protocol (LLDP)
 */

#ifndef _NBAPI_VOLTOS_LLDP_H
#define _NBAPI_VOLTOS_LLDP_H

#include <voltos/types.h>

enum lldp_mgmt_type {
	LLDP_MGMT_TYPE_T_NONE		= 0,
	LLDP_MGMT_TYPE_T_APPLETALK	= 1,
	LLDP_MGMT_TYPE_T_DECNET		= 2,
	LLDP_MGMT_TYPE_T_IPV4		= 3,
	LLDP_MGMT_TYPE_T_IPV6		= 4,
	LLDP_MGMT_TYPE_T_IPX		= 5,
	LLDP_MGMT_TYPE_T_NSAP		= 6,
	LLDP_MGMT_TYPE_T_VINES		= 7,
	__LLDP_MGMT_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_LLDP_H */
