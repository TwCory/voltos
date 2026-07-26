// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/cwmp.h
 *
 *	Customer Premises Equipment (CPE)
 *	WAN Management Protocol (CWMP) for
 *	TR-069 Framework Definitions
 */

#ifndef _NBAPI_VOLTOS_CWMP_H
#define _NBAPI_VOLTOS_CWMP_H

#include <voltos/types.h>

enum cwmp_connection_type {
	CWMP_CONNECTION_TYPE_T_UNSPEC		= 0,
	CWMP_CONNECTION_TYPE_T_CIP		= 1,
	CWMP_CONNECTION_TYPE_T_EOA		= 2,
	CWMP_CONNECTION_TYPE_T_IPOA		= 3,
	CWMP_CONNECTION_TYPE_T_IPOE		= 4,
	CWMP_CONNECTION_TYPE_T_PPPOA		= 5,
	CWMP_CONNECTION_TYPE_T_PPPOE		= 6,
	__CWMP_CONNECTION_TYPE_T_MAX__
};

#endif /* _NBAPI_VOLTOS_CWMP_H */
