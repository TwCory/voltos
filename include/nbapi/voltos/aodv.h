// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/aodv.h
 *
 *	Ad Hoc On-Demand Distance Vector (AODV)
 */

#ifndef _NBAPI_VOLTOS_AODV_H
#define _NBAPI_VOLTOS_AODV_H

#include <voltos/types.h>

enum {
	AODV_MSG_TYPE_T_UNSPEC		= 0,
#define AODV_MSG_TYPE_UNSPEC		AODV_MSG_TYPE_T_UNSPEC
	AODV_MSG_TYPE_T_RREQ		= 1,
#define AODV_MSG_TYPE_RREQ		AODV_MSG_TYPE_T_RREQ
	AODV_MSG_TYPE_T_RERR		= 2,
#define AODV_MSG_TYPE_RERR		AODV_MSG_TYPE_T_RERR
	AODV_MSG_TYPE_T_RREP_ACK	= 3,
#define AODV_MSG_TYPE_RREP_ACK		AODV_MSG_TYPE_T_RREP_ACK
	__AODV_MSG_TYPE_T_MAX__
};

#define AODV_MSG_TYPE_MAX		(__AODV_MSG_TYPE_T_MAX__ - 1)

#endif /* _NBAPI_VOLTOS_AODV_H */
