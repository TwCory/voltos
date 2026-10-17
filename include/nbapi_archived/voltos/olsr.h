// SPDX-License-Identifier: BSD-3-Clause

/*
 *	include/nbapi/voltos/olsr.h
 *
 *	Optimized Link State Routing (OLSR) Protocol
 */

#ifndef _NBAPI_VOLTOS_OLSR_H
#define _NBAPI_VOLTOS_OLSR_H

#include <voltos/types.h>

enum {
	OLSR_MSG_TYPE_T_UNSPEC		= 0,
#define OLSR_MSG_TYPE_UNSPEC		OLSR_MSG_TYPE_T_UNSPEC
	OLSR_MSG_TYPE_T_HELLO		= 1,
#define OLSR_MSG_TYPE_HELLO		OLSR_MSG_TYPE_T_HELLO
	OLSR_MSG_TYPE_T_TC		= 2,
#define OLSR_MSG_TYPE_TC		OLSR_MSG_TYPE_T_TC
	OLSR_MSG_TYPE_T_MID		= 3,
#define OLSR_MSG_TYPE_MID		OLSR_MSG_TYPE_T_MID
	OLSR_MSG_TYPE_T_HNA		= 4,
#define OLSR_MSG_TYPE_HNA		OLSR_MSG_TYPE_T_HNA
	__OLSR_MSG_TYPE_T_MAX__
};

#define OLSR_MSG_TYPE_MAX		(__OLSR_MSG_TYPE_T_MAX__ - 1)

struct olsr_pkt_hdr {

};

struct olsr_msg_hdr {

};

#endif /* _NBAPI_VOLTOS_OLSR_H */
